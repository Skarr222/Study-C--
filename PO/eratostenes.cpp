#include<iostream>
#include <cstdlib>

void sito(bool *tab, int n)
{
	for (int i=2; i*i <= n; i++) 
    {							
        if(!tab[i])
		for (int j = i*i ; j<=n; j+=i)
            tab[j] = 1;			
    }
}

int main()
{
	int n;
	bool *tab;
	std::cin>>n;
	tab = new bool [n+1];
	sito(tab, n);
	for(int i=2;i<=n;i++){
		if(!tab[i])
        {
            std::cout<<i<<" ";
        }
    }
    delete []tab;
}