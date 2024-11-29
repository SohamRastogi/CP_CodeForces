#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str1[101];
    char str2[101];
    cin>>str1;
    cin>>str2;
    char* arr1 = str1;
    char* arr2 = str2;
    int count = strlen(str1);
    int x = count+1;
    char fstr1[x];
    char fstr2[x];

    while(*arr1 != '\0'){
        char ch;
        if(int(*arr1)>=65 && int(*arr1)<=90){
            
            ch = char(*arr1 + 32);
        }
        else if (int(*arr1)>=97 && int(*arr1)<=122){
            
            ch = *arr1;
        }
        static int i =0;
        fstr1[i] = ch;
        i++;
        arr1++;

    }

    // for(int i=0;i<count;i++){
    //     cout<<fstr1[i]<<"";
    // }

    // cout<<endl;

    while(*arr2 != '\0'){
        char ch;
        if(int(*arr2)>=65 && int(*arr2)<=90){
            
            ch = char(*arr2 + 32);
        }
        else if (int(*arr2)>=97 && int(*arr2)<=122){
            
            ch = *arr2;
        }
        static int i =0;
        fstr2[i] = ch;
        i++;
        arr2++;
    }
    
    char* pointer1 = fstr1;
    char* pointer2 = fstr2;
    int flag ;
    while(*pointer1 != '\0' && *pointer2!='\0'){
         flag = 1;
        if(*pointer1 == *pointer2){
            pointer1++;
            pointer2++;
        }
        else if(int(*pointer1)>int(*pointer2)){
            cout<<"1";
            flag = 0;
            break;
        }
        else if(*pointer1<*pointer2){
            cout<<"-1";
            flag = 2;
            break;
        }
    }

    if(flag == 1){
        cout<<"0";
    }
    return 0 ;
}