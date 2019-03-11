#pragma once

#include <string>

class Bull
{
  private:
    int might;
    int liftcapacity;
    std::string name;


  public:
    Bull(int might, int liftcapacity, std::string name);

  public:
    std::string to_string();
};
