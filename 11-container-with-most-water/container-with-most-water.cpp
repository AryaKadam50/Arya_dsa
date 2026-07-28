class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r= height.size()-1;
        int amount=0;

        while(r>l){
            amount= max(amount, (min(height[l], height[r]))*(r-l));
            if(height[r]>height[l]){
                l++;
            }
            else{
                r--;
            }
        }

        return amount;
        
    }
};