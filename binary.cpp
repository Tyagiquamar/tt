#include<iostream>
using namespace std;
int binarysearch(int arr[],int x,int low,int high){
    while (low<=high)
    {
       int mid=low+(high-low)/2;
       if(arr[mid]==0) {
        return mid;
       }
       if (arr[mid]<x)
       {
        low=mid+1;
       }
       else
       {
        high=mid-1;
       }
    }
return -1;
}
int main(){

    int arr[]={1,2,3,4,5,6,7,8};
    int x=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=binarysearch(arr,x,0,n-1);
    if (result==-1){
        cout<<"Not found";
    }
    else{
     cout<<result;
    }
    return 0;
}