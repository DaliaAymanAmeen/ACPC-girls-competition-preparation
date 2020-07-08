#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{ 
    long long int  n , num , sum ;
    vector <long long int> numbers (100000);
    cin >> n;
    int counter = 0 ;

    while (counter < n)
    {
        cin >> num;
        sum = 0;
        numbers.resize(num);
        for (long long int i = 0 ; i < num ; i++) cin>>numbers[i];
        sort(numbers.begin(), numbers.end()); 
        
        for (auto i = numbers.begin() ; i != numbers.end() ; )
        {   
            if (std::next(i) == numbers.end()) break; //don't check the last element 
            
            long long int value = 31 + *i ;
            //cout << value << endl;
            auto it = upper_bound (++i , numbers.end() , value); 
            //i--;
            
            if (it == i)  
            {
                if ( *i <= value ) 
                    //i++;
                    sum += numbers.end() - i  ; 
                    
                else continue ;
            } 
            //cout << *it << endl;
            //i++;
            sum += it - i ;
            //cout << sum << endl;
 
        }
        
        cout <<sum<<endl;
        counter ++;
        
    }
    
    return 0;
}