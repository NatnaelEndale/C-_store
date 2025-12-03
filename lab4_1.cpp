# include <iostream>
using namespace std;

struct student{
    int idno;
    string fname;
    int age;
    double gpa;

}s1={123, "Natty", 30, 3.89};

void display(student  & x){
    cout<<"Student Information"<<endl;
    cout << "student id: "<<x.idno<<endl;
    cout << "student name: "<<x.fname<<endl;
    cout<< "studen age: " << x.age<<endl;
    cout<< "student gpa: "<<x.gpa<<endl;
}

// int main(){
//     display(s1);
// }

student getdata(){
    student s2;
    cout<<"Enter id number: ";
    cin >> s2.idno;
    cout<< "Enter your name: ";
    cin >> s2.fname;
    cout<<"Enter age: ";
    cin >> s2.age;
    cout<< "Enter your gpa: ";
    cin >> s2.gpa;

    return s2;
}

void dispalyptr(student *s){
    cout << "Studnet One Information"<<endl;
    cout<<"ID NO: "<<s -> idno<<endl;
    cout<<"Full name: "<<s -> fname<<endl;
    cout<<"Age :"<<s -> age<<endl;
    cout<<"GPA: "<<s -> gpa<<endl;

}


int main(){
    student *ptr = &s1;
//  student2 = getdata();
//     display(student2);
    display(s1);
    dispalyptr(ptr);
    // display()

    return 0;

}
