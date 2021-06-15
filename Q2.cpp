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
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int money;
		cin>>money;
		
		int robot_verdict;
		cin>>robot_verdict;
		
		vector<int> v;
		for(int i=0;i<n;i++){
			if(arr[i]%money==0){
				v.push_back(arr[i]/money);
			}
		}
		bool check=false;
		for(int i=0;i<v.size();i++){
			if(v[i]>=robot_verdict)
				check=true;
		}
		
		if(check)
			cout<<"Right"<<endl;
		else 
			cout<<"Wrong"<<endl;
		
	iter++;	
	}
    return 0;
}


