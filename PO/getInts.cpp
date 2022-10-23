#include <iostream>
#include <cstdlib>

int*getInts(int *s){
	*s = 0
	int c = 0; // c - pojemnoœæzaalokowanych komórek
	int *t = nullptr; // null pointer wprowadzony w standardzie c++ 11, inicjalizacja tablicy pustym wskaŸnikiem, unikamy dziêki temu b³êdu ochorny pamiêci 
					  //std::cin >>s;
					  // int *t =(int*)std::malloc( c * sizeof(int)); // dynamiczna alokacja pamiêci o zadanym rozmiarze w tym wypadku o rozmiarze int.
					  // malloc prosi system aby przydzieli³ na stercie odpowiedni¹ ilosc pamiêci oraz zastrzega ja na potrzeby programu, malloc zwraca adres zaalokowanej przestrzeni

	for (int x; std::cin >> x; ++*s){
		// relokacja pamiêci
		if(*s == c) { // liczba u¿ywanech komórek do liczby zaakumulowanych
			c = 2 * c + 1;
			int *a = (int*)std::malloc(c * sizeof(int));
			for (int i = 0; i < s; ++i) { // iteracja po nowej tablicy
				a[i] = t[i]; // przepisanie wartoœci do nowej tablicy t[i] <--- wartoœci w tablicy t
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
	std::free(t); // zwolnienie zaalokowanej pamiêci na stercie PAMIÊTAJ O TYM!!!

}

/*
int s = 0;
int c= 0; // c - pojemnoœæzaalokowanych komórek
int *t = nullptr; // null pointer wprowadzony w standardzie c++ 11, inicjalizacja tablicy pustym wskaŸnikiem, unikamy dziêki temu b³êdu ochorny pamiêci
//std::cin >>s;
// int *t =(int*)std::malloc( c * sizeof(int)); // dynamiczna alokacja pamiêci o zadanym rozmiarze w tym wypadku o rozmiarze int.
// malloc prosi system aby przydzieli³ na stercie odpowiedni¹ ilosc pamiêci oraz zastrzega ja na potrzeby programu, malloc zwraca adres zaalokowanej przestrzeni

for (int x; std::cin >> x; ++s) {
// relokacja pamiêci
if (s == c) { // liczba u¿ywanech komórek do liczby zaakumulowanych
c = 2 * c + 1;
int *a = (int*)std::malloc(c * sizeof(int));
for (int i = 0; i < s; ++i) { // iteracja po nowej tablicy
a[i] = t[i]; // przepisanie wartoœci do nowej tablicy t[i] <--- wartoœci w tablicy t
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
t= (int*) std::realloc(t, c * sizeof(int)); rozwi¹zanie alternatywne z wykorzystaniem funkcji reaalokacji
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


