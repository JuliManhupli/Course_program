#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
#define ZERO 48 //код цифри 0 в таблиці по таблиці ASCI 
#define NUM_ANIMALS 139 //кількість тварин у довідці 

class animal {
	string status;//зміна, що показує, чи відгадано тварину
public:
	animal() { status = "unknown"; }; 
	void guess(); //метод відповідає за визначення загаданої тварини
};

class owl {
	ifstream in;//файл зображення сови
public:
	owl(int num, const char *str); //конструктор для виводу зображення маскота і тексту повідомлення
};

bool dialog(const char *str, int num = -1); //головна функція для спілкування з користувачем
bool enumeration(bool *a); //функція перебору тварин у списку
void remember(bool *a); //функція для запам'ятовування тварини
bool check(bool *a, string str); //функція для перевірки наявності тварини у базі
void directory(); //функція для довідки
void open_animal(int a); //функція відкриття опису тварини
int input_num(); //функція для перевірки правильності вводу чисел

