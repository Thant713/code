from stats import get_num_words, get_num_chars

def main():
    book_path = "../books/frankenstein.txt"
    text = get_book_text(book_path)
    print(f"Found {get_num_words(text)} total words")
    
    bookChars = get_num_chars(text)
    print(f"Dictionary of characters and their counts: {bookChars}")

def get_book_text(path):
    with open(path) as f:
        return f.read()
    
main()