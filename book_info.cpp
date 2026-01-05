#include <iostream>
#include <cstring>
using namespace std;

struct Author 
{
    char name[20];
    char email[30];
};

struct Book
{
    char title[30];
    double price;
    Author writer;
};

void display(Book *data)
{
    cout<<"Title of the book: "<< data->title<< endl;
    cout<<"Price of the book: "<< data->price<<"Birr\n";
    cout<<"Autor of the book: "<< data->writer.name<< endl;
    cout<<"Email of the book: "<< data->writer.email<< endl;
}


int main(){
    Book my_book;
    strcpy(my_book.title, "C++ Programming");
    my_book.price = 45.99;
    strcpy(my_book.writer.name, "Dr.Zeleke");
    strcpy(my_book.writer.email, "zeleke@aau.edu.et");

    Book *ptr = &my_book;
    ptr -> price = 50.00;
    display(ptr);
    
    return 0;
}

