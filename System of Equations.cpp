#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ,m;
    cin>>n>>m;
    int max_num = max(n,m); 
    set<pair<int,int>> s1;
    set<pair<int,int>> s2;
    int counter = 0;
    
    for (int i = 0 ; i<= max_num ; i++)
    {
        for (int j = 0 ; j <= max_num ; j++)
        {
            if (i*i + j == n ) 
                s1.insert (make_pair(i,j));
        }
    }
    
    for (int i = 0 ; i<= max_num ; i++)
    {
        for (int j = 0 ; j <= max_num ; j++)
        {
            if (i + j*j == m) 
            {
                 if(std::find(s1.begin(), s1.end(), make_pair(i,j)) != s1.end())
                    counter ++;
            }
        }
    }
    
    cout << counter ;
    return 0;
}
