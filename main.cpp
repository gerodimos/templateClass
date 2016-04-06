#include "head.h"

using namespace std;






int main()
{
    srand(time(NULL));

    Point<float> p1(4.5,5.4);
    Point<int> p2;

    cout<<p1.x<<"\t"<<p1.y<<endl;
    cout<<p2.x<<"\t"<<p2.y<<endl;
    p1.hello();


    return 0;
}
