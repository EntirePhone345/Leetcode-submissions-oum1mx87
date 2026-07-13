class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size()!=t.size()){
            return false;
        }
        vector<int> s1(s.size()); vector<int> s2(t.size());
        for(int i = 0;i<s.size();i++){
            s1[i] = s[i] - 'a';
            s2[i] = t[i] - 'a';
        }
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());

        for(int i = 0;i<s.size();i++){
            s[i] = (char)s1[i];
            t[i] = (char)s2[i];
        }
        for(int i = 0;i<s.size();i++){
            if(s[i]!=t[i]){
                return false;
            }
        }
        return true;

    }
};