class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>m;
        for(int i=0;i<nums.size();i+=2){
            int freq=nums[i];
            int val=nums[i+1];

            for(int j=0;j<freq;j++){
                m.push_back(val);
            }
        }
        return m;
    }
};