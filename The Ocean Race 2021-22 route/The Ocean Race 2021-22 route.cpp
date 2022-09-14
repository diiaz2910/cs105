#include <fstream>
#include <cstdlib>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <ctime>
#include <cmath>
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
using namespace std;


    class Location { // Class Location that has three member variables.
           int degree; //int for degrees.
           float min; //float for minutes.
           char dir; //Char for direction letters N,S,E,W.

    public:
           Location() :degree(0), min(0), dir(0) {} //Constructor intizalizes the private members to zero (default).
           Location(int de, float mi, char an) :degree(de), min(mi), dir(an) {} //Constructor intizalizes the private members according values given by users.
           void display(); //Function to display location.
    };




    class Yatch { // Class Yacht that includes the yacht's number and location
           int yatch_number; //Variable for Yatch number storage.
           static int num;
           Location lattitude, longitude; //Objects storing lattitude and longitude.
    public:
           Yatch(); //Constructor to set the serial number.
           int get_yatch_number(); //To display serial number.
           void set_yatch_location(Location, Location); //To set the lattitude and longitude of a ship
           void display_location(); //To display the ship postion
    };


    int Yatch::num = 0;


    Location get_pos(); //Function to take the position from user.


    int main()
    {
        system("COLOR 17");


        Location lati, longi; //Creating objects of Location class.
        Yatch Y1, Y2, Y3; //Creating object of Yatch class.


        cout<<"*****************..::Ocean Race 2021/2022::..*****************\n";
        cout<<"==============================================================";
        cout<<"\n\n\t\t\tYatch #"<<Y1.get_yatch_number()<<endl;

        cout<<"\t\t  Enter the Lattitude\n";
        lati = get_pos(); //Calling function to take the lattitude from user.
        cout<<"\n\t\t  Enter the Longitude\n";
        longi = get_pos();  //Calling function to take the lattitude from user.
        Y1.set_yatch_location(lati, longi); //To set the lattitude and longitude of ship 1.
        cin.clear();
        system("cls");


        cout<<"*****************..::Ocean Race 2021/2022::..*****************\n";
        cout<<"==============================================================";
        cout<<"\n\n\t\t\tYatch #" << Y2.get_yatch_number()<<endl;
        cout<<"\t\t  Enter the Lattitude\n";
        lati = get_pos(); //Calling function to take the lattitude from user
        cout<<"\n\t\t  Enter the Longitude\n";
        longi = get_pos();  //Calling function to take longitude from user.
        Y2.set_yatch_location(lati, longi);; //To set longitude and lattitude of ship 2.
        cin.clear();
        system("cls");


        cout<<"*****************..::Ocean Race 2021/2022::..*****************\n";
        cout<<"==============================================================";
        cout<<"\n\n\t\t\tYatch #" << Y3.get_yatch_number()<<endl;
        cout<<"\t\t  Enter the Lattitude\n";
        lati = get_pos(); //Calling function to take the lattitude from user.
        cout<<"\n\t\t  Enter the Longitude\n";
        longi = get_pos(); //Calling function to take longitude from user.
        Y3.set_yatch_location(lati, longi); //To set longitude and lattitude of ship 3.
        system("cls");


        //Displays yatch's position.
        Y1.display_location();
        Y2.display_location();
        Y3.display_location();
        system("pause");
    }



    //Function to display location.
    void Location::display(){
           cout<<degree<<"\xF8 "<<min<<"\' "<<dir<< endl;

    }


    //Constructor to number each Yatch.
    Yatch::Yatch(){
           num++;
           yatch_number = num;
    }


    //Function to set the lattitude and longitude of a ship.
    void Yatch::set_yatch_location(Location la, Location lon){
           lattitude = la;
           longitude = lon;
    }


    //Function to report the Yatch number and location.
    void Yatch::display_location(){
            cout<<"*****************..::Ocean Race 2021/2022::..*****************\n";
            cout<<"==============================================================";
            cout<<"\n\nThe ship serial number is: " << yatch_number << endl;
            cout<<"Lattitude: ";
            lattitude.display();
            cout<<"Longitude: ";
            longitude.display();
            cout<<"\n\n";
    }

    //Function to get a position from the user.
    Location get_pos(){
           int d; float m; char a;
           cout << " \t   Input degrees between 0 and 180:";
           while (!(cin >> d)){
                  cin.clear();
                  cin.ignore(900, '\n');
                  cout << " \t   Input degrees between 0 and 180:";
           }

           cout<<" \t   Input minutes between 0 and 60:";
           while (!(cin >> m)){
                  cin.clear();
                  cin.ignore(900, '\n');
                  cout << " \t   Input minutes between 0 and 60:";
           }

           cout<<" \t   Input direction (E/W/N/S):";
           while (!(cin >> a)){
                  cin.clear();
                  cin.ignore(900, '\n');
                  cout << " \t   Input direction (E/W/N/S):";
           }

           return Location(d, m, a);
    }



    //Function to display serial number.
    int Yatch::get_yatch_number(){
           return yatch_number;
    }
