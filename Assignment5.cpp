// Timothy McHale Assignment 5

// The details of all functions will be above the comments 
// more details about the main program can be found inside the main program

// The main program will read in an integer value from a file called n
// n is the size of the dataset, it will be 15
// We will call a function called read3arrays to read in 15 values into three arrays
// different sets of arrays called score1, score2, score3
// the next function called print one array will print each array
// that will be called four times, one for each array previously listed and for a final array called sumscores
// we will call our next function called makenewarray, this will add the previous arrays together to amke a new array
// wewill call print1array for makenewarray

// note that the files for input and output were called above the main program
// so they have universal scope

#include <iostream>
#include <fstream>
using namespace std;
int read3arrays (int [], int [], int [], int);
void print1array (int, int[]);
void makenewarray (int, int[], int [], int [], int []);
void findsmallestandpos (int, int [], int &, int &);
ifstream infile ("inp.txt");
ofstream outfile("outfile7.txt");
int main ()
{
	int n;
	
	outfile << "How many test scores are in this set?" << endl;
	infile >> n;
	outfile << "There will be " << n << " scores in this set." << endl;
	
	int score1[n], score2[n], score3[n], smallestscore1, posscore1, smallestscore2, posscore2, smallestscore3, posscore3, smallestsumscores, possumscores, sumscores[n];
	
	read3arrays(score1, score2, score3, n);
	
	outfile << endl;
	
	outfile << "This is the data for the first group of test scores, they are saved in an array called score1." << endl;
	
	outfile << endl;
	
	print1array(n, score1);
	
	outfile << endl;
	
	outfile << endl;
	
	outfile << "This is the data for the second group of test scores, they are saved in an array called score2." << endl;
	
	outfile << endl;
	
	print1array(n, score2);
	
	outfile << endl;
	
	outfile << endl;
	
	outfile << "This is the data for the third group of test scores, they are saved in an array called score3." << endl;
	
	outfile << endl;
	
	print1array(n, score3);
	
	outfile << endl;
	
	outfile << endl;
	
	outfile << "This is the output of makenewarray function" << endl;
	

	makenewarray(n, score1, score2, score3, sumscores);
	
	outfile << endl;
	
	print1array(n, sumscores);
	
	outfile << endl;
	
	findsmallestandpos(n, score1, smallestscore1, posscore1);
	
	findsmallestandpos(n, score2, smallestscore2, posscore2);
	
	findsmallestandpos(n, score3, smallestscore3, posscore3);
	
	findsmallestandpos(n, sumscores, smallestsumscores, possumscores);
	
	outfile << "The smallest element in array score1 is " << smallestscore1 << endl;
	
	outfile << "This occurs in location " << posscore1 << " of the array." << endl;
	
	outfile << "The smallest element in array score2 is " << smallestscore2 << endl;
	
	outfile << "This occurs in location " << posscore2 << " of the array."<< endl;
	
	outfile << "The smallest element in array score3 is " << smallestscore3 << endl;
	
	outfile << "This occurs in location " << posscore3 << " of the array." <<endl;
	
	outfile << "The smallest element in array sumscores is " << smallestsumscores << endl;
	
	outfile << "This occurs in location " << possumscores << " of the array." << endl;

	
	outfile.close();
	infile.close();
	
	return 0;
}
	// Brings in four parameters, three arrays which are called score1, score2, score3 in the main program
	// the final parameter is k, which is called n in the main program
	//NOTE! the values are read in by array location not one array at a time
	// So the first value entered is in x[0], the second value entered is y[0], not x[1]
	// The values of the arrays are stored in the function
	// The three statements below should print when the function is called
		int read3arrays(int x[], int y[], int z[], int k)
{
	for (int count = 0; count < k ; count++)
	
	{
		outfile << "What is the first test score for this student?" << endl;
		infile >>x[count];
		outfile << "The first test score for this student is " << x[count] << endl;
		
		outfile << "What is the second test score for the student?" << endl;
		infile    >> y[count];
		outfile << "The second test score for this student is " << y[count] << endl;
		
		outfile << "What is the third test score for this student?" << endl;
		infile    >> z[count];
		outfile << "The last test score for this student is " << z[count] << endl;
	}
}
	// print1array recieves two variables, one m (called n in the main program)
	// and an array, the main program will print all four arrays
	// We print six values on each line, indenting every other line with the tab key
	
	void print1array(int m, int nums[])
{
	for (int x = 0; x < 6; x++)
	outfile << nums[x] << "\t";
	
	outfile << endl;
	
	
	for (int y = 6; y < 12; y++)
	outfile << nums[y] << "\t";
	
	outfile << endl;
	
	for (int z = 12; z <= 14; z++)
		outfile << nums[z] << "\t";
	
}	

	// makenewarray recieves four arrays and one integer variable n
	// We write a for loop iterating over a (made up variable) until a reaches n (the size of the dataset)
	// as a iterates through, the code within the for loop adds together each array at variable a's position
	// What we get is a new array called sumscores, it is the sum of the previous arrays
	// ex. x[0] + y[0] + z[0] = sumscores[0]
	void makenewarray(int n, int x[], int y[], int z[], int sumscores[])
{
	for (int a = 0; a < n; a++)
	{
		sumscores[a] = x[a] + y[a] + z[a];
	}
}
	// findsmallestandpos recieves an integer n from the main program which is called m in this function
	// it recieves an array variable
	// it also recieves two reference parameters
	// which will be used to return two values: the smallest number in a given array and also its position in the array
	void findsmallestandpos(int m, int p[], int &y, int &z)
{
 	y = p[0];
 	
	 for (int count = 0; count < m; count++)
 	{
 		if ( y >= p[count])
 		{
 			y = p[count];
 			z = count;
 		}
 		
 		
 	}
}
