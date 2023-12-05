#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <map>

class enviroment {
private:
    std::map<std::string, int> symbolTable;
};

public:

    void addSymbol(const std::string& symbol, int value) {
        symbolTable[symbol] = value;
    }

    int getSymbolValue(const std::string& symbol) const {
        auto it = symbolTable.find(symbol);
        if (it != symbolTable.end()) {
            // Devolver el valor asociado al símbolo
            return it->second;
        } else {
            return 0;
        }


}
    }