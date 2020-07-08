#include <iostream>
#include <set>
using namespace std;

int main()
{
    string str ;
    cin>> str;
    multiset <int> myset;
    for (int i = 0 ; i< str.length(); i+=2 ) 
    {
        myset.insert(str[i] - 48);
    }
    
    auto set_size = myset.size();
    int k = 1;

    for ( auto it = myset.begin() ; it != myset.end (); it++) 
    {
        cout << *it ;
        if (k < set_size)
        {
            cout << "+";
            k++;
        }
  } 
    return 0;
}
