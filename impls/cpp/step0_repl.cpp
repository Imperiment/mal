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
    std::string line;
    for (;;) {
        std::cout << "user> ";
        if (!std::getline(std::cin, line)) {
            break;
        }
        std::cout << rep(line) << '\n';
    }

    return 0;
}
