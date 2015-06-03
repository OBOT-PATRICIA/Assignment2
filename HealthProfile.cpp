/*
 * HealthProfile.cpp
 * HealthProfile member-function definitions. This file contains
 * implementations of the member functions prototyped in HealthProfile.h
 *
 * Stub file for Programming Assignment #2
 *
 * Name: OBOT PATRICIA PETER
 * Department: DEPARTMENT OF COMPUTER SCIENCE
 * Matric. No: 45015352GA
 *
 */

#include <iostream>
#include <string>           // uses C++ string class
#include <math.h>           // uses C++ math class
#include <iomanip>          // used iomanip class to format output text
#include "HealthProfile.h"  // include definition of class HealthProfile
using namespace std;

// constructor initializes patient information
HealthProfile::HealthProfile( string firstName, string lastName, string gender, int month,
                             int day, int year, int weight, double height, int currentDay,
                             int currentMonth, int currentYear)
{
    setFirstName( firstName );      // call set function to initialize firstName
    setLastName( lastName );        // call set function to initialize lastName
    setGender( gender );            // call set function to initialize gender
    setMonth( month );              // call set function to initialize month
    setDay( day );                  // call set function to initialize day
    setYear( year );                // call set function to initialize year
    setWeight( weight );            // call set function to initialize weight
    setHeight( height );            // call set function to initialize height
   // setAge(currentDay, currentMonth, currentYear);  // call set function to calculate age
}

// funtion to print object information
void HealthProfile::getInformation()
{
    cout << "\n\nHEALTH PROFILE FOR - " << getFirstName() << " " << getLastName() << endl;
    cout << "First Name: " << setw(17) << getFirstName() << endl;
    cout << "Last Name: " << setw(19) << getLastName() << endl;
    cout << "Gender: " << setw(20) << getGender() << endl;
    cout << "Date of Birth: " << setw(10) << getDay() << "/" << getMonth() << "/" << getYear() << endl;
    cout << "Weight (in kilograms): " << setw(3) << getWeight() << endl;
    cout << "Height (in meters): " << setw(10) << getHeight() << endl;
    cout << "Age: " << setw(21) << getAge() << " year(s)" << endl;
    cout << "Body Mass Index (BMI): " << setw(8) << getBMI() << endl;
    cout << "Maximum Heart Rate: " << setw(7) << getMaximumHeartRate() << endl;
    cout << "Target Heart Rate: " << setw(11) << getTargetHeartRate() << endl;
    cout << "\nBMI VALUES CHART" << endl;
    cout << "Underweight:   less than 18.5" << endl;
    cout << "Normal:        between 18.5 and 24.9" << endl;;
    cout << "Overweight:    between 25 and 29.9" << endl;
    cout << "Obese:         30 or greater" << endl;
}


// implementation getBMI()
double HealthProfile::getBMI(){
      return  weight / pow(height,2);                                
}                                        


// implementation of getMaximumHeartRate
int HealthProfile::getMaximumHeartRate(){
    
    
   return  200 - getAge();    
}   


//implementation of getTargetHeartRate
double HealthProfile::getTargetHeartRate(){         
       
       
        return  50 - (85/100)*getMaximumHeartRate();               
} 

// implementation of setGender
void HealthProfile::setGender(string gender2){
     gender=gender2;   
}    

//  getFirstName
string HealthProfile::getFirstName(){
       return firstName;
} 

// implement getLastName
string HealthProfile::getLastName() {
   return lastName;
} 

// implement of getGender
string HealthProfile::getGender(){
       return gender;
} 

// implement setYear
void HealthProfile::setYear(int n_year){
     year=n_year;    
}    
// implement of getMonth
int HealthProfile::getMonth() {
    return month;
} 

// define of getDay
int HealthProfile::getDay(){
       return day;
} 

// finalise of getYear
int HealthProfile::getYear() {
       return year;
} 

// implementing setWeight
void HealthProfile::setWeight(int m_Weight){
     weight=m_Weight;   
}   

// get height implementation
double HealthProfile::getHeight() {
   return height;
} 

// implementation of getWeight
int HealthProfile::getWeight() {
  return weight;
} // end function getWeight

// implementating setHeight
void HealthProfile::setHeight(double myHeight){
     height=myHeight;  
}    
// implementing getAge
int HealthProfile::getAge() {
    return age;
}


//implementation of setFirstName
void HealthProfile::setFirstName(string n_firstName)
  {
     firstName=n_firstName;  
}   


// implementation of setLastName
void HealthProfile::setLastName(string n_lastName){
     lastName=n_lastName;    
}   

// implementation of setMonth
void HealthProfile::setMonth(int n_Month){
     month=n_Month;    
} 


// implementation of setDay
void HealthProfile::setDay(int n_day){
     day=n_day;
}   



 

