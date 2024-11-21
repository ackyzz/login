#include <iostream>
#include <string>
#include <cstdlib>

int main() {
    std::cout << "Content-type:text/html\r\n\r\n";

    std::string username;
    std::string password;

    std::string input;
    std::getline(std::cin, input);
    std::size_t pos = input.find("username=");
    if (pos != std::string::npos) {
        std::size_t end = input.find("&", pos);
        username = input.substr(pos + 9, end - pos - 9);
    }
    pos = input.find("password=");
    if (pos != std::string::npos) {
        std::size_t end = input.find("&", pos);
        password = input.substr(pos + 9, end - pos - 9);
    }

    std::string validUsername = "user";
    std::string validPassword = "password";

    if (username == validUsername && password == validPassword) {
        std::cout << "<h2>Login Berhasil!</h2>";
    } else {
        std::cout << "<h2>Username atau Password salah!</h2>";
    }

    return 0;
}