class Solution(object):
    def findNumbers(self, nums):
        n=0
        for i in range(len(nums)):
            print(nums[i])
            count=0
            while nums[i]!=0:
                a=nums[i]%10
                count+=1
                nums[i]=nums[i]//10
            if(count%2==0):
                n+=1
        return n

                