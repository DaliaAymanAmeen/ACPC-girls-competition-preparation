#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   
    long long int n, m , q ,x ,y;
    vector<long long int> v(1000000) ;
    vector<long long int>v1(1000000);
     vector<long long int>arranged1(1000000) ;
    cin >> n;
    for (int i = 0 ; i < n ; i++) cin >> v[i];
    v.insert(v.begin(),0);
    v.resize(n+1);
    for (int i = 1 ; i <= n ; i++)
    {
        v1 [i] = v[i] + v1[i-1];
    }
    sort(v.begin(), v.end()); 
    for (int i = 1 ; i <= n ; i++)
    {
        arranged1 [i] = v[i] + arranged1[i-1];
    }
    cin >> m ; 
    for (int i = 0 ; i < m ; i ++)
    {
        cin >>q ; 
        if (q ==1)
        {
            cin>>x >> y;
            cout << v1 [y] - v1 [x-1] <<endl;
        }
        else 
        {
            cin >> x >>y;
           cout << arranged1 [y] - arranged1 [x-1] <<endl;
        }
    }
    return 0;
}
