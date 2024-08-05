#include <iostream>

int main() {
    unsigned long long VI = 0;
    for (unsigned long long i = 0; i <= 1000000000; i++) {
        VI += i;
    }
    std::cout << VI << std::endl;
    return 0;
}
