
// Brute Force Approach Using STL

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(),nums.end());
        
    }
};


//Optimal Solution

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
     int val=-1;
     int n=nums.size();
     for(int i=n-2;i>=0;i--){
         if(nums[i]<nums[i+1]){
         val=i;
         break;
         }
     }
       if(val==-1)
        {
             reverse(nums.begin(),nums.end());
        }
        else{
   for(int i=n-1;i>=val;i--){
        if(nums[i]>nums[val]){
        swap(nums[i],nums[val]);
        break;
        }
    }
    reverse(nums.begin()+val+1,nums.end());
    
        }
    }
};
