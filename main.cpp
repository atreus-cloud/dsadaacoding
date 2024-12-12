#include<iostream>
using namespace std;

int main(void){
    int a = 500;
    int b = 192;
    while(b!=0)
    {
        int r = a%b;
        a = b;
        b = r;
    }
    cout << a;
}