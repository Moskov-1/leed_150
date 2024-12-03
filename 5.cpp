class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(),nums.end());
        int slow = 0, fast = 1;
        int val = nums[slow];
        int count = 1;
        int max = 1;

        while(fast < size){
            if(nums[slow] == nums[fast]){
                count++;
                slow++;
                fast++;
            }
            else{
                
                slow++;
                count = 1;
                fast++;
            }
            if(max < count){
                    max = count;
                    val = nums[slow];   
                }
        }        

        return val;
    }
};