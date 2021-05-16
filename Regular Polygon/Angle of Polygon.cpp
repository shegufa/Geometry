#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define pi acos(-1)

#define sc(n) scanf("%I64d",&n)
#define sc2(a,b) scanf("%I64d%I64d",&a,&b)
#define loop(a,b) for(ll i=a;i<=b;i++)

#define print(n) printf("%I64d",n)
#define newline printf("\n")

int main()
{
    ll t,n;
    double ans;
    sc(t);
    while(t--){
        sc(n);
        ans = (n-2)*180;
        ans = 1.0*ans/n;
        printf("%0.6lf\n",ans);
    }
    return 0;
}

