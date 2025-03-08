#include <iostream>
#include <vector>
using namespace std;




//--------------------------------------------////--------------------------------------------//
//--------------------------------------------////--------------------------------------------//
//--------------------------------------------////--------------------------------------------//
//------------------------------------------Functions-----------------------------------------//
//--------------------------------------------////--------------------------------------------//
//--------------------------------------------////--------------------------------------------//
//--------------------------------------------////--------------------------------------------//

//Create Node
struct Node {
	int data;
	Node* next;
};

class SimpleList {
	//Class Variable
	Node* head;

	//Constructor : Makes the List Empty for Now
	public : SimpleList() :head(NULL){}

	// How to add at the start of a  list
	void AjouterDebut(int valeur) {
		Node* newBox = new Node(); // Create a new Node
		newBox->data = valeur; // Assign Value
		newBox->next = head; // Link to the previous head
		head = newBox; // Update head to point to the new node
	}

	// How to add at the end of a  list
	void AjouterFin(int valeur) {
		Node* newBox = new Node(); //We create a new Node
		newBox->data = valeur; //Add Values
		newBox->next = NULL; //Indicate Next to HEAD	

		//Check if list is empty or null
		if (!head) {
			head = newBox;
			return;
		}

		// Traverse tthe List untill last Node
		Node* temp = head;
		while (temp->next) {
			temp = temp->next;
		}
		temp->next = newBox; //Make our created Node be at the end
	}

	//Pour ajouter a un postiiton specifique
	void AjouterPosition(int valeur, int position) {
		if (position < 1) {
			cout << "position doit etre >= 1 " << endl;
			return;
		}

		if (position == 1) {
			AjouterDebut(valeur);
		}

		Node* newBox = new Node();
		newBox->data = valeur;

		Node* temp = head;

		//Going thru the list till we hit specifified position
		for (int i = 1; i < position - 1 && temp; i++) {
			temp = temp->next;
		}

		//If position specified is just beyond the list
		if (!temp) {
			cout << "La Position est hors limite" << endl; delete newBox; return;
		}

		newBox->next = temp->next;
		temp->next = newBox;
	}
	
	//Cherchez taill du Chaine
	int Taille() {
		int taille = 0;
		Node* boxInitiale = head;

		while (boxInitiale) {
			taille++;
			boxInitiale = boxInitiale->next;
		}
		return taille;
	}

	//Afficher le list chainer
	void Afficher() {

		//Verifier que le list est pas vide
		if (!head) { cout << "Liste est vide" << endl; return; }

		Node* boxInitiale = head;

		while (boxInitiale) {
			cout << boxInitiale->data << "->";
			boxInitiale = boxInitiale->next;
		}
		cout << "Null" << endl;
	}
};

//--------------------------------------------////--------------------------------------------//
//--------------------------------------------////--------------------------------------------//
//--------------------------------------------////--------------------------------------------//
//--------------------------------------------MAIN--------------------------------------------//
//--------------------------------------------////--------------------------------------------//
//--------------------------------------------////--------------------------------------------//
//--------------------------------------------////--------------------------------------------//


int main()
{
	SimpleList liste1;
	liste1.Afficher();
	liste1.AjouterDebut(10);
	liste1.Afficher();
	liste1.AjouterDebut(11);
	liste1.Afficher();
	liste1.AjouterFin(115);
	liste1.Afficher();
	cout << liste1.Taille() << endl;
	return 0;
}
