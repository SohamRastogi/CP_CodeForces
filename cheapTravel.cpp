#include<iostream>
using namespace std;

int minimum (int a,int b){
    if(a>=b) return b;
    else if(a<b) return a;
}

int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    if(float(b/m)==float(a)){
        cout<<a*n;
        return 0;
    }
    else if(float(b/m)>float(a)){
        cout<<a*n;
        return 0;
    }
    else if(float(b/m)<float(a)){
        if(n%m==0){
            int x = n/m;
            cout<<x*b;
            return 0 ;
        }
        else if(n%m!=0){
            int y = n/m;
            int fare1 = y*b;
            int remrides = n - m*y;
            int fare2 = remrides*a;
            int fare3 = b;
            int finalfare2 = minimum(fare2,fare3);
            cout<<fare1+finalfare2;
            return 0;

        }

    }
    return 0;
}