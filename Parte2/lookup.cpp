#include "Enviroment.h"
int Environment::lookup(const std::string& symbol) const {
    auto it = symbolTable.find(symbol);
    if (it != symbolTable.end()) {

        return it->second;
    } else {
        throw SymbolNotFoundException(symbol);
        std::cout << "Advertencia: El símbolo '" << symbol << "' no existe en el entorno." << std::endl;
        return 0;
    }
}