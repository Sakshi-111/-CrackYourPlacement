#include <iostream>
#include <vector>   
using namespace std;

/**
     * Finds the duplicate in an array of integers.
     * 
     * The input array is guaranteed to contain a duplicate, and the duplicate is guaranteed to be in the range [1, n] where n is the length of the array.
     * 
     * This function sorts the array and then iterates through it to find the first duplicate element.
     * 
     * Example:
     * Input: [1, 3, 4, 2, 2]
     * Output: 2
     * 
     * nums The input array of integers
     * return The duplicate element in the array
     */
// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int number;
//         sort(nums.begin(),nums.end());
//         for(int i=1;i<nums.size();i++){
//             if(nums[i]==nums[i-1]){
//               number=nums[i];
//             }
//         }
//         return number;
        
//     }
// };
         /* QUES 2*/




// sort 0s 1s and 2s in a given array 

//bruteforce approach 
//  int sort012(vector<int> a, int n)
// {
//  sort(a.begin(),a.end());


// }

//better approach
// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int cnt0=0;
//         int cnt1=0;
//         int cnt2=0;

//        for(int i=0;i<nums.size();i++){
//         if(nums[i]==0){
//             cnt0++;
//         }
//         else if(nums[i]==1){
//             cnt1++;
//         }
//         else{
//             cnt2++;
//         }

//        }
//        for(int i=0;i<cnt0;i++){
//         nums[i]=0;
//        }
//        for(int i=cnt0;i<(cnt0+cnt1);i++){
//         nums[i]=1;
//        }
//        for(int i=cnt0+cnt1;i<(cnt1+cnt0+cnt2);i++){
//         nums[i]=2;
//        }
//     }
  
// };
                 // QUES 3




// leetcode 
//26. Remove Duplicates from Sorted Array
// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//          int k=1;
         
//         for(int i=1;i<nums.size();i++){
           
//             if(nums[i]!=nums[i-1]){
//                 nums[k]=nums[i];
//                 k++;

//             }
            
//         }
//         return k;
//     }
// };
 //ques 4
//leetcode 

// 283. Move Zeroes

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
    
//         vector<int>numbers;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]!=0) numbers.push_back(i);
//         }
//         for(int i=0;i<numbers.size();i++){
//             nums[i]=nums[numbers[i]];
//         }
//         for(int i=numbers.size();i<nums.size();i++){
//             nums[i]=0;
//         }
//     }
// };