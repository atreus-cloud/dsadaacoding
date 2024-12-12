#include<iostream>
#include<string>
// check palindromes by recusrion, iterate till len/2 and check and recal start and end go to start+1, end-1 and so on
using namespace std;

bool checkp(int i, string& s)
{
    int len = s.length();
    
    if(i >= len/2)
    {
        return true;
    }
    
    if (s[i] != s[len - i - 1])
    {
        return false;
    }
    
    return checkp(i+1, s);
}

int main(void){
//     string s = "radar";
//     int i = 0;
//     int len = s.length();
//     bool flag = true;
//     while(flag)
//     {
//         if (i >= (len)/2)
//         {
//             flag = true;
//         }
        
//         if (s[i] != s[len-i-1])
//         {
//             flag = false;
//         }
//         i++;
        
//     }
//     cout << flag;
        string s = "rada";
        cout << checkp(0,s);
}
