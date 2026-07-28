class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> mpp;
        int remain;

        for(int i=0; i<nums.size(); i++){
            remain= target- nums[i];
            if(mpp.find(remain)!= mpp.end()){
                return{i, mpp[remain]};
            }
            else{
                mpp[nums[i]]=i;
            }
        }

        return {};
    }
};