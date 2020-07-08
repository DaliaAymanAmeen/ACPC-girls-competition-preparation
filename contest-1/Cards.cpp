#include <iostream>
#include <vector>
using namespace std;
#include<bits/stdc++.h>

int main()
{
    int n;
    cin>>n;
    long long int sum = 0;
    int arr[100];
    for (int i=0; i<n ; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }

    int cards = sum / (n/2);
    vector <int> x;
    vector <int> y;

    for (int i = 0 ;i<n; i++)
    {
        auto it = std::find (y.begin(), y.end(), i);
        if (it != y.end()) continue;

        for (int j = i+1 ; j<n ; j++)
        {
            if (arr[i]+arr[j] == cards)
            {
                auto it = std::find (y.begin(), y.end(), j);
                if (it != y.end()) continue;
               x.push_back(i);
               y.push_back(j);
               break;
            }
        }
    }
    for (int i = 0; i<n/2 ; i++)
    {
        cout<<x[i]+1<<" "<<y[i]+1<<endl;
    }

    return 0;
}
