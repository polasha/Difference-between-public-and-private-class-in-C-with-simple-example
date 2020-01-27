//In first part, Create the public class then use it outside the class function


#include<iostream>
using namespace std;

//Define the class


class circle {
	public:
		double radius;
		
		double compute_area()
		{
			return 3.14 * radius * radius; 
		}
};



//define the main function

int main()

{
	circle radi;
	//radi.radius= 7;
	cout << "please enter the radius value:";
	cin >> radi.radius;
    cout << "Radius is: "<< radi.radius << "\n" ;
	cout << "Area is: " << radi.compute_area();
	return 0;
	
	}	
	

