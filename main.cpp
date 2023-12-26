#include <stdio.h>
#include <Windows.h>
#include <algorithm>
#include <cassert>
#include <fstream>
#include <iostream>
#include <sstream>
#include <list>

struct StudentNumber {
	std::string name;
	std::string number;
	std::string studentNumber;
};

int main() {
	std::list<StudentNumber> studentNumbers;
	std::ifstream inputFile("PG3_05_02.txt");
	assert(inputFile.is_open());

	std::string line;
	while (getline(inputFile, line)) {
		std::istringstream lineStream(line);
		std::string account;
		while (getline(lineStream, account, ',')) {
			StudentNumber StudentNumber{};
			StudentNumber.name = account;
			std::string number = account.substr(2, 3);
			std::string studentNumber = account.substr(6, 4);
			StudentNumber.number = number.c_str();
			StudentNumber.studentNumber = studentNumber.c_str();
			studentNumbers.emplace_back(StudentNumber);
		}
	}

	inputFile.close();

	studentNumbers.sort([](const StudentNumber& a, const StudentNumber& b) {
		return  std::atoi((a.number + a.studentNumber).c_str()) < std::atoi((b.number + b.studentNumber).c_str());
		}
	);

	for (auto& accountName : studentNumbers) {
		std::cout << accountName.name << std::endl;
	}

	return 0;
}