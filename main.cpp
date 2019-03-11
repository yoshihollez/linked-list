#include <iostream>
#include "Bull.h"
#include "Node.h"

using namespace std;

void print(Node *node){


    cout << std::to_string(node->get_data()) << " " << endl;
    if (node->get_next() != nullptr) {
        print(node->get_next());
    }
    
}

int main(){

    Bull yeet(21, 66, "yeet");
    cout << yeet.to_string() << endl;

    Node start(0);
    Node second(1);
    Node last(2);
    second.set_next(&last);
    start.set_next(&second);
    print(&start);
    return 0;
}