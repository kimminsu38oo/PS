//새로 배운 개념
//xmodN=(xmodN)modN

#include<iostream>
using namespace std;
int n;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	while (cin >> n) {
		int cnt = 1, t = 1;
		while (t % n != 0) {
			cnt++;
			t = t * 10 + 1;
			t %= n;
		}
		cout << cnt << "\n";
	}
}
