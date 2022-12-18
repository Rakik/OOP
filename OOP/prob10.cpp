#include<iostream>
#include<fstream>
using namespace std;
int main(){

fstream my_file1,my_file2;
char ch;
my_file1.open("file1.txt",ios::in);
my_file2.open("file2.txt",ios::out);
if(!my_file1){
    cout<<"No such file";
}
else{
    while(1){
        my_file1>>ch;
        my_file2<<ch;
        if(my_file1.eof())
            break;

        cout<<ch;
  }
}
my_file1.close();
my_file2.close();
return 0;

}

