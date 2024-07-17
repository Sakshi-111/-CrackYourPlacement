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
// #include <vector>

// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        
//         for(int i=0;i<n;i++){
//              nums1[m+i]=nums2[i];
//         }
      
//         sort(nums1.begin(),nums1.end());
        
//     }
// };


//move zeros another approach; it says move the non zero elements to left by 
//taking a variable starting at zerp and then swapping and incrasing variable wheenevr swap happens.
// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
    
//        int i=0;
//        for(int j=0;j<nums.size();j++){
//         if(nums[j]!=0){
//             swap(nums[j],nums[i]);
//             i++;
//         }
//        }
//     }
// };