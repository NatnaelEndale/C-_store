#include <iostream>
#include <string>
using namespace std;

struct Date 
{
    int day;
    int month;
    int year;
};

struct Student
{
    string fullName;
    string idNumber;
    Date birthDate;
};

void display(Student &data)
{
    cout << "Full Name: "<<data.fullName<<endl;
    cout <<"Id: "<<data.idNumber<<endl;
    cout<<"Birth Date: "<<data.birthDate.day<<"/";
    cout<<data.birthDate.month<<"/";
    cout<<data.birthDate.year<<endl;
}

int main()
{
    Student my_info = {"Natnael Endale", "UGR/1234/17", {05, 12, 2005}};
    display(my_info);
    
    return 0;
}