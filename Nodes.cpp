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

	// How to add at the start of a  list (We just
	void AjouterDebut(int valeur) {
		Node* A = new Node();
		A->data = valeur;
		A->next = head;
		head = A;
	}

	//How to add at the end of a list
	void AjouterFin(int valeur) {
		Node* A = new Node();
		A->data = valeur;
		A->next = NULL;

		if (head == NULL) {
			head = A;
		}
		else {
			Node* current = head;
				while (current->next != NULL) {
					current = current->next;
				}
			current->next = A;
		}
	}


	//How to add at a specific postion
	void SpecificPostion(int valeur, int pos) {
		Node* A = new Node;  
		A->data = valeur;
		A->next = NULL;

		// If position is 0, insert at the beginning
		if (pos == 0) {
			A->next = head;
			head = A;
			return;
		}

		// Traverse to the position just before where we want to insert
		Node* current = head;
		for (int i = 0; i < pos - 1 && current != NULL; i++) {
			current = current->next;
		}

		// Insert if position is valid
		if (current != NULL) {
			A->next = current->next;  // Link new node to the next node
			current->next = A;        // Link previous node to new node
		}
	}

	int Taille() {
		int taille =0;
		Node* A = head;
		while (A != NULL) {
			taille++;
			A = A->next;
		}
		return taille;
	}

	void Afficher() {
		Node* A = head;

		while (A != NULL) {
			cout << A->data << " - ";
			A = A->next;
		}

		cout << endl;
	}
};

//--------------------------------------------////--------------------------------------------//
//--------------------------------------------////--------------------------------------------//
//--------------------------------------------////--------------------------------------------//
//--------------------------------------------MAIN--------------------------------------------//
//--------------------------------------------////--------------------------------------------//
//--------------------------------------------////--------------------------------------------//
//--------------------------------------------////--------------------------------------------//


int main() {
	SimpleList liste1;

	// Adding elements
	liste1.AjouterDebut(10);
	liste1.AjouterDebut(20);
	liste1.AjouterFin(30);
	liste1.AjouterFin(40);
	liste1.SpecificPostion(25, 1);
	liste1.SpecificPostion(35, 4);

	// Display the list
	cout << "Linked List: ";
	liste1.Afficher();

	// Get list size
	cout << "Size of list: " << liste1.Taille() << endl;

	return 0;
}
