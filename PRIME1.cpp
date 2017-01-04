#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,m,c;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        for(int i=n;i<=m;i++)
        {   c = 0;
            for(int j=2;j<=(i/2);j++)
            {
                if(i%j==0)
                   {
                      c++;
                      break;
                   }
            }
            if(c==0 && i!=1)
                cout << i << endl;

        }
    cout << endl;

    }
    return 0;
}
