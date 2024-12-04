# h - index
class Solution {
public:
    int hIndex(vector<int>& citations) {
        int H=0, h= 1;
        int n = citations.size(); 
        sort(citations.begin(), citations.end());
        for(int i=0; i<n; i++){
            if(citations[i]>= n-i)
                return n-i;
            if(citations[i] >= h && n - i >= h){
                if(citations[i]<=n-i)
                    H = h = citations[i];
                else 
                    H = h;
                h++;
            }

        }
        return H;
    }
};