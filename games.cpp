#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int homecolor[n];
    int guestcolor[n];
    for(int i=0;i<n;i++){
        cin>>homecolor[i];
        // cout<<" ";
        cin>>guestcolor[i];
    }
    // for(int i=0;i<n;i++){
    //     cout<<homecolor[i]<<" ";
    // }
    // // cout<<endl;
    // // for(int i=0;i<n;i++){
    //     cout<<homecolor[i]<<" "<<guestcolor[i];
    //     cout<<endl;
    // }
    int count =0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(homecolor[i]==guestcolor[j]){
                count++;
            }
        }
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(guestcolor[i]==homecolor[j]){
                count++;
            }
        }
    }
    
    cout<<count;
    return 0;
}