#include <iostream>
using namespace std;

int main() {
int a[10] = {10, 20, 30};
int n = 3, pos = 2, value = 15;

for (int i = n; i >= pos; i--)
    a[i] = a[i - 1];

a[pos - 1] = value;
n++;

for (int i = 0; i < n; i++)
    cout << a[i] << " ";

return 0;

}
