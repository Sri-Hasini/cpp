/*              Vector
--> An iterator in C++ is a pointer-like object that points to an element of the STL container. They are generally used to loop through the contents of the STL container in C++. The main advantage of STL iterators is that they make the STL algorithms independent of the type of container used. We can just pass the iterator to the container elements instead of the container itself to the STL algorithms.In C++, iterators are used to access elements in containers (like vector, list, map, etc.). They function like pointers, providing a way to navigate through the elements of a container. 

vector comes into play to store elements dynamically in a similar way that array does . it is a container. it stores in contigous memory and we can insert or delete at the end 
we can declare like.. 
--> vector <datatype> vname; // as soon as we write this, it creates an empty container {}
vname.push_back(1);//it pushes 1 into that vector like {1}
vname.emplace_back(2);//it dynamically increases the size and push back {1,2}(this is faster than push_back)

vector pair<int,int> vec;
vec.push_back({1,2});//inserts a pair {1,2}into the vector vec {} are mandatory while using push_back with pair vector
vec.emplace_back(1,2);// inserts a pair {1,2} into the vector ... emplace_back() automatically considers it as a pair . {} is not given
vector <int> v2(5,100); //if given like this, it creates 5 instances of 100 like {100,100,100,100,100} size will be 5 and predefined with 100's
v2.push_back(9);//it increases the size to 6 and then pushes 9 at last like {100,100,100,100,100,9}
vector <int> v3(5); // if given like this, it creates a vector with size 5 previously with 0's or garbage values(depends on compiler), it shows like {0,0,0,0,0}
vector <int> v4(v3); // this is used to copy v3 into v4
 
we can write v[0] or v.at(0) to access an element at 0th index
other way to access is "iterators"

iterators points to the memory address not to the element, so in order to access anything from memory we use *
--> <type>::iterator itname;//iterator syntax
--> vector<int>:: iterator ite=v.begin();//when written as v.begin() it actually points to the memory of the 0th index... not to the value .. so we need to access it with *
--> if we print *ite then it shows the element present at 0th index
--> if we do ++ite and print *ite it shows element of 1st index
--> if we do ite+2 and print *ite then it shows element at 3rd index
we have iterators like .begin() , .end() , .rend() , .rbegin()
.begin() => points to the 0th index address
.end() => points to the address just after the last index like.. if our last index is some 4 and having some memory like 1096 then using .end() points to the next address of this like 1097.. so if we want to access last index we can do ite-- 
.rend() => it points to the address before the 0th address like our 1st index may be 0 and have address of 1046 then it points to 1045
.rbegin() => it points to the address of last index, if we want to move to the before index we need to do ite++ (not ite--)
-->v.at(0) element at 0th index
-->v.back() => it returns the element at last index

*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v3(5);
    v3.push_back(6);
    cout << v3[0] << " " << v3[5] << " " << v3[3]<<endl;//0 6 0
    vector<int>::iterator it;
    for(it=v3.begin();it!=v3.end();it++){
        cout << *(it)<< " ";
    }
    for(auto it : v3)
    {
	cout << it << " ";//no need of * because it iterates elements
    }
}