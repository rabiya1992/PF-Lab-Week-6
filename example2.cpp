#include <iostream>
using namespace std;

int isGreatest(int num1, int num2, int num3);


main()
{
 int num1;
 int num2;
 int num3;
 int answer;
 
 cout << "Enter first number: ";
 cin >> num1;
 cout << "Enter second number: ";
 cin >> num2;
 cout << "Enter third number: ";
 cin >> num3;

answer = isGreatest(num1, num2, num3);

cout << "The greatest number is: " <<answer <<endl;
 
 


}




int isGreatest(int num1, int num2, int num3)
{ int greater;

    if(num1 > num2 && num1 > num3 )
 {
    greater = num1;
 }

 else if(num2 > num3 && num2 > num1)
 {
    greater =  num2;
 }
 
 else if(num3 > num1 && num3 > num2)
{
    greater = num3;
}

else
{
    greater = 0;
}

return greater;



}

 


