#include <iostream>
using namespace std;

class Counter {
private:
    int _num;
public:
    Counter() {
        _num = 1;
    }
    void set_num(int num) { _num = num; }
    void c_num() {
        string znak;
        while (znak != "x") {
            cout << "Введите команду('+', '-', '=' или 'x') : ";
            cin >> znak;
            if (znak == "+") { _num++; }
            if (znak == "-") { _num--; }
            if (znak == "=") { cout << _num << endl; }
        }
        cout << "До свидания!";
    }


};
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Вы хотите указать начальное значение счётчика? Введите yes или not: ";
    string answer;
    cin >> answer;
    Counter number;
    if (answer == "yes") {
        int num;
        cout << "Введите начальное значение счётчика: ";
        cin >> num;
        number.set_num(num);
    }
    number.c_num();

}