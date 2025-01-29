#include <iostream>
using namespace std; 

int main()
{
    float a, b, c;

    cout << "Enter the lengths of the triangle: " << endl;
    cin >> a >> b >> c; 


    if (a == b && a == c)
    
        cout << "Triangle is Equilateral! " << endl;
    
    else 
    {
        if (a != b && a != c && b != c)
        
            cout << "Triangle is Scalene! " << endl;
        
        else 
            cout << "Triangle is Isoscel! " << endl;
        
    }
   
    

   







   /* int n;
    cout << "Enter a Number: ";
    cin >> n;
    if (n%2==0)
    {
        cout << "Result is Even " << endl;
    }
    else
    {
        cout << "Result is Odd " << endl;
    }*/

  
   

    system("pause>0");
}
