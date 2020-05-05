#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int R[n];
    for (int i = 0; i < n; i++)
        cin >> R[i];
    int maximum = -200000000;
    int minimum = R[0];
    for(int i = 1; i < n; i++)
    {
        maximum = max(maximum, R[i] - minimum);
        minimum = min(minimum, R[i]);
    }
    cout << maximum << endl;
    return 0;
}
