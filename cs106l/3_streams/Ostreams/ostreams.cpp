
//What do we need to include?
#include <iostream>
#include <string>
#include <fstream>

//No using namespace std;!!!!
using std::cout;
using std::endl;
using std::string;

//function to write num to any ostream
void write2anystream(std::ostream &anyostream,int num)
{
    anyostream<<"the favorite num is "<<num<<endl;
}

int main() {
    // Write an int to the user's console.
    int myNum = 42;
    cout << "The answer is: " << myNum << endl;

    // Write an int to a file.
    std::ofstream out_stream("out.txt");

    out_stream << "The answer is: " << myNum << endl;
    

    // Write method to take any ostream
    write2anystream(cout,myNum);
    write2anystream(out_stream,myNum);   
    return 0;
}
