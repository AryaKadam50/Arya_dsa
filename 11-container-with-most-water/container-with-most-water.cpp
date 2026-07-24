class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxa=0;
        int left=0;
        int right=height.size()-1;

        while(left<right){
            maxa= max(maxa, (right-left)*min(height[left], height[right]));
            if(height[left]>height[right]){
                right--;
            }
            else{
                left++;
            }

        }
        return maxa;
        
    }
};