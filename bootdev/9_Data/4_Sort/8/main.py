def insertion_sort(nums: list[int]) -> list[int]:
    for i in range(1, len(nums)):
        j = i
        while j > 0 and nums[j - 1] > nums[j]:
            temp_element = nums[j]
            nums[j] = nums[j - 1]
            nums[j - 1] = temp_element
            j -= 1
    return nums
