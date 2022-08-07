// JAY SWAMINARAYAN //
// DIGANT SHELADIYA //
// Codeforces:Digant0204 //

#include<iostream>
#include<cstring>
#include<cstdio>
#include<set>
#include<string>
#include<map>
#include<stack>
#include<cmath>
#include<queue>
#include<vector>
#include<cstdlib>
#include<algorithm>
using namespace std;
#define test int t; cin>>t; while(t--)
#define pi (3.141592653589)
#define ll long long int
#define of(i, x, n) for (ll i = x; i >= n; i--)
#define f(i, x, n) for (ll i = x; i < n; i++)
#define fr(i, m) for (auto i : m)
#define vl vector<long long>
#define vs vector<string>
#define sl set<ll>
#define ss set<string>
#define sc set<char>
#define mll map<ll,ll>
#define mcl map<char,ll>
#define msi map<string,int>
#define msl map<string,ll>
#define pb push_back
#define pp pop_back
#define float double
#define all(v) (v).begin(), (v).end()
#define bll(v) (v).begin(), (v).end(),greater<int>()
#define fi first
#define se second
#define maxi *max_element
#define mini *min_element
#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define M 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define rtn return
ll gcd(ll a, ll b)
{if (b == 0){rtn a;}rtn gcd(b, a % b);}
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll binpow(ll x,ll y)
{
    if(y==0){rtn 1;}
    if(y==1){rtn x;}
    ll ans=binpow(x,y/2);
    if(y%2==0){rtn (ans*ans);}
    rtn (ans*ans*x);
}
bool perfectsq(double x)
{
    if (x>=0)
    {ll sr = sqrt(x); rtn (sr*sr==x);}
    rtn false;
}
bool isprime(ll number)
{
    if (number <= 1)
        rtn false;
    if (number == 2)
        rtn true;
    if (number % 2 == 0)
        rtn false;
    ll boundary = (ll)floor(sqrt(number));
    for (ll i = 3; i <= boundary; i += 2)
        if (number % i == 0)
            rtn false;
    rtn true;
}
vl prime;
void primeFactors(ll n)
{
    ll c=2;
    while(n>1){if(n%c==0){prime.pb(c); n/=c;} else c++;}
}
ll nCr1[1001][1001];
ll nCr(ll n,ll r)
{
    if(nCr1[n][r])rtn nCr1[n][r];
    if(r==1) rtn nCr1[n][r]=n;
    if(n==r) rtn nCr1[n][r]=1;
    if(r==0) rtn nCr1[n][r]=1;
    rtn nCr1[n][r]=(nCr(n-1,r) + nCr(n-1,r-1));
}
// !(n&(n-1)) --> n==2^x n&(n-1) --> n!=2^x
void solve()
{
    ll n;
    cin>>n;
    vl v,v1,v2,v3;
    ll x[n],y[n];
    ll ct=0;
    f(i,0,n)
        {
            cin>>x[i]>>y[i];
        }
    f(i,0,n)
        {
            if(x[i]>0)
                v.pb(x[i]);
            else if(x[i]<0)
                v1.pb(x[i]);
            if(y[i]>0)
                v2.pb(y[i]);
            else if(y[i]<0)
                v3.pb(y[i]);
        }
    sort(all(v1));
    sort(bll(v));
    sort(all(v3));
    sort(bll(v2));
    if(v1.size())
        ct+=(2*abs(v1[0]));
    if(v.size())
        ct+=2*(v[0]);
    if(v2.size())
        ct+=2*v2[0];
    if(v3.size())
        ct+=(2*(abs(v3[0])));
    cout<<ct<<endl;
}
int main()
{
    fast;
        test
    solve();
    rtn 0;
}


