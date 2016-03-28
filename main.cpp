#include <iostream>
#include <time.h>

#include "head.h"

using namespace std;


template <class T>
Point<T>::Point(){
    x = rand() % 20 - 10;
    y = rand() % 20 - 10;
}

template <class T>
Point<T>::Point(T a,T b){
    x=a,y=b;
}

template <class T>
void Point<T>::hello(){
    cout<<"hello there"<<endl;
}




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
