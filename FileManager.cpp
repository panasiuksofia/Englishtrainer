#include <fstream>
#include <iostream>
#include <string>

void showGrammarTheory() {
    std::ifstream file("data/full_grammar.txt");
    if (!file.is_open()) {
        std::cerr << "Не вдалося відкрити файл з граматикою!" << std::endl;
        return;
    }

    std::string line;
    while (getline(file, line)) {
        std::cout << line << std::endl;
    }

    file.close();
}
