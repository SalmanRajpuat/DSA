class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        if(nums.empty()) return 0;
        for(int i=1; i<nums.size(); i++){
            if(nums[j]!=nums[i]){
                nums[++j] = nums[i]; 
            }
        }
return j+1;

    }
};





// make a loop till n , make a var j sorted array, j will ++ if j!=arr[i] else j will get j==arr[i]