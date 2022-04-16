
#include <iostream>
#include <fstream>
#include <vector>

using std::cout;    using std::endl;
using std::string; using std::cin;

//read numbers from a file
void readNumbers() {
    // Create our ifstream and make it open the file
    std::ifstream in("res/numbers.txt");

    // Something to store values we get from the stream
    int n1,n2;
        // Extract next number from input
        in>>n1;
        in>>n2;
    
        // If input is in a fail state, either a value couldn't
        // be converted, or we are at the end of the file.

        //print whatever we read
        cout<<n1<<' '<<n2<<endl;
}

//read a single word at a time from a file
void readHaikuWord() {
    // Create our ifstream and make it open the file
std::ifstream in("res/haiku.txt");
     // Something to store values we get from the stream
    string x;
        // Extract next word from input
    while(1)
    {
        in>>x;
        if(in.eof())
            {   cout<<x<<endl;
                cout<<"EOF"<<endl;
                break;}

        else if(in.fail())
            cout<<"ERROR"<<endl;

        cout<<x<<endl;
    }

        // If input is in a fail state, either a value couldn't
        // be converted, or we are at the end of the file.

        //print whatever we read

}

void readHaikuLine() {
    // Create our ifstream and make it open the file
    std::ifstream in("res/haiku.txt");
    // Something to store the lines as we get them form the stream
    string line;
        // If input is in a fail state, either a value couldn't
        // be converted, or we are at the end of the file.
    while(1)
    {
        std::getline(in,line);
           if(in.eof()){
            cout << line << endl;
        cout << "eof" << endl;
         break;
        }
        else if (in.fail()) {
            cout << "fail" << endl;
             break;
        }
        else cout << line << endl;
        cout << in.eof() <<' '<< in.fail() << endl;  
    }
        //print whatever we read

}



//function for us to play around with cin
void playground(){
    string line;
    std::ifstream in("res/haiku.txt");
    while(std::getline(in, line)){
        if(in.eof()){
        cout << "eof" << endl;
          break;
        }
        else if (in.fail()) {
            cout << "fail" << endl;
             break;
        }
        else 
        cout << line << endl;
        cout << in.eof() <<' '<< in.fail() << endl;
    }
    cout << in.eof() <<' '<< in.fail() << endl;

}

int main() {

    playground();
    readNumbers();
    readHaikuWord();
    readHaikuLine();
    return 0;
}


