#include <iostream>
using namespace std;

string checkSpeed(float speed);


main()
{float speed;
string answer;
 cout << "Enter speed: ";
 cin >> speed;

answer = checkSpeed(speed);
cout << "The speed is " << answer;

}



string checkSpeed(float speed)
{string name;
 
   if(speed <= 10 )
   {
     name = "slow";
   }

else if(speed > 10 && speed <= 50)
{
    name = "average";
}

else if(speed > 50 && speed <= 150)
{
    name = "fast ";
}

else if(speed > 150 && speed <= 1000)
{
    name = "ultrafast";   
}

else
{
   name = "extremely fast"; 
}

return name;
}