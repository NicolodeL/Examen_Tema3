#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <map>
#include "Enviroment.h"

int main() {
    Environment env;

    env.insert("x", 10);
    env.insert("y", 20);

    env.insert("x", 40);

    int valueX = env.getSymbolValue("x");
    int valueY = env.getSymbolValue("y");

    std::cout << "Valor de x: " << valueX << std::endl;
    std::cout << "Valor de y: " << valueY << std::endl;

    return 0;

    return 0;
}
