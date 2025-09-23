#include<iostream>
using namespace std;
class FileHandler{
    public:
    int filr;
    FileHandler(){
        cout<<"File opened."<<endl;
        file=1;
    }
    ~FileHandler(){
        cout<<"File closed."<<endl;
    }
    void display(){
        cout<<"File."<<endl;
};
int main(){
    FileHandler f1;
    f1.display();
    return 0;
}