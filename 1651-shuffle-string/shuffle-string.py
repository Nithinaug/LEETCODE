class Solution(object):
    def restoreString(self, s, indices):
        r=[""] * len(s)
        for i in range(len(s)):
            r[indices[i]] = s[i]
        a = ""
        for j in r:
            a+=j
        return a
