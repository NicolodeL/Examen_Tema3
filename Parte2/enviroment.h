//
// Created by nicol on 05/12/2023.
//

#ifndef EXAMEN_TEMA3_ENVIROMENT_H
#define EXAMEN_TEMA3_ENVIROMENT_H
#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <map>

class Enviroment {
public:
    // Constructor
    Enviroment();

    void insert(const std::string& symbol, int value);

    int getSymbolValue(const std::string& symbol) const;

private:
    std::map<std::string, int> symbolTable;
};
#endif //EXAMEN_TEMA3_ENVIROMENT_H
