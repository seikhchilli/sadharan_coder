#include<iostream>
using namespace std;

class Triangle{   //Triangle class
private:
  int side1, side2, side3;    //sides of Triangle
public:
  Triangle(){     //constructor without parameter.
    side1 = 1;
    side2 = 1;
    side3 = 1;
  }

  Triangle(int Side1, int Side2, int Side3){    //constructor with parameter
    side1 = Side1;
    side2 = Side2;
    side3 = Side3;
  }

  void display(){     //method to display sides of Triangle
    cout<<"\nSides of Triangle: "<<side1<<", "<<side2<<", "<<side3<<endl;
  }

  void circumference(){   //method to display circumference of Triangle
    int circumference = side1 + side2 + side3;
    cout<<"\nCircumference of Triangle: "<<circumference<<endl;
  }


};

int main(){
  Triangle t1;    //object created without parameter
  Triangle t2(12, 13, 14);    //object created with parameter

  //methods called for Triangle t1
  cout<<"Triangle t1: "<<endl;
  t1.display();
  t1.circumference();

  //methods called for Triangle t2
  cout<<endl<<endl<<"Triangle t2: "<<endl;
  t2.display();
  t2.circumference();

  return 0;

}
