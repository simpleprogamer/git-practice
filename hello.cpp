#include <hello.h>

int calluser() {
    std::string name;
    std::cout << "Enter your username\n";

    // read the user's name from standard input
    std::cin >> name;

    // output the name along with 'Hello' String
    std::cout << "Hello " << name << std::endl;

    return 0;
}