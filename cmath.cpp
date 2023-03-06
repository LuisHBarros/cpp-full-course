#include <iostream>
#include <cmath>

typedef std::string text_t;
typedef int number_t;

int main(){

    double x = 3;
    double y = 4;
    double z;
    z = std::max(x,y);
    z = std::min(x,y);
    z = pow(x, y); //potencia
    z = sqrt(x); //raiz quadrada
    z = abs(-4); //positivo
    z = round(x); //arredondar
    z = ceil(x); //arredondar pra cima
    z = flor(x); //arredondar pra baixo

    std::cout<<'\n'<<z;
    return 0;
}