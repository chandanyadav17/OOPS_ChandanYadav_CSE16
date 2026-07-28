#include <iostream>
using namespace std ;
class Parameterpassing{
    public :

    void callbyvalue(int x) {
        x = x + 10 ;
        cout << "Inside call by value : " << x << endl;
    }

    void callbyReferance(int &x) {
        x = x + 10 ;
        cout << "inside Call by Referance : " << x << endl;
    }

    void callbyAddres(int *x) {
        *x = *x + 10 ;
        cout << "Indside Call by Adress : " << *x << endl;
    }
} ;
int main () {
    Parameterpassing obj;
    int x ;
    cout << "Enter the value of x : ";
    cin >> x ;
    obj.callbyvalue (x) ;
    cout << "after call by Value " << x << endl;
    obj.callbyReferance(x) ;
    cout << "After Call by Referance: "<< x <<endl ;
    obj.callbyAddres(&x) ;
    cout << "After Call by Address: " << x << endl;
}