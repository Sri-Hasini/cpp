//auto keyword can be placed to deduce the datatype without writing the datatype before variable name 
//when using auto we need to initialize that variable, if not it returns error
#include <bits/stdc++.h>
using namespace std;
int main()
{
auto v_int = 5;
auto v_double = 3.2;
auto v_float = 4.9f;
auto v_bool = false;
auto v_char = 'h';
auto ptr = &v_int;
auto pptr = &ptr;
cout << v_int << " " << typeid(v_int).name() << endl << v_double << " " << typeid(v_double).name() << endl << v_float << " " << v_bool << " " << typeid(v_bool).name() << endl << v_char << " " << typeid(v_char).name() << endl << ptr << " " << typeid(ptr).name() << endl << pptr << " " << typeid(pptr).name() << endl;
}