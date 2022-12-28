#include<bits/stdc++.h>
using namespace std;
class Weight
{
    public:
    int kg,g;

    friend Weight operator+(Weight obj,Weight p){
        Weight temp;
        temp.kg = p.kg+obj.kg;
        temp.g = p.g+obj.g;
        if(temp.g >= 1000)
		{
            temp.kg+=1;
            temp.g=temp.g-1000;
        }
        return temp;
    }
};
int main()
{
    Weight obj,obj2,obj3;
    obj.kg=5;obj.g=500;
    obj2.kg=6;obj2.g=800;
    obj3 = obj+obj2;
    cout<<"Kg: "<<obj3.kg<<" "<<obj3.g<<" grams"<<endl;
    return 0;
}
