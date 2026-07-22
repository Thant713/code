package main

import "strings"

type sms struct {
	id      string
	content string
	tags    []string
}

func tagMessages(messages []sms, tagger func(sms) []string) []sms {
	taggedMsgs := []sms{}
	for _, e := range messages {
		e.tags = tagger(e)
		taggedMsgs = append(taggedMsgs, e)
	}
	return taggedMsgs
}

func tagger(msg sms) []string {
	tags := []string{}
	content := strings.ToLower(msg.content)
	if strings.Contains(content, "urgent") {
		tags = append(tags, "Urgent")
	}
	if strings.Contains(content, "sale") {
		tags = append(tags, "Promo")
	}
	return tags
}
