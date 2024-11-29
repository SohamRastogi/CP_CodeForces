#include<iostream>
using namespace std;
int main()
{
    int n;
    int m;
    cin>>n>>m;
    int flag = 0;
    if(n==1 || m==1){
        cout<<"Akshat";
        return 0;
    }
    while(n>0 && m>0){
         flag++;
         n--;
         m--;
    }
    if(flag%2!=0){
        cout<<"Akshat";
    }
    else cout<<"Malvika";
    return 0;
}