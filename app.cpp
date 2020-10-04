#include <iostream>
#include <cmath>
#include <windows.h>
#include <string>

using namespace std;

int main()
{

    double xi = 1, h = 1;
    double x1 = 3, x2 = 2, x3 = 6, x4 = 1, x5 = 5;
    double order0=0, order1=0, order2=0, order3=0, order4=0, order5=0, tvalue = 0;
    double f1=0, f2=0, f3=0, f4=0;
    double i = 0;

    // double xi = 0, h = 1;
    // double x1 = -0.1, x2 = -0.15, x3 = -0.5, x4 = -0.25, x5 = 1.2;
    // double order0=0, order1=0, order2=0, order3=0, order4=0, order5=0, tvalue = 0;
    // double f1=0, f2=0, f3=0, f4=0;
    // double i = 0;

    cout << "Enter parameters" << endl;
    cout << "xi:";
    cin >> xi;
    cout << "h:";
    cin >> h;
    cout << "a:";
    cin >> x1;
    cout << "b:";
    cin >> x2;
    cout << "c:";
    cin >> x3;
    cout << "d:";
    cin >> x4;
    cout << "e:";
    cin >> x5;
    cout << endl << endl;

    cout << "Calculating";
    Sleep(300); cout << ".";
    Sleep(300); cout << ".";
    Sleep(300); cout << ".";
    Sleep(300); cout << ".";
    Sleep(300); cout << "."<< endl;
    cout << endl << endl;
    Sleep(500);
    


    tvalue = x1*pow(h+xi,4) + x2*pow(h+xi,3) +x3*pow(h+xi,2) + x4*pow(h+xi,1) + x5*pow(h+xi,0);
    order0 = x1*pow(xi,4) + x2*pow(xi,3) +x3*pow(xi,2) + x4*pow(xi,1) + x5*pow(xi,0);

    i++;
    x1 = x1*(4-(i-1));
    x2 = x2*(3-(i-1));
    x3 = x3*(2-(i-1));
    x4 = x4*(1-(i-1));
    f1 = (x1)*pow(xi, 4-i) + (x2)*pow(xi, 3-i) + (x3)*pow(xi, 2-i) + (x4)*pow(xi, 1-i);
    i++;
    x1 = x1*(4-(i-1));
    x2 = x2*(3-(i-1));
    x3 = x3*(2-(i-1));
    x4 = x4*(1-(i-1));
    f2 = (x1)*pow(xi, 4-i) + (x2)*pow(xi, 3-i) + (x3)*pow(xi, 2-i);
    i++;
    x1 = x1*(4-(i-1));
    x2 = x2*(3-(i-1));
    x3 = x3*(2-(i-1));
    x4 = x4*(1-(i-1));
    f3 = (x1)*pow(xi, 4-i) + (x2)*pow(xi, 3-i);
    i++;
    x1 = x1*(4-(i-1));
    x2 = x2*(3-(i-1));
    x3 = x3*(2-(i-1));
    x4 = x4*(1-(i-1));
    f4 = (x1)*pow(xi, 4-i);
    

    

    order1 = order0+(f1*h);
    order2 = order1+( (f2/2)*pow(h,2) );
    order3 = order2+( (f3/6)*pow(h,3) );
    order4 = order3+( (f4/24)*pow(h,4) );
    
    
    cout << "==================================================" << endl;
    cout << "True Value = " << tvalue << endl;
    cout << "Order0: " << endl;
    cout << "\t Value = " << order0 << "\t Error = " << tvalue-order0 << endl << endl;
    cout << "Order1: " << endl;
    cout << "\t Value = " << order1 << "\t Error = " << tvalue-order1 << endl << endl;
    cout << "Order2: " << endl;
    cout << "\t Value = " << order2 << "\t Error = " << tvalue-order2 << endl << endl;
    cout << "Order3: " << endl;
    cout << "\t Value = " << order3 << "\t Error = " << tvalue-order3 << endl << endl;
    cout << "Order4: " << endl;
    cout << "\t Value = " << order4 << "\t Error = " << (int)(tvalue-order4) << endl << endl;
    cout << endl << endl;
    


    system("pause");
}