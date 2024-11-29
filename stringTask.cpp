#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[101];
    char ansarr[200];
    cin>>str;
    // cout<<str;
    // cout<<endl;
         char* ptr = str;
    // while(*ptr != '\0'){
    //     cout<<*ptr;
    //     ptr++;
    // }
    while(*ptr != '\0'){
        if(*ptr=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O'||*ptr=='U'||*ptr=='Y'||*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u'||*ptr=='y'){
            cout<<"";
            
        }
        else{char ch;
            int v = int(*ptr);
            if(v>=65 && v<=90){
                 ch = char((*ptr)+32);
                // cout<<ch;
                
            }
            else if (v>=97 && v<=122){
                  ch = *ptr;
                // cout<<ch;
            }
            static int i=0;
            ansarr[i]=ch;
            i++;
        }
        // ansarr[0]= ch;
        ptr = ptr+1;
    }
    // cout<<endl;
    int alpha = strlen(ansarr);
    // for(int i=0;i<alpha;i++){
    //     cout<<ansarr[i];
    // }
    cout<<endl;
    char* fptr = ansarr;
    while(*fptr != '\0'){
        cout<<"."<<*fptr;
        fptr++;
    }
    
    return 0;
}
