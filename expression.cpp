#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cin>>a;
    cin>>b;
    cin>>c;
    int v[6];
    v[0]=a*b*c;
    v[1]=a+b+c;
    v[2]=a*b+c;
    v[3]=a*(b+c);
    v[4]=(a+b)*c;
    v[5]=a+(b*c);
    int max = INT_MIN;
    for(int i=0;i<6;i++){
        if(max<v[i]){
            max = v[i];
        }
    }
    cout<<max;
    return 0 ;
}