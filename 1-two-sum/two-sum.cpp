class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int>mpp;
        int number;
        
        for(int i=0; i<nums.size(); i++){
            
            number= target-nums[i];

            if(mpp.find(number)!= mpp.end()){
                return{i, mpp[number]};
            }
            
            mpp[nums[i]]=i;

        }
        return {};
        
    }
};