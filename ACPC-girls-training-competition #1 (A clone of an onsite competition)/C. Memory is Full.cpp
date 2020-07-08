#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , total , needed , apps, freed , used  , removed;
    int sizes [100];
    cin >> n;
    
    int counter = 0 ;

    while (counter < n)
    {
       removed = 0;
       used = 0 ;
       cin >> total >> needed >> apps;
     
       for (int i = 0; i < apps ; i ++)  { cin >> sizes [i] ; used += sizes[i]; }
       freed = total - used ;
       //cout << freed <<endl ;
       sort (sizes , sizes + apps);
       
       for (int i = apps-1 ; i >= 0 ; i --)
       {
           if (freed >= needed) break;
           
           freed += sizes [i];
           //cout << freed <<endl;
           removed ++;
           
       }
       
        cout << removed<<endl;
        counter ++;
        
    }
    
    return 0;
}
