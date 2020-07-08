#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr1[1000];
    int arr2[1000];
    string str1,str2;
    cin>>str1>>str2;
    int sum=0;
    for (int i = 0; i<n ;i++) arr1[i]=str1[i];
    for (int i = 0; i<n ;i++) arr2[i]=str2[i];

    for (int i=0; i<n ;i++)
    {
        int sum1 = abs(arr1[i]-arr2[i]); 
        int sum2 = abs(abs(arr1[i]-arr2[i])-10);
        sum+=std::min(sum1,sum2); 
    }
    cout<<sum;
    return 0;
}
