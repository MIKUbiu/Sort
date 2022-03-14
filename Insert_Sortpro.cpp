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
    cin >> n;
    int a[1000] = { };
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            
            int temp = binary_search(a, i, a[i]);
            int temp1 = a[i];
            for (int j = i; j >temp; j--) {
                a[j] = a[j-1];
            }
            a[temp] = temp1; //插入元素;
           
        }
    }
   
    
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}