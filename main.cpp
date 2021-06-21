#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
  
  float joistscost;
  float twobysixcost;
  float twobyfourcost;
  float fourbyfourcost;
  float fourbyeightcost;
  float joistsquantity = 25; 
  float twobysixquantity = 100;
  float twobyfourquantity = 25;
  float fourbyfourquantity = 20;
  float fourbyeightquantity = 100;
  float joiststotalcost;
  float twobysixtotalcost;
  float twobyfourtotalcost;
  float fourbyfourtotalcost;
  float fourbyeighttotalcost;
  float materialscost;

  cout << "Enter joists cost: ";
  cin >> joistscost;

  joiststotalcost = joistscost * joistsquantity;

  cout << "25 Joist total cost: " << joiststotalcost << endl;
   
  cout << "Enter twobysix cost: ";
  cin >> twobysixcost;

  twobysixtotalcost = twobysixcost * twobysixquantity;

  cout << "100 two by six total cost: " << twobysixtotalcost <<  endl;

  cout << "Enter twobyfour cost: ";
  cin >> twobyfourcost;

  twobyfourtotalcost = twobyfourcost * twobyfourquantity;

  cout << "25 two by four total cost: " << twobyfourtotalcost << endl;

  cout << "Enter fourbyfour cost: ";
  cin >> fourbyfourcost;

  fourbyfourtotalcost = fourbyfourcost * fourbyfourquantity;

  cout << "20 four by four total cost: " << fourbyfourtotalcost << 
  endl;

  cout << "Enter fourbyeight cost: ";
  cin >> fourbyeightcost;

  fourbyeighttotalcost = fourbyeightcost * fourbyeightquantity;

  cout << "100 four by eight total cost: " << fourbyeighttotalcost << endl;

  materialscost = joiststotalcost + twobysixtotalcost + twobyfourtotalcost + fourbyfourtotalcost + fourbyeighttotalcost;

 cout << "Total materials cost: " << materialscost << endl; 

 return 0;

}