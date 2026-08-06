class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> stk;
        vector<int> ans(temperatures.size());

        for(int i=temperatures.size()-1; i>=0; i--){
            while(!stk.empty() && temperatures[i]>=stk.top().second){
                stk.pop();
            }
            if(stk.empty()){
                ans[i]=0;
            }
            else{
                ans[i]= stk.top().first - i;
            }

            stk.push({i,temperatures[i]});
        }
        return ans;
    }
};