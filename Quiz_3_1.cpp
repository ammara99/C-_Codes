#include <iostream>
using namespace std;
struct record
{
    int year[5];
    double price;
    string category;
}; struct book
{
    record r;
    string title;
    string publication;
    string author;
};

int main()
{
    book b[3];
    for (int i = 0; i < 3; i++)
    {
    
		cout << "Enter book " << i + 1 << " title: ";
        getline(cin, b[i].title);   
         cout << "Enter book price: ";
         cin>> b[i].r.price;
 		cin.ignore();		
        cout << "Enter book publication: ";
         getline(cin, b[i].publication);
         cout << "Enter book author: ";
         getline(cin, b[i].author);
		cout << "Enter book category: ";
        getline(cin, b[i].r.category);
    
       for (int j = 0; j < 5; j++)
        {
            cout << "Enter book year " << j + 1 << " : ";
            cin >> b[i].r.year[j]; 
        }
          cin.ignore(); 
    }
    cin.ignore(); 

    for (int i = 0; i < 3; i++)
    {
        cout << "Book " << i + 1 << " title: " << b[i].title << endl;
        cout << "Book publication: " << b[i].publication << endl;
        cout << "Book author: " << b[i].author << endl;
        cout << "Book price: " << b[i].r.price << endl;
        cout << "Book category: " << b[i].r.category << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "Book year " << j + 1 << " : " << b[i].r.year[j] << endl;
        }
    }

    double max = b[0].r.price;
    for (int i = 0; i < 3; i++)
    {
        if (b[i].r.price > max)
        {
            max = b[i].r.price;
        }
    }
    cout << "Highest Price: " << max << endl;

    return 0;
}
