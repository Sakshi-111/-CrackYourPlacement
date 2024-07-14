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