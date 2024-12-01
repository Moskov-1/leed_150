class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int size = nums.size();
       if(size < 1) return 0;
       int k = 1;
       vector<int> arr;
       arr.push_back(nums[0]);
       for(int i=1; i<size; i++){
            if(arr[k-1] != nums[i]){
                arr.push_back(nums[i]);
                k++;
            }
        }
        nums = arr;
       return k;
    }
};