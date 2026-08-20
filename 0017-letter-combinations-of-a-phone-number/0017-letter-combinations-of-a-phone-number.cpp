class Solution {
public:
    void backtrack(string &digits, int indx, string &current,vector<string>&letters,vector<string>&ans){
        if(digits.size()==indx){
            ans.push_back(current);
            return;
        }
        string chars = letters[digits[indx]-'0'];
        for(auto it: chars){
            current.push_back(it);
            backtrack(digits,indx+1,current,letters,ans);
            current.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> letters = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        if(digits.size()==0){
            return ans;
        }
        string current;
        backtrack(digits,0,current,letters,ans);
        return ans;
    }
};