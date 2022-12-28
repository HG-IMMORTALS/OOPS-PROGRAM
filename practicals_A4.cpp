#include <iostream>
using namespace std;

class Marvel
{
private:
    string role;
    int popularity;

public:
    Marvel(string role, int popularity);
    inline void display();
    friend int increase(Marvel m);
};

Marvel::Marvel(string role, int popularity)
{
    this->role = role;
    this->popularity = popularity;
}

void Marvel::display()
{
    cout << "Character: " << role << endl;
    cout << "Popularity: " << popularity << endl;
}

int increase(Marvel m)
{
    m.popularity += 1;
    return m.popularity;
}

int main()
{
    Marvel m("Iron Man", 1);
    m.display();
    cout << "Increased " << increase(m) << endl;
    m.display();
    return 0;
}