// Timothy McHale Assignment 6

// So this is a simple program that reads 10 
// dates that will be stored by string values in our program
// Our main program won't do any of the heavy lifting
// it will mainly call other functions
// The first function called will be readoriginaldate
// readoriginaldate will be a void function, 
// and will store one reference parameter date 
// date will be used by all our other functions in the program.
// The second function we will use in the program is breakoriginaldate
// breakoriginal date will have four parameters, the first will the date read in by readoriginaldate
// the next three parameters will be three reference parameters that will store the strings: month, day, year
// breakoriginaldate will break our program into three smaller strings
// those strings will be month, day and year
// Our third and final function that our main program will call is printdate3ways
// print date three ways will have three parameters, all strings
// they will be month, day, and year
// these are the same three strings created from function breakoriginaldate
//
// Further details about the program can be found in the comments inside the original program
// Further details about each specific function can be found in the comments just above
// each of those functions

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void readoriginaldate(string &); 
void breakoriginaldate(string, string &, string &, string &);
void printdate3ways(string, string, string);
ifstream infile("in6.txt");
ofstream outfile("outfile6.txt");
int main ()
{
	// We initialize the string values that we will be using throughout the program
	
	string date, month, day, year;
		
	date = "";
	
	// using a for loop, no sentinel, we're going to use 10 datasets
	// keeping it simple
	
	for (int x = 0; x < 10; x++)
	{
	
		//our three function calls
		readoriginaldate(date);
		
		outfile << date << endl;	
	
		breakoriginaldate(date, month, day, year);
		
		printdate3ways(month, day, year);
	
	}

	outfile.close();
	infile.close();
	
	return 0;
}
	
	// So readoriginaldate reads in a date from the input file
	// and stores it in a reference parameter for use later in the program
	void readoriginaldate(string &date)
{
	outfile << "Enter the date ..." << endl;
	outfile << endl;
	infile >> date;
	outfile << endl;
	outfile << "The date you entered was " << date << endl;
}
	// breakoriginaldate has four parameters
	// The first is a string value date and we break that into three
	// seperate string values that is stored 
	// in three seperate string reference parameters month, day, year
	void breakoriginaldate(string date, string &month, string &day, string &year)
{
	outfile << "This is the original date you gave " << date << endl;
	
	outfile << endl;
	
	if (date[2] == '/' )
	month = date.substr(0, 2);
	
	else
	month = date.substr(0, 1);
	
	outfile << "This is the month " << month << endl;
	
	outfile << endl;
	
	if (date[2] == '/' && date[5] == '/')
	day = date.substr(3, 2);
	
	if (date[1] == '/' && date[4] == '/')
	day = date.substr(2, 2);
	
	if (date[1] == '/' && date[3] == '/')
	day = date.substr(2, 1);

	if (date[2] == '/' && date[4] == '/')
	day = date.substr(3, 1);	
		
	outfile << "This is the day " << day << endl;
	
	if (date[2] == '/' && date[5] == '/')
	year = date.substr(6, 2); 
	
	
	if (date[1] == '/' && date[4] == '/')
	year = date.substr(5, 2);
	
	
	if (date[1] == '/' && date[3] == '/')
	year = date.substr(4, 2);
	
	
	if (date[2] == '/' && date[4] == '/')
	year = date.substr(5, 2);
	
	
	outfile << endl;
	
	outfile << "This is the year " << year << endl;
	
	outfile << endl;
}
	// print date takes three parameters.
	// month, day, year
	// it prints these strings in three seperate ways 
	// which will be seen in the output
	// european, american, and the full way
	// The European and the full way are very direct
	// The American way was a little more difficult
	// I assigned the month ex. 01 a string called january
	// then I printed the date using that variable instead of the word "January "
	
	// Admittedly if there is a more efficient algorithm, point me in that direction for th sake of future programs
	
	void printdate3ways (string month, string day, string year)
{
	string print1, print2, january, febuary, march, april, may, june, july, august, september, october, november, december;
	
	print1 = day + "."	+ month + "." + year;
	
	outfile << "The European way ... "<< print1 << endl;
	
	january = "January ";
	febuary = "Febuary ";
	march = "March " ;
	april = "April ";
	may = "May ";
	june = "June ";
	july = "July ";
	august = "August ";
	september = "September ";
	october = "October ";
	november = "November ";
	december = "December ";
	
	if (month == "01")
	{
		outfile << january + day + "," + " 20" + year << endl;
	}
	
	if (month == "02")
	{
		outfile << febuary + day +  "," + " 20" + year << endl;
	}
	
	if (month == "03")
	{
		outfile << march + day + "," + " 20" + year << endl;
	}
	
	if (month == "04")
	{
		outfile << april + day + "," + " 20" + year << endl;
	}
	
	if (month == "05")
	{
		outfile << may + day + "," + " 20" + year << endl;
	}
	
	if (month == "06")
	{
		outfile << june + day + "," + " 20" + year << endl;
	}
	
	if (month == "07")
	{
		outfile << july + day + "," + " 20" + year << endl;
	}
	
	if (month == "08")
	{
		outfile << august + day + "," + " 20" + year << endl;
	}
	
	if (month == "09")
	{
		outfile << september + day + "," + " 20" + year << endl;
	}
	
	if (month == "10")
	{
		outfile << october + day + "," + " 20" + year << endl;
	}
	
	if (month == "11")
	{
		outfile << november + day + "," + " 20" + year << endl;
	}
	
	if (month == "12")
	{
		outfile << december + day + "," + " 20" + year << endl;
	}	
	
	print2 = month + "-" + day + "-" + "20" + year;
	
	outfile << "The full way of printing ... " << print2 << endl;
}
