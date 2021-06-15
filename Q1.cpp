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
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n-1;i++){
			arr[i]=(i+1);
		}
		arr[n-1]=-1*(((n-1)*(n))/2);
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	iter++;	
	}
    return 0;
}


