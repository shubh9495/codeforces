 
#include<bits/stdc++.h>
// #define ll long long
// #define pb push_back
// #define fr(a,b) for(int i = a; i < b; i++)
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define mod 1000000007
// #define inf (1LL<<60)
// #define all(x) (x).begin(), (x).end()
// #define prDouble(x) cout << fixed << setprecision(10) << x
// #define triplet pair<ll,pair<ll,ll>>
// #define goog(tno) cout << "Case #" << tno <<": "
// #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
// #define read(x) int x; cin >> x
using namespace std;
 
// void init_code(){
//     fast_io;
//     #ifndef ONLINE_JUDGE
//     freopen("inputf.in", "r", stdin);
//     freopen("outputf.out", "w", stdout);
//     #endif 
// }

typedef long long ll;

int main() {
	int n ;
	cin>> n;
	int count = 0;
	int arr[5] = {0};
	for(int i=0;i<n;i++)
	{
		int num;
		cin>>num;
		arr[num]++;
	}

	count +=  arr[4] + arr[3] + arr[2]/2;

	arr[1] -= arr[3];

	if(arr[2]%2 > 0)
	{
		count+=1;
		arr[1] -= 2;//because we have 2 + 1 + 1;
	}

	if(arr[1] > 0)
	{
		count += (arr[1] + 3)/4;
	}

	cout<<count<<endl;	
	return 0;
}