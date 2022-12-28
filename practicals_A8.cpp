#include <iostream>
using namespace std;

class Weight
{
private:
    int kg;
    int g;

public:
    Weight()
    {
        kg = 0;
        g = 0;
    }
    void input(int kg, int g);
    Weight operator+(Weight obj2);
    Weight operator-(Weight obj2);
    Weight operator=(Weight obj2);
    void operator++();
    void operator++(int x);
    void display();
};

void Weight::input(int kg_, int g_)
{
    kg = kg_;
    g = g_;
}

Weight Weight::operator+(Weight obj2)
{
    Weight temp;
    temp.kg = kg + obj2.kg;
    temp.g = g + obj2.g;
    if (temp.g >= 1000)
    {
        ++temp.kg;
        temp.g = temp.g - 1000;
    }
    else
        return temp;
}

Weight Weight::operator-(Weight obj2)
{
    Weight temp;
    temp.g = g - obj2.g;
    if (temp.g < 0)
    {
        temp.g = -temp.g;
        temp.kg = kg - obj2.kg - 1;
    }
    else
        temp.kg = kg - obj2.kg;
    return temp;
}

Weight Weight::operator=(Weight obj2)
{
    kg = obj2.kg;
    g = obj2.g;
}

void Weight::operator++()
{
    ++g;
    if (g >= 1000)
    {
        ++kg;
        g -= 1000;
    }
    else
        ++kg;
}
void Weight::operator++(int x)
{
    g++;
    if (g >= 1000)
    {
        kg++;
        g -= 1000;
    }
    else
        kg++;
}

void Weight::display()
{
    cout << kg << " kilograms and " << g << " grams" << endl;
}

int main()
{
    Weight obj, obj2;
    obj.input(8, 900);
    obj2.input(3, 750);
    Weight obj3 = obj - obj2;
    obj3.display();
    Weight obj4 = obj2;
    obj4.display();
    Weight obj5;
    obj5.input(4, 999);
    obj5++;
    ++obj5;
    obj5.display();
    return 0;
}
