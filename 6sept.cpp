#include<iostream>
using namespace std;
class student{
    public:
    int roll;
    string name;

    void input(){
        cout<<"enter roll no:";
        cin>>roll;

        cout<<"enter name:";
        cin>>name;

    }

    void display(){
        cout<<"roll number:"<<roll<<endl;
        cout<<"name:"<<name<<endl;
    }
};

    int main(){
        student s;
        s.input();
        s.display();
        return 0;
    }