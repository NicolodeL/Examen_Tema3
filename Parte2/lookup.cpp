#include "Enviroment.h"
int Environment::lookup(const std::string& symbol) const {
    auto it = symbolTable.find(symbol);
    if (it != symbolTable.end()) {

        return it->second;
    } else {
        throw SymbolNotFoundException(symbol);
        return 0;
    }
}