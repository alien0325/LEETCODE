class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        string dble = s+s;
        return dble.find(goal)!=-1;
    }
};