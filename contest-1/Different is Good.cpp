#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
    int n;
    cin>>n ;
    string str ;
    cin>>str ;
    map <char , int> mymap;
    int counter = 0;
    if (n > 26) { cout<< "-1" ; return 0 ; }
    
    for (int i = 0; i < n; i++)
    { 
        if (mymap.count(str[i]) == 0) //distinct char
        {
            mymap[str[i]]++; 
            counter++; 
        }
        mymap[str[i]]++; 
    } 

    cout<< (n - counter); 
    return 0; 
} 