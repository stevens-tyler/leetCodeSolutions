import csv

def maxSubArray(nums):


    # O(n^2)
    # n=len(nums)
    # max = 0
    # for i in range(0,n):
    #     sum = 0
    #     for j in range(i+1,n+1):
    #         sum+=nums[j-1]
    #         if sum > max:
    #             max = sum

    # return max    
                 
    # O(n)
    n=len(nums)
    sum=nums[0]
    max=sum

    # Find Max sum subarray
    for i in range(1,n):
        
        # Negavtive Prefix
        if sum + nums[i] < nums[i]:

            # Remove
            sum=nums[i]
        else:
            # Add to some
            sum+=nums[i]

        # Track max    
        if sum > max:
            max=sum    
    return max      



              



## Driver    
t1 = [5,4,-1,7,8]
t2 = [-2,1,-3,4,-1,2,1,-5,4]
t3 = [1]

print(maxSubArray(t1))
print(maxSubArray(t2))
# print(maxSubArray(t3))



