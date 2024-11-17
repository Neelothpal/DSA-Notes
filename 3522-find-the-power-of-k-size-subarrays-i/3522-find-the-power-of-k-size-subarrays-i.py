class Solution:
    def resultsArray(self, nums: List[int], k: int) -> List[int]:
        n = len(nums)
        l=0
        r = k-1
        res = []
        while r < n :
            is_sorted = True
            maxi = -1
            for i in range(l,r):
                if nums[i]+1!=nums[i+1]:
                    is_sorted = False
                    break
            
            if is_sorted:
                maxi = nums[r]
            res.append(maxi)
            r+=1
            l+=1
        return res