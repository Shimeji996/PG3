#include <stdio.h>
#include <iostream>
#include <thread>

int main() {

	std::string a(100000, 'a');

	auto CountStart = std::chrono::system_clock::now();
	std::string copy = a;
	auto CountStop = std::chrono::system_clock::now();
	std::chrono::duration<double, std::micro>Copy = CountStop - CountStart;

	auto MoveStart = std::chrono::system_clock::now();
	std::string move = std::move(a);
	auto MoveStop = std::chrono::system_clock::now();
	std::chrono::duration<double, std::micro>Move = MoveStop - MoveStart;

	std::cout << Copy.count() << "μs" << std::endl;
	std::cout << Move.count() << "μs" << std::endl;

	return 0;
}
