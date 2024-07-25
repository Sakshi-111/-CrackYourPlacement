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

//bs in 2d array
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int start=0;
        int end= row*col-1;
        int mid=start+(end-start)/2;
        while(start<=end){
            int element=(matrix[mid/col][mid%col]);
            if (element==target){
                return 1;
            }
            else if(element>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            mid=start+(end-start)/2;
        }
        return 0;

        
    }
};