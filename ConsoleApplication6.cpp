// ConsoleApplication6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int n;
    cin >> n;
    switch (n) {

    case 1: {
        cout << "1.Матеша" << endl << "2.Русский";
        break;
    }
    case 2: {
        cout << "1.Физра" << endl << "2.ИЗО";
        break;
    }
    case 3: {
        cout << "1.ИЗО" << endl << "2.Русский";
        break;
    }
    case 4: {
        cout << "1.Физра" << endl << "2.Матеша";
        break;
    }
    case 5: {
        cout << "1.Литра" << endl << "2.Музыка";
        break;
    }
    case 6: {
        cout << "Выходной";
        break; }
    case 7: {
        cout << "Выходной";
        break;

    }
    default:

          break;

    }
}

