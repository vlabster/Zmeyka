#include <iostream>
using namespace std;

const int width = 60;
const int height = width / 2;								//Ширина и высота поля
bool gameProcess;
int x, y, xFruit, yFruit;

enum movement {	STOP = 0, UP, DOWN, LEFT, RIGHT};	//Перечисление команд движения 
movement dir;

void Start()										//Процесс игры (управление змейкой, генерация фруктов и т. д.
{
	gameProcess = true;
	dir = STOP;
	x = width / 2;
	y = height / 2;
	xFruit = rand() % width;
	yFruit = rand() % height;

}

void Draw()
{
	system("cls");
	for (int i = 0; i <= width; i++)
		cout << "/";
	cout << endl;
	for (int i = 0; i <= height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if ((j == 0) || (j == width - 1))
				cout << "/";
			cout << " ";
		}
		cout << endl;
	}
	for (int i = 0; i <= width; i++)
		cout << "/";
}

int main() 
{
	Start();
	while (gameProcess == true)
	{
		Draw();
	}

	return 0;
}