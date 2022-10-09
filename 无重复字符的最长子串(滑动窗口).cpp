class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0) return 0;   //预处理
        unordered_set<char> lookup;   //定义一个unordered_set<char>
        int maxStr = 0;   //定义用来保存最长子串长度
        int left = 0;    
        for(int i = 0; i < s.size(); i++){
            /*注解
            * 以abca为例，最长子串为abc时
            * 此时的s[i]是字符a，如果在其他位置发现了已经存在字符a，说明出现了重复；
            * 就把left对应的字符从set中删去，然后left右移一位（此时最长子串变为bca)
            */
            while (lookup.find(s[i]) != lookup.end()){
                lookup.erase(s[left]);
                left ++;
            }
            maxStr = max(maxStr,i-left+1);   //更新最大长度
            lookup.insert(s[i]);   //将s[i]字符放入set
    }
        return maxStr;
        
    }
};
