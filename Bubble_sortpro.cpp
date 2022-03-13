#include<iostream>
#include<vector>
using namespace std;
void Bubble_Sortpro(int a[], int n) {
	int cnt = 0;//统计交换次数
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = n - 1; j > i; j--) {
			if (a[j] > a[j - 1]) { swap(a[j], a[j - 1]); cnt++; }
		}
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] <<" ";
	}
	cout << endl;
	cout << cnt;
}
int main() {
	int a[1000];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	Bubble_Sortpro(a, n);

	return 0;
}
