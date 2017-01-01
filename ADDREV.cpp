#include<bits/stdc++.h>
using namespace std;

int reverse_func(int a)
{
    int rev=0,r;
    while(a>0)
    {
        r = a%10;
        rev = rev*10 + r;
        a = a/10;
    }
    return rev;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        while(a%10==0)
            a = a/10;
        while(b%10==0)
            b = b/10;
        int c,d;
        c = reverse_func(a);
        d = reverse_func(b);

        a = c + d;
        while(a%10==0)
            a=a/10;
        cout << reverse_func(a) << endl;

    }
    return 0;
}
