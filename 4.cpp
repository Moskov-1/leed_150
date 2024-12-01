class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        if(size < 1){
            return 0;
        }

        int slow = 0, fast = 1, count = 1;

        while(fast < size){
            if( nums[slow] == nums[fast]){
                if(count < 2){
                    nums[++slow] = nums[fast];
                    count++;
                    
                }
                fast++;
            }else{
                nums[++slow] = nums[fast++];
                count = 1;
            }
        }
        return slow+1;
    }
};