//
//  generate.cc
//  Assignment3
//
//  Seyed Mohamad Hosseinioun
//  CSCI 689/0001
//  Nithin Devang
//  Assignment 3
//  Due on 02.17.2017

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {
        //accepting the value for seed
        cout << "Please enter an integer as the seed of random numbers:\t";
        int mySeed;
        cin >> mySeed;
        if (mySeed <0) { //checking for non-negativity condition
                cerr << "you have entered a negative number!" << endl;
                return -1;
        }
        srand(mySeed);
        //accepting the upper-bound
        cout << "Please enter an integer as the maximum of random numbers:\t";
        int upBnd;
        cin >> upBnd;
        if (upBnd <0) { //checking for non-negativity condition
                cerr << "you have entered a negative number!" << endl;
                return -1;
        }
        //accepting the number of values to be generated
        cout << "How many random numbers do you wish to be generated?\t";
        int randNo;
        cin >> randNo;
        if (upBnd <0) { //checking for non-negativity condition
                cerr << "you have entered a negative number!" << endl;
                return -1;
        }
        //accepting the name of the file to be generated
        cout << "Please enter the name of the file you wish to be created.\n" << "Please do include the type suffix:\t";
        string outputName;
        ofstream outputFile;
        cin >> outputName;
        outputFile.open(outputName.c_str()); //openining the file

        //testing the open status of file
        if (! outputFile.is_open()) {
                cerr << "The file is not properly openned!";
                return -1;
        }

        //generating the random numbers
        int randGen;
        for (int i=1; i<=randNo; i++) {
                randGen = (((float)rand())/RAND_MAX)*upBnd + 1;
                outputFile << randGen <<endl;
        }
        //closing the file
        outputFile.close();

        return 0;

}
                                                                                                                                                                               67,1          Bot
