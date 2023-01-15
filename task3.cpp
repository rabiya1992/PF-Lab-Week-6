#include <iostream>
using namespace std;

string checkTitle(char gender, int age);

main()
{char gender;
 int age;
 string answer;
 cout << "Enter your gender: ";
 cin >> gender;
 cout << "Enter your age: ";
 cin >> age;

 answer = checkTitle( gender, age);
 cout << "Answer is " << answer;

}



string checkTitle(char gender, int age)
{string name;

    if(gender == 'm' && age >= 16)
 {
     name = "Mr"; 
 }

 else if(gender == 'm' && age < 16)
{
    name = "Master";
}

else if(gender == 'f' && age >= 16)
{
    name = "Ms";
}

else if(gender == 'f' && age < 16)
{
     name = "Miss";
}

else
{
  name = "Invalid Input";
}

return name;
}