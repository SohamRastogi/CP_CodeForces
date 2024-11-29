#include<iostream>
using namespace std;
int main()
{
    char str[101];
    cin>>str;
    char* ptr = str;
    int flag = 0;
    while(*ptr != '\0'){
        if(*ptr == 'h'){
            ptr++;
            while(*ptr!='\0'){
                if(*ptr == 'e'){
                    ptr++;
                   while(*ptr != '\0'){
                     if(*ptr == 'l'){
                        ptr++;
                         while(*ptr !='\0'){
                            if(*ptr == 'l'){
                                ptr++;
                               while(*ptr != '\0'){
                                if(*ptr == 'o'){
                                      flag = 1;
                                      break;
                                }
                                else ptr++;
                               }
                            }
                            else ptr++;
                         }
                     }
                     else ptr++;
                   }
                }
                else ptr++;
            }
        }
        else ptr++;
    }
    if(flag == 1) cout<<"YES";
    else if (flag == 0) cout<<"NO";
        
    return 0;
}