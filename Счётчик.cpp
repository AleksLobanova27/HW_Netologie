#include <iostream>
using namespace std;

class Counter {
private:
    int _num;
public:
    void set_num(string answer){
        if (answer == "yes") {
            int num;
            cout << "Введите начальное значение счётчика: ";
            cin >> num;
            _num = num;
        }
        else{ _num = 1;}
        
    }
    void c_num() {
        string znak;
        while (znak != "x") {
            cout << "Введите команду('+', '-', '=' или 'x') : ";
            cin >> znak;
            if (znak == "+") { _num += 1; }
            if (znak == "-") { _num -= 1; }
            if (znak == "=") { cout << _num << endl; }
        }
        cout << "До свидания!";
    }


};
int main()
{
    setlocale(LC_ALL, "Russian");
    Counter number;
    cout << "Вы хотите указать начальное значение счётчика? Введите yes или not: ";
    string answer;
    cin >> answer;
    number.set_num(answer);
    number.c_num();
    
}