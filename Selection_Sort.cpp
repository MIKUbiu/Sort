#include<iostream>
#include<vector>
using namespace std;
void Selection_Sort(int a[],int n) {
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int temp = i;
		for (int j = i; j < n; j++) {
			if (a[temp] > a[j])temp = j;
		}
		swap(a[temp], a[i]);
		cnt++;
	}for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl << cnt;
	


}
int main() {
	int n;
	cin >> n;
	int T = n;
	int a[1000];
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	Selection_Sort(a, n);
	return 0;
}