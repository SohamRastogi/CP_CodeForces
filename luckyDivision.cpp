#include<iostream>
using namespace std;

void almostLucky (int n, int flag){
    
    if(n== 777 || n==447 || n==894 || n==474 || n==948 || n==774 || n==747 || n==477 || n==954){
        cout<<"YES";
        flag =1;
        return;
    }
    for(int i=4;i<=1000;i=i+4){
        if(n==i){
            flag = 1;
            cout<<"YES";
            return;
        }
    }
    for(int i=7;i<=1000;i=i+7){
        if(n==i){
            flag = 1;
            cout<<"YES";
            return;
        }
    }
    for(int i=47;i<=1000;i=i+47){
        if(n==i){
            flag = 1;
            cout<<"YES";
            return;
        }
    }
    for(int i=74;i<=1000;i=i+74){
        if(n==i){
            flag = 1;
            cout<<"YES";
            return;
        }
    }
    for(int i=77;i<=1000;i=i+77){
        if(n==i){
            flag = 1;
            cout<<"YES";
            return;
        }
    }
    if(flag == 0){
        cout<<"NO";
        return;
    }
    }
   
    
    
    


int main()
{
    int n;
    cin>>n;  // n is greater then equal to 1 and less than equal to 1000
    int flag = 0;
    almostLucky(n,flag);
    return 0;
}