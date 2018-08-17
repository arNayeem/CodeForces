//41662255 nayeem2021	 GNU C++14	Accepted	404 ms	1004 KB 2018-08-16 22:00:30	

#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> m;
    char x[32];
    int t;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%s", x);
        if(m.find(x)!=m.end())
        {
            m[x]+=1;
            printf("%s%d\n",x,m[x]);
        }
        else
        {
            m[x];
            printf("OK\n");
        }
    }
    return 0;
}
