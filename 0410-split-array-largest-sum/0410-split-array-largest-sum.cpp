class Solution {
public:
    int possible(vector<int>&nums,int sum,int k){
        int count = 1;
        int total = 0;
        for(int i=0;i<nums.size();i++){
            if(total+nums[i]>sum){
                count++;
                total = nums[i];
            }
            else{
                total+=nums[i];
            }
        }
        return count;
    }
    int splitArray(vector<int>& nums, int k) {
        int maxi = INT_MIN;
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            sum+=nums[i];
            maxi = max(maxi,nums[i]);
        }
        int low = maxi;
        int high = sum;
        if(nums.size()==k)return maxi;
        while(low<=high){
            int mid = (high+low)/2;
            if(possible(nums,mid,k)>k){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return low;
    }
};