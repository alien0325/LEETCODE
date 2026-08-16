class Solution {
public:
    string removeOuterParentheses(string s) {
        // int n = s.size();int count = 0;
        // int start = -1;
        // int end = -1;
        // string ans = "";
        // for(int i = 0;i<n;i++){
        //     if(s[i]=='(' && count ==0){
        //         count++;
        //         start = i;

        //     }
        //     else if(s[i]=='(' && count !=0){
        //         count++;

        //     }
        //     else if(s[i]==')'){
        //         count--;
        //     }
        //     if(count == 0){
        //         end = i;
        //         for (int j = start + 1; j < end; j++) {
        //             ans += s[j];
        //         }
        //     }
        // }
        // return ans;
    string ans;
    int count = 0;

    for (char c : s) {
        if (c == '(') {
            if (count > 0) ans += c;
            count++;
        } else {
            count--;
            if (count > 0) ans += c;
        }
    }

    return ans;
    }
};