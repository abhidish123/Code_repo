#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<double> vd;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<pi> vp;
typedef vector<pl> vpl;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);

	int n, q;
	cin >> n >> q;

	vi a(n);
	map<int, int> m;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		m[a[i]] = i;
	}

	sort(a.begin(), a.end());


	vi sol;
	for (int e = 0; e < q; ++e) {
		int x;
		cin >> x;

		int k = upper_bound(a.begin(), a.end(), x) - a.begin();
		if (k == n) {
			sol.push_back(m[a[n - 1]] + 1);
			continue;
		}
		if (k == 0) {
			sol.push_back(m[a[0]] + 1);
			continue;
		}

		int d = a[k] - x, d1 = x - a[k - 1];

		if (d <= d1)
			sol.push_back(m[a[k]] + 1);
		else
			sol.push_back(m[a[k - 1]] + 1);
	}

	for (auto& i : sol)
		cout << i << '\n';
}
