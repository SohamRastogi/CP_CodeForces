#include<iostream>
#include<string.h>
#include<limits.h>
using namespace std;

int main()
{
    char str[1001];
    str[0]='{';
    int i=0;
    int count = 0;
    while(str[i]!='}'){
         cin>>str[++i];
         count++;
    }

    // cout<<count;
    // cout<<endl;
    // for(int i=1;i<=count;i++){
    //     cout<<str[i];
    // }
    
    char finalstring[count+1];
    for(int i=1;i<=count;i++){
        finalstring[i-1]=str[i];
    }
    

    // check 
    // for(int i=0;i<count;i++){
    //     cout<<finalstring[i];
    // }
    // cout<<endl;

   
    // cout<<count<<endl;
    if(count == 2){
        cout<<"0";
        return 0;
    }
    // length of final string in count.

    // if(x==0){
    //     cout<<"0";
    //     return 0;
    // }

    char* ptr = finalstring;
    int y = count/2;       // y = 3
    // cout<<y;

    int  iarr[y];
    int l = 1;
    ptr++;
    iarr[0]=*ptr;
    while(l<y){
        ptr = ptr+2;
        iarr[l]=*ptr;
        l++;
    }
    // cout<<endl;
    // for(int i=0;i<y;i++){
    //     cout<<iarr[i]<<" ";
    // }
    // cout<<endl;

    // sortint of iarr[].
    for(int i=0;i<y-1;i++){
        for(int j=0;j<y-1;j++){
            if(iarr[j]>iarr[j+1]){
                int temp;
                temp = iarr[j];
                iarr[j]=iarr[j+1];
                iarr[j+1]=temp;
            }
        }
    }
    // for(int i=0;i<y;i++){
    //     cout<<iarr[i]<<" ";
    // }

    // check:
    // cout<<endl;
    // cout<<iarr[0]<<" "<<iarr[1]<<" "<<iarr[2]<<" "<<iarr[3];
    // cout<<iarr[3];

    // // iarr is sorted in terms of ASCII integer value
    // // distinct element count remaining 
    
    int max = INT_MIN;
    for(int i=0;i<y;i++){
        if(iarr[i]>max){
            max = iarr[i];
        }
    }
    // cout<<max;

    int counter = 1;
    int* pointer = iarr;
    while(*pointer != max){
        pointer++;
        if(*pointer!=*(pointer-1)){
            counter++;
        }
    }
    // cout<<endl;
    cout<<counter;
    return 0;
}