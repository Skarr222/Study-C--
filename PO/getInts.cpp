#include <iostream>
#include <cstdlib>

int*getInts(int *s){
	*s = 0
	int c = 0; // c - pojemno��zaalokowanych kom�rek
	int *t = nullptr; // null pointer wprowadzony w standardzie c++ 11, inicjalizacja tablicy pustym wska�nikiem, unikamy dzi�ki temu b��du ochorny pami�ci 
					  //std::cin >>s;
					  // int *t =(int*)std::malloc( c * sizeof(int)); // dynamiczna alokacja pami�ci o zadanym rozmiarze w tym wypadku o rozmiarze int.
					  // malloc prosi system aby przydzieli� na stercie odpowiedni� ilosc pami�ci oraz zastrzega ja na potrzeby programu, malloc zwraca adres zaalokowanej przestrzeni

	for (int x; std::cin >> x; ++*s){
		// relokacja pami�ci
		if(*s == c) { // liczba u�ywanech kom�rek do liczby zaakumulowanych
			c = 2 * c + 1;
			int *a = (int*)std::malloc(c * sizeof(int));
			for (int i = 0; i < s; ++i) { // iteracja po nowej tablicy
				a[i] = t[i]; // przepisanie warto�ci do nowej tablicy t[i] <--- warto�ci w tablicy t
			}
			std::free(t);
			t = a; // przepisanie adresu
		}
		t[*s]= x;
	}
	return t;
}


int main() {
	int s;
	int *t = getInts(&s);
	for (int i = 0; i < s; ++i){  
		std::cout << t[i] << " ";
	}
	std::cout << std::endl;
	std::free(t); // zwolnienie zaalokowanej pami�ci na stercie PAMI�TAJ O TYM!!!

}

/*
int s = 0;
int c= 0; // c - pojemno��zaalokowanych kom�rek
int *t = nullptr; // null pointer wprowadzony w standardzie c++ 11, inicjalizacja tablicy pustym wska�nikiem, unikamy dzi�ki temu b��du ochorny pami�ci
//std::cin >>s;
// int *t =(int*)std::malloc( c * sizeof(int)); // dynamiczna alokacja pami�ci o zadanym rozmiarze w tym wypadku o rozmiarze int.
// malloc prosi system aby przydzieli� na stercie odpowiedni� ilosc pami�ci oraz zastrzega ja na potrzeby programu, malloc zwraca adres zaalokowanej przestrzeni

for (int x; std::cin >> x; ++s) {
// relokacja pami�ci
if (s == c) { // liczba u�ywanech kom�rek do liczby zaakumulowanych
c = 2 * c + 1;
int *a = (int*)std::malloc(c * sizeof(int));
for (int i = 0; i < s; ++i) { // iteracja po nowej tablicy
a[i] = t[i]; // przepisanie warto�ci do nowej tablicy t[i] <--- warto�ci w tablicy t
}
std::free(t);
t = a; // przepisanie adresu
}
t[s] = x;

}
/*
for(int x; std::cin >> x; ++s){
if (s == c) {
c = 2 * c + 1;
t= (int*) std::realloc(t, c * sizeof(int)); rozwi�zanie alternatywne z wykorzystaniem funkcji reaalokacji
}
t[s] = x;
}
*/

/*
for (int i=0; i<s;++i){
std::cin >> t[i];
}
*/
*/


