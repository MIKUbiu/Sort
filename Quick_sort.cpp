#include<iostream>
#include<vector>
using namespace std;
void Quick_Sort(int*a, int left, int right) {
	if (left > right)return;
	int i = left, j = right;
	while (i != j) {
		
		while (i < j && a[j] >= a[left]) { j--; }
		while (i < j && a[i] <= a[left]) { i++; }
		//一定是右指针先动，左指针后动，如果左指针先移的话，在最后交换基准值的
		//时候，与基准值交换的就不是最小的数了，而是右指针所指向的比基准值大的数，
		//这会导致数组变得无序
		if(i<j)
		swap(a[i], a[j]);
	}
	swap(a[j], a[left]);
	Quick_Sort(a, left, j - 1);
	Quick_Sort(a, j + 1, right);
}
int main() {
	int n;
	int a[10000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	Quick_Sort(a, 0, n - 1);
	for (int i = 0; i < n; i++) {
		cout << a[i]<<" ";
	}
	return 0;
}
