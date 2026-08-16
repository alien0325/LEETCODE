class Solution {
public:
    int maximum(vector<int>& nums){
        int maxi = INT_MIN;
        for(int i = 0;i<nums.size();i++){
            maxi = max(maxi,nums[i]);
        }
        return maxi;
    }
    int ceil_sum(vector<int>&nums,int mid){
        int n = nums.size();
        int sum = 0;
        for(int i =0;i<n;i++){
            // sum += ceil((double)nums[i]/(double)mid);
            sum += (nums[i]+mid-1)/mid;
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = maximum(nums);
        int div = INT_MAX;
        while(low<=high){
            int mid =(high+low)/2;
            if(ceil_sum(nums,mid)<=threshold){
                div = min(mid,div);
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return div;
    }
};