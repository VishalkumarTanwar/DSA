class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mxgap=0;
        for(int i=0;i<nums.size()-1;i++){
            int gap= nums[i+1]-nums[i];
            mxgap=max(mxgap,gap);
        }
        return mxgap;
    }
};