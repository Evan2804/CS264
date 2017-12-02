// Chapter 10 of C++ How to Program
// driver for vehicle
#include <iostream>

using std::cout;
using std::endl;

#include <vector>

using std::vector;

#include "vehicle.h"
#include "taxi.h"
#include "truck.h"
#include "parkinglot.h"

int main()
{
   ParkingLot* level1 = new ParkingLot;

   for(int i=0; i<5; i++){
	   Taxi* cab = new Taxi(4.3+i);
	   Truck* mack = new Truck(7.7+i);

	   if(i%2==0){
		   mack->setCargo(true);
	   }else{
		   cab->setCustomers(true);
	   }

	   level1->addVehicle(cab);
	   level1->addVehicle(mack);

   }

   /* Declare a vector, parkingLot, of base-class pointers */


   cout << "\nThe vehicles cannot get out of their parking spaces because of "
        << "traffic,\nso they respond: \n"<<endl;

   level1->printVehicles();
   cout<<"Vehicle Count: "<<level1->getVehicleCount();
   level1->~ParkingLot();

} // end main



/**************************************************************************
 * (C) Copyright 1992-2003 by Deitel & Associates, Inc. and Prentice      *
 * Hall. All Rights Reserved.                                             *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
