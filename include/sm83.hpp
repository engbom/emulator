#pragma once
#include <cstdint>

class sm83
{
private:
   /* data */
public:
   sm83(/* args */);
   ~sm83();

   // Define the FLAGS enum class
   enum class FLAGS : uint8_t {
      Z = (1 << 7), // Zero flag
      N = (1 << 6), // Subtraction flag (BCD)
      H = (1 << 5), // Half Carry flag (BCD)
      C = (1 << 4)  // Carry flag
   };

   // 16-bit registers
   union {
      struct {
          uint8_t F; // Flags
          uint8_t A; // Accumulator
      };
      uint16_t AF;
  };

  union {
      struct {
          uint8_t C;
          uint8_t B;
      };
      uint16_t BC;
  };

  union {
      struct {
          uint8_t E;
          uint8_t D;
      };
      uint16_t DE;
  };

  union {
      struct {
          uint8_t L;
          uint8_t H;
      };
      uint16_t HL;
  };

   uint16_t SP = 0x0000; // Stack Pointer
   uint16_t PC = 0x0000; // Program Counter

   void setFlag(FLAGS flag, bool value);
   uint8_t getFlag(FLAGS flag);

};

