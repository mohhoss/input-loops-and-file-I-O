//      Seyed Mohamad Hosseinioun
//      CSCI 689/0001
//      Nithin Devang
//      Assignment 3
//      Due on 02.17.2017

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

using namespace std;

int main() {
        //asking for the name of the file
        string fileName;
        cout << "Please enter the name of the file you wish to be read:\t";
        cin >> fileName;

        //opening the file
        ifstream inputFile;
        int inputVal;
        int threshCount =0;
        int count =0;
        inputFile.open(fileName.c_str());

        //testing the open status of file
        if (! inputFile.is_open()) {
                cerr << "the file " << fileName << " does not exist in the directory!" << endl;
                return -1;
        }

        //asking for the threshold
        cout << "Enter an integer for the threshold:\t";
        int thresh;
        cin >> thresh;

        //testing the non-negativity condition for threshold
        while (thresh <0) {
                cerr << "You have entered a negative value!" << endl;
                cout << "please enter a non-negative one:\t";
                cin >> thresh;
        }

        //reading the values inside the file
        inputFile >> inputVal;
        while( ! inputFile.eof()) {
                count++;
                if (inputVal >= thresh)
                        threshCount++;
                inputFile >> inputVal;
        }
        cout << threshCount << " of " << count <<" values in " << fileName << " are greater than " << thresh << endl;
                cout << threshCount << " of " << count <<" values in " << fileName << " are greater than " << thresh << endl;

        inputFile.close();


        return 0;
}
                                                                                                                                                                               1,1           Top
