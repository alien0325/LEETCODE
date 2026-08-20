class Solution {
public:
    void fnc(int indx,string &s, vector<vector<string>> &ans, vector<string> &ds){
        if(indx==s.size()){
            ans.push_back(ds);
            return;
        }
        for(int i = indx;i< s.size();i++){
            if(isPalindrome(indx,s,i)){
                ds.push_back(s.substr(indx,i-indx+1));
                fnc(i+1,s,ans,ds);
                ds.pop_back();
            }
        }
    }
    bool isPalindrome(int start,string&s,int end){
        while(start<=end){
            if(s[start++]!=s[end--]){
                return false;
            }
        }
        return true;
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> ds;
        fnc(0,s,ans,ds);
        return ans;
    }
};