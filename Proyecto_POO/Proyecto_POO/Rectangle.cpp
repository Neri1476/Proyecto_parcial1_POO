#include <iostream>
#include "Shape.c++"

using namespace std;

class Rectangle : public IShape
{
private:
	int x, y, width, height, p;
public:
	void setSize(int width) {
		this->width = width;
	}
	int getSize() {
		if (width < 1)
			width = 2;
		return width;
	}
	void setHeight(int height) {
		this->height = height;
	}
	int getHeight() {
		if (height < 1)
			height = 2;
		return height;
	}
	void setX(int x) {
		this->x = x;
	}
	int getX() {
		if (x < 2)
			x = 2;
		return x;
	}
	void setY(int y) {
		this->y = y;
	}
	int getY() {
		if (y < 2)
			y = 2;
		return y;
	}
	void draw() {
		char move;

		while ((move = cin.get()) != 'p') {
			system("cls");

			cout << "Coordenadas X: " << getX() << endl;
			cout << "Coordenadas Y: " << getY() << endl;
			if (move == 'a') {
				x--;
			}
			else if (move == 'd') {
				x++;
			}
			else if (move == 's') {
				y++;
			}
			else if (move == 'w') {
				y--;
			}
			for (int c = 0; c < y; c++) {
				cout << endl;

			}
			for (int i = 0; i < height; i++) {
				for (int k = 0; k < x; k++) {
					cout << " ";
				}
				for (int j = 0; j < width; j++) {
					cout << " *";

				}
				cout << endl;
			}
		}
	}
};