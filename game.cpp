#include <iostream>
#include <cstdlib>

using namespace std;

#define MAX_NUMBER 500

void show_related_message(int goal, int guess){
	if(goal == guess)
		cout << "Congratulations!! You find the number :D" << endl;
	else{
		cout << "Your number is";
		if(abs(goal-guess) >= 100)
			cout << " too :/";
		else if(abs(goal-guess) <= 10)
			cout << " a little";
		if(goal > guess)
			cout << " lower";
		else
			cout << " higher";
		cout << endl;
	}
}

int main(){
	srand(time(NULL));	

	int goal = (rand() % MAX_NUMBER) + 1;
	int guess = 0;
	cout << "The number is between 1 and " << MAX_NUMBER << endl;

	while(guess != goal){
		cout << "Enter your number: ";
		cin >> guess;
		show_related_message(goal, guess);
	}

	return 0;
}
