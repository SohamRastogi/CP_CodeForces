#include<iostream>
using namespace std;
int main()
{
    int n;
    int m;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m-1;i++){
        for(int j=0;j<m-1;j++){
            if(arr[j]>arr[j+1]){
                int temp;
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    // cout<<endl;
    // for(int i=0;i<m;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // if(n==m) {cout<<"0";
    // return 0 ;
    // }

    int x = m-n+1; // x = 18
    
    int difference[x];
    // for(int i=0;i<m-n;i++){
    //     if(arr[i+n-1]>=arr[i]) difference[i]=arr[i+n-1]-arr[i];
    //     else if(arr[i+n-1]<arr[i]) difference[i]=arr[i]=arr[i+n-1];
    // }
    for(int i=0;i<x;i++){
        difference[i]=arr[i+n-1]-arr[i];
    }
    // for(int i=0;i<x;i++){
    //     cout<<difference[i]<<" ";
    // }

    for(int i=0;i<x;i++){
        for(int j=0;j<x-1;j++){
            if(difference[j]>difference[j+1]){
                int temp;
                temp = difference[j];
                difference[j]=difference[j+1];
                difference[j+1]=temp;
            }
        }
    }
    // cout<<endl;
    cout<<difference[0];
    
    return 0;
}