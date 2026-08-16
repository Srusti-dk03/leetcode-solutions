class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int i,j;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
             int sum= nums[i]+nums[j];
             if(sum==target){
                return {i,j};
             }
        }
        
    }
    return {};
    }
};