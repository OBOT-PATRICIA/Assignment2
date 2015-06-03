/*
 * HealthProfile.h
 * HealthProfile class definition. This file represents HealthProfile's public
 * interface without revealing implementations of HealthProfile's member
 * functions, which are defined in HealthProfile.cpp
 *
 * Stub file for Programming Assignment #2
 *
 * Name: OBOT PATRICIA PETER
 * Department: DEPARTMENT OF COMPUTER SCIENCE
 * Matric. No: 45015352GA
 *
 */

#include <string>           // uses C++ string class
using namespace std;

// HealthProfile class definition
class HealthProfile
{
    // public interface
public:
    HealthProfile( string, string, string, int, int, int, int, double, int, int, int ); // constructor that initializes patient information
    int getAge();                   // function to get patients age in years
    double getBMI();                // function to calculate and return BMI
    int getMaximumHeartRate();      // function to calculate and return maximum heart rate
    double getTargetHeartRate();    // function to calculate and return target heart rate
    void getInformation();          // function to print object information
    
    // TODO: Provide get and set function prototypes of each class attribute
    // Function prototypes for the constructor, getAge(), getBMI(), getMaximumHeartRate()
    // getTargetHeartRate() and getInformation() has alrady been provided
    
   	
	string getFirstName();				
	string getGender();				
	int getMonth();	
	
		void setYear(int);	
               void setWeight(int);
               	int getWeight();					
	int getDay();					
	int getYear();					
	double getHeight();							
	void setLastName(string);	
         void setDay(int);	
	void setFirstName(string);					    
	void setGender(string);
	     string getLastName();					
	void setMonth(int);							    	
				
	void setHeight(double);							    
        
    
    
    // private interface
private:
    string firstName;               // variable to hold firstname
    string lastName;                // variable to hold lastname
    string gender;                  // variable to hold gender
    int month;                      // variable to hold month
    int day;                        // variable to hold day
    int year;                       // variable to hold year
    double height;                  // variable to hold height
    int weight;                     // variable to hold weight
    int age;                        // variable to hold age
    
}; // end class HealthProfile
