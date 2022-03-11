#include<iostream>
#include<vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	int T = n;
	int a[1000];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		int temp = i;
		for (int j = i; j < n; j++) {
			if (a[temp] > a[j])temp = j;
		}
		swap(a[temp], a[i]);
		cout << "swap(a["<<i<<"], a["<<temp<<"]):";
		for (int i = 0; i < n; i++) {
			if (i == n - 1)cout << a[i]<<endl;
			else cout << a[i] << " ";
		}
	}
	return 0;
}
