package main

import "strings"

func countDistinctWords(messages []string) int {
	distinct := make(map[string]int)
	for _, line := range messages {
		words := strings.Fields(strings.ToLower(line))
		for _, word := range words {
			distinct[word] = 1
		}
	}
	return len(distinct)
}
