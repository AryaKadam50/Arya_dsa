class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        unordered_set<int> s;
        int mxlen=1;

        for(int i=0; i<nums.size(); i++){
            s.insert(nums[i]);
        }

        for(auto num : s){
            int curr = num;
            int count=1;
            if(s.find(num-1)==s.end()){
                while(s.find(curr+1)!=s.end()){
                    count++;
                    curr= curr+1;
                }
                mxlen= max(mxlen,count);
            }
        }
        
        return mxlen;
    }
};