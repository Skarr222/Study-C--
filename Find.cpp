#include <iostream>

int*find(int t[], int n, int x){
	int *i = 0;
	for(;i <t+n && *i !=x; ++i);
	return i;// adress elementu tablicy
}

int main () {
 int t[]= {1, 13,24, 12,21,45,67,-2};
 int *i=find(t, 8, 21);
 std::cout << i- t << std::endl; // uzyskanie adresu wskaŸnika elementu tablicy
 }
