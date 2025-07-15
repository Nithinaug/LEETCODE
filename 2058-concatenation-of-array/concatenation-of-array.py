class Solution(object):
    def getConcatenation(self, nums):
      ans=[]
      for i in nums:
        ans.append(i)
      for j in nums:
        ans.append(j)
      return ans
     
        