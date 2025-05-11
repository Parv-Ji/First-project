#include<iostream>
using  namespace std;

class teacher{
    private:
    string name;
    string subject;

    public:
    void setname(string NAME){
        name = NAME;
    }
    string getname(){
        return name;
    }
    public:
    void setsubject(string SUBJECT){
        subject = SUBJECT;
    }
    string getsubject(){
        return subject;
    }
};

class student1: public teacher{
    public:
    string sname="SAGAR";
    int Roll_no=1050;
};

class student2: public teacher{
    public:
    string s2name="Parv";
    int roll_no=1077;
};

class detail: public student1, public student2{
    public:
    string Kaksha="Pehli";
};

int main(){

    detail d;
    d.student1::setname("Ravi Master");
    d.student2::setsubject("C++ programming language");
    cout << d.sname << '\n' << d.Roll_no << '\n' << d.student1::getname() << '\n' << d.Kaksha << '\n' << 
    d.student2::getsubject() << '\n' << d.s2name << '\n' << d.roll_no;
    
    return 0;
}