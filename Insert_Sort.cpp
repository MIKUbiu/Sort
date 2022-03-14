#include<iostream>
using namespace std;
int binary_search(int a[], int n, int target) {
    int left = 0, right = n - 1;
    int mid;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (target < a[mid]) {
            right = mid - 1;
        }

        else if (target > a[mid]) {
            left = mid + 1;
        }
        else return mid;
    }
    return left;

}
int main() {
    int n;
    int a[10]={ };
    for (int i = 0; i < 9; i++) {
        cin >> a[i];
    }
    cin >> n;
    int s = binary_search(a, 9, n);
   /* cout << s;*/
    for (int i = 10-1; i > s; i--) {
        a[i] = a[i - 1];
    }
    a[s] = n;//插入元素
   /* for (int i = 0; i <s; i++) {
        cout << a[i] << endl;
    }
    cout << n << endl;
    for (int i = s ; i < 10; i++) {
        cout << a[i] << endl;

    }*/
    for (int i = 0; i < 10; i++) {
        cout << a[i] << endl;
    }
  /*  int s = binary_search(a, 9, n);
    cout << s;*/


    return 0;
}