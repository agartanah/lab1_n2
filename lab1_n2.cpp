#include <iostream>
#include <cstring>
#include <string>

using namespace std;

void Task1() {
  double s, v, tR;

  setlocale(LC_ALL, "RUS");

  cout << "Введите расстояние S в метрах: ";
  cin >> s;
  if (!cin) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Нужно ввести число!\n" << endl;

    Task1();
  }

  if (s == 0 || s < 0) {
    cout << "Пройденный путь должен быть больше нуля !!!\n" << endl;

    Task1();
    return ;
  }

  cout << "Введите скорость V в километрах в час: ";
  cin >> v;
  if (!cin) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Нужно ввести число!\n" << endl;

    Task1();
    return ;
  }
  if (v == 0 || v < 0) {
    cout << "Скорость должна быть больше нуля !!!\n" << endl;

    Task1();
    return ;
  }
  v = v * 1000 / 3600; // скорость из км/ч в м/с

  cout << "Укажите время в минутах потраченнное на ремонт в дороге: ";
  cin >> tR;
  if (!cin) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Нужно ввести число!\n" << endl;

    Task1();
    return;
  }
  if (tR < 0) {
    cout << "Потраченное время должно быть не отрицательным числом !!!\n" << endl;

    Task1();
    return ;
  }
  tR *= 60; //время из минут в секунды

  double t = (s / v) + tR;

  cout << "Время потраченное на дорогу с учётом ремонта равняется " << t / 60 << " мин." << endl;

  double vAverage = s / t;

  cout << "Средняя скорость равна: " << vAverage * 3600 / 1000 << " км/ч\n" << endl;
}

void Menu() {
  Task1();
  Menu();
}

int main() {
  Menu();
}

