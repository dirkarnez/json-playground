#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>

int main() {
    nlohmann::json json = {
        {"happy", true},
        {"pi", 3.141},
    };

    std::cout << "json[\"happy\"]: " << json["happy"] << std::endl;

    std::ofstream o("pretty.json");
    o << std::setw(4) << json << std::endl;

    std::cin.get();
    return 0;
}
