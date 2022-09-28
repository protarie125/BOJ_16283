#include <iostream>
#include <vector>

using namespace std;

using vi = vector<int>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b, n, w;
	cin >> a >> b >> n >> w;

	auto ansX = vi{};
	auto ansY = vi{};
	for (auto x = 1; x < n; ++x) {
		const auto& y = n - x;
		if (a * x + b * y == w) {
			ansX.push_back(x);
			ansY.push_back(y);
		}
	}

	if (1 == ansX.size()) {
		cout << ansX[0] << ' ' << ansY[0];
	}
	else {
		cout << -1;
	}

	return 0;
}