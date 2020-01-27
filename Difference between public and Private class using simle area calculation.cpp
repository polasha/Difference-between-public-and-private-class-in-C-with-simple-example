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
	

// In the second part, now create the private and public class and use the public function outside the class but not Private class!

#include <iostream> 
using namespace std; 
  
class Circle { 
    // private data member 
private: 
    double radius; 
  
    // public member function 
public: 
    void compute_area(double r) 
    { 
        // member function can access private 
        // data member radius 
        radius = r; 
  
        double area = 3.14 * radius * radius; 
  
        cout << "Radius is: " << radius << endl; 
        cout << "Area is: " << area; 
    } 
}; 
  
// main function 
int main() 
{ 
    // creating object of the class 
    Circle radi; 
  
    // trying to access private data member 
    // directly outside the class 
    radi.compute_area(7); 
  
    return 0; 
}
	


