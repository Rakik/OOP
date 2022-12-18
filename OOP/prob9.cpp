#include<iostream>
#include<fstream>
using namespace std;
int main(){
fstream names("names.txt");
fstream add("addresses.txt");
string n, a;
while(getline(names, n) && getline(add, a))
{
    cout<<n<<" "<<a<<endl;
}
}

