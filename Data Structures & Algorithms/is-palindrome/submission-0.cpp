class Solution {
public:
    string removeNonAlphanumeric(string s) {
    string result = "";

    for (char c : s) {
        if (isalnum(c)) {
            result += tolower(c);
        }
    }

    return result;
}
    bool isPalindrome(string s) {
        s = removeNonAlphanumeric(s);
        int n = s.size()-1;
       
            for(int i = 0 ; i < s.size()/2 ; i++){
                if(s[i]!=s[n-i]){
                    return false;
                }
            }
       return true;

    }
};