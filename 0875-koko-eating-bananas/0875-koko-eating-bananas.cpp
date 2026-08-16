class Solution {
public:
    int maxFind(vector<int> &v){
        int maxi = INT_MIN;
        for(int i=0;i<v.size();i++){
            maxi = max(v[i],maxi);
        }
        return maxi;
    }

    long long TotalHrs(vector<int>&v,int hourly){
        long long totalhrs = 0;
        for(int i =0;i<v.size();i++){
            // totalhrs += ceil((double)v[i]/(double)hourly);
            totalhrs += (v[i]+hourly-1)/hourly;
        }
        return totalhrs;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = maxFind(piles);
        while(low<= high){
            int mid = (high+low)/2;
            if(TotalHrs(piles,mid)<=h){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};