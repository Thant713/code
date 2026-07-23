package main

func updateCounts(messagedUsers []string, validUsers map[string]int) {
	for _, username := range messagedUsers {
		if _, exists := validUsers[username]; exists {
			validUsers[username] += 1
		}
	}
}
