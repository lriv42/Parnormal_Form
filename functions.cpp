#include "paranormal.h"

/*************************************************************************************
    function name:      getParanormalData
    function purpose:   Prompts the user to input data, this is sent to 
                        getStats later for final results
**************************************************************************************/
void getParanormalData(int numRecording[], string nameArray[], string dateArray[]){
    for(int i = 0; i < INVESTIGATORS; i++){
        cout << "INVESTIGATOR " << i + 1 << ":" << endl;
        cout << "NAME - ";
        getline(cin, nameArray[i]);
        cout << "DAY (ex: 10-22-2022) - ";
        getline(cin, dateArray[i]);
        cout << "NUMBER OF EVPs - ";
        cin >> numRecording[i];
        cin.ignore();

    }
}

/*************************************************************************************
    function name:      getStats
    function purpose:   Calculates multiple statistics to be displayed later
**************************************************************************************/
void getStats(int numRecording[], int& totalRecording, float& avgRecording, int& index){
    int highest = numRecording[0];
    for(int i = 0; i < INVESTIGATORS; i++){
        totalRecording = totalRecording + numRecording[i];
        if(highest < numRecording[i]){
            highest = numRecording[i];
            index = i;
        }
    }
    avgRecording = static_cast<float>(totalRecording) / INVESTIGATORS;
}