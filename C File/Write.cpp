#include<iostream>
using namespace std ;
#include<fstream>

int main(){
    ofstream out("output3.txt");
    string data= "Output file is ready";
    out<<data;
    out.close();
}