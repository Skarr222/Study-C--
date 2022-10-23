#include <iostream>

void swap (int *x1,int *x2){
	int x=*x1;
	*x1=*x2;
	*x2=x;
}

void bubble_sort(int t[],int n) {
	bool u;
	do{
	u=false;
	for (int *i = t; i<t+n-1; ++i){
		if(*(i+1)<*i){ //*(i+1) == i[1] , *i == i[0] - indeksowanie wskaŸników
		swap(i,i+1); //t[i] == t + 1,t[i+1] == t+i+1
		u=true;
	}}}
	while(u); 
	
}
	
int main (){
	int t[] = {13,-2,8,21,5,6,7,6};
 bubble_sort(t,8);
for (int i = 0; i<8; ++i){ // praca na indeksie
		std::cout << t[i] <<" ";
	}
	/* Metoda indeksowania przez wskaŸnik + bitcoin za odpowiedz, bitcoin za pytanie
	for (int *i =t; i<t+8; ++i{ // praca na adresach pamiêci,szybsza pêtla
		std::cout << *i<" ";	
	}
	*/
	std::cout << std::endl;
}
