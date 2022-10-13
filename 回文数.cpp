//转换为字符串，反转字符串然后判断
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        string s=to_string(x);
        return s==string(s.rbegin(),s.rend());
    }
};
//用整数反转方法
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long res=0;
        int y=x;
        while(x)
        {
            res=res*10+x%10;
            x/=10;
        }
        return res==y;
    }
};
