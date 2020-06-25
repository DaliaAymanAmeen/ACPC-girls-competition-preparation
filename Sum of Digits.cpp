#include <iostream>
using namespace std;
#include <string.h>
#include <algorithm>
#include <bits/stdc++.h>

int main()
{
    string str;
    cin>>str;
    int counter = 0;
    
    if (str.length()<2) {cout<<"0"; return 0;}

    int sum =11; 
    while ( sum / 10 !=0 && sum != 10)
    {
        sum = 0;
        for (int i=0 ; i<str.length();i++)
        {
            sum+= str[i]-48;
        }

        str = std::to_string(sum);
        counter++;
    }
    if (sum==10) counter++;
    
    cout<<counter;


    return 0;
}
