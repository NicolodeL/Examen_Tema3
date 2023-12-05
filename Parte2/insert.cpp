#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <map>
#include "Enviroment.h"

void Environment::insert(const std::string& symbol, int value) {
    // Verificar si el símbolo ya está presente en la tabla
    auto it = symbolTable.find(symbol);
    if (it == symbolTable.end()) {
        symbolTable[symbol] = value;
    } else {

        throw DuplicateSymbolException(symbol);
    }
}

// Función para obtener el valor de un símbolo del entorno
int Environment::getSymbolValue(const std::string& symbol) const {
    auto it = symbolTable.find(symbol);
    if (it != symbolTable.end()) {
        return it->second;
    } else {
        return 0;
    }
}

