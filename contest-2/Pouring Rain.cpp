#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define M_PI       3.14159265358979323846
int main()
{
    double d,h,v,e,area,v1,t;
    cin >> d>>h>>v>>e;
    
    area = M_PI * d *d  * h / 4 ;
    v1 = M_PI * d *d  * e / 4 ;
    t = area / (v - v1);
    
    if (v1 > v ) { cout <<"NO"; return 0;}
    
    if (t < 10000) 
    {
        cout<<"YES"<<endl;
        cout<<std::setprecision(9)<<t;
        return 0;
    }
    
 
}
