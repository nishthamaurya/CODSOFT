#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;

                //    T A S K  4
// Develop a program that counts the number of words in a given
// text file. Prompt the user to enter the file name and display the
// total word count.

int main()
{
    string filename;
    cout<<"Please enter the file name :"<<endl;
    cin>>filename;
    
    ifstream file(filename);    // for opening the file

    if(!file)
    {
        // if the file doesn't exist in this folder then it will be generating an error.
        cout<<"Generating an error on opening the file"<<endl;
        return 1;
    }

    string line;
    int word_count = 0;

    // Get the number of lines in a given file
    while(getline(file,line))
    {
        istringstream count_line(line);
        string word;

        while(count_line >> word)
        {
             word_count++;
        }
    }

     
      file.close();
      cout<<"Total word count in a given file is : "<<word_count<<endl;


    return 0;
}