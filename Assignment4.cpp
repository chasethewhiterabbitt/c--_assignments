// Timothy McHale Assignment 4
// This program will ask for three SAT scores,
// the user will read in the data
// The program will determine if the scores are of the correct value 
// through the function isitavalidgroup
// main program will call function classify, which will call ratescore and findsumavg

#include <iostream>
using namespace std;
bool isitavalidgroup(int, int, int);
int classify(int, int, int);
int ratescore (int);
int findsumandavg (int, int, int);

// Main function will read in test values
// through a while loop, 1000 for the first score is the sentinel
// read in the three test scores
// then calls function isitavalidgroup
// valid if an integer value between 200 and 800
// if valid states VALID then adds to the counter of valid groups
// then calls function classify
// if invalid  adds to counter of invalids and starts the loop again
// loop ends with 1000 as the test1 (sentinel) 
// the main program ends with the terminal outputting the counters for 
// valid groups, invalid groups, total groups

int main()
{
	
	int test1, test2, test3, p, validgroups, invalidgroups, totalgroups;
	validgroups = 0;
	invalidgroups = 0;
	totalgroups = 0;


	
	while (test1 != 1000)
	{
		
	
		cout << "What was the score on the first exam?" << endl;
			
		cin >> test1;
			
		cout << "And the second?" << endl;
			
		cin >> test2;
			
		cout << "What about the third?" << endl;
			
		cin >> test3;
		
		cout << "The first score was " << test1 << ", and the second was " << test2 << ", the third was " << test3 << endl;
		
		// We call function isitavalidgroup and give it three integer values 
			
		p = isitavalidgroup (test1, test2, test3);
		 
		 		if (p == true)
				 	{	
		 
		 				cout << "VALID!" << endl;
		 	
		 				validgroups++;
		 				
		 				classify(test1, test2, test3);
		 			}
		 		
				 else
			 		{
		 		  		cout << "The group is invalid" << endl;
		 		 
				   		invalidgroups++;
		 			}
		 
	totalgroups++;
		 
	cout << endl;
		 
	cout << endl;
		 
	cout << endl;
		
	}
	
	
	cout << "There were "<< validgroups << " valid groups" << endl;
	
	cout << "There were "<< invalidgroups << " invalid groups" << endl;
	
	cout << "There are "<< totalgroups << " total groups" << endl;

}
	//Isitavalidgroup is a function that acts a lot like QA,
	//Makes sure that the data entered by the user is 
	//acceptable
	//The only data accepted are positive integers between 
	// 200 and 800
	
	bool isitavalidgroup(int x, int y, int z)
{	
	if ( x < 200 || x > 800)
		
		cout << x << " is invalid" << endl;
	
		
	if ( y < 200 || y > 800)
		
		cout << y << " is invalid" << endl;
		
		
	if ( z < 200 || z > 800)
		
		cout << z << " is invalid" <<  endl;
	
	if (x >= 200 && x <= 800 && y >= 200 && y <= 800 && z >= 200 && z <= 800)
	
	return true;
		
	
}	
	
	//Classify takes the data sent from isitafunction
	// and sends it to two other functions ratescore and 
	//findsumandavg
	
	int classify (int x, int y, int z)
{			
			
		int d;
			
		ratescore (x);
			
		ratescore (y);
			
		ratescore (z);
		
			
		// We're sending all three values to findsumandavg
		//we're giving the value sent to an integer called d and printing it
			
		d = findsumandavg(x, y, z);
			
			
		// Here we rate the score of the average of our three numbers
			
		ratescore (d);
			
}
	
	// This function can only recieve one integer value at a time
	// So it will only accept one test score at a time
	// It puts the test score into a group
	// it is either the number 200, between 200 and 500,
	// the number 500, between 500 and 800, or just 800
	
	int ratescore (int x)
	{
		if (x == 200)	
	
			cout << x << " is exactly 200" << endl;
		
	
		if (x > 200 && x < 500)
	
			cout << x << " is greater than 200 and less than 500" << endl;
	
	
		if ( x == 500)
	
			cout << x << " is exactly 500" << endl;
	
		
		if (x > 500 && x < 800)
		
			cout << x << " is greater than 500 and less than 800" << endl;
		
		
		if (x == 800)
		
			cout << x << " is exactly 800" << endl;
	}
	
	// Findsumandavg is called within classify it gives findsumavg the three test
	//scores. We find the sum of the scores and print it, we find the average of the scores and print it
	// and we also send the value back to classify, where it is categorized by ratescore
	
	int findsumandavg (int x, int y, int z)
{
	int sum, avg;
	
	sum = x + y + z;
	
	avg = sum / 3;

	cout << "The sum of this dataset is " << sum << endl;
	
	cout << "The average of this dataset is " << avg << endl;

	return avg;

}
