#pragma once
#include <cstdint>
#include <array>
#include <span>

#include <sm83.hpp>

class bus
{
private:
   /* data */
public:
   bus(/* args */);
   ~bus();

   sm83 cpu;
   std::array<uint8_t, 64 * 1024> ramArray;
   std::span<uint8_t> ram;

   void write(uint16_t addr, uint8_t data);
	uint8_t read(uint16_t addr, bool bReadOnly = false);
};


