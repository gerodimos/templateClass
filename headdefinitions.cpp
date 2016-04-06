#include "head.h"


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
    std::cout<<"hello there"<<std::endl;
}


template class Point<int>;
template class Point<float>;
