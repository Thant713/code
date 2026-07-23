package main

func getNameCounts(names []string) map[rune]map[string]int {
	result := map[rune]map[string]int{}
	for _, e := range names {
		runes := []rune(e)
		firstChara := runes[0]
		if _, exists := result[firstChara]; !exists {
			result[firstChara] = map[string]int{}
		}
		result[firstChara][e]++
	}
	return result
}
