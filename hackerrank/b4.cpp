#include<iostream>
using namespace std;

int main() {
    int a, b, c, d;
    
    cout << "Nhap gia tri a: ";
    cin >> a;
    cout << "Nhap gia tri b: ";
    cin >> b;
    cout << "Nhap gia tri c: ";
    cin >> c;
    cout << "Nhap gia tri d: ";
    cin >> d;

    int max = a;

    if (b > max) {
        max = b;
    }

    if (c > max) {
        max = c;
    }

    if (d > max) {
        max = d;
    }

    cout << "So lon nhat la: " << max;

    return 0;
}
