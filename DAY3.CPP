//VALID PALINDROME 2

// class Solution {
//     private:
//     bool checkPalindrome(string &s){
//         int start=0;
//         int end=s.length()-1;
//         while(start<=end){
//             if(s[start]!=s[end]){
//                return false;
               
//             }
//             start++;
//             end--;
          
//             }
//             return true;

//         }
    
// public:
//     bool validPalindrome(string s) {
//         int start=0;
//         int end=s.length()-1;
//         int  count=1;
//         while(start<=end){
//             if((s[start])==s[end]){
//                 start++;
//                 end--;
                

//             }
//             else{
//                 if (count==1){
//                     string s1=s;
//                      s1.erase(start,1);
//                      count--;
//                      string s2=s;
//                      s2.erase(end,1);
//                      return checkPalindrome(s1)||checkPalindrome(s2);
                     

//                 }
//                 else{
//                     return 0;
//                 }
                
//                 }

               
//             }
//             return 1;
//         }
        

        
//     };

