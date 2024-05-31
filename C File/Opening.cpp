#include<iostream>
using namespace std;

#include<fstream>

int main(){
    //---------------Opening the file--------------1
    //Using Constructors
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    //using opening Method
    ifstream inputFile;
    inputFile.open("input.txt");

    ofstream outputFile;
    outputFile.open("output2.txt");
}