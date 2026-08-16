class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mpp1;
        unordered_map<char,char> mpp2;

        for(int i = 0;i<s.size();i++){
            char original = s[i];
            char replacement = t[i];

            if(mpp1.find(original)==mpp1.end()&& mpp2.find(replacement)==mpp2.end()){
                mpp1[original] = replacement;
                mpp2[replacement] = original;
            }
            else{
                if(mpp1[original]!= replacement || mpp2[replacement]!= original){
                    return false;
                }
            }
        }
        return true;
    }
};