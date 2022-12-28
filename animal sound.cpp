#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;


class Animal
{
public:
	Animal() : name("") {cout << "Animal constructor! "; }
	Animal(string animal_name) : name(animal_name) {cout << "Animal constructor, but with name! "; }
	virtual void eat() { cout << "Animal needs to eat something." << endl; }
	virtual void move() { cout << "Animal does move somehow." << endl; }
	virtual void pawCount() { cout << "I can't count, but animal is likely to have paws." << endl;}
	virtual void makesSound() { cout << "Animal should make sound occasionally." << endl; }
private:
	string name;
};


class Tetrapod : virtual public Animal
{
public:
	Tetrapod() : Animal() { cout << "Tetrapod constructor! "; }
	virtual void eat() { cout << "Tetrapod eats like a tetrapod." << endl; }
	virtual void move() { cout << "Tetrapod move on four legs." << endl; }
	void size() { cout << "Tetrapods come in different sizes" << endl; }
	virtual void pawCount() { cout << "Tetrapod should have  four paws." << endl;}
private:
	string name;
};


class Carnivore : virtual public Animal
{
public:
	Carnivore() : Animal() {cout << "Carnivore constructor! "; }
	virtual void eat() { cout << "Carnivore eats what it hunted." << endl; }
	virtual void move() { cout << "Carnivore can move fast." << endl; }
	void mealAmount() { cout << "Carnivore needs fewer meals than Herbivore." << endl; }
	virtual void pawCount() { cout << "Can't think of healthy carnivore that wouldn't have 4 paws." << endl;}
private:
	string name;
};

class Cat : public Tetrapod, public Carnivore
{
public:
	Cat(): Tetrapod(), Carnivore() {cout << "Cat constructor! "; }
	virtual void eat() { cout << "Theoretically cat eats mice." << endl; }
	virtual void move() { cout << "Cat moves quickly and silently." << endl; }
	virtual void pawCount() { cout << "Normal cat will always have 4 paws." << endl;}
private:
	string name;
};


int main()
{

	Cat kitty;
	kitty.eat();
	kitty.move();
	kitty.pawCount();
	kitty.makesSound();
	
	string temp;
	cin >> temp;
	
	return 0;
}
