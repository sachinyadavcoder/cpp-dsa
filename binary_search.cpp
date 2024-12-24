#include<iostream>
using namespace std;

void binary(int arr[] ,int n, int key){
int start,end,mid;
start=0;
end=n-1;
bool found=false;
while (start<=end)
{
    mid=start+(end-start)/2;
    if (key==arr[mid])
    {
       cout<<"Found the value at index : "<<mid<<endl;
       found=true;
    //    break;
    }
    else if(arr[mid]<key){
        start=mid+1;
    }
    else{
        end=mid-1;
    }   
}
 if(!found){
 cout<<"The item is not present in this array\n";
    }
}

int main(){
   int arr[]={2,3,4,5,6,7,8,9};
   binary(arr,8,6);
return 0;
}