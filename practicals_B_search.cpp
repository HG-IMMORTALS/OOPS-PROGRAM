#include <iostream>
using namespace std;

class Shop
{
private:
    string item;
    int cost;
    int sno;

public:
    void input();
    void display();
    bool search(int key);
};

void Shop::input()
{
	cout << "Enter the name of the item\n";
    getline(cin, item);
    cout << "Enter the cost and serial number of the item\n";
    cin >> cost >> sno;
    cin.ignore();
 //   cout << "Enter the name of the item\n";
 //   getline(cin, item);
}

void Shop::display()
{
    cout << "Item: " << item << endl;
    cout << "Cost: " << cost << endl;
    cout << "S.No: " << sno << endl;
}

bool Shop::search(int key)
{
    return key == sno;
}

int main()
{
    Shop obj, obj2, obj3;
    obj.input();
    obj2.input();
    // obj3.input();

    obj.display();
    obj2.display();
    int key = 2;
    if (obj.search(key) == true || obj2.search(key) == true || obj3.search(key) == true)
        cout << "Item Found\n";
    else
        cout << "Item Not Found\n";
    return 0;
}
