
class Solution(object):

    def runningSum(self, nums):
        # type nums: List[int]
        # rtype: List[int]

        n=len(nums)

        sums=[None]*n

        sums[0]=nums[0]
        
        for i in range(1,n):
            sums[i]=nums[i]+sums[i-1]
        return sums

# driver
obj = Solution()

t1=[1,2,3,4]
t2=[1,1,1,1,1]
t3=[3,1,2,10,1]


print('Input nums = {}'.format(t1))
print('Output: {}'.format(obj.runningSum(t1)))
print()
print('Input nums = {}'.format(t2))
print('Output: {}'.format(obj.runningSum(t2)))
print()
print('Input nums = {}'.format(t3))
print('Output: {}'.format(obj.runningSum(t3)))