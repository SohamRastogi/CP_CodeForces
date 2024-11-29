#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // friend 1 ko gift diya friend 2 ne
    int brr[n];
    for(int i=0;i<n;i++){
        brr[i]=arr[i];
    }
    // brr is a deep copy of arr 
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(brr[j]>brr[j+1]){
                int temp;
                temp = brr[j];
                brr[j] = brr[j+1];
                brr[j+1] = temp;
            }
        }
    }
    //  now brr is sorted
    // for(int i=0;i<n;i++){
    //     cout<<brr[i]<<" ";
    // }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(brr[i]==arr[j]){
                cout<<j+1<<" ";
            }
        }
    }
    return 0;
}