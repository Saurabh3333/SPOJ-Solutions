#include <bits/stdc++.h>
#define MAX 100000
using namespace std;

int main()
{
    long long int t,n,i,c;
    cin >> t;
    while(t--)
    {
        c = 0;
        cin >> n;
        i = 5;
        while(i<=n)
        {
            c = c + n/i;
            i = i*5;
        }
        cout << c << endl;
    }
    return 0;
}
