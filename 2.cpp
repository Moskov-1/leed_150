class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> arr;
        int size = nums.size();
        int k = 0, j =0;
        for(int i=0; i <size; i++)
            if(nums[i] != val){

                arr.push_back(nums[i]);
                k++;
            }

        nums = arr; 
        return k;
    }
};