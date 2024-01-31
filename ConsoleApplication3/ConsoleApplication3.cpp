#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");
    int choice;
    double num1, num2, result = 0;

    do {
        cout << "Выберите операцию:\n";
        cout << "1. Сложение\n";
        cout << "2. Вычитание\n";
        cout << "3. Умножение\n";
        cout << "4. Деление\n";
        cout << "5. Возведение в степень\n";
        cout << "6. Квадратный корень\n";
        cout << "7. 1 процент от числа\n";
        cout << "8. Факториал числа\n";
        cout << "9. Выйти из программы\n";
        cout << "Выбор: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;
            result = num1 + num2;
            cout << "Результат: " << result << endl;
            break;

        case 2:
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;
            result = num1 - num2;
            cout << "Результат: " << result << endl;
            break;

        case 3:
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;
            result = num1 * num2;
            cout << "Результат: " << result << endl;
            break;

        case 4:
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Результат: " << result << endl;
            }
            else {
                cout << "Ошибка: деление на ноль!\n";
            }
            break;

        case 5:
            cout << "Введите число и степень: ";
            cin >> num1;
            int exponent;
            cin >> exponent;
            result = pow(num1, exponent);
            cout << "Результат: " << result << endl;
            break;

        case 6:
            cout << "Введите число: ";
            cin >> num1;
            if (num1 >= 0) {
                result = sqrt(num1);
                cout << "Результат: " << result << endl;
            }
            else {
                cout << "Ошибка: квадратный корень отрицательного числа!\n";
            }
            break;

        case 7:
            cout << "Введите число: ";
            cin >> num1;
            result = 0.01 * num1;
            cout << "Результат: " << result << endl;
            break;

        case 8:
            cout << "Введите число: ";
            cin >> num1;
            result = 1;
            for (int i = 1; i <= num1; ++i) {
                result *= i;
            }
            cout << "Результат: " << result << endl;
            break;

        case 9:
            cout << "Программа завершена.\n";
            break;

        default:
            cout << "Ошибка: неверный выбор. Пожалуйста, выберите снова.\n";
        }

    } while (choice != 9);

    return 0;
}
