#include <iostream>
#include<conio.h>
#include <string>
using namespace std;

class Publication {
protected:
 string title;
 float price;
public:
 Publication () {
 title = "";
 price = 0.0;
 }

 void getData () {
 cout << "Enter the title of the publication: ";
 getline(cin, title);
 cout << "Enter the price of the publication: ";
 cin >> price;
 cin.ignore(); // ignore newline character
 }

 void putData () {
 cout << "Title: " << title << endl;
 cout << "Price: " << price << endl;
 }
};

class Book: public Publication {
private:
 int pageCount;
public:
 Book () {
 pageCount = 0;
 }

 void getData() {
 Publication::getData();
 cout << "Enter the page count of the book: ";
 cin >> pageCount;
 cin.ignore(); // ignore newline character
 }

 void putData() {
 Publication::putData();
 cout << "Page Count: " << pageCount << endl;
 }
};

class Tape : public Publication {
private:
 float playingTime;
public:
 Tape() {
 playingTime = 0.0;
 }

 void getData() {
 Publication::getData();
 cout << "Enter the playing time of the tape (in minutes): ";
 cin >> playingTime;
 cin.ignore(); // ignore newline character
 }

 void putData() {
 Publication::putData();
 cout << "Playing Time: " << playingTime << " minutes" << endl;
 }
};

int main() {
 Book book;
 Tape tape;

 cout << "Enter the details of the book:\n";
 book.getData();
 cout << "\nEnter the details of the tape:\n";
 tape.getData();

 cout << "\nHere are the details of the book:\n";
 book.putData();
 cout << "\nHere are the details of the tape:\n";
 tape.putData();
 getch;
}
