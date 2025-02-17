#include "bus.hpp"

class bus
{
private:
   /* data */
public:
   bus(/* args */);
   ~bus();
};

bus::bus(/* args */)
{
   ram(ramArray) {}
}

bus::~bus()
{
   //destructor
}

void bus::write(uint16_t addr, uint8_t data)
{
   ram[addr] = data;
}

uint8 bus::read(uint16_t addr, bool bReadOnly = false)
{
   return ram[addr];
}