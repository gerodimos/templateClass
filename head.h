#ifndef HEAD_H
#define HEAD_H

#endif // HEAD_H


template <class T>
class Point{
public:
    T x;
    T y;

    Point();
    Point(T a, T b);
    void hello();

};


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
