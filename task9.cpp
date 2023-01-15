#include <iostream>
using namespace std;

bool greaterNumber(int num1, int num2, int num3);

main()
{int num1;
 int num2;
 int num3;
 bool answer;

 cout << "Enter first number: ";
 cin >> num1;
 cout << "Enter second number: ";
 cin >> num2;
 cout << "Enter third number: ";
 cin >> num3;

answer = greaterNumber(num1, num2, num3);


if(answer == true)
{
    cout << "Yes" << endl;
}

if(answer == false)
{
    cout << "No" << endl;
}

}



bool greaterNumber(int num1, int num2, int num3)
{
    if(num1 == num2 && num2 == num3)
    {
        return true;
    }

   if(num1 != num2 && num2 != num3)
   {
        return false;
   }

  return 0;
}
