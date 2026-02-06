#include<bitset>
#include<cstdint>
#include<iostream>

//Check if the BIT is ON
constexpr std::string_view checkBit(const std::uint8_t x, const std::uint8_t y) {
	return (x & y) ? "Bit is on\n" : "Bit is off";
}

void turnOn(std::uint8_t &x, std::uint8_t y) {
	x |= y;
}

//Turn Off the BIT
void turnOff(std::uint8_t &x,const std::uint8_t y) {
	x &= ~y;
}

//Flip the BIT
void flipBit(std::uint8_t &x,const std::uint8_t y){
	x ^= y;
}

int main() {
	constexpr std::uint8_t mask0{ 0b0000'0001 };
	constexpr std::uint8_t mask1{ 0b0000'0010 };
	constexpr std::uint8_t mask2{ 0b0000'0100 };
	constexpr std::uint8_t mask3{ 0b0000'1000 };
	constexpr std::uint8_t mask4{ 0b0001'0000 };
	constexpr std::uint8_t mask5{ 0b0010'0000 };
	constexpr std::uint8_t mask6{ 0b0100'0000 };
	constexpr std::uint8_t mask7{ 0b1000'0000 };

	std::uint8_t flags{ 0b0000'0101 };
	std::cout << std::boolalpha;
	std::cout << checkBit(flags, mask0);
	turnOff(flags, mask0);
	flipBit(flags, mask2);
	turnOn(flags, mask0);
}