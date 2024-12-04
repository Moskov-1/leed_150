class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<bool> jumpable(n,true);
        
        jumpable[n-1] = false;
        jumpable[0] = jump(nums, jumpable, 0, n);
        return jumpable[0];
    }
    bool jump(vector<int>& nums, vector<bool>& jumpable, int index, int n){
        if(index >= n-1)
            return true;    
        for(int steps = nums[index]; steps>0 && !jumpable[n-1]; steps--){
            if( index + steps >= n-1){
                jumpable[n-1] = true;
                
                return true;
            } 
            else if(index + steps > 0 && jumpable[index + steps]){  
                jumpable[index + steps] = jump(nums,jumpable,index+steps,n);
               
            }
            else {
                jumpable[index+steps] = false;
            }
                  
        }
        if(!jumpable[n-1])
            jumpable[index] = false;    
        return jumpable[index];
            
        
    }
};