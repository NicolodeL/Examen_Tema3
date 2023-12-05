#include "Enviroment.h"
int Environment::lookup(const std::string& symbol) const {
    auto it = symbolTable.find(symbol);
    if (it != symbolTable.end()) {

        return it->second;
    } else {
        std::cout << "Advertencia: El símbolo '" << symbol << "' no existe en el entorno." << std::endl;
        return 0;
    }
}