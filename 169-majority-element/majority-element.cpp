class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;

        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }

        int val= nums.size()/2;
        
        for(const auto &mp : mpp){
            if(mp.second>val){
                return mp.first;
            }
        }
        return 0;
    }
};