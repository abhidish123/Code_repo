#include<iostream>
#include<vector>
#include<algorithm>

#define pb push_back

typedef long long int ll;

using namespace std;

int main()
{
	ll t,n;
	cin>>t;
	while (t--)
	{
		cin>>n;
		vector<int> vec;
		ll d;
		for (ll i = 0; i < n; i++) {
			cin>>d;
			vec.pb(d);
		}
		cout<<*min_element(vec.begin(),vec.end())<<endl;
	}
}