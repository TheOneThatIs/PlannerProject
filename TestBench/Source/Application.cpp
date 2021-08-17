#include<iostream>
#include<memory>
#include<vector>


class Base {
public:
	Base(){}
	virtual void print() = 0;
	virtual void doStuff(){}
};

class Derived : public Base{
public:
	Derived(){}
	void print() {
		std::cout << "Derived print" << std::endl;
	}
	void doStuff(){}
};

int main() {
	std::vector<std::unique_ptr<Base>> container;
	container.push_back(std::make_unique<Base>());

	return 0;
}