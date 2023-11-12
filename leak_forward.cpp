#include <iostream>
#include <limits.h>
#include <fstream>

unsigned long long a[0];

int main()
{
    freopen("leak_forward.bin", "w", stdout);
    for (unsigned long long i=1; i<=ULONG_MAX; i++) std::cout << char(a[i]);
}
