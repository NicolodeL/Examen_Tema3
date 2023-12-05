#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <map>

class Environment {
public:
    // Constructor
    Environment() {
        // Puedes realizar cualquier inicialización necesaria aquí
    }

    // Función para agregar un símbolo y su valor al entorno
    void addSymbol(const std::string& symbol, int value) {
        symbolTable[symbol] = value;
    }

    // Función para obtener el valor de un símbolo del entorno
    int getSymbolValue(const std::string& symbol) const {
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

private:
    // Tabla de símbolos utilizando std::map
    std::map<std::string, int> symbolTable;
};