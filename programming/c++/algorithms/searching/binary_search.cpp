#include<iostream>
using namespace std;

int binary_search(int first,int last,int arr[],int ele){
    if(last >= first){
        int mid = (first + last)/2;

        if(arr[mid] == ele){
            return mid;
        }
        if(arr[mid] < ele){
            return binary_search(mid+1,last,arr,ele);
        }
        return binary_search(first,mid-1,arr,ele);
    }
    return -1;
}

int main(){
    int arr[]={2,6,9,12,15,18,20,23,59,94};
    int len = sizeof(arr)/sizeof(arr[0]);
    int ele = 20;
    int res = binary_search(0,len-1,arr,ele);
    if(res == -1){
        cout << "the element is not present";
    }
    else{
        cout << "the element is present in position " << res;
    }
}