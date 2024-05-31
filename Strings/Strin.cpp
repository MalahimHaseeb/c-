#include<iostream>
using namespace std ;
#include<string>
#include<cstring>

int main(){
    //--------------C Style Operations-----------------1
    /*char str[] = "Hello World " ;
    char str1[20];
    cout<< strlen(str)<<endl;
    cout<< strcpy(str1 , str)<<endl;
    cout<< "Str1 " << str1<<endl;
    cout<< strcat(str , str1)<<endl;
    cout<< strcmp(str1 , str)<<endl;*/

     //---------Strings------------2
    string greeting = "Hello world";
    cout<<greeting<<endl;
    cout<<greeting.length();
}