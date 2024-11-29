#include<iostream>
using namespace std;
int main()
{
    long long n,k;

    // no need to maintain the totalarray :
    cin >> n >> k;
    if (k <= (n + 1) / 2)
    {
        cout << k * 2 - 1 << endl;
    }
    else
    {
        cout << (k - (n + 1) / 2) * 2 << endl;
    }

    //  CORRECT APPROACH : (but memory limit exceeded) :(
    // if(n%2==0){
    //     int totalarr[n];
    //     for(int i=1;i<=n;i=i+2){
    //         static int j = 0;
    //         totalarr[j]=i;
    //         j++;
    //     }
    //     for(int i=2;i<=n;i=i+2){
    //         static int l = n/2;
    //         totalarr[l]=i;
    //         l++;
    //     }

    //     // cheker log : PASS
    //     // for(int i=0;i<n;i++){
    //     //     cout<<totalarr[i]<<" ";
    //     // }
       
    //     cout<<totalarr[k-1];

    // }

    // else if(n%2!=0){
        
    //     int totalarr[n];
    //     for(int i=1;i<=n;i=i+2){
    //         static int a = 0;
    //         totalarr[a]=i;
    //         a++;
    //     }
    //     for(int i=2;i<=n;i=i+2){
    //         static int b = n/2+1;
    //         totalarr[b]=i;
    //         b++;
    //     }

    //     // checker log : PASS
    //     // for(int i=0;i<n;i++){
    //     //     cout<<totalarr[i]<<" ";
    //     // }

    //     cout<<totalarr[k-1];

    // }

    return 0;
}