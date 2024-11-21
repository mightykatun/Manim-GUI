#include <iostream>
#include "nlohmann/json.hpp"

// pseudo code

int main() {
    // Load JSON configuration file
    std::ifstream configFile("project.json");
    nlohmann::json config;
    if (configFile) {
        configFile >> config;
    } else {
        std::cerr << "Failed to open project.json" << std::endl;
        return 1;
    }
  

    // Send the pyhton script to be compiled (implement this function)
    compile(finalScript);

    return 0;
}
