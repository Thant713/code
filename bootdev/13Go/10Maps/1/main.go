package main

import "errors"

func getUserMap(names []string, phoneNumbers []int) (map[string]user, error) {
	mapped := make(map[string]user)
	if len(names) != len(phoneNumbers) {
		return mapped, errors.New("invalid sizes")
	}
	for i, _ := range names {
		mapped[names[i]] = user{names[i], phoneNumbers[i]}
	}
	return mapped, nil
}

type user struct {
	name        string
	phoneNumber int
}
