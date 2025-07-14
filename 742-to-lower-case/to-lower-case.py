class Solution(object):
    def toLowerCase(self, s):
        a=""
        for i in s:
            if "A"<=i<="Z":
                a+=chr(ord(i) + 32)
            else:
                a+=i
        return a
            


        