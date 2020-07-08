#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n_plates , n_juisy ;
    vector <int> plates(1000000);
    vector <int> juisy(1000000);
    vector <int> pre(1000000); 
 
    cin >> n_plates ;
    for (int i = 0 ; i < n_plates ; i++) cin>>plates[i];
    plates.insert(plates.begin(),0);
    plates.resize(n_plates+1);

    cin >> n_juisy ;
    for (int i = 0 ; i < n_juisy ; i++) cin>>juisy[i];
    juisy.resize(n_juisy+1);
    
    for (int i = 1 ; i <= n_plates ; i++)
    {
        pre [i] = plates[i] + pre[i-1];
    }
    pre.resize(n_plates+1);

    for (int j = 0 ; j < n_juisy ; j++)
    {
        auto it = lower_bound (pre.begin() , pre.end() , juisy[j]);
        cout << it - pre.begin() << endl ;
  
        
    }
   
     return 0;
}