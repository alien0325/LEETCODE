class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // unordered_map<int,int> mpp;
        // for(int i = 0;i<nums.size();i++){
        //     mpp[nums[i]]++;
        // }
        // for(auto it :mpp){
        //     if(it.second> (nums.size()/2)){
        //         return it.first;
        //     }
        // }

        // Moore's Voting Algo
        int ele = 0;
        int count = 0;
        for(int i= 0;i<nums.size();i++){
            if(count ==0){
                ele = nums[i];
                count = 1;
            }
            else if( ele == nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
        // if majority not exists check for freq

        return ele;
    }
};