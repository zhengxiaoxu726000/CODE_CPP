#include <iostream>
using namespace std;

int main(){
    int n = 10;
    int m = 7;
    cin >>n >>m;
    if (m > n-m)
        m = n-m;
    int r = 1;
    for (int i = 1, j = n;i <= m; i++,j--)
    {
        r = r * j / i;
    }
    cout<<r;
    return 0;
}