#include <iostream>
using namespace std;

class Counter {
private:
    int _num;
public:
    Counter() {_num = 1;}
    void set_num(int num) { _num = num; }
    void set_plus() { _num++; }
    void set_minus() { _num--; }
    int get_num() { 
        return _num; }


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
    string znak;
    while (znak != "x") {
        cout << "Введите команду('+', '-', '=' или 'x') : ";
        cin >> znak;
        if (znak == "+") { number.set_plus();}
        if (znak == "-") { number.set_minus(); }
        if (znak == "=") { cout << number.get_num() << endl; }
    }
    cout << "До свидания!";
       

}