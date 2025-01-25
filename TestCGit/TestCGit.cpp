#include <iostream>
using namespace std; 
// instead of typing a new line for each char variable it can be written as line 9
// each one must be separated by a comma
// ASCII uses 128 characters (enough for alphabet, numerics and special characters)

int main()
{
    char c1, c2, c3, c4, c5;
    cout << "Input 5 letters: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5; // User input
    cout << "ASCII Messege: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5)<< endl; // getting the number fomr the  letter entered 
    cout << "Inverse ASCII Message: " << char(c1)<< char(c2) << char(c3) << char(c4)  << char(c5)<< endl; // getting the letter fomr the  stored number entered

    int i1, i2, i3, i4, i5;
    cout << "input First numbers: ";
    cin >> i1;
    cout << "input Second numbers: ";
    cin >> i2;
    cout << "input Third numbers: ";
    cin >> i3;
    cout << "input Fourth numbers: ";
    cin >> i4;
    cout << "input Fifth numbers: ";
    cin >> i5;
    cout << "Decoded ASCII Messege: " << char(i1) << char(i2) << char(i3) << char(i4)<< char(i5) << endl; // Want to make in one line but i dont know how to going to improve later 




    
   

    system("pause>0");
}
