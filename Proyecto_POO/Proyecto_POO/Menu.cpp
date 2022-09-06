#include"Square.cpp"
#include"Triangle.cpp"
#include"Rectangle.cpp"
#include <iostream>
using namespace std;

class Menu
{
private:
	int op, type, width, height, x, y;

public:
	
	Square square;
	Triangle triangle;
	Rectangle rectangle;

	void option() {
		do {
			system("cls");
			cout << "Bienvenido, en este programa se podrán formar algunas figuras. :)" << endl;
			cout << endl << "Las opciones de figuras son:" << endl;
			cout << "1.- square " << endl;
			cout << "2.- triangle " << endl;
			cout << "3.- rectangle " << endl;
			cout << "4. Salir " << endl;
			cout << endl << "Ingrese la opcion que quiera: ";
			cin >> op;

			switch (op)
			{
			case 1:
			{
				cout << endl << "Tipos de square:" << endl;
				cout << "1. Lleno" << endl;
				cout << "2. Huequito" << endl;
				cout << endl << "Ingrese el tipo que quiera: ";
				cin >> type;
				cout << endl << "Medida de lado: ";
				cin >> width;
				cout << "Posicion X: ";
				cin >> x;
				cout << "Posicion Y: ";
				cin >> y;
				system("cls");
				square.setSize(width);
				square.getSize();
				square.setType(type);
				square.getType();
				square.setX(x);
				square.setY(y);
				square.draw();
				break;
			}
			case 2:
			{
				cout << endl << "Medida de lado: ";
				cin >> width;
				cout << "Posicion X: ";
				cin >> x;
				cout << "Posicion Y: ";
				cin >> y;
				system("cls");
				triangle.setSize(width);
				triangle.getSize();
				triangle.setX(x);
				triangle.setY(y);
				triangle.draw();
				break;
			}

			case 3:
			{
				cout << endl << "Medida de lado: ";
				cin >> width;
				cout << endl << "Medida de alto: ";
				cin >> height;
				cout << "Posicion X: ";
				cin >> x;
				cout << "Posicion Y: ";
				cin >> y;
				system("cls");
				rectangle.setSize(width);
				rectangle.getSize();
				rectangle.setHeight(height);
				rectangle.getHeight();
				rectangle.setX(x);
				rectangle.setY(y);
				rectangle.draw();
				break;
			}

			default:
				break;
			}

			cin.get();
		} while (op != 0);

	}
};