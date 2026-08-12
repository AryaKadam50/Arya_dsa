class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int greed =0;
        int cookie=0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        while(cookie < s.size() && greed< g.size()){
            if(g[greed]<= s[cookie]){
                greed++;
            }
            cookie++;
        }
        return greed;
    }
};