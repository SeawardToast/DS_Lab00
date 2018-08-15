#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int info(){
    cout << "Name: Aidan Murphy" << endl;
    cout << "Phone: 678-925-3063 Email: aidan@murphyhouse.us" << endl;
    cout << "Hometown: Buford, GA" << endl;
    cout << "High School: Lanier High School" << endl;
    cout << "Previous Colleges: N/A" << endl;
    cout << "Precalculus, Calculus 1, Calculus 2 all taken at GGC, CS1, CS2 taken at KSU" << endl;
    cout << "Last math course: Calculus 2 at GGC" <<endl;
    cout << "Last CS course: CS2 at KSU" << endl;
    cout << "I am confident working on all types of computers. I am writing this on Ubuntu" << endl;
    cout << "I was a pizza delivery driver for Dominos, I've played soccer since I was three years old." << endl;
    cout << "I love Game of Thrones" << endl;
    cout << "I plan on being a programmer somewhere doing something, preferably somewhere in Colorado. Working for a start-up would be fun" << endl;
}

//function to add the first n terms of a positive integer
int addition(){
    int a;
    cout << "" <<endl;
    cout << "Enter a positive integer" <<endl;
    cin >> a;
    if(a < 0){
        cout << "Invalid input. Number must be positive. Exiting program." << endl;
        return 0;
    }
    std::string s = std::to_string(a);
    double sum = 0;
    int i_counter;
    for (int i = 0; i < s.length(); i++){
        char x = s[i];
        //create stringstream for parsing
        stringstream str;
        //pass char x to str object
        str << x;
        //create temp of type double and pass char from x through stream to double temp
        double temp;
        str >> temp;
    	sum = sum + temp;
    	i_counter = i;
    }
    cout << "The sum of the first " << i_counter+1 << " terms is " << sum <<endl;
}

int loop(){
    int var = 8;
    int counter = 5;
    for (int i = 0; i < 5; i++){
        int temp = var;
        for (int k = 0; k < counter; k++){
            cout << temp << " ";
            temp = temp -2;
        }
        counter--;
        var = var -2;
        cout << "" <<endl;
    }
}
int main(){
    int input;
    cout << "Welcome to Lab00, which excercise would you like to run? (1, 2, 3)" << endl;
    cin >> input;
	switch (input){
		case 1 : info();
		break;
		case 2 : addition();
		break;
		case 3 : loop();
		break;
		default : cout << "The selection you have entered is invalid. Try again!" << endl;
	}
}
