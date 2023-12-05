#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <map>

class Environment {
public:
    Environment() {
    }

    void addSymbol(const std::string& symbol, int value) {
        symbolTable[symbol] = value;
    }

    int getSymbolValue(const std::string& symbol) const {
        auto it = symbolTable.find(symbol);
        if (it != symbolTable.end()) {
            return it->second;
        } else {
            return 0;
        }
    }

private:
    std::map<std::string, int> symbolTable;
};