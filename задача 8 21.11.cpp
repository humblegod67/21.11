

#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int number;
    int count = 0;
    int sum = 0;
    cout << "Введите числа(для окончания ввода введите 0) :" << endl;
    while (true) {
        cin >> number;
        if (number == 0) {
            break;
        }
        count++;
        sum += number;

    }
    double average = static_cast<double>(sum) / count;
    cout << "Количество чисел: " << count << endl;
    cout << "Общая сумма: " << sum << endl;
    cout << "Среднее арифметическое: " << average << endl;
}


