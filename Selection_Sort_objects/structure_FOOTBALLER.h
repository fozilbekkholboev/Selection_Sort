

#ifndef STRUCTURE_FOOTBALLER_H
#define STRUCTURE_FOOTBALLER_H
#include <string>
#include <iostream>

using namespace std;


class Footballer
{

private:
    string name;
    string surname;
    int Number;
    string position;
    string club;
    float height;
    int overall;
    double salary;

public:

    string getName() {return name;}
    string getSurname() {return surname;}
    int getNumber() { return Number; }
    string getPosition() {return position;}
    string getClub() {return club;}
    float getHeight( return height;)
    int getOverall() {return overall; }
    double getSalary() {return salary; }

    void setname(string N) {name = N;}
    void setSurname(string S) {surname = S;}
    void setnPosition(string P) {position = P;}
    void setClub(string C) {club = C;}

    void setNumber(int N) {Number = N; }
    void setHeight(float H) {height = H; }
    void setOverall(int O) {overall = O; }
    void setSalary(double S) {salary = S; }

    void display();

    friend ostream& operator<<(ostream &stream, const Footballer &o);
    bool operator< (const Footballer &o);
    bool operator> (const Footballer &o);

};

void Footballer::display()
{
    cout << "Name:  \n" << name;
    cout << "Surname:  \n" << surname;
    cout << "Number:  \n" << Number;
    cout << "Position:  \n" << position;
    cout << "Club:  \n" << club;
    cout << "Height:  \n" << height;
    cout << "Overall:  \n" << overall;
    cout << "Salary:  \n" << salary;

}


ostream& operator<< (ostream &stream, const Footballer &o)
{
    stream << "\nName:  \n" << o.name << "Surname:  \n" << o.surname << "Number:  \n" << o.Number << "Position:  \n" << o.position <<
    "Club:  \n" << o.club << "Height:  \n" << o.height << "Overall:  \n" << o.overall << "Salary:  \n" << o.salary;

    return stream;
}

bool Footballer::operator< (const Footballer &o)
{
    if (this->overall < o.overall)
        return true;
    return false;
}

bool Footballer::operator> (const Footballer &o)
{
    if (this->overall > o.overall)
        return true;
    return false;
}

#endif // STRUCTURE_FOOTBALLER_H
