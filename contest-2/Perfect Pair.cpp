#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
     long long int x, y , temp, m ;
     long long int counter = 0;
     cin >> x >> y >> m;
     
     if (x >= m || y>=m ) {cout << "0" ; return 0 ;}
      
     if ( x < m  && x <0 && y <= 0 || y < m && y < 0 && x <= 0 || x == 0 && y == 0 && m >0) {cout << "-1" ; return 0 ;}
     
     if (  std::max (x,y) > 0 &&  std::min (x,y) < 0 )
     {
         counter = - min (x,y) / max(x,y)  +1;
         temp =  max (x,y);
         if ( y < x) { y += temp* counter; x = temp;}
         else  { x += temp* counter; y = temp;}
     }
     
     while ( std::max (x,y) < m)
     {
        counter ++;
        temp = std::max (x,y); 
        x = x + y ;
        y = temp ;
     }
     
     cout << counter ;
     return 0;
}