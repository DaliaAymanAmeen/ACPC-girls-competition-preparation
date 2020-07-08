#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{ 
    int  n ;
    string s [9];
    cin >> n;
    int counter = 0 ;
    while (counter < n)
    {
        int flag = 0;
        for (int i = 0; i < 9 ; i++) cin>>s[i];
        
        for (int i = 0 ; i < 9 ; i++)
        {
            for (int j = 1 ; j < 9 ; j++)
            {
                if (s[i][0] == s [i][j]) {cout<<"Invalid"<<endl ; flag = 1 ; break;}
                
            }
            
            if (flag == 1 ) break;
            
            for (int j = 1 ; j < 9 ; j++)
            {
                if (s[0][i] == s [j][i]) {cout<<"Invalid"<<endl ; flag = 1 ; break;}
                
            }
              
        }
        
        
        if (flag == 0) 
        {
          
            for (int i = 0 ; i < 9 ; i += 3 )
            {
               if (s[0][i] == s[1][i + 1] || s[0][i] == s[1][i + 2]  || s[0][i] == s[2][i + 1] || s[0][i] == s[2][i + 2] ) 
                {cout<<"Invalid"<<endl ; flag = 1 ; break;}
            }
 
        }
         if (flag == 0) 
        {
            for (int i = 0 ; i < 9 ; i += 3 )
            {
               if (s[3][i] == s[4][i + 1] || s[3][i] == s[4][i + 2]  || s[3][i] == s[5][i + 1] || s[3][i] == s[5][i + 2] ) 
                {cout<<"Invalid"<<endl ; flag = 1 ; break;}
            }
 
        }
         if (flag == 0) 
        {
            for (int i = 0 ; i < 9 ; i += 3 )
            {
               if (s[6][i] == s[7][i + 1] || s[6][i] == s[7][i + 2]  || s[6][i] == s[8][i + 1] || s[6][i] == s[8][i + 2] ) 
                {cout<<"Invalid"<<endl ; flag = 1 ; break;}
            }
 
        }
        
        if (flag == 0) cout<<"Valid"<<endl;
        counter ++;
 
    }
    
    return 0;
}
