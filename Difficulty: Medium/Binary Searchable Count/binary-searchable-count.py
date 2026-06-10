class Solution:
    def binarySearchable(self, arr):
        c = 0
        n = len(arr)

        for i in range(n):
            x = arr[i]
            l = 0
            r = n - 1

            while l <= r:
                mid = (l + r) // 2

                if x == arr[mid]:
                    c += 1
                    break

                if arr[mid] > x:
                    r = mid - 1
                else:
                    l = mid + 1

        return c
