#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <map>
#include "Enviroment.h"

void Enviroment::insert(const std::string& symbol, int value) {
    // Verificar si el símbolo ya está presente en la tabla
    auto it = symbolTable.find(symbol);
    if (it == symbolTable.end()) {
        symbolTable[symbol] = value;
    } else {

        std::cout << "Advertencia: El símbolo '" << symbol << "' ya existe en el entorno." << std::endl;
    }
}

// Función para obtener el valor de un símbolo del entorno
int Enviroment::getSymbolValue(const std::string& symbol) const {
    // Verificar si el símbolo está presente en la tabla
    auto it = symbolTable.find(symbol);
    if (it != symbolTable.end()) {
        // Devolver el valor asociado al símbolo
        return it->second;
    } else {
        // Si el símbolo no está en la tabla, lanzar una excepción o manejar de alguna manera
        // En este ejemplo, simplemente devolvemos un valor predeterminado (0)
        return 0;
    }
}

