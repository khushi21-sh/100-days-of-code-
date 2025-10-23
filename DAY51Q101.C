def find_first_last(nums, target):
    n = len(nums)
    first = -1
    last = -1

    # find first occurrence
    lo, hi = 0, n - 1
    while lo <= hi:
        mid = (lo + hi) // 2
        if nums[mid] < target:
            lo = mid + 1
        else:
            if nums[mid] == target:
                first = mid
            hi = mid - 1

    # find last occurrence
    lo, hi = 0, n - 1
    while lo <= hi:
        mid = (lo + hi) // 2
        if nums[mid] > target:
            hi = mid - 1
        else:
            if nums[mid] == target:
                last = mid
            lo = mid + 1

    return first, last

# Examples
examples = [
    ([5,7,7,8,8,10], 8),
    ([5,7,7,8,8,10], 6),
    ([5,7,7,8,8,10], 10),
]

for nums, target in examples:
    f, l = find_first_last(nums, target)