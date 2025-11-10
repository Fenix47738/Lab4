#include <iostream>
#include <cmath>

using namespace std;

void CalcMedians(double a = 0.0, double b = 0.0, double c = 0.0); // пеше завдання
double CalcMedian(double a, double b, double c); // це теж часть першого завдання, написано для зручності

void Integer8();

int main()
{
    int menu; // оголошення змінної з якого користувач обере яке саме завдання він хоче переглянути

    cout << "Task number: "; // просимо користувача обрати
    cin >> menu; // доємо можливість обрати
    
    switch (menu) // перевірка що саме користувач обрав?
    {
        case 1: CalcMedians(); break; // перше завдання
        case 2: Integer8(); break; // друге завдання
        default: cout << "Wrong task (only 1 or 2)" << endl; // якщо користувач ввів інше
    }

    // завершення программи
    system("pause");
    return 0;
}

void CalcMedians(double a, double b, double c)
{
    // просимо користувача вводити числа для різних трикутників
    cout << "Enter three point treangle first" << endl;
    cin >> a >> b >> c;
    double ma1 = CalcMedian(a, b, c); // визиваємо допоміжну функцію

    cout << "Enter three point treangle second" << endl;
    cin >> a >> b >> c;
    double ma2 = CalcMedian(a, b, c);

    cout << "Enter three point treangle third" << endl;
    cin >> a >> b >> c;
    double ma3 = CalcMedian(a, b, c);


    // виведення результату
    cout << "\nmediana first treangle " << ma1;
    cout << "\nmediana second treangle " << ma2;
    cout << "\nmediana third treangle " << ma3 << endl;
}

double CalcMedian(double a, double b, double c)
{
    return 0.5 * sqrt(2 * pow(b, 2) + 2 * pow(c, 2) - pow(a, 2)); // формула
}

void Integer8()
{
    int twoDigit; // двозначне число
    int result; // кінцевий результат

    int number; // перша цифра
    int number2; // друга цифра

    cout << "Etnter digit integer: "; // просимо користувча ввести ціле число
    cin >> twoDigit;

    int i = twoDigit < 0 ? -1 : 1;  // додаємо нолик тим самим підтверджуємо що у початку був нуль а тепер він у кінці

    // а це точно є ціле число?
    if (twoDigit <= -100 || twoDigit >= 100)
    {
        cout << "It's not two-digit number" << endl; // говоримо користувачу що він не правий
        return;
    }
    else if ((twoDigit > -10 && twoDigit < 0) || (twoDigit < 10 && twoDigit > 0)) // якщо одна цифра за мість числа то перша цифра це нуль
        result = twoDigit * 10 * i; // додаємо нолик тим самим підтверджуємо що у початку був нуль а тепер він у кінці
    else // якщо це всеж таки двозначне число без нуля у початку
    {
        number = twoDigit % 10; // знайшли першу цифру
        number2 = twoDigit / 10 % 10; // знайшли другу

        result = number * 10 + number2 * i; // змінюємо містами
    }

    cout << "result: " << result << endl; // виведення результату
}