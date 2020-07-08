#include <iostream>
using namespace std;
#include <string.h>
#include <algorithm>
#include <bits/stdc++.h>
 
int main()
{
    int n,x,app; 
    cin>>n;
    map <int, int> neg;
    map <int, int> pos;
    int collected = 0 ;
    for (int i = 0 ; i< n ; i++)
    {
        cin>>x>>app;
        if (x>0) pos[x]=app;
        else  neg[x]=app;
    }
    if (neg.size() == pos.size()) 
    {
        for (auto i=pos.begin() ; i!=pos.end(); i++)
            collected+=i->second;
        for (auto i=neg.begin() ; i!=neg.end(); i++)
             collected+=i->second;
    }
    else if (neg.size() == 0) { cout << pos.begin()->second; return 0 ;}
    else if (pos.size() == 0) { cout << neg.rbegin()->second; return 0 ;} 
    
    else 
    {
        if (pos.size() > neg.size())
        {
            for (auto i=neg.begin() ; i!=neg.end(); i++) //collect all apples in the -ve dir
                collected+=i->second;   
            int j;    
            auto i=pos.begin();
            for ( i=pos.begin(),  j=0 ; i!=pos.end(), j<=neg.size(); i++,j++)
             collected+=i->second;
        }
        
        else if (neg.size() > pos.size())
        {
            for (auto i=pos.begin() ; i!=pos.end(); i++) //collect all apples in the +ve dir
                collected+=i->second;   
            int j;    
            auto i = neg.rbegin();
            for ( i=neg.rbegin(),  j=0 ; i != neg.rend(), j<=pos.size(); i++,j++)
             collected+=i->second;
        }
    }
   
    cout<<collected;    
    return 0;
}
