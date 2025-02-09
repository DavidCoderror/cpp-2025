#include <iostream>
#include <vector> // IMPORTANT
using namespace std;

//--------------------------------------------////--------------------------------------------//
//--------------------------------------------////--------------------------------------------//
//--------------------------------------------////--------------------------------------------//
//--------------------------------------------MAIN--------------------------------------------//
//--------------------------------------------////--------------------------------------------//
//--------------------------------------------////--------------------------------------------//
//--------------------------------------------////--------------------------------------------//


int main()
{

    /*Vectors are just like arrays, they dont need an set size*/

    vector<int> v1 = { 1,2,3 }; //Comment creer un vector
    cout << v1.front() << endl; //Comment avoir le devant
    cout << v1.back() << endl;  //Comment avoir le derriere
    cout << v1.size() << endl;  //Comment avoir le size

    v1.push_back(4);            //Comment append
    v1.pop_back();              //Delete and potentially grab last element

    /*
    Note: The end() function points past the last element, use a - 1 to fix it
    else you will get a special error  
    */

    v1.insert(v1.begin(), 5);   //Inserted at start >>'5'
    v1.insert(v1.begin()+ 1, 5);//Possible to adjust position
    v1.insert(v1.end() -1, 5);  //Inserted at end >>'5'

    v1.erase(v1.begin());       //Delete at start
    v1.erase(v1.end() -1);      //Delete at end

    //Iterate through list
    for (int i = 0; i < v1.size(); ++i) {
        cout << v1[i] << endl;
    }

    cout << v1.capacity() << endl; //Combien d'elements il peut tenir ????

    return 0;
}
