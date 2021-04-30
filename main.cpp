#include <iostream>
#include <cstring>
using namespace std;

class String
{
private:
    /* data */
    char* string;
    long len;
public:
    // constructor
    String(char* i_string);
    void show_string();
};

String::String(char* i_string)
{
    cout << "Constructor is called!!" << endl;
    len = strlen(i_string);
    string = new char [len+1];
    strcpy(string, i_string);
}
void String::show_string()
{
    cout << "string : " << string << ", length : " << len << endl;
}

int main()
{
    char i_string[10] = "My string";
    //程式產生物件，同時完成物件的初使值
    String A_String(i_string);
    A_String.show_string();

    return 0;
}
