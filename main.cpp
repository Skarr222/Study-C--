#include <iostream>

double less(double a, double b){
    return (a < b) ? a : b;
    }

int main() {
    double a, b;
    std:: cin>> a >> b;
    std:: cout<<less(a,b) << std::endl;
         }


