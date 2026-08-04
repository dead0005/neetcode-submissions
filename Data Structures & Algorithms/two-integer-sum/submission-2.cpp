class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int t=(target-nums[i]);
            if(mp.find(t)!=mp.end() and mp[t]!=i){
                 int j=mp[t];
                 ans.push_back(i);
                 ans.push_back(j);
               
                 break;
            }
        }
        return ans;
    }
};
