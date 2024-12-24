#include<iostream>
using namespace std;


void binary_First_last_occurence(int arr[],int n ,int target){
int start,end,mid,first,last;
start=0;
end=n-1;
first=last=-1;

// for the first occurence
while (start<=end)
{
   mid=start+(end-start)/2;
 if (arr[mid]==target)
 {
    first=mid;
    end=mid-1; // checking left side if there is any ocurence or not
 }
 else if (arr[mid]<target)
 {
   start=mid+1;
 }
 else{
    end=mid-1;
 }
 
}

// For the Last occurence
start=0;
end=n-1;
while (start<=end)
{
   mid=start+(end-start)/2;
 if (arr[mid]==target)
 {
    last=mid;
    start=mid+1; // checking in right side if any other occurence is there or not
 }
 else if (arr[mid]<target)
 {
   start=mid+1;
 }
 else{
    end=mid-1;
 }
 
}
 cout<<"first : "<<first<<" and  last : "<<last<<endl;
}
int main(){
    int arr[]={5,7,7,8,8,10};
    int n=6;
    binary_First_last_occurence(arr,n,8);
   
   
return 0;
}