class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(int i=0; i<s.length(); i++){
            if((s[i]>='a' && s[i] <= 'z')||
            (s[i]>='A' && s[i] <= 'Z')||
            (s[i]>='0' && s[i] <= '9')){
                str += tolower (s[i]);

            }
        }
        int i = 0;
        int j = str.length()-1;
        while(i<j){
            if(str[i] != str[j])
            return false;
            i++;
            j--;
        }
        return true;
        
    }
};
