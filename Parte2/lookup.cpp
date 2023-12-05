#include "Enviroment.h"
int Environment::lookup(const std::string& symbol) const {
    auto it = symbolTable.find(symbol);
    if (it != symbolTable.end()) {
        // Devolver el valor asociado al símbolo
        return it->second;
}