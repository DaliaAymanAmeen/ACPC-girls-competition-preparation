#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin >> n ;
    int counter = 0;
    int x , y ;
    string op ;
    string line ;

    cin.ignore();
    while (  counter < n )
    {
        getline (cin , line);
        stringstream str (line) ;
        str >> x >> op >> y;
        //cout << x << " " << op << " " << y << endl;

        if (op == "!=")
        {
            //cout << "yes";
            if ( x != y ) cout << "true" <<endl;
            else  cout << "false" <<endl;
        }

        else if (op == "==")
        {
            if ( x == y ) cout << "true" <<endl;
            else  cout << "false" <<endl;
        }

        else if (op == "<=")
        {
            if ( x <= y ) cout << "true" <<endl;
            else  cout << "false" <<endl;
        }

        else if (op == ">=")
        {
            if ( x >= y ) cout << "true" <<endl;
            else  cout << "false" <<endl;
        }

        else if (op == "<")
        {
            if ( x < y ) cout << "true" <<endl;
            else  cout << "false" <<endl;
        }

        else if (op == ">")
        {
            if ( x > y ) cout << "true" <<endl;
            else  cout << "false" <<endl;
        }


          counter ++ ;
    }

    return 0;
}
