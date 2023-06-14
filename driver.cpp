/*
    Author: Liam Rivers
    Date: 6/13/2023
    Purpose: Recording and calculating paranormal
             stats of investigators
*/

#include "paranormal.h"

int main(){

    //declaring variables
    string dashLine(50, '*'); //this one is just for formatting
    int totalRecording = 0;
    float avgRecording = 0.0;
    int index = 0;
    char locationArray[100];
    int numRecording[INVESTIGATORS];
    string nameArray[INVESTIGATORS];
    string dateArray[INVESTIGATORS];

    //prompting user to enter name of location
    cout << "What haunted location are you investigating: ";
    cin.getline(locationArray, 100);

    //formatting
    cout << endl;
    cout << endl;
    cout << "Enter the investigator's name, the day of their investigation, ";
    cout << "and the number of " << endl;
    cout << "EVPs they recorded on their voice recorder." << endl;

    //calling functions
    getParanormalData(numRecording, nameArray, dateArray);
    getStats(numRecording, totalRecording, avgRecording, index);

    //formatting and outputting final results to screen
    cout << dashLine << endl;
    cout << "The total amount of EVPs recorded by all " << INVESTIGATORS << " investigators at ";
    cout << locationArray << " is " << totalRecording << " recordings." << endl;
    cout << endl;

    cout << "The average amount of EVPs recorded at " << locationArray << " is " << avgRecording << endl;
    cout << "recordings." << endl;
    cout << endl << endl;

    cout << "The investigator who recorded the most (" << numRecording[index] << " recordings) is ";
    cout << nameArray[index] << " on " << endl;
    cout << dateArray[index] << "!!" << endl;
    cout << dashLine;


    return 0;
}