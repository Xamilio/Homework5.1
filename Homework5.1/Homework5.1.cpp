#include <iostream>
using std::cout;
using std::endl;
using std::cin; 
int main()
{
    int a, b;
    cout << "Первое число: ";
    cin >> a;
    cout << "Второе число:";
    cin >> b;       
    int aa = (a / 10) % 10;
    int bb = (b / 10) % 10;
    cout << endl << "Первое число " << a % 10 + bb * 10 + a / 100 * 100 << endl;
    cout << "Второе число " << b % 10 + aa * 10 + b / 100 * 100 << endl;

    cout << "\n\n\n\n\n";

    int ch;
    cout << "Число: ";
    cin >> ch;
    int ch1 = ch / 1000;
    int ch2 = ch / 100 - ch1 * 10;
    int ch3 = ch / 10 - ch / 100 * 10;
    int ch4 = ch - ch / 10 * 10;
    cout << "Сложение " << ch1 + ch3 << endl;
    cout << "Вычитание " << ch2 + ch4 << endl; 

    cout << "\n\n\n\n\n";

    int n;
    cout << "Введите 3 значное число:";
    cin >> n;
    int a = n / 100 * 10 + n % 10;
    cout << endl << a << endl;

    cout << "\n\n\n\n\n";

    int d;
    float p;
    cout << "Введите cумму в гривнах:";
    cin >> d;
    cout << "Введите процент готовых: ";
    cin >> p;
    p = p / 12 / 10;
    float dd = d * p;
    cout << endl << a << endl;

    cout << "\n\n\n\n\n";

    double pp, s;
    cout << "Enter price(UAH):";
    cin >> pp;
    cout << "Enter summ(UAH):";
    cin >> s;
    int tmp = s / pp;
    cout << "Купить " << tmp  << endl;
    cout << "Сдачи " << s - tmp * pp << " гривен" << endl;

}

