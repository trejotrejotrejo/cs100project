#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main () {
 string line;
 ifstream myfile;
 myfile.open("example.txt");
 if (myfile.is_open())
{
while(getline(myfile,line))
{
getline(myfile,line);
cout << line << endl;
}
myfile.close();
}
else cout << "Unable to open file" << endl;
return 0; 
}
