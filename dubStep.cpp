#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[201];
    cin>>str;
    int x = strlen(str);
    char* ptr = str;
    while(*ptr != '\0'){
        if(*ptr!='W'){
            cout<<*ptr;
            ptr++;
        }
        if(*ptr == 'W'){
            ptr++;
            if(*ptr == 'U'){
                ptr++;
                if(*ptr == 'B'){
                    cout<<" ";
                    ptr++;
                }
                else{
                    ptr=ptr-2;
                    cout<<*ptr;
                    ptr++;
                    cout<<*ptr;
                    ptr++;
                }
                
            }
            else {
                ptr--;
                cout<<*ptr;
                ptr++;
            }
        }
    }
    return 0;
}