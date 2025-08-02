class Solution(object):
    def isPalindrome(self, a):
        if a < 0:
            return False

        n = a
        Rem= 0

        while a != 0:
            Rem= Rem*10 + a%10
            a //= 10

        if Rem==n:
            return True
        else:
            return False

