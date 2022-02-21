#include<iostream>
using namespace std;

class Triangle{
private:
  int side1, side2, side3;

public:
  Triangle(int Side1, int Side2, int Side3){ //constructor with parameter
    side1 = Side1;
    side2 = Side2;
    side3 = Side3;
  }

  Triangle(){   //constructor without parameter
    side1 = 0;
    side2 = 0;
    side3 = 0;
  }

  //display method to print sides of Triangle
  void display(){
    cout<<"Sides of Triangle are: "<<side1<<", "<<side2<<", "<<side3<<endl;
  }
};

int main(){
  Triangle t1(12, 13, 12);
  t1.display();

  return 0;
}
