#include <iostream>
using namespace std;
struct record
{
    string flightClass;
    double price;
};

struct airplane
{
    record r;
    string company;
    string a_time;
    string route;
};
int main()
{
    airplane a[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter Company: ";
        cin >> a[i].company;

        cout << "Enter a-time: ";
        cin >> a[i].a_time;

        cout << "Enter Route: ";
        cin >> a[i].route;

        cout << "Enter Flight Class: ";
        cin >> a[i].r.flightClass;

        cout << "Enter Price: ";
        cin >> a[i].r.price;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << "Company " << i << " : " << a[i].company << endl;
        cout << "Arrival Time: " << a[i].a_time << endl;
        cout << "Route: " << a[i].route << endl;
        cout << "Flight Class: " << a[i].r.flightClass << endl;
        cout << "Price: " << a[i].r.price << endl;
    }

    double min = a[0].r.price;
    for (int i = 0; i < 3; i++)
    {
        if (a[i].r.price < min)
        {
            min = a[i].r.price;
        }
    }
    cout << "Cheapest Flight Price: " << min << endl;

    return 0;    
}
