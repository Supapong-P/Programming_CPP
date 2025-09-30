#include <iostream>
using namespace std;
int main(){
    //double x[4]= {9.84,9.30,9.42,9.58};
    double x[4]= {9.15,9.20,9.30,9.50};
    if(x[0]>x[1])
        swap (x[0],x[1]);
    if(x[2]>x[3])
        swap (x[2],x[3]);
    if(x[0]>x[2])
        swap(x[0],x[2]);
    if(x[1]>x[3])
        swap(x[1],x[3]);
    cout << "Average Score = " << (x[1]+x[2])/2 << endl;

    return 0;

}