#include <iostream>
#include <string>
using namespace std;

// --- TASK 1: Create the Node ---
struct Node {
    string data;
    Node* prev;
    Node* next;
};

void displayForward(Node* head) {
    cout << "Forward:\n";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "\n";
        temp = temp->next;
    }
    cout << endl;
}

void displayBackward(Node* tail) {
    cout << "Backward:\n";
    Node* temp = tail;
    while (temp != NULL) {
        cout << temp->data << "\n";
        temp = temp->prev;
    }
    cout << endl;
}

int main() {
    cout << "=== TASK 2: Build a List ===\n";
    Node* a = new Node{"Song A", NULL, NULL};
    Node* b = new Node{"Song B", NULL, NULL};
    Node* c = new Node{"Song C", NULL, NULL};
    Node* d = new Node{"Song D", NULL, NULL};
    Node* e = new Node{"Song E", NULL, NULL};

    a->next = b;
    b->prev = a; b->next = c;
    c->prev = b; c->next = d;
    d->prev = c; d->next = e;
    e->prev = d;

    cout << "=== TASK 3: Forward Traversal ===\n";
    displayForward(a);

    cout << "=== TASK 4: Backward Traversal ===\n";
    displayBackward(e); 

    cout << "=== TASK 5: Insert in the Middle ===\n";
    cout << "(Menyisipkan Song X di antara Song B dan Song C)\n";
    Node* x = new Node{"Song X", NULL, NULL};
    
    b->next = x;
    x->prev = b;
    x->next = c;
    c->prev = x;
    
    displayForward(a);
    displayBackward(e);

    cout << "=== TASK 6: Delete a Node ===\n";
    cout << "(Menghapus Song C)\n";
    
    x->next = d;
    d->prev = x;
    
    delete c; 
    
    displayForward(a);
    displayBackward(e);

    delete a; delete b; delete x; delete d; delete e;

    return 0;
}