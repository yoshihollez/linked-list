#pragma once

#include <string>

class Node
{
private:
  int data;
  Node * next;

public:
  Node(int data);

public:
void set_next(Node * node);
  Node * get_next(void);
  int get_data(void);
};