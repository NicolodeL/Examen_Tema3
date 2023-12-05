//
// Created by nicol on 05/12/2023.
//

#ifndef EXAMEN_TEMA3_ENVIROMENT_H
#define EXAMEN_TEMA3_ENVIROMENT_H
#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <map>

class Environment {
public:
    // Constructor
    Environment();

    void insert(const std::string& symbol, int value);

    int getSymbolValue(const std::string& symbol) const;

    int lookup(const std::string& symbol) const;

    class DuplicateSymbolException : public std::runtime_error {
    public:
        DuplicateSymbolException(const std::string& symbol)
                : std::runtime_error("Intento de insertar un simbolo duplicado: " + symbol) {}
    };

    class SymbolNotFoundException : public std::runtime_error {
    public:
        SymbolNotFoundException(const std::string& symbol)
                : std::runtime_error("Intento de acceder a un simbolo no existente: " + symbol) {}
    };



private:
    std::map<std::string, int> symbolTable;
};
#endif //EXAMEN_TEMA3_ENVIROMENT_H
