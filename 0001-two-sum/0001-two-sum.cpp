class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        unordered_map<int, int> valIndex;
        for(int i =0; i<len; i++)
        {
            int reminder = target-nums[i];
            if(valIndex.find(reminder)  != valIndex.end())
                return {valIndex[reminder], i};
            valIndex[nums[i]] = i;
        }
        return {};
    }
};