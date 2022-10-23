#include <iostream>
#include <cctype>

int main() {
    int letterCount[26] = {0};
    char sentence;
    while (std::cin >> sentence) 
    {   
        sentence = std::tolower(sentence);
        if ('a' <= sentence && sentence <= 'z') 
        {
            letterCount[sentence - 97]++;
        }
    }

    for (int i=0; i<=25; i++) 
    {
        std::cout << letterCount[i] << " ";
    }
}