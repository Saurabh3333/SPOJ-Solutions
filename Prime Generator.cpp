#include <bits/stdc++.h>
#define s 100001
using namespace std;

int main()
{
    long long i,j,t,m,n;
    bool arr[s];
    for(i=0;i<s;i++)
        arr[i] = true;

     arr[0] = false;
     arr[1] = false;

     for(i=2;i<=sqrt(s);i++)
     {
         if(arr[i] == true)
         {
             for(j=2;i*j<=s;j++)
                arr[i*j] = false;
         }
     }




     cin >> t;
     while(t--)
     {
         cin >> m >> n;
         if(n<s)
         {
         for(i=m;i<=n;i++)
         {
             if(arr[i] == true)
                cout << i << endl;
         }
         }
     }

    return 0;
}
