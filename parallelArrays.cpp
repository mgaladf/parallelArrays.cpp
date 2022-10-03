// parallelArrays.cpp
// parallel arrays program for CSCI 112
// last edited Apr 18, 2022 by M. Galad

#include <iostream>
using namespace std;

int main(){
	
	// create array for player names
	string players[5];
	
	// create array for points scored
	int points[5];
	
// ************************************************************
	
	// declare variables
	int array1;
	int array2;
	
	// create while loop for user input for player name
	for(array1 = 0; array1 < 5; array1++){
		
		// input player's name
		cout << "Please input the player's last name: ";
		
		// get user input
		cin >> players[array1];
		
	} // end while loop for player name
	
	// create while loop for user input for points scored
	for(array2 = 0; array2 < 5; array2++){	
	// input points scored
	cout << "Please input points scored by player: ";
	
	// get user input
	cin >> points[array2];	
		
	} // end while loop for points scored	
	
// ************************************************************

	// declare variable
	int i;
	
	// ouput players and associated points
	for (i = 0; i < 5; i++) {
  		
		  cout << "\n" << players[i] << " scored: " << points[i] << " points\n";
		  
	}
	
// ************************************************************

	// declare variable
  	int sum;
	  	
	// find the sum of the scores for all players
	for (i = 0; i < 5; i++) {
		
		// calculate sum of points
		sum += points[i];
		
	}
	
	// output sum of points
	cout << "\nThe sum of the points scored: " << sum;
	
// ************************************************************

	// declare variable
  	int avg;
  	
	// find the average score for all players
	avg = sum / players.length();
	
	// output average of points
	cout << "\nThe average of the points scored: " << avg;	
	
// ************************************************************

	// declare variable
	double highestScore = points[0];
	int pos;
	
	
	// find the highest score
	for (i = 1; i < 5; i++) {
    	
		if (points[i] > highestScore ) 
			highestScore = points[i];
			pos = i;
    	
   	} // end highest score
	
	cout << "\nThe highest number of points scored: " << highestScore;
	
} // end main()
