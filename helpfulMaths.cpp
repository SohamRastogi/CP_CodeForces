#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[101];
    cin>>str;
    int count = strlen(str);
    int x= count/2 +1;

    // intermediate array formation with only numbers 

    int intermediatearray[101];
    char* ptr = str;
    while(*ptr != '\0'){
        static int i=0;
        intermediatearray[i]=*ptr-48;
        ptr=ptr+2;
        i++;
    }
    // for(int i=0;i<elementsIA;i++){
    //     cout<<intermediatearray[i]<<" ";
    // }

    // intermediate array sort using bubble sort algorithm

    for(int i=0;i<x-1;i++){
        for(int j=0;j<x-1;j++){
            if(intermediatearray[j]>intermediatearray[j+1]){
                int temp;
                temp = intermediatearray[j];
                intermediatearray[j]= intermediatearray[j+1];
                intermediatearray[j+1]=temp;
            }
        }
    }

    // intermediate array display with required outlook

    for(int i=0;i<x-1;i++){
        cout<<intermediatearray[i]<<"+";
    }
    cout<<intermediatearray[x-1];

    return 0 ;
}