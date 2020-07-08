#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , m ;
    cin >> n >> m;
    vector <pair <int , int>> v(10000);
    map <int , int> relations ;
    for (int i = 0; i< m ; i++)
    {
         cin>> v[i].first;
         cin>> v[i].second;
         relations[v[i].first] ++ ;
         relations[v[i].second] ++ ;
    }

  
    v.resize (m);
    vector <int> removed (10000);
    int to_removed ;
    int counter = 0;
    int updated = m ;
    while (1)
    {
        to_removed = 0 ;
        for (auto i=relations.begin() ; i!=relations.end(); i++)
        {
            if (i-> second == 1)
            {
                removed.insert(removed.begin(),i->first);
                relations [i->first] --;
                to_removed ++ ;
            }
        }

        removed.resize(to_removed);

        if (to_removed == 0 ) break;
        else counter ++ ;

        for (int j = 0 ; j < to_removed ; j ++)
            {
                for (int i = 0 ; i<v.size() ; i++)
                {
                        if (v[i].first == removed[j])  {updated-- ; if (relations [v[i].second] != 0) relations [v[i].second]-- ; remove(v.begin(),v.end(),make_pair(v[i].first,v[i].second));}
                        if (v[i].second == removed[j]) {updated-- ; if (relations [v[i].first] != 0) relations [v[i].first]--; remove(v.begin(),v.end(),make_pair(v[i].first,v[i].second)); }

                }

                if (updated <= 0) break;
                else { v.resize(updated); }
            }
            removed.clear();

    }

    cout <<counter;
    return 0;
}
