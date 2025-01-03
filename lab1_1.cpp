﻿#include <iostream> // Подключаем библиотеку для ввода-вывода

int main() { // Начало основной функции
    // Установка локали для поддержки русского языка и корректного отображения символов
    setlocale(LC_ALL, "Russian");

    // Выводим строку "First string" в консоль
    std::cout << "First string" << std::endl;

    // Выводим две строки "Первая строка" и "Вторая строка" с переносом на новую строку
    std::cout << "Первая строка\nВторая строка" << std::endl;

    // Выводим строку с экранированием кавычек и обратного слеша
    std::cout << "Спецсимволы \"\\" << std::endl;
} // Конец основной функции
