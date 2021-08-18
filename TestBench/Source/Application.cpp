#include<iostream>
#include<memory>
#include<vector>


class Base {
public:
	Base(){}
	virtual void print() = 0;
};

class Derived : public Base{
public:
	Derived(){}
	void print() {
		std::cout << "Derived print" << std::endl;
	}
};

int main() {
	std::vector<std::unique_ptr<Base>> container;
	container.push_back(std::make_unique<Base>());

	return 0;
}