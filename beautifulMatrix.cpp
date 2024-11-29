#include<iostream>
using namespace std;
int main()
{
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<5;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    int rowpos = -1;
    int colpos = -1;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j]==1){
                rowpos = i+1;
                colpos = j+1;
                break;
            }
        }
    }
    // cout<<rowpos<<" "<<colpos;
    if(rowpos==3 && colpos==3){
         cout<<"0";
    }
    else if(rowpos==3 && (colpos==2||colpos==4)){
        cout<<"1";
        return 0 ;
    }
    else if(colpos==3 && (rowpos==2||rowpos==4)){
        cout<<"1";
        return 0;
    }
    else if(rowpos==2 && (colpos==2||colpos==4)){
        cout<<"2";
        return 0 ;
    }
    else if (rowpos==2 && (colpos==2||colpos==4)){
        cout<<"2";
        return 0 ;
    }
    else if(colpos ==3 && (rowpos==1 || rowpos==5)){
        cout<<"2";
        return 0 ;
    }
    else if (rowpos==3 && (colpos==1||colpos==5)){
        cout<<"2";
        return  0;
    }
    else if (rowpos==1 && (colpos==2||colpos==4)){
        cout<<"3";
        return 0 ;
    }
    else if (rowpos==5 && (colpos==2||colpos==4)){
        cout<<"3";
        return  0;
    }
    else if (rowpos== 2 && (colpos==1||colpos==5)){
        cout<<"3";
        return 0 ;
    }
    else if (rowpos== 4 && (colpos==1||colpos==5)){
        cout<<"3";
        return 0;
    }
    else if (rowpos == 4 && (colpos ==2||colpos ==4)){
        cout<<"2";
        return 0 ;
    }
    else cout<<"4";


    return 0;
}