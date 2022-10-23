#include <iostream>
int count(const int* b, const int* e, int n)
{
    int count = 0;
    for (b; b < e; ++b)
    {
        if(*b == n ) count++;
    }
    return count;
}

int main() {
const int table[] = {-1, 7, -1, 12, -1, -2, 10};
int result = count(table, table + 7, -1);
std::cout << result << std::endl; }