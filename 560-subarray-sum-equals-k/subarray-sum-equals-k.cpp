class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int prefixSum=0;
        int count=0;
        map<int,int> mpp;
        
        for(int i=0; i<nums.size(); i++){
            prefixSum= prefixSum + nums[i];
            if(prefixSum == k){
                count++;
            }
            if(mpp.find(prefixSum-k)!=mpp.end()){
                count= count+mpp[prefixSum-k]; 
            }
            mpp[prefixSum]++;
        }
        return count;   
    }
};