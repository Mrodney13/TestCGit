#include <iostream>
using namespace std; 
// instead of typing a new line for each char variable it can be written as line 9
// each one must be separated by a comma
// ASCII uses 128 characters (enough for alphabet, numerics and special characters)

int main()
{
    float weight;
    float height;
    float bmi;
    
    cout << "Enter your Weight (lbs): " << endl;
    cin >> weight;

    cout << "Enter your Height (inches): " << endl;
    cin >> height;

    bmi = (weight * 703) / (height * height);

    if (bmi>29.9)
    {
        cout << "You are Extremely OverWeight and you BMI is: " << bmi;
        if (true)
        {

        }
    }
    
    
   

    system("pause>0");
}
