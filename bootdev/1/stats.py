def get_num_words(i): #i in this case == fullText
    # returns the num of WORDS in a txt file
    split = i.split()
    num = len(split)
    return num

def get_num_chars(fullText):
    # returns a dictionary of CHARS w/ their counts in a txt file
    allChars = {}
    for char in fullText:
        char = char.lower()
        if char in allChars:
            allChars[char] += 1
        else:
            allChars[char] = 1
    return allChars

def sort_on(char_dict):
    # returns the num's value from the dictionary, used as a sort key
    return char_dict["num"]

def get_sorted_chars(char_count_dictionary):
    # returns a list of character dictionaries sorted from greatest to least count
    all_char_count = []
    for char in char_count_dictionary:
        all_char_count.append({"char": char, "num": char_count_dictionary[char]})
    all_char_count.sort(reverse=True, key=sort_on)

    return all_char_count

