class Solution {
public:
    int totalF(vector<int>&v,int day,int k){
        int n = v.size();
        int cnt = 0;
        int buq = 0;
        for(int i = 0;i<n;i++){
            if(v[i]<=day){
                cnt++;
            }
            else{
                buq += cnt/k;
                cnt=0;
            }
        }
        buq +=cnt/k;
        return buq;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        long long t = (long long) m*k;
        if(t>n) return -1;
        int minim = INT_MAX;
        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            minim = min(minim,bloomDay[i]);
            maxi = max(maxi,bloomDay[i]);
        } 
        int low = minim;
        int high = maxi;
        int mini = INT_MAX;
        while(low<=high){
            int mid = (high+low)/2;
            if(totalF(bloomDay,mid,k)>=m) {
                mini = min(mid,mini);
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return mini;
    }
};