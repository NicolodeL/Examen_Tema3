#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <map>

class Environment {
    void insert(const std::string& symbol, int value) {
        // Verificar si el símbolo ya está presente en la tabla
        auto it = symbolTable.find(symbol);
        if (it == symbolTable.end()) {
            // Si el símbolo no está en la tabla, lo añadimos
            symbolTable[symbol] = value;
        } else {
            // Si el símbolo ya está en la tabla, puedes manejar el conflicto de alguna manera
            // En este ejemplo, simplemente imprimimos un mensaje de advertencia
            std::cout << "Advertencia: El símbolo '" << symbol << "' ya existe en el entorno." << std::endl;
        }
    }


}