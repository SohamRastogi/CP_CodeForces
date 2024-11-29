#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int xcoordinate[n];
    int ycoordinate[n];
    int zcoordinate[n];
    for(int i=0;i<n;i++){
        cin>>xcoordinate[i]>>ycoordinate[i]>>zcoordinate[i];
    }
    int sumx=0;
    int sumy=0;
    int sumz=0;
    for(int i=0;i<n;i++){
        sumx += xcoordinate[i];
    }
    for(int j=0;j<n;j++){
        sumy += ycoordinate[j];
    }
    for(int k=0;k<n;k++){
        sumz += zcoordinate[k];
    }
    if(sumx == 0 && sumy == 0 && sumz == 0){
        cout<<"YES";
    }
    else cout<<"NO";

    return 0;
}