#include<iostream>
using namespace std;
int main()
{
    int n; // n => number of coins
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // for(int i=0;i<n;i++){
    //     cout<<value[i]<<" ";
    // }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    int l = n-1;
    int sum=0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    // sum = 15
    
    if(arr[l]>sum-arr[l]){
        cout<<"1";
    }
    else {
        while(l>=0){
            arr[l-1]=arr[l]+arr[l-1];
            if(arr[l-1]>sum-arr[l-1]){
                cout<<n-l+1;
                break;
            }
            else if(arr[l-1]<sum-arr[l-1]){
                l--;
            }
        }
    }
    
    return 0;
}