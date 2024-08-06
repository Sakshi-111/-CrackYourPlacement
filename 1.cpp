#include <iostream>
using namespace std;


void reversearr(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;

    }
}

void reversearrRECURSION(int arr[],int start,int end){
    if(start>=end){
        return;}
    swap(arr[start++],arr[end--]);
    reversearrRECURSION(arr,start,end);
}
int main(){
   int arr[4] = {1,2,3,6};
    int size=4;
    reversearrRECURSION(arr,0,3);
    for(auto i:arr){
        cout<<i<< ' ';
    }
}
