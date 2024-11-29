#include<iostream>
using namespace std;
int main()
{
    int levels;
    cin>>levels;
    int n1;  // number of levels X can pass
    int n2;

    cin>>n1;
    int x[n1];
    // int y[n2];
    // cin>>n1;
    for(int i=0;i<n1;i++){
        cin>>x[i];
    }

    cin>>n2;
    int y[n2];
    for(int i=0;i<n2;i++){
        cin>>y[i];
    }

    int ansarr[n1+n2];
    for(int i=0;i<n1;i++){
        ansarr[i]=x[i];
    }
    for(int j=0;j<n2;j++){
        ansarr[j+n1]=y[j];
    }

    // check : 
    // for(int i=0;i<n1+n2;i++){
    //     cout<<ansarr[i]<<" ";
    // }

    // if ansarr has all elements from 1 to n => cout<<"I become the guy";
    // if any of the elements miss form ansarr => cout<<"Oh, my keyboard!";

    // int flag = 0;

    // cout<<endl;

    int flag;
    for(int j=1;j<=levels;j++){
                flag = 0;
        for(int i=0;i<n1+n2;i++){
            if(j==ansarr[i]){
                flag =1;
            }
        }
        if(flag == 0){
            cout<<"Oh, my keyboard!";
            break;
            return 0;
        }
    }
    if(flag ==1 ) cout<<"I become the guy.";
    return 0;
}