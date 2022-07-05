#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

//template<typename T>
//class myVector
//{
//public:

//    myVector()
//    {

//    }
//    T& at(T index)
//    {
//        return array.at(index);
//    }
//    const T& at(T index) const
//    {
//        return array.at(index);
//    }

//private:
//    std::vector<T> array;
//};

template<typename T> std::vector<T> array1;
template<typename T> std::vector<T> array2;

void initialiseVector()
{
    std::srand(std::time(nullptr)); // use current time as seed for random generator
    int random_variable = std::rand();
    for (int i = 0; i < 20; ++i)
    {
        array<int>.push_back(random_variable);
    }
}

void printoutVector()
{
    for (int i = 0; i < 20; ++i)
    {
        std::cout << array<int>.at(i) << " ";
    }
}

template<typename T>
bool checkSum (std::vector<T>& c1, std::vector<T>& c2)
{
    T sum = 0;
    for( auto e : c1 )
    {
        sum += c1.at(e);
    }
    for( auto i : c1 )
    {
        if( c1.at() < sum )
        {
            return true;
        }
        return false;
    }
}


template<typename Container>
void eliminateElement(Container& container)
{

}

int main()
{
    //initialiseVector();
    for (int i = 0; i < 20; i++)
    {
        array1<long int>.push_back(std::rand());
        //array<int>.push_back(i);
    }

    for (int i = 0; i < 20; i++)
    {
        //array<long int>.push_back(std::rand());
        array2<int>.push_back(i);
    }
    //printoutVector();
    for (int i = 0; i < 20; i++)
    {
        std::cout << array1<long int>.at(i) << " ";
    }

    checkSum(array1, array2);

//    for ( int i = 0; i < 20; i++)//durch Container iterarate
//    {
//        if ( array<long int>.at(i) % 2 != 0 )//wenn es nicht ungerade ist
//        {
//            array<long int>.erase( array<long int>.begin() );// ungerade Zahl eliminieren
//        }
//    }

}
