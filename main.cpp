#include "pch.h"
#include "iostream"
#include <conio.h>
#include <clocale>

using namespace std;

void task1();
void task2();


int main() {
    setlocale(LC_ALL, "Rus");

    cout << "Домашняя работа к девятой лекции. Строки и текстовые данные. Базовые алгоритмы со строками" << endl;


    while (true)
    {
        cout << "1: " << endl;
        cout << "2: " << endl;
        cout << "Введите число от 1 до 2 или что-то другое для выхода: ";

        int task;
        cin >> task;

        if (task == 1) {
            system("cls");
            cout << "Задача 1" << endl;
            task1();
            _getch();
            system("cls");
        }

        else if (task == 2) {
            system("cls");
            cout << "Задача 2" << endl;
            task2();
            _getch();
            system("cls");;
        }
        else
        {
            system("cls");
            cout << "некорректный ввод. Выход из программы";
            break;
        }
    }
}
