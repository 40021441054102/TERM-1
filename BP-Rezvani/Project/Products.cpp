#include <iostream>
#include <string.h>
using namespace std;
struct prod{
	int code;
    string name;
    int cost;
};
prod product[50];

int main()
{
    int pnum = 1,code,cost,sum = 0,avg;
    string name;
    for (int i = 0; i < 10; i++)
    {
        cout<<"--------- product number"<<pnum<<" ---------"<<endl;
        cout<<"enter product name :\t"; cin>>name;
        product[i].name = name;
        cout<<product[i].name<<endl;
        cout<<endl;
        cout<<"enter product code :\t"; cin>>code;
        product[i].code = code;
        cout<<product[i].code<<endl;
        cout<<endl;
        cout<<"enter product cost :\t"; cin>>cost;
        product[i].cost = cost;
        cout<<product[i].cost<<endl;
        cout<<endl;
        pnum++;
    }
    int j;
    for (j = 0; j < 10; j++)
    {
        sum = sum + product[j].cost;
        cout<<sum<<endl;
    }
    avg = sum / j;
    cout<<"\navrg :\t"<<avg;
    for (int k = 0; k < 10; k++)
    {
        if (product[k].cost > avg)
        {
            int high = product[k].cost - avg;
            cout<<"\nProduct "<<k<<" is "<<high<<"$ more expensive than the avg of all"<<endl;
        }
    }
    return 0;
}
