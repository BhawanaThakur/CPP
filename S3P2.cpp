#include<iostream>
#include<string>
using namespace std;
class Book{
    public:
    string title;
    string author;
    double price;
    void getData(   ){
        cout<<"Enter the title"<< endl;
        cin>> title;
        cout<<"Enter the author"<< endl;
        cin>> author;
        cout<<"Enter the author"<< endl;  
        cin>> author;

    }
    void display(){
        cout<<"\nTitle"<<price;
        cout<<"\nAuthor"<<author;
        cout<<"\nPrice"<<price<<endl;
    }
};
int main()
{
    Book B1,B2,B3;
    B1.getData();
    B1.display();
    B2.getData();
    B2.display();
    B3.getData();
    B3.display();
return 0;

}