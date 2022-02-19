#include<iostream>
using namespace std;

class Square{
  int side;

public:
  Square(){         //constructor without parameter, sets side to 0
    side = 0;
  }

  void setSide(int Side){     //method to set value of side
    side = Side;
  }

  int getSide(){          //method to get value of side
    return side;
  }

  int area(){               //method that returns area of square
    return (side * side);
  }

};

int main(){
  Square s1;
  Square s2;

  int side;
  cout<<"Enter side of first square: ";
  cin>>side;
  s1.setSide(side);

  cout<<"Enter side of second square: ";
  cin>>side;
  s2.setSide(side);

  cout<<"\nArea of first square: "<<s1.area()<<endl;
  cout<<"\nArea of second square: "<<s2.area()<<endl;

  return 0;

}
