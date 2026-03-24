def get_num_words(i): #i in this case == fullText
    split = i.split()
    num = len(split)
    return num

def get_num_chars(fullText):
    allChars = {}
    for char in fullText:
        char = char.lower()
        if char in allChars:
            allChars[char] += 1
        else:
            allChars[char] = 1
    return allChars