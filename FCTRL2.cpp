#include <bits/stdc++.h>
#define MAX 1000
using namespace std;

int main()
{
    int t,n;
    int factorialArray[MAX];
    int numberOfElementsInCurrentArray, carry, product, pos;
    cin >> t;
    while(t--)
    {
        cin >> n; factorialArray[0]=1;
        carry = 0; numberOfElementsInCurrentArray=1;
        for(int i=2;i<=n;i++)
        {  // cout << "*" << numberOfElementsInCurrentArray << "*";
            pos = 0;
            while(numberOfElementsInCurrentArray--)
            {

                product = factorialArray[pos]*i+carry;
                factorialArray[pos] = product%10;
                carry = product/10;
                pos++;

            }
            while(carry>0)
            {
                factorialArray[pos] = carry%10;
                carry = carry/10;
                pos++;
            }
            numberOfElementsInCurrentArray = pos;
            /*
            if(carry!=0)
            {
                factorialArray[pos] = carry;
                numberOfElementsInCurrentArray = pos+1;
            }
            else
                numberOfElementsInCurrentArray = pos; */
        // cout << "/";
       // for(int i=numberOfElementsInCurrentArray-1;i>=0;i--)
         //   cout << factorialArray[i];
        //cout << "/";
        }
        //cout << "*" << numberOfElementsInCurrentArray << "*";
        for(int i=numberOfElementsInCurrentArray-1;i>=0;i--)
            cout << factorialArray[i];
        cout << endl;
    }
    return 0;
}
