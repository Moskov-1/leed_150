class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int r = k%n;
        int p = 0;
        vector<int> arr;
        for(int i = n-r  ; i<n ; i++){
            arr.push_back(nums[i]);
        }
        for(int i = 0  ; i<n-r ; i++){
            arr.push_back(nums[i]);
        }
        nums = arr;
    }
};