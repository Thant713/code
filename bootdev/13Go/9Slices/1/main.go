package main

func getMessageWithRetries(primary, secondary, tertiary string) ([3]string, [3]int) {
	messages := [3]string{primary, secondary, tertiary}
	cost := [3]int{len(primary)}
	for i := 1; i < 3; i++ {
		cost[i] = cost[i-1] + len(messages[i])
	}
	return messages, cost
}
