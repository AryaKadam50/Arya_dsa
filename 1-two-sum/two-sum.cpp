class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int>mpp;
        int number;
        
        for(int i=0; i<nums.size(); i++){
            
            number= target-nums[i];

            if(mpp.find(number)!= mpp.end()){
                ans.push_back(i);
                ans.push_back(mpp[number]);
            }
            else{
                mpp[nums[i]]=i;
            }

        }
        return ans;
        
    }
};