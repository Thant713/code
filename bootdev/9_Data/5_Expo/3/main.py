def fib(n: int) -> int:
    # if n == 0:
    #     return 0
    # if n == 1:
    #     return 1
    # return fib(n - 1) + fib(n - 2)
    if n <= 1:
        return n
    grandparent = 0
    parent = 1
    current = 0
    for i in range(n - 1):
        current = parent + grandparent
        parent, grandparent = current, parent
    return current
