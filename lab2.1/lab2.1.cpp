// Lab_02.cpp
// Дацьків Оксана
// Лабораторна робота No 2.
// Лінійні програми.
// Варіант 6

#include <iostream>
#include <cmath>   // для cos()

using namespace std;

int main() {
    double a;   // вхідний параметр (кут у радіанах)
    //double z1;  // результат першого виразу
    double z2;  // результат другого виразу

    cout << "a = ";
    cin >> a;

    // Обчислення
    //z1 = cos(a) + cos(2 * a) + cos(6 * a) + cos(7 * a);
    z2 = 4 * cos(a / 2) * cos(5 * a / 2) * cos(4 * a);

    // Вивід
    cout << endl;
    //cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;
}