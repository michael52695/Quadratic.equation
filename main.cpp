#include <iostream>
#include "quadratic.h"


using namespace std;

int main()
{
    float root_1,root_2;
    float determinant;
    double root1,root2,roots;
    quadratic q;
    q.assigncoefficient();
    q.valuex(1);
    root_1=q.solveroot(root1);
    cout<<root_1;
    root_2=q.solveroot(root2)''
    cout<< "Root:" <<root_2;
    q.solveextremum();

    return 0;

}
