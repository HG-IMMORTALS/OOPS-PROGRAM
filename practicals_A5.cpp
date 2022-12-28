#include <iostream>
using namespace std;

class Weight
{
private:
    int kg;
    int g;

public:
    Weight(int kg, int g);
    Weight();
    Weight add(Weight obj);
    void display();
};

Weight::Weight(int kg_, int g_)
{
    this->kg = kg_;
    this->g = g_;
}

Weight::Weight()
{
    int kg_, g_;
    cout << "Enter weight in kilogram and gram" << endl;
    cin >> kg_ >> g_;
    kg = kg_;
    g = g_;
}

Weight Weight::add(Weight obj2)
{
    Weight temp;
    temp.kg = this->kg + obj2.kg;
    temp.g = this->g + obj2.g;
    if (temp.g >= 1000)
    {
        ++temp.kg;
        temp.g = temp.g - 1000;
    }
    return temp;
//     this->kg += obj2.kg;
//     this->g += obj2.g;
//     if (this->g >= 1000)
//     {
//         this->kg += 1;
//         this->g -= 1000;
//     }
//     return *this;
}

void Weight::display()
{
    cout << kg << " kilograms and " << g << " grams" << endl;
}
int main()
{
    Weight w, w2, w3(0, 0);
    w3 = w.add(w2);
    w3.display();
    return 0;
}
