#include "Node.h"

Node::Node(int data){
    this->data = data;
    this->next = nullptr;
}
void Node::set_next(Node * node){
    this->next = node;
}
int Node::get_data(){
    return data;
}
Node * Node::get_next(){
    return next;
}