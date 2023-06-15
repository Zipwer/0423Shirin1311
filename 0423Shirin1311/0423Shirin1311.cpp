// 0423Shirin1311.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include<Windows.h>
using namespace std;
int factorial(int num) {
    int result = 1;
    for (int i = 0; i < num; i++) {
        result = result * (i + 1);
    }
    return result;

}





int main()
{
    int student, place;
    __int64 otvet; 
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Ця программа покаже скількі є можливих варіантів,разместити учнів!\n";
    cout << "Введить скількі учнів: ";
    cin >> student;
    cout << "Введить скількі місць: ";
    cin >> place;
   
        otvet = factorial(place) / factorial(place - student);
        cout << "Є " << otvet << " способів разместити учнів";
    
}
