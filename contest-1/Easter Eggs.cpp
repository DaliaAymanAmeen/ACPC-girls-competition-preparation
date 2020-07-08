#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int main()
{
    vector <char> colors (7);
    colors [0]='R'; colors [1]='O'; colors [2]='Y'; colors [3]='G'; colors [4]='B'; colors [5]='I'; colors [6]='V';
    int n;
    cin>>n;
    vector <char> egg(n);
    for (int i=0 ; i<n ; i++) egg[i]=colors[i];
    
    
    
    for (int i =7; i<n ; i++)
    {
        for (int j = 0 ; j < 7 ; j++)
        {
            if ( (egg[(i+1+n)%n] != colors[j]) &&  (egg[(i+2+n)%n] != colors[j]) && (egg[(i+3+n)%n] != colors[j]) &&
                 (egg[(i-1+n)%n] != colors[j]) &&  (egg[(i-2+n)%n] != colors[j]) && (egg[(i-3+n)%n] != colors[j]) )
                 
                 {
                     egg[i]=colors[j];
                     break;
                 }
            
        }
        
    }
    for (int i=0 ; i<n ; i++) cout<<egg[i];
    return 0;
}
