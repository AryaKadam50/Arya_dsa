class Solution {
public:
    bool distance(vector<int> &position, int dist, int m){
        int k=1;
        int lastpos = position[0];

        for(int i=1; i<position.size(); i++){
            if(position[i]>=lastpos+dist){
                k++;
                lastpos= position[i];
            }
            if(k==m){
                return true;
            }
        }
        return false;
    }

    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int low =0;
        int high= position.back()-position.front();
        int mid;
        bool pos;
        int out=0;

        while(low<=high){
            mid=(low + high)/2;

            pos= distance(position, mid, m);

            if(pos==true){
                out= mid;
                low= mid+1;
            }
            else{
                high= mid-1;
            }
        } 
        return out;      
    }
};