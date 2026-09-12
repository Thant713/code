def count_marketers(job_titles: list[str]) -> int:
    total = 0
    for i in job_titles:
      if i.lower() == "marketer":
        total += 1
    return total
