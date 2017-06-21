/****************************************************************************** 
 * File:   homework3.cpp
 * Author: Kyle Foley
 * Class: CSC 331
 * Program: Homework 2
 * Created on September 23, 2015, 7:18 PM
 * 
 * Homework 3 Constructs and stores Dogs both by taking parameters and by 
 * taking input from the user. Dogs are objects containing an age in form of an
 * integer and a name in form of a string.
 *****************************************************************************/

#include <iostream>
using namespace std;

class Dog //Standard class definition
{ // Begin class Dog
    
public: //all functions and variables below are accessible 
        //to the rest of the program
    
    Dog();
    // Default constructor that takes no parameters
    
    Dog (int a, double w, string n);
    // Default constructor where a = the age and n = the name
    
    ~Dog();
    // Default destructor
    
    void printinfo();
    // Method to print specified Dog's name and age
    void bark();
    // Method to print specified Dog's name and age and make it bark
    double getWeight();
    // Method to return the weight of specified dog
    void setWeight (double w);
    // Method to set the weight of specified dog
    
private: //all functions and variables below this are only accessible to 
         //this class (Dog)
    
    static int count; // Holds number of dogs in existence
    int age; // Will hold the number representing the dog's age
    string name; // Will hold the dog's name as a string.
    double weight; // Will hold the dog's weight as a real number
    
}; // end Dog

int Dog::count = 0;

// Method Dog which takes an int (a) for age and string (n) for name and 
// constructs a Dog which has an age and a name.
Dog::Dog(int a, double w, string n)
{
    age = a;
    name = n;
    weight = w;
    // Sets dogs age, weight, and name to the input values
    
    count++;
    // Iterating count variable to store how many Dogs there are
    
    cout << "There are now " << count << " dogs." << endl;
    //Printing amount of dogs currently in existence
    
    //Debugging:
    //cout <<"In constructor, name " <<name<< " and age " << age << endl;
    
} // end Dog method


// Method Dog which takes no parameters but prompts user for an int and string
// for age and name respectively, then constructs a dog with an age and name
Dog::Dog()
{
    cout << "Please enter your dog's name: ";
    cin >> name;
    // Prompting user to enter a name for their dog and storing it in "name"
    
    cout << "Please enter your dog's age: ";
    cin >> age;
    cout << endl;
    // Prompting user to enter an age for their dog and storing it in "age"
    
    cout << "Please enter your dog's weight in pounds "
            "(including decimal points): ";
    cin >> weight;
    cout << endl;
    // Prompting user to enter a weight for their dog and storing it in "weight"
    
    count++;
    // Iterating count variable to store how many Dogs there are
    
    cout << "There are now " << count << " dogs." << endl;
    // Printing amount of dogs currently in existence
    
    //debugging:
    //cout << "In constructor, name = " << name << " and age = " << age << endl
      //      << endl;
    
} // end No parameter Dog method


// Method Delete which takes in an object of type Dog and deletes the reference 
// to its properties (Default Destructor)

Dog::~Dog()
{
    count--;
    // Decrement variable count to represent one less dog in existence
    
    cout << "There are now " << count << " dogs." << endl;
    // Printing amount of dogs currently in existence
    
}// end Delete method


// Method printinfo prints the name and age of the Dog specified
void Dog::printinfo()
{
     cout << "Printing info for " << name << ", age " << age <<
             ", who weighs " << weight << " pounds" << endl;
} // end printinfo


// Method bark prints the name and age of the Dog specified
// if the dog is 5 years or older, bark will be printed 3 times,  else 1 time
void Dog::bark()
{
    cout << name << ", who is " << age << " years old is barking. ";
    // Printing the Dog's name and age
    
    if (weight >= 5.0) // If the dog is 5 or older it barks 3 times
        cout << "Bark. Bark. Bark.";
    else // If the dog is younger than 5 it barks once
        cout << "Bark.";
     
    cout << endl;
} // end bark


// Method getWeight will return the real number for the specified dog
double Dog::getWeight()
{
    return weight;
    // Returning weight of specified dog
    
}// end method getWeight


// Method setWeight will set the weight of specified dog to a specified real
// number
void Dog::setWeight (double w)
{
    weight = w;
    // Setting specified dog's weight to value stored in w
    
}// end method setWeight
     

int main(int argc, char** argv)
{
    cout << endl;// Empty line for style
    
    Dog dog1 (7, 5.0, "Mollie");
    // Construct dog named Mollie who is 7 years old represented by "dog1"
    Dog dog2 (9,4.2, "Dixie");
    // Construct Dog named Dixie who is 9 years old represented by "dog2"
    
    dog1.printinfo();
    // Printing info for Dog1
    dog2.printinfo();
    // Printing info for Dog2
    
    cout << endl;// Empty line for style
    
    Dog dog3; 
    // Construct a dog to user's specifications, represented by "dog3"
    Dog dog4; 
    // Construct a dog to user's specifications, represented by "dog4"
    
    dog3.bark();
    // Printing info for dog3 and making it bark
    dog4.bark();
    // Printing info for dog4 and making it bark
    
    dog4.setWeight(dog4.getWeight() + 1);
    // Adding 1 to weight of dog 4
    
    dog4.bark();
    // Printing info for dog4 and making it bark after adding 1 to the weight
    
} // end main
