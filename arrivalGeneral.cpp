#include<iostream>
#include<limits.h>
using namespace std ;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxindex = -1;
    int minindex = -1;
    int max = -1;
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
            maxindex = i;
        }
    }
    // cout<<maxindex;
    int j = maxindex;
    while(j>0){
        int temp;
        temp = arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=temp;
        j--;
    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    for(int i=0;i<n;i++){
        if(arr[i]<=min){
            min = arr[i];
            minindex = i;
        }
    }
    // cout<<minindex;

    cout<<maxindex+n-minindex-1;
    return 0;
}