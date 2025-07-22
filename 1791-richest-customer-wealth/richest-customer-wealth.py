class Solution(object):
    def maximumWealth(self, accounts):
                max=0
                a=0
                for i in accounts:
                    a=sum(i)
                    if a>max:
                         max=a
                return max
        