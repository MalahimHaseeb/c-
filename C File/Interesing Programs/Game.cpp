#include<iostream>
using namespace std;
#include<fstream>

void printFile(const string& filename){
  ifstream in(filename);
  if(in.is_open()){
    string line;
    while (getline(in , line)) {
      cout<<line<<endl ;
    }
    in.close();
  }else{
    cout<< "Unable to open the file";
  }
}

int main(){
    string choice ;
    printFile("game.txt");
    while(true){
        cout<<"Enter your choice"<<endl ;
        cin>>choice;
        if(choice == "1"){
            printFile("option1.txt");
        }else if (choice == "2") {
            printFile("option2.txt");
        } else if (choice == "exit") {
            break;
        } else {
            std::cout << "Invalid choice, try again." << std::endl;
        }
    }
    return 0;
}