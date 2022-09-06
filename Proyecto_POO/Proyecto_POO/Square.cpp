#include <iostream>
#include"Shape.c++"

using namespace std;

class Square :public IShape
{
private:
	int x, y, width, type, p;

public:
	void setSize(int width) {
		this->width = width;
	}
	int getSize() {
		if (width < 2)
			width = 2;
		return width;
	}
	void setX(int x) {
		this->x = x;
	}
	int getX() {
		if (x < 1)
			x = 2;
		return x;
	}
	void setY(int y) {
		this->y = y;
	}
	int getY() {
		if (y < 1)
			y = 2;
		return y;
	}
	void setType(int type) {
		this->type = type;
	}
	int getType() {
		if (type < 1) {
			type = 1;
		}
		else if (type > 2)
			type = 2;

		return type;
	}

	void draw() {
		char move;

		while ((move = cin.get()) != 'p') {
			system("cls");

			cout << "Cordenada X: " << getX() << endl;
			cout << "Cordenada Y: " << getY() << endl;
			if (move == 'a') {
				x--;
			}
			else if (move == 's') {
				y++;
			}
			else if (move == 'w') {
				y--;
			}
			else if (move == 'd') {
				x++;
			}
			for (int c = 0; c < y; c++) {
				cout << endl;

			}
			for (int j = 0; j < width; j++) {
				for (int z = 0; z < x; z++) {
					cout << " ";

				}
				for (int i = 0; i < width; i++) {

					if (type == 1) {
						cout << " *";
					}
					else {
						if ((j == 0 || i == 0) || (j == (width - 1)) || (i == (width - 1))) {
							cout << " *";
						}
						else {
							cout << "  ";
						}
					}
				}
				cout << endl;
			}
		}
	}
};