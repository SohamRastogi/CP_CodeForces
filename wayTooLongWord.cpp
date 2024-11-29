#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char words[n][101];
    for(int i=0;i<n;i++){
        cin>>words[i];
    }
    int i = 0;
    while(i<n){
        if(strlen(words[i])<=10){
            cout<<words[i]<<endl;
        }
        else if(strlen(words[i])>10){
             int x = strlen(words[i]);
             char* ptr = words[i];
             cout<<*ptr<<x-2;
             ptr = ptr + x - 1;
             cout<<*ptr;
             cout<<endl;
        }
        i++;
    }

    return 0;
}