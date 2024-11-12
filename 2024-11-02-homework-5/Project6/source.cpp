#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>
int main() {
	int n = 0;
	int m = 0;
	int a = 0;
	scanf_s("%d", &n);
	scanf_s("%d", &m);
	std::set <int> q;
	for (int z = 0; z < n; z++) {
		scanf_s("%d", &a);
		q.insert(a);
	}
	std::set <int> p;
	std::set <int> l;
	for (int z = 0; z < m; z++) {
		scanf_s("%d", &a);
		p.insert(a);
	}
	set_intersection(q.begin(), q.end(), p.begin(), p.end(), inserter(l, l.begin()));
	for (auto c : l)
		printf("%d%c", c, ' ');
	return 0;
}

