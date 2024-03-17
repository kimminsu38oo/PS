#include<iostream>
#define N 1000001
using namespace std;
int n,t;
long long d[N];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	for (int i = 1; i < N; i++) {
		for (int j = 1; j * i < N; j++) {
			d[i*j]+=i;
		}
		d[i] += d[i - 1];
	}
	cin >> t;
	while (t--) {
		cin >> n;
		cout << d[n] << "\n";
	}
}