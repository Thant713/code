package main

import "fmt"

func (a *analytics) handleEmailBounce(em email) error {
	err := em.recipient.updateStatus(em.status)
	if err != nil {
		return fmt.Errorf("error updating user status: %w", err)
	}
	track := a.track(em.status)
	if track != nil {
		return fmt.Errorf("error tracking user bounce: %w", track)
	}
	return nil
}
