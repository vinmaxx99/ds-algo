#include <bits/stdc++.h>
using namespace std;
#define ll  long long int
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ll t;
  cin >> t;
  while(t--)
  {
    ll n;
    cin >> n;
    ll rem[50]={0};
    ll d;
    ll k=0;
    while(n>0)
    {
      d = n%3;
      rem[k]=d;
      k++;
      n/=3;
    }
    for (ll i = 0; i < k; i++) {
      if(rem[i]>=2)
      {
        rem[i+1]+=1;
        for (ll j = 0; j <= i; j++) {
          rem[j]=0;
        }
      }
    }
    ll it = 1;
    ll ans = 0;
    for (ll i = 0; i <=k; i++) {
      ans += rem[i]*it;
      it*=3;
    }
    cout << ans << endl;
  }
}
