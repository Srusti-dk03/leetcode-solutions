class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       vector<int>lastIndex(256,-1);
       int maxLen=0;
       int l=0;
       for(int r=0;r<s.size();r++){
        if(lastIndex[s[r]!=-1]){
            l=max(l,lastIndex[s[r]]+1);
        }
        lastIndex[s[r]]=r;
        maxLen=max(maxLen,r-l+1);
       }
       return maxLen;
    }
};