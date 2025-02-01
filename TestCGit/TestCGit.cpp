#include <iostream>
using namespace std; 

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


    if (bmi > 29.9)
    
        cout << "You are Extremely OverWeight and you BMI is: " << bmi;
    else
        
        if (bmi < 13.5)
            cout << "You are Extremely UnderWeight and you BMI is: " << bmi;
        else

            if (bmi > 25 && bmi <= 29.9)
                cout << "You are OverWeight and you BMI is: " << bmi;
            else

                if (bmi < 18.5 && bmi >= 13.5)
                    cout << "You are UnderWeight and you BMI is: " << bmi;
                
                else
                    cout << "You are NormalWeight and you BMI is: " << bmi;
   
   
    
    
   

    system("pause>0");
}
