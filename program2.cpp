#include <bits/stdc++.h>
using namespace std;

 class student{
    public:
    string name ;
    int roll_no ;
    int marks ;

    void input(){
        cout <<"Enter name "<<endl;
        getline(cin,name);

        cout <<"enter roll number "<<endl;
        cin >> roll_no;

        cout << "enter marks"<<endl;
        cin >> marks;
        
    }

    void display(){
        cout << "Name : "<< name << endl;
        cout << "Roll Number : "<< roll_no << endl;
        cout << "Marks : "<< marks << endl;
    }
};

    int main(){
        student s1;
        s1.input();
        s1.display();
        return 0;
    }
