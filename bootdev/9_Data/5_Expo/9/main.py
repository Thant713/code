def exponential_growth(n: int, factor: int, days: int) -> list[int]:
    each_day = [n]
    for i in range(days):
        each_day.append(each_day[-1] * factor)
    return each_day
