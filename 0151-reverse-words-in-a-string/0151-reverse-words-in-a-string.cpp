class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        reverse(s.begin(),s.end());
        int i = 0;
        string ans = "";
        for(int i = 0;i<n;i++){
            string word = "";
            while(s[i]!= ' ' && i<n){
                word +=s[i];
                i++;
            }
            reverse(word.begin(),word.end());
            if(word.length()>0){
                ans +=" "+ word;
            }
        }
        return ans.substr(1);
    }
};