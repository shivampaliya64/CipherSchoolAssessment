#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<set>
#include<queue>
#include<map>
#include<sstream>
#define si(x) scanf("%d",&x);
#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define ld long double
#define ll long long int
#define llu unsigned long long int
#define mod (1000*1000*1000+7)
#define mod1 998244353
#define m_p make_pair
#define pb push_back
#define all(z) z.begin(),z.end()
#define tezz ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define f(i,n) for(int i=0;i<n;i++)
#define f1(i,j,n) for(int i=j;i<n;i++)
#define fr(i,n) for(int i=n;i>=0;i--)
#define INF 1e18
#define pll pair<ll,ll>
#define pii pair<int,int>
const int MAX=2e5+5;
using namespace std;//fuck ratings , love coding
class A{
	private:
		int a,b,c;
	public:
		virtual void display(){
			cout<<"Cheeems\n";
		}
};
class B: public A{
	public:
		void display1(){
			cout<<"Doge\n";
		}
};
vll arr(MAX,0);
int main(){
    tezz;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
	ll t=1;	
	//cin>>t;	
	int iter=1;//kickstart
	while(t--){	
		int n,w;
		cin>>n>>w;
		int arr[n],wt[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int i=0;i<n;i++){
			cin>>wt[i];
		}
		int dp[n+1][w+1];
		dp[0][0]=0;
		for(int i=1;i<=w;i++){
			dp[0][i]=0;
		}
		for(int i=0;i<=n;i++){
			dp[i][0]=0;
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=w;j++){
				if(wt[i-1]<=j){
					dp[i][j]=max(dp[i-1][j],dp[i-1][j-wt[i-1]]+arr[i-1]);
				}
				else{
					dp[i][j]=dp[i-1][j];
				}
			}
		}
		cout<<dp[n][w]<<endl;
	iter++;	
	}
    return 0;
}


