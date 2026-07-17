package main

func maxMessages(thresh int) int {
	total := 0
	count := 0
	for i := 0; ; i++ {
		total += 100 + i
		if total > thresh {
			count = i
			break
		}
	}
	return count
}
