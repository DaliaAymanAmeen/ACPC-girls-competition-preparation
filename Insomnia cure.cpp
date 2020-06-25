#include <iostream>
using namespace std;
#include <string.h>
#include <algorithm>
#include <bits/stdc++.h>
 
int main()
{
 
   int d, k,l,m,n ;
   cin>>k >>l>>m>>n >>d;
   int harmed=d;
   if (k==1 || l==1 || m==1 || n==1) {cout<<d; return 0;}
   
   if (m>d && n>d && k>d &&l>d) {cout<<"0"; return 0;}
 
   for (int i=1 ; i<=d ;i++)
   {
        if( (i%k != 0) && (i%l != 0) && (i%m != 0) && (i%n != 0) )
        harmed--;
   }
 
    cout<<harmed;
    return 0;
}