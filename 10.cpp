class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
       
        int xrr[n];
        int g=0, reach = 0, s = -1;
        for(int i=0; i<n; i++){
            
            if(i>g){
                if(reach > n-1)
                    g = n-1;
                else 
                    g = reach;
                s++;
            }
            if(i <= g){
                xrr[i] = s+1;
            }
            if(reach < i+nums[i])
                reach = i+nums[i];
        }
        return xrr[n-1];
    }
};