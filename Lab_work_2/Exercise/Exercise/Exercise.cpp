#include <iostream>     
using namespace std;

void N_1(int number_of_lines)
{
    for (int i = 0; i < number_of_lines; i++) {
        for (int j = 0; j < number_of_lines-i; j++) {
            cout << " ";
        };
        for (int j = 0; j < i+1; j++) {
            cout << "x";
        };
        cout << "\n";
    }
    cout << endl << "Возвращение в меню...\n";
}

void N_2()
{
    int UserInput;
    long long Number;
    do
    {
        cout << "Введите исходное целое число (не больше 20) или 0 для выхода: "; cin >> UserInput;
        if (!UserInput == 0) {
            Number = 1;
            for (int i = 2; i < UserInput + 1; i++) {
                //cout << Number << endl; cout << i << endl << endl;
                Number = i * Number;
            }
            cout << "!" << UserInput << " = " << Number << endl << endl;
        }
    } while (!UserInput == 0);
    cout << endl << "Возвращение в меню...\n";
}

void N_3()
{
    float deposit, percent, intermediate;
    int years;
    cout << "Введите изначальный вклад: "; cin >> deposit; 
    cout << "Введите число лет: "; cin >> years;
    cout << "Введите процентную ставку: "; cin >> percent;
    intermediate = deposit;
    for (int i = 0; i < years; i++) {
        intermediate += intermediate * percent/100;
    }
    cout << "\nЧерез "<< years;
    if (((years % 10 == 1) | (years % 10 == 2) | (years % 10 == 3) | (years % 10 == 4)) & !((years == 0) | (years == 10) | (years == 11) | (years == 12) | (years == 13) | (years == 14))) {
        if (!(years % 10 == 1)) {
            cout << " года ";
        }
        else {
            cout << " год ";
        }
    }
    else {
        cout << " лет ";
    }
    cout << "вы получите " << intermediate << " доллара.\n";
    cout << "------------------------------------------------------\n";
    cout << "Расчёты:\n";
    intermediate = deposit;
    for (int i = 0; i < years; i++) {
        cout << "В конце " << i+1 << "-го года вы получите " << intermediate << " + (" << intermediate << " * " << percent/100 << ") = ";
        intermediate += intermediate * percent/100;
        cout << intermediate  << "\n";
    }
    cout << "Итог:" << intermediate << "\n";
    cout << "------------------------------------------------------\n";
    cout << endl << "Возвращение в меню...\n";
}

void N_4()
{
    float price, payment, percent, intermediate, summ, x;
    int years;
    cout << "Введите стоимость квартиры: "; cin >> price;
    cout << "Введите изначальный вклад: "; cin >> payment;
    cout << "Введите число лет: "; cin >> years;
    cout << "Введите процентную ставку: "; cin >> percent;
    cout << "------------------------------------------------------\n";
    intermediate = price-payment;
    summ = 0;
    for (int i = 0; i < years; i++) {
        x = (intermediate / (years - i)) + (intermediate * (percent / 100));
        summ += x;
        intermediate -= x;
        cout << "В конце " << i + 1 << "-го года вы должны выплатить " << x << endl;
        intermediate += intermediate * (percent / 100);
    }
    cout << "------------------------------------------------------\n";
    cout << "Общая сумма выплат: " << summ + payment << endl;
    cout << endl << "Возвращение в меню...\n";
}

int main()
{
    setlocale(LC_ALL, "Russian");
    N_4();
    return 0;
}