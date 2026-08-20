class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>con(2*nums.size());
        for(int i=0;i<nums.size();i++){
            con[i]=nums[i];
            con[i+nums.size()]=nums[i];
        }
        return con;
    }
};