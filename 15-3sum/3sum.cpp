class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int j,k;
        int last =INT_MIN;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==last){
                continue;
            }
            last = nums[i];
            j= i+1;
            k= nums.size()-1;
            while(j<k){
                int sum= nums[i]+nums[j]+nums[k];
                if(sum>0){
                    k--;
                }
                else if(sum<0){
                    j++;
                }
                else{
                    ans.push_back({nums[i],nums[j], nums[k]});
                    int number1= nums[j];
                    int number2= nums[k];
                    while(j<k && nums[j]==number1){
                        j++;
                    }
                    while(j<k && nums[k]==number2){
                        k--;
                    }
                }
            }    
        }
        return ans;        
    }
};