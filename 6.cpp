#include<bits/stdc++.h>

 using namespace std;

 int main() {
     int q,w,e,r,t,y,sum=0;
    for(q=0;q<=9;q++)
        for(w=0;w<=9;w++)
            for(e=0;e<=9;e++)
                for(r=0;r<=9;r++)
                    for(t=0;t<=9;t++)
                        for(y=0;y<=9;y++)
                        if (q+w+e==r+t+y) sum=sum+1;






  cout<<sum<<endl;
    return 0;





 }
