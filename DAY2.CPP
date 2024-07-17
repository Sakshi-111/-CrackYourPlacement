// class Solution {
// public:

//     vector<int> findDuplicates(vector<int>& nums) {
//         vector<int>Dupes;
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<nums.size()-1;i++){
//             if( nums[i]==nums[i+1]){
//             Dupes.push_back(nums[i]);}
//         }
//         return Dupes;

        
//     }
// };

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {


       
//         for(int i=0;i<nums.size()-1;i++){
//             for(int j=1;j<nums.size();j++){
//                 if (nums[i]+nums[j]==target)
//                 return {i,j};
//             }
            
            
            
//         }return{0,1};
//     } 
     
// };
