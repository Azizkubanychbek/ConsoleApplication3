#include <iostream>

class Figure {

public:
	void m() {
		std::cout << name << ": " << sides_count << std::endl;
	}

protected:
	int sides_count = 0;
	std::string name = "Figure";
};
class Triangle :public Figure {
public:
	Triangle() {
		name = "Trangle";
		sides_count = 3;
	};
	void m() {
	
		std::cout << name << ": " << sides_count << std::endl;
	}

};
class Quadrangle :public Figure {
public:
	Quadrangle() {
		name = "Quadrangle ";
			sides_count = 4;
	};
	void m() {
			std::cout << name << ": " << sides_count << std::endl;
	}

};

int main()
{
	std::cout << "Количество сторон: \n";
	Figure figure;
	Triangle triangle;
	Quadrangle quadrangle;
	figure.m();
	triangle.m();
	quadrangle.m();


}
