#include <iostream>
using namespace std;

class Calculator {
private:
    double _num1;
    double _num2;
public:
     bool set_num1(int num1) { 
        if (num1 != 0) {
            _num1 = num1;
            return true;
        }
        return false;
    }
    bool set_num2(int num2) { 
        if (num2 != 0) {
            _num2 = num2;
            return true;
        }
        return false;
    }
    void double_add() { cout << "num1 + num2 = " << _num1 + _num2 << endl; }
    void double_multiply() { cout << "num1 * num2 = " << _num1 * _num2 << endl; }
    void double_subtract_1_2() { cout << "num1 - num2 = " << _num1 - _num2 << endl; }
    void double_subtract_2_1() { cout << "num2 - num1 = " << _num2 - _num1 << endl; }
    void double_divide_1_2() { cout << "num1 : num2 = " << _num1 / _num2 << endl; }
    void double_divide_2_1() { cout << "num2 : num1 = " << _num2 / _num1 << endl; }

};
int main()
{   
    Calculator resultat;
    setlocale(LC_ALL, "Russian");
    int num1, num2;
    while (1) {
        cout << "Введите num1 : ";
        cin >> num1;
        while (num1 == 0) {
            cout << "Неверный ввод!" << endl;
            cout << "Введите num1 : ";
            cin >> num1;
        }
        cout << "Введите num2 : ";
        cin >> num2;
        while (num2 == 0) {
            cout << "Неверный ввод!" << endl;
            cout << "Введите num2 : ";
            cin >> num2;
        }
        resultat.set_num1(num1);
        resultat.set_num2(num2);
        resultat.double_add();
        resultat.double_multiply();
        resultat.double_subtract_1_2();
        resultat.double_subtract_2_1();
        resultat.double_divide_1_2();
        resultat.double_divide_2_1();
    }
}

