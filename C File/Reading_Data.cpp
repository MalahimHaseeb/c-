// #include<iostream>
// using namespace std;

// #include<fstream>

// int main(){
//     //---------------Opening the file--------------1
//     //Using Constructors
//     ifstream in("input.txt"); //connecting the file
//     char content[100];

//     in>>content;
//     cout<<content;
// }

/*#include<iostream>
#include <fstream>
using namespace std;
int main(){
ifstream in("input.txt");
string data;
// using "getline()" to get full line from "file.txt"
getline(in , data);
cout<<data;
}*/

#include<iostream>
using namespace std ;
#include<fstream>

int main(){
    ifstream in("input.txt");
    string line ;
    string fileContent;

    while (getline(in , line)) {
        fileContent += line + "\n";
    }
    cout<<fileContent<<endl;
    return 0;
}