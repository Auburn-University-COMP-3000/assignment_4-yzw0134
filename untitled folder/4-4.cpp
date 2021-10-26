#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;
class Month {
public:
Month (char first, char second, char third);
Month (int aMonth);
Month ();
void inputNumber (istream& fin);
void inputLetter (istream& fin);
void outputNumber (ostream& fout);
void outputLetter (ostream& fout);
Month nextMonth();
private:
int month;
};
int main() {
Month test1, test2;
cout << "Enter a month value as an integer: ";
test1.inputNumber(cin);
cout << "The currunt month in number is: ";
test1.outputNumber(cout);
cout << "The currunt month is: ";
test1.outputLetter(cout);
cout << "The next month is: ";
test1.nextMonth();
//test1.outputLetter(cout);
//cout << "Or in number is: ";
//test1.outputNumber(cout);
//cout << endl;
  
cout << "Enter the month in character (first 3 letter): ";
test2.inputLetter(cin);
cout << "The currunt month in number is: ";
test2.outputNumber(cout);
cout << "The currunt month in letter is: ";
test2.outputLetter(cout);
cout << "The next month after this month is: ";
test2.nextMonth();
test2.outputLetter(cout);
cout << "Or in number is: ";
test2.outputNumber(cout);
cout << endl;
return 0;
}
Month::Month (char first, char second, char third) {
if (first == 'j' && second == 'a' && third == 'n')
month = 1;
else if (first == 'f' && second == 'e' && third == 'b')
month = 2;
else if (first == 'm' && second == 'a' && third == 'r')
month = 3;
else if (first == 'a' && second == 'p' && third == 'r')
month = 4;
else if (first == 'm' && second == 'a' && third == 'y')
month = 5;
else if (first == 'j' && second == 'u' && third == 'n')
month = 6;
else if (first == 'j' && second == 'u' && third == 'l')
month = 7;
else if (first == 'a' && second == 'u' && third == 'g')
month = 8;
else if (first == 's' && second == 'e' && third == 't')
month = 9;
else if (first == 'o' && second == 'c' && third == 't')
month = 10;
else if (first == 'n' && second == 'o' && third == 'v')
month = 11;
else if (first == 'd' && second == 'e' && third == 'c')
month = 12;
else {
cout << "Invalid month!\n";
exit(1);
}
}
Month::Month (int aMonth) {
if (aMonth > 12 || aMonth < 1) {
cout << "Invalid month!\n";
exit(1);
}
else
month = aMonth;
}
Month::Month () {
  
}
void Month::inputNumber(istream& fin) {
fin >> month;
if (month > 12 || month < 1) {
cout << "Invalid month!\n";
exit(1);
}
}
void Month::inputLetter(istream& fin) {
char first, second, third;
fin >> first >> second >> third;
first = tolower(first);
second = tolower(second);
third = tolower(third);
if (first == 'j' && second == 'a' && third == 'n')
month = 1;
else if (first == 'f' && second == 'e' && third == 'b')
month = 2;
else if (first == 'm' && second == 'a' && third == 'r')
month = 3;
else if (first == 'a' && second == 'p' && third == 'r')
month = 4;
else if (first == 'm' && second == 'a' && third == 'y')
month = 5;
else if (first == 'j' && second == 'u' && third == 'n')
month = 6;
else if (first == 'j' && second == 'u' && third == 'l')
month = 7;
else if (first == 'a' && second == 'u' && third == 'g')
month = 8;
else if (first == 's' && second == 'e' && third == 't')
month = 9;
else if (first == 'o' && second == 'c' && third == 't')
month = 10;
else if (first == 'n' && second == 'o' && third == 'v')
month = 11;
else if (first == 'd' && second == 'e' && third == 'c')
month = 12;
else {
cout << "Invalid month!\n";
exit(1);
}
}
Month Month::nextMonth() {
if (month < 12)
month++;
else
month = 1;
return month;
}
void Month::outputNumber(ostream& fout) {
fout << month << endl;
}
void Month::outputLetter(ostream& fout) {
if (month == 1)
fout << "Jan";
else if (month == 2)
fout << "Feb";
else if (month == 3)
fout << "Mar";
else if (month == 4)
fout << "Apr";
else if (month == 5)
fout << "May";
else if (month == 6)
fout << "Jun";
else if (month == 7)
fout << "Jul";
else if (month == 8)
fout << "Aug";
else if (month == 9)
fout << "Sep";
else if (month == 10)
fout << "Oct";
else if (month == 11)
fout << "Nov";
else if (month == 12)
fout << "Dec";
fout << endl;
}
