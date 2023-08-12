#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int l;
	cin >> l;

	auto cake = vi(l, 0);
	int n;
	cin >> n;

	auto anse = int{ -1 };
	auto ansv = int{ -1 };
	auto mexp = int{ 0 };
	auto mval = int{ 0 };
	auto now = int{ 1 };
	while (0 < (n--)) {
		int x, y;
		cin >> x >> y;

		auto exp = y - x + 1;
		if (mexp < exp) {
			mexp = exp;
			anse = now;
		}

		auto val = int{ 0 };
		for (auto i = x - 1; i < y; ++i) {
			if (0 == cake[i]) {
				++val;
				cake[i] = now;
			}
		}

		if (mval < val) {
			mval = val;
			ansv = now;
		}

		++now;
	}

	cout << anse << '\n' << ansv;

	return 0;
}