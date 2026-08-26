def letter_combinations(digits: str) -> list[str]:
    output = [""]
    if not digits:
        return []
    for digit in digits:
        if digit not in digit_to_letters:
            raise ValueError(f"invalid digit: {digit}")
        letters = digit_to_letters[digit]
        new_result = []
        for combo in output:
            for letter in letters:
                new_result.append(combo + letter)
        output = new_result
    return output


# Don't touch below this line

digit_to_letters = {
    "2": "abc",
    "3": "def",
    "4": "ghi",
    "5": "jkl",
    "6": "mno",
    "7": "pqrs",
    "8": "tuv",
    "9": "wxyz",
}
