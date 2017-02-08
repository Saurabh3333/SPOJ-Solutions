#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a,b,i,j,initial,temp,t,size1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        size1 = b-a+1;
        int arr[size1];
        for(i=0;i<size1;i++)
            arr[i]=0;
        if(a==1)
            arr[0]=1;
        for(i=2;i*i<=b;i++)
        {
            if(i<a)
              {initial = (a/i)*i; if(initial!=a) initial=initial+i;}
            else
                {
                    if(arr[i-a]==0)
                        initial = 2*i;
                    else
                        initial = i;
                }

            for(j=initial;j<=b;j+=i)
            {
                temp = j-a;
                if(arr[temp]==0)
                    arr[temp]=1;
            }
        }
        for(i=0;i<size1;i++)
        {
            if(arr[i]==0)
               printf("%d\n",i+a);
        }

    }

    return 0;
}
