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


class Shapes{

    float result = .2f;
    float resultP = .2f;


    public:
        void Square(float side){
            result = side * side;
            resultP = side * 4;
            cout<<" =================================="<<endl;
            cout<<" Area of square is : "<<result<<endl;
            cout<<" Perimeter of the square is : "<<resultP<<endl;
            cout<<" =================================="<<endl;
        }

    public:
        void TrianglePerim(float a, float t, float f){
            result = a + t + f;

            cout<<" =================================="<<endl;
            cout<<" Perimeter of the triangle is : "<<result<<endl;
            cout<<" =================================="<<endl;
        }

    public:
        void Rectangle(float l, float b){
            result = l * b;
            resultP = 2*(l*b);

            cout<<" =================================="<<endl;
            cout<<" Area of rectangle is : "<<result<<endl;
            cout<<" Perimeter of rectangle is : "<<resultP<<endl;
            cout<<" =================================="<<endl;
        }

    public:
        void Triangle(float h, float ba){
            result = 0.5f * (h*ba);

            cout<<" =================================="<<endl;
            cout<<" Area of triangle is : "<<result<<endl;
            cout<<" =================================="<<endl;
        }

    public:
        void Circle(float r){
            result = 3.14f * ( r * r );
            resultP = 2*3.14f*r;

            cout<<" =================================="<<endl;
            cout<<" Area of circle is : "<<result<<endl;
            cout<<" Circumference of the circle is : "<<resultP<<endl;
            cout<<" =================================="<<endl;
        }


};

class ShapesModel{

    float longit,amplit,height,base,radio,side,sideP1,sideP2,sideP3;
    float result = 2.f;
    float PI = 3.14f;
    int value;


    public:

        void OptionsMenu(){
            cout<<" //////////////////////////////////"<<endl;
            cout<<" =================================="<<endl;
            cout<<"\n\tCalulating Shapes... \n Enter object to calculate area and perimeter:\n"<<endl;
            cout<<" =================================="<<endl;
            cout<<"\n\t1.Square\n\t2.Rectangle.\n\t3.Triangle\n\t4.Circle"<<endl;
            cout<<"\t5.Triangle Perimeter\n\t6.Repeat Menu\n\t7.Exit \n"<<endl;
            cout<<"    Please choose an option: "<<endl;
            cin>>value;

            Shapes a;
            system("cls");
            switch(value){


                /////////////// SQUARE \\\\\\\\\\\\\\\\\

                case 1 :

                    cout<<"\n\n";
                    //PRINTING SHAPE TOP LINE
                    for (int column = 0; column < 3; ++column){
                    cout << "   *";
                    }
                    cout << "\n";

                        //PRINTING VERTICAL LINES
                        for (int row = 0; row < 2; ++row){
                        cout << "   *";

                            for (int column = 0; column < 2; ++column){
                            cout << "  ";
                            }
                            cout << "   *\n";
                        }

                    //PRINTING SHAPE BOTTOM LINE
                    for (int column = 0; column < 3; ++column){
                        cout << "   *";
                    }

                    cout<<"\n\n Please enter a side of the square: ";

                    cin>>side;

                    a.Square(side);
                    system("pause");
                    system("cls");
                    OptionsMenu();

                    break;


                /////////////// RECTANGLE \\\\\\\\\\\\\\\\\

                case 2 :

                    cout<<"\n\n";
                    //PRINTING SHAPE TOP LINE
                    for (int column = 0; column < 10; ++column){
                    cout << "  *";
                    }
                    cout << "\n";
                        //PRINTING VERTICAL LINES
                        for (int row = 0; row < 1; ++row){
                        cout << "  *";

                            for (int column = 0; column < 1; ++column){
                            cout << "                        ";
                            }
                            cout << "  *\n";
                        }
                    //PRINTING SHAPE BOTTOM LINE
                    for (int column = 0; column < 10; ++column){
                        cout << "  *";
                    }


                    cout<<"\n\n Enter the length of the rectangle: ";
                    cin>>longit;
                    cout<<"\n\n Enter the width of the rectangle: ";
                    cin>>amplit;

                    a.Rectangle(longit,amplit);
                    system("pause");
                    system("cls");
                    OptionsMenu();

                    break;


                    /////////////// TRIANGLE \\\\\\\\\\\\\\\\\

                case 3 :

                    cout<<"\n\n";

                    for(int x=1;x<=3;x++)
                    {
                        for(int y=1;y<=x;y++)
                        {
                            cout<<"\t*";
                        }
                        cout<<endl;
                    }

                    cout<<"\n\n Enter the height of the triangle: ";
                    cin>>height;
                    cout<<"\n\n Enter the base of the triangle: ";
                    cin>>base;

                    a.Triangle(height,base);
                    system("pause");
                    system("cls");
                    OptionsMenu();

                    break;


                    /////////////// CIRCLE \\\\\\\\\\\\\\\\\

                case 4 :

                    cout << R"(

                           _  _  _
                        _ (_)(_)(_) _
                       (_)         (_)
                       (_)         (_)
                       (_) _  _  _ (_)
                          (_)(_)(_)

                        )" << '\n';

                    cout<<"\n\n Enter the radius of the circle : ";

                    cin>>radio;

                    a.Circle(radio);
                    system("pause");
                    system("cls");
                    OptionsMenu();

                    break;

                case 5 :
                    cout<<"\n\n Enter the side 1 of the triangle "<<endl;
                    cin>>sideP1;
                    cout<<"\n\n Enter the side 2 of the triangle "<<endl;
                    cin>>sideP2;
                    cout<<"\n\n Enter the side 3 of the triangle "<<endl;
                    cin>>sideP3;

                    a.TrianglePerim(sideP1,sideP2,sideP3);
                    system("pause");
                    system("cls");
                    OptionsMenu();

                    break;

                case 6 :
                    OptionsMenu();
                    break;

                case 7 :
                    cout<<"\n\nExiting......\n\n";
                    system("pause");
                    return;
                    break;

                default :
                    cout<<"Opcion Invalida...\n";
                    cout<<"Press a key to return to the menu...\n";
                    system("pause");
                    system("cls");
                    OptionsMenu();
                    break;

            }

        }
};


int main(){
    system("color 70");
    ShapesModel am;
    am.OptionsMenu();

    return 0;
}
