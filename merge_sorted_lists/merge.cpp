#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

struct linkedList{
    Node *head;
};

linkedList* initList(int n);

void add_node(linkedList* list, int n);

linkedList* mergeTwoLists(Node* list1, Node* list2);

void display(Node *head);

    
// 1 - 3 - 4 - 5
// 2 - 6 - 7
   
// 1 - 2 - 3 - 4 - 6 - 7
int main(){
    linkedList* list1 = new linkedList;
    list1 = initList(1);
    add_node(list1, 2);
    add_node(list1, 3);

    cout << "Lista 1:\n";
    display(list1->head);
    
    linkedList* list2 = new linkedList;
    list2 = initList(1);
    add_node(list2, 3);
    add_node(list2, 4);

    cout << "Lista 2:\n";
    display(list2->head);
    
    linkedList* list3 = new linkedList;
    list3 = mergeTwoLists(list1->head, list2->head);

    cout << "Lista Misturada:\n";
    display(list3->head);

    return 0;
}

linkedList* initList(int n){
    Node* head = new Node;
	head->data = n;
	head->next = nullptr;

    linkedList* list = new linkedList;

    list->head = head;
    return list;
}

void add_node(linkedList* list, int n){
    Node *newNode = new Node;
	newNode->data = n;
	newNode->next = nullptr;

    if(list->head == nullptr){
        list->head = new Node;
        list->head = newNode;
        cout << list->head->data << endl;
        return;
    }
    
    Node *curr = list->head;

    while(curr->next != nullptr){
        curr = curr->next;
    }

    curr->next = newNode;
}

linkedList* mergeTwoLists(Node* list1, Node* list2){
    Node* iterator_I = list1; //list1 iterator index
    Node* iterator_J = list2; //list2 iterator index

    bool ended_list = false;
    linkedList* res_list = new linkedList; //head of list
    res_list->head = nullptr;

    int flag = 0;

    while (flag == 0){
        if(iterator_I == nullptr){
            flag = 1;
        }
        else if(iterator_J == nullptr){
            flag = 2;
        }
        else{
            if(iterator_I->data < iterator_J->data){
                add_node(res_list, iterator_I->data);
                iterator_I = iterator_I->next;
                cout << "Adicionou 1\n";
            }
            else{
                add_node(res_list, iterator_J->data);
                iterator_J = iterator_J->next;
                cout << "Adicionou 2\n";   
            }
        }
    }

    cout << "Flag: " << flag << endl;

    display(res_list->head);

    if(flag == 1){
        while(iterator_J != nullptr){
            add_node(res_list, iterator_J->data);
            iterator_J = iterator_J->next;
        }
    }
    else{
        while(iterator_I != nullptr){
            add_node(res_list, iterator_I->data);
            iterator_I = iterator_I->next;
        }
    }

    cout << "Cheguei\n" << endl;

    return res_list;
    
}

void display(Node *head) {
    if(head == nullptr){
        cout << "Lista vazia\n";
        return;
    }

	Node *list = head;
	while(list) {
		cout << list->data << " ";
		list = list->next;
	}
	cout << endl;
	cout << endl;
}