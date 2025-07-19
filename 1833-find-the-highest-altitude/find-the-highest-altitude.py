class Solution(object):
    def largestAltitude(self, gain):
        a = 0
        b= [0]  
        for i in range(len(gain)):
            a += gain[i]
            b.append(a)
        return max(b)