#include "prejudge.h"

void append(Node *&head, int value) {
    Node* newNode = new Node();
    newNode->value = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void insert(Node *&head, int index, int value) {
    Node* newNode = new Node();
    newNode->value = value;

    if (index == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* current = head;
    for (int i = 0; i < index - 1 && current != nullptr; ++i) {
        current = current->next;
    }

    if (current == nullptr) {
        // Index is out of bounds
        delete newNode;
        return;
    }

    newNode->next = current->next;
    current->next = newNode;
}

void deleteNode(Node *&head, int value) {
    if (head == nullptr) return;

    if (head->value == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* current = head;
    while (current->next != nullptr && current->next->value != value) {
        current = current->next;
    }

    if (current->next == nullptr) return; // Value not found

    Node* temp = current->next;
    current->next = current->next->next;
    delete temp;
}

void print(Node *head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->value << std::endl;
        current = current->next;
    }
}