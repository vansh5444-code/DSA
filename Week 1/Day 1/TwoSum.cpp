class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> pos;
        for(int i=0;i<nums.size();i++){
            int need=target-nums[i];
            if(pos.find(need)!=pos.end()){
                return {pos[need],i};
            }
            pos[nums[i]]=i;
        }
        return {};
    }
};
