// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
        
//         int start= 0;
//         int end= nums.size();
//         int mid= start+(end-start)/2;
//         if(nums.size()==1){
//             if(nums[0]==target){
//                 return 0;
//             }
//             else{return -1;}
//         }
//         while(start<=end){
//         if(nums[mid]==target){
//             return mid;
//         }
//         else if(nums[mid]>target){
//             end=mid-1;

//         }
//         else{
//            start=mid+1;
//         }
//         mid=start+(end-start)/2;

//         }
        
       
//         return -1;

        
//     }
// };