class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        // Putting indecies to -ve that are visited
        for(int i=0;i<nums.size();i++){
            nums[abs(nums[i])-1]=-abs(nums[abs(nums[i])-1]);
        }
        // Adding positve indecies to ans
        for(int j=0;j<nums.size();j++){
            if(nums[j]>0) ans.push_back(j+1);
        }
        return ans;
    }
};