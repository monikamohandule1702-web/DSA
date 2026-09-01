class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
         int n = nums.size(), bias = n * (99 / n) + n;
        
        vector<int> res;
        for (int i = 0; i < n; i++)
            res.push_back(nums[(i + nums[i] + bias) % n]);

        return res;
    }
};