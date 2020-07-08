#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , x , y , z;
    cin >> n;
    int counter = 0 ;
    string line ;
    cin.ignore();
    while (  counter < n )
    {
        getline (cin , line);
        stringstream str (line) ;
        str >> x >> y >> z;
        if (x == 0 || y == 0 || z == 0)
        {
            cout <<"NO"<<endl;
            counter ++;
            continue;
        }
 
        if (x + y + z != 180)
        {
            cout << "NO" <<endl;
            counter ++;
            continue;
        }
 
  
        cout <<"YES"<<endl;
        counter ++;
    }
 
    return 0;
}
 