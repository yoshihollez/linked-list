#include "Bull.h"

Bull::Bull(int might,int liftcapacity,std::string name)
{
    this->might = might;
    this->liftcapacity = liftcapacity;
    this->name = name;
}
std::string Bull::to_string()
{
    return "Bull name " + name + "|" + "might: " + std::to_string(might) + "|" + "liftcapacity: " + std::to_string(liftcapacity);
}