from stats import get_num_words, get_num_chars, get_sorted_chars

def get_book_text(path):
    # turns a file path into txt file
    with open(path) as f:
        return f.read()

def print_report(book_path, numWords, all_char_count):
  print("============ BOOKBOT ============")
  print(f"Analyzing book found at {book_path}")
  print("----------- Word Count ----------")
  print(f"Found {numWords} total words")
  print("--------- Character Count -------")
  for dict in all_char_count:
    if not dict["char"].isalpha():
      continue
    print(f"{dict["char"]}: {dict["num"]}")
  print("============= END ===============")

def main():
  book_path = "../books/frankenstein.txt"
  text = get_book_text(book_path)
  bookChars = get_num_chars(text)
  numWords = get_num_words(text)
  all = get_sorted_chars(bookChars)
  print_report(book_path, numWords, all)
  # print(f"Dictionary of characters and their counts: {bookChars}")

main()


