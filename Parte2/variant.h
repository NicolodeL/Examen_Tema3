//
// Created by nicol on 05/12/2023.
//

#ifndef EXAMEN_TEMA3_VARIANT_H
#define EXAMEN_TEMA3_VARIANT_H


class Variant {
public:
    Variant() : type(Type::None) {}

    // Constructores para diferentes tipos de datos
    Variant(int intValue) : intValue(intValue), type(Type::Int) {}
    Variant(double doubleValue) : doubleValue(doubleValue), type(Type::Double) {}
    Variant(const std::string& stringValue) : stringValue(stringValue), type(Type::String) {}

    // Función para obtener el tipo actual
    Type getType() const { return type; }

    // Funciones para obtener los valores de los diferentes tipos
    int getIntValue() const { return intValue; }
    double getDoubleValue() const { return doubleValue; }
    const std::string& getStringValue() const { return stringValue; }

private:
    enum class Type { None, Int, Double, String };

    Type type;
    int intValue;
    double doubleValue;
    std::string stringValue;
};


#endif //EXAMEN_TEMA3_VARIANT_H
