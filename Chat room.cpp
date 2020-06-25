#include <iostream>
#include <string.h>
using namespace std;
 
int main()
{
    string str;
    cin>>str;
    for (int i = 0 ; i< str.length(); )
    {
        if (str[i]=='h')
        {
            i++;
            while(str[i]!='e') {if (i>=str.length()) break; i++;}
            if(str[i]=='e')
            {
                i++;
                while(str[i]!='l') {if (i>=str.length()) break; i++;}
                if (str[i]=='l')
                {
                    i++;
                    while(str[i]!='l') {if (i>=str.length()) break; i++;}
                    if(str[i]=='l')
                    {
                        i++;
                        while(str[i]!='o') {if (i>=str.length()) break; i++;}
                        if (str[i]=='o') { cout<<"YES"; return 0;}
                        else i++;
                        
                    }
                    else i++;
                }
                else i++;
                
            }
            else i++;
            
        }
        else i++;
        
    }
    cout<<"NO";
    return 0;
}