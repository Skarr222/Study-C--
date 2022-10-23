#include <iostream>
int* unique (int *begin, int *end) 
{
    if(begin == end)
    {
        return end;
    }
    else
    {
        int* endAdress = begin + 1;
        for(int *i = begin + 1; i < end; i++ )
        {
            if (*i != *(i-1))
            {
                *endAdress = *i;
                endAdress++;
            }
        }
       return endAdress; 
    }
}


int main() {
int table[] = {3, 3, 3, 4};
int *result = unique(table, table + 4);
for (const int *pointer = table; pointer < result;) {
std::cout << *pointer++ << " "; }
std::cout << std::endl; }
