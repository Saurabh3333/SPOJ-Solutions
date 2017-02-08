#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        if(a==b)
        {
            if(a%2==0)
                printf("%d\n",a+a);
            else
                printf("%d\n",a+a-1);
        }
        else if(a-b==2)
        {
            if(a%2==0)
                printf("%d\n",a+b);
            else
                printf("%d\n",a+b-1);
        }
        else
            printf("No Number\n");
    }
}
