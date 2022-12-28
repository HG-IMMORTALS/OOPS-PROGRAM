#include <iostream>
using namespace std;

class Weight
{
private:
    int kg;
    int g;

public:
    void input();
    friend ostream &operator<<(ostream &out, Weight &obj);
    friend istream &operator>>(istream &in, Weight &obj);
    friend Weight operator+(Weight &obj, Weight &obj2);
};

istream &operator>>(istream &in, Weight &obj)
{
    in >> obj.kg;
    in >> obj.g;
    return in;
}

ostream &operator<<(ostream &out, Weight &obj)
{
    out << obj.kg << " kilograms and " << obj.g << " grams";
    return out;
}

Weight operator+(Weight &obj, Weight &obj2)
{
    Weight temp;
    temp.kg = obj.kg + obj2.kg;
    temp.g = obj.g + obj2.g;
    return temp;
}

void Weight::input()
{
    cin >> kg >> g;
}

int main()
{
    Weight obj, obj2;
    cin >> obj;
    cin >> obj2;
    Weight obj3 = obj + obj2;
    // obj.input();
    cout << obj3;
    return 0;
}
