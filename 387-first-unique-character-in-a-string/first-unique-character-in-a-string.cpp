class Solution {
public:
    int firstUniqChar(string s) {
       unordered_map<char,int>a;
       for(char x : s){
          a[x]++;
       }
       for(int i =0;i<s.size();i++){
        if(a[s[i]]==1)
            return i;
       } 
        return -1;
    }
};