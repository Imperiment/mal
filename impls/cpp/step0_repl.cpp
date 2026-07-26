#include "linenoise.hpp"
#include <iostream>
#include <string>

std::string READ(const std::string &input) {
    return input;
}
std::string EVAL(const std::string &input) {
    return input;
}
std::string PRINT(const std::string &input) {
    return input;
}
std::string rep(std::string &input) {
    auto ast = READ(input);
    auto res = EVAL(ast);
    return PRINT(res);
}

int main() {
    const auto *history_path = "history.txt";
    linenoise::LoadHistory(history_path);

    std::string line;

    for (;;) {
        auto quit = linenoise::Readline("user> ", line);
        if (quit) {
            break;
        }
        std::cout << line << '\n';
        linenoise::AddHistory(line.c_str());
    }

    linenoise::SaveHistory(history_path);

    return 0;
}
