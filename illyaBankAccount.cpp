#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int alpha = n;
    int count = 0;
    while(alpha!=0){
        count++;
        alpha=alpha/10;
    }
    if(n>0){
        cout<<n;
        return 0 ;
    }
    else if(n<0){
        int m = -n;
        int l = m;
        int lastdigit = l%10;
        l=l/10;
        int secondlastdigit = l%10;
        if(lastdigit>=secondlastdigit){
            cout<<-m/10;
            return 0;
        }
        else if(secondlastdigit>lastdigit){
           

            n = n/100;
            if(n==0){
                cout<<-lastdigit;
                return 0;
            }
            else if(n!=0){

            
            cout<<n<<lastdigit;
            return 0;
            }
        }
    }
    return 0;
}