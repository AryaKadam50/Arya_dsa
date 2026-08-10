class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int left= *max_element(weights.begin(), weights.end());;
        int right= accumulate(weights.begin(), weights.end(), 0);
        int mid;
        int ans=0;

        while(left<=right){
            mid= left+ (right-left)/2;

            int sum=0;
            int count=0;
            for(int i=0; i<weights.size(); i++){
                sum+=weights[i];
                if(sum>mid){
                    sum=weights[i];
                    count++;
                }
            }
            count++;

            if(count>days){
                left = mid+1;
            }
            else{
                ans = mid;
                right= mid-1;
            }
        }
        return ans;    
    }
};