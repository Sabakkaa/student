#include <iostream>
#include <string>

int main() {
    setlocale(LC_ALL, "Russian");
    int new_int = 150;
    float new_float = 15.933;
    short new_short = 250;
    std::cout << "new_int = " << new_int << std::endl;
    std::cout << "new_float = " << new_float << std::endl;
    std::cout << "new_short = " << new_short << std::endl;

    int day = 4;
    std::string month = "ноября";
    int year = 2005;
    std::cout << "Моя дата рождения: " << day << " " << month << " " << year << " года" << std::endl;

    const float NUMBER = 2.3;
    const std::string NAME = "WINDOWS";
    std::cout << NUMBER << " " << NAME << std::endl;
}
