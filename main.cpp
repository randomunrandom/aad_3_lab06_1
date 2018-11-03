/*
 * created by Danil Kireev, PFUR NFI-201, 04.10.18, 09:00
 */
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "Q.h"

using namespace std;

/*
 * № 18
 * Дан массив размера N и целые числа K и L.
 * Найти среднее арифметическое всех элементов массива,
 *  кроме элементов с номерами от K до L включительно и сумму этих чисел.
 */

int main() {
    cout << "нахождение среднего арифметического всех элемнтов массива кроме от K до L" << endl;
    Q z;
    int res2;
    float res1;
    z.user_input();
    z.print();
    res1 = z.search(&res2);
    cout << "среднее арифметическое всех элементов массива кроме номеров ок K до L = " << res1;
    cout << ", а сумма этих чисел = " << res2;
    return 0;
}