class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        int low =1;
        int high= piles.back();
        int mid;
        int ans=INT_MAX;
        while(low<=high){
            mid= low+ (high-low)/2;
            int th=0;
            for(int j=0; j<piles.size(); j++){
                th= th + (piles[j] + mid - 1) / mid;
                if(th>h){
                    break;
                }
            }
            if(th>h){
                low= mid+1;
            }
            else{
                ans= min(ans, mid);
                high= mid-1;
            }
        }
        return ans;
        
    }
};