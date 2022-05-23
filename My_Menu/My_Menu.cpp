#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	HWND myConsole = GetConsoleWindow();

	setlocale(0, "rus");

	int n;

	cout << "Приветствую!\n\n";

	cout << "1 - Новая игра\n";
	cout << "2 - Загрузить игру\n";
	cout << "3 - Настройки\n";
	cout << "4 - Правила игры\n";
	cout << "5 - Об авторе\n";
	cout << "6 - Помощь\n";
	cout << "0 - Выход\n";


	cout << "\nВведите номер пункта: ";
	cin >> n;

	switch (n)
	{
	case 1:
		cout << "\nНовая игра\n";
		cout << "Создаю новую игру...\n";
		break;
	case 2:
		cout << "\nЗагрузить игру\n";
		cout << "Загружаю игру...\n";
		break;
	case 3:
		cout << "\nНастройки\n";
		cout << "Меню настроек еще в разработке :)\n";
		break;
	case 4:
		cout << "\nПравила игры\n\n";
		cout << "1 - Ваш главный враг swith\n";
		cout << "2 - Не говорить плохие вещи про шаурму\n";
		cout << "3 - Радоваться жизни\n";
		break;
	case 5:
		cout << "\nОб авторе\n";
		cout << "Открываю ссылку на Github автора...\n";
		system("explorer https://github.com/SlavikArt");
		break;
	case 6:
		cout << "\nПомощь\n";
		cout << "Позвоните по номеру +3801234567\n";
		break;
	case 0:
		ShowWindow(myConsole, 0);
		break;
	default:
		cout << n << " - это не число от 0 до 6\n";
		break;
	}
}