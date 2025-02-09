#include <iostream>
#include <vector> // IMPORTANT
using namespace std;

//Function 1: Vector1 + Vector2
//Function 2: Recherche d'un Int 
//Function 3: Reversal

//--------------------------------------------////--------------------------------------------//
//--------------------------------------------////--------------------------------------------//
//--------------------------------------------////--------------------------------------------//
//------------------------------------------Functions-----------------------------------------//
//--------------------------------------------////--------------------------------------------//
//--------------------------------------------////--------------------------------------------//
//--------------------------------------------////--------------------------------------------//

vector<int> add(vector<int> v1, vector<int> v2){

	for (int i = 0; i < v2.size(); i++) {
		v1.push_back(v2[i]);
	}
	return v1;
}

int recherche(vector<int> v1, int c) {

	for (int i = 0; i < v1.size(); i++) {
		if (v1[i] == c) {
			return i;
		}

	}

	return -1;
}

vector<int> reverse(vector<int> v1){
	int j = v1.size() - 1;
		for (int i = 0; i != j; i++, j--) {
		int temp = v1[i];
		v1[i] = v1[j];
		v1[j] = temp;

	}
	return v1;
}

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

    cout << v1.capacity() << endl; //Combien d'elements il peut tenir


    //-----------------Functions-----------------//

	//Declaration
	vector<int> v1 = { 1,3,4 };
	vector<int> v2 = { 1,3,5 };
	vector<int> v3 = { 1,3,5,7,9,11 };

	//Fonctions
	vector<int> resultat = add(v1, v2);
	//int i = recherche(v1, 5);
	//vector<int> resultat = reverse(v3);


	//Resultat ICI
	for (int i = 0; i < resultat.size(); i++) {
		cout << resultat[i] << endl;
	}


    return 0;
}
