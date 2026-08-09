class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int numbers=0;
        for(int i=0; i<nums.size(); i++){
            numbers = numbers^nums[i];
        }

        return numbers;
        
    }
};