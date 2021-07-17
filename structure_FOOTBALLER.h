

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
    float getHeight() {return height;}
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

    Footballer(string N="", string S="", int Num=0, string P="", string C="", float H=0, int O=0, double Sal=0)
    {
        name = N; surname = S; Number = Num; position = P; club = C; height = H; overall = O; salary = Sal;
    }


    void display();

    friend ostream& operator<<(ostream &stream, const Footballer &o);
    bool operator< (const Footballer &o);
    bool operator> (const Footballer &o);

};

void Footballer::display()
{
    cout << "\nName:\t" << name;
    cout << "\nSurname:\t" << surname;
    cout << "\nNumber:\t" << Number;
    cout << "\nPosition:\t" << position;
    cout << "\nClub:\t" << club;
    cout << "\nHeight:\t" << height;
    cout << "\nOverall:\t" << overall;
    cout << "\nSalary:\t" << salary;

}


ostream& operator<< (ostream &stream, const Footballer &o)
{
    stream << "\nName:\t " << o.name << "\nSurname: " << o.surname << "\nNumber:\t " << o.Number << "\nPosition:" << o.position <<
    "\nClub:\t " << o.club << "\nHeight:\t " << o.height << "\nOverall: " << o.overall << "\nSalary:\t " << o.salary;

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
