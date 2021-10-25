#include "game.h" //підключення заголовного файлу

int main() {
	bool ans; //відповідь користувача, про бажання почати або продовжити гру
	cout << "\033c";
	ans = dialog("Я мудра сова. Знаю майже всіх тварин. Загадай будь-яку, і я її відгадаю.\nУже загадав?", 0);

	if (!ans) {
		cout << "\033c";
		owl(2, "Коли загадаєш, натисни Enter");
		while(getchar()!='\n'); //поки не буде натиснуто Enter
		ans = true;
	}

	while(ans){
		animal obj; //об'ект класу animal
		obj.guess();
		cout << "Для продовження натисніть Enter" << endl;
		while(getchar()!='\n'); //поки не буде натиснуто Enter
		ans = dialog( "Хочеш спробувати ще раз?", 0);
	}

	cout << "\033c";
	owl(0,"Бувай.");
	cout << "Для виходу натисніть Enter" << endl;
	while(getchar()!='\n'); //поки не буде натиснуто Enter
	return 0;
}

