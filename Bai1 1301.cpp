#include <iostream>
using namespace std;

int main() {
    int n;
    int a[100]; 

    cout << "Nhap so phan tu n = ";
    cin >> n;

    cout << "Nhap cac phan tu cua mang:\n";
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    cout << "Cac phan tu cua mang la: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}

