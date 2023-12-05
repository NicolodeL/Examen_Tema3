#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <map>

class enviroment {
public:
    enviroment() {
        this->enviroment = std::map<std::string, std::string>();
    }

    void set(std::string key, std::string value) {
        this->enviroment[key] = value;
    }

    std::string get(std::string key) {
        return this->enviroment[key];
    }


};