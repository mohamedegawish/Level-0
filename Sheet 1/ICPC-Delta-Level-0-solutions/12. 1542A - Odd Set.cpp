#include <bits/stdc++.h>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        int n;
        cin >> n;
        int arr[2 * n];
        int even_count = 0, odd_count = 0;

        for (int i = 0; i < 2 * n; i++) {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
                even_count++;
            else
                odd_count++;
        }

        if (even_count == n && odd_count == n) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
