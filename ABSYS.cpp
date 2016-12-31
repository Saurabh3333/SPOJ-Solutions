#include<bits/stdc++.h>
using namespace std;

#define MAX 100000
#define siz 7  // machula size

int main()
{
    int t,i, missing;
    char s1[MAX],s2[MAX],s3[MAX];
    int l1,l2,l3,pos,c;
    char add[1],equality[1];
    cin >> t;
    while(t--)
    {
        pos = 0; c = 0;
        scanf("%s%s%s%s%s",&s1,&add,&s2,&equality,&s3);
       // printf("%s%s%s%s%s",s1,add,s2,equality,s3);
        //cout << add[0];
        l1 = strlen(s1);
        l2 = strlen(s2);
        l3 = strlen(s3);

        // finding machula
        if(l1>=siz){
        for(i=0;i<l1;i++)
        {
            if(s1[i]=='m')
            { c = 1; pos = 1; break;}
        }}

        if(l2>=siz && c==0){
        for(i=0;i<l2;i++)
        {
            if(s2[i]=='m')
            {  c = 1; pos = 2; break;}
        }}
        // cout << l3 <<" *" << siz;
        if(l3>=siz && c==0){
        for(i=0;i<l3;i++)
        {
            if(s3[i]=='m')
            {  pos = 3; break;}
        }}
        // printf("%s a %s a%s a%sa %s ",s1,s2,s3,add,equality);
        //-------------------
        // cout << " /" << c << pos;
        switch(pos)
        {
            case 1 :
                {
                     missing = atoi(s3) - atoi(s2);

                     cout << missing << " " << add[0] << " " << s2 << " " << equality[0] << " " << s3;
                     break;
                }

            case 2 :
                {
                    missing = atoi(s3) - atoi(s1);
                   cout << s1 << " " << add[0] << " " << missing << " " << equality[0] << " " << s3;
                   break;

                }

            case 3 :
                {
                    missing = atoi(s1) + atoi(s2);
                   // cout << add << equality << endl;
                    cout << s1 << " " << add[0] << " " << s2 << " " << equality[0] << " " << missing;
                    break;
                }
        }

        cout << "\n";

    }
    return 0;
}
