#include <iostream>
using namespace std;

int main() {
    int x, y,a,b,c,d;
    cout << "coordinates 1 ";
    cin >> x >> y;
    cout << "coordinates 2 ";
    cin >> a >> b;
    cout << "coordinates 3 ";
    cin >> c >> d;


    if (y=b=d) {
        cout << "straight line" << endl;
    }
   
    else {
        cout << "not" << endl;
    }

    return 0;
}



