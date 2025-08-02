class Solution(object):
    def defangIPaddr(self, address):
        a=""
        for i in address:
            if i==".":
                a+="[.]"
            else:
                a+=i
        return(a)
            
        