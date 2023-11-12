#include <iostream>
#include <limits.h>
#include <fstream>

unsigned long long a[0];

int main()
{
    freopen("leak_backward.bin", "w", stdout);
    for (unsigned long long i=ULONG_MAX; i--;) std::cout << char(a[i]);
}
