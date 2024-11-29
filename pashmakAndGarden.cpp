#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x1,x2,x3,x4,y1,y2,y3,y4;
    cin>>x1>>y1>>x2>>y2;

    // implementation :

    // CASE 1 :

    if(y1==y2){
        int l;
        if(x2>=x1){
            l = x2-x1;
        }
        else if(x2<x1){
            l = x1-x2;
        }
        int x3 = x1;
        int x4 = x2;
        int y3 = y1+l;
        int y4 = y2+l;
        if(-1000<=x3<=1000 && -1000<=x4<=1000 && -1000<=y3<=1000 && -1000<=y4<=1000){
            cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
            return 0;
        }
        else {
            cout<<"-1";
            return 0;
        }
    }

    
    // CASE 2 :

    if(x1==x2){
        int l;
        if(y2>=y1){
            l = y2-y1;
        }
        else if(y2<y1){
            l = y1-y2;
        }
        int y3 = y2;
        int y4 = y1;
        int x3 = x2+l;
        int x4 = x1+l;
        if(-1000<=x3<=1000 && -1000<=x4<=1000 && -1000<=y3<=1000 && -1000<=y4<=1000){
            cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
            return 0;
        }
        else {
            cout<<"-1";
            return 0;
        }
    }

    // CASE 3 : 

    float checkerlog1 = float(y2)-float(y1);
    float checkerlog2 = float(x2)-float(x1); 
    float checkerlog = checkerlog1/checkerlog2;
    if(checkerlog == 1 ){
        float diagonal = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
        float side = diagonal/sqrt(2);
        int sidelength = int(side);
        if(x2>x1){
            x3 = x2 - sidelength;
            y3 = y2;
            x4 = x1 + sidelength;
            y4 = y1;
            if(-1000<=x3<=1000 && -1000<=x4<=1000 && -1000<=y3<=1000 && -1000<=y4<=1000){
            cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
            return 0;
        }
        else {
            cout<<"-1";
            return 0;
        }
        }
        else if(x2<x1){
              x3 = x1-sidelength;
              y3 = y1;
              x4 = x2+sidelength;
              y4 = y2;
              if(-1000<=x3<=1000 && -1000<=x4<=1000 && -1000<=y3<=1000 && -1000<=y4<=1000){
            cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
            return 0;
        }
        else {
            cout<<"-1";
            return 0;
        }
        }
        }

    if(checkerlog==-1){
        float diagonal = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
        float side = diagonal/sqrt(2);
        int sidelength = int(side);
        if(x1>x2){
            x3 = x2;
            y3 = y1; x4 = x1; y4 = y2;
             if(-1000<=x3<=1000 && -1000<=x4<=1000 && -1000<=y3<=1000 && -1000<=y4<=1000){
            cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
            return 0;
        }
        else {
            cout<<"-1";
            return 0;
        }
        }
        else if(x1<x2){
            x3 = x1; y3 = y2; x4 = x2; y4 = y1;
             if(-1000<=x3<=1000 && -1000<=x4<=1000 && -1000<=y3<=1000 && -1000<=y4<=1000){
            cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
            return 0;
        }
        else {
            cout<<"-1";
            return 0;
        }
    }     
    }
    else {
        cout<<"-1";
        return 0;
    }
}


   