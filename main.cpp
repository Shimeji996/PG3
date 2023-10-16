#include <stdio.h>
#include <random>
#include <chrono>
#include <thread>
#include <iostream>

std::random_device seed_Gen;
std::mt19937 mtrand(seed_Gen());

typedef int (*Pfunc)();

int Dice() {
	return std::uniform_int_distribution<int>(1, 6)(seed_Gen);
}

void DiceResult(int diceNumber) {
	//偶数のとき
	if (diceNumber % 2 == 0) {
		printf("結果　丁\n");
	}
	// 奇数のとき
	if (diceNumber % 2 == 1) {
		printf("結果　半\n");
	}
}

int SetTimeOut(Pfunc collback, int second) {
	std::this_thread::sleep_for(std::chrono::seconds(second));
	return collback();

}

int main() {

	Pfunc p;
	p = Dice;
	int Result;
	int Answer;

	while (true) {

		printf("1:半(奇数)　2:丁(偶数)　0:終了\n");
		std::cin >> Answer;
		if (Answer == 0) {
			break;
		}
		Result = SetTimeOut(p, 3);
		printf("答え : %d\n", Result);
		DiceResult(Result);
		if (Result % 2 == 0 && Answer == 2) {
			printf("勝ち\n");
		}
		else if (Result % 2 == 1 && Answer == 1) {
			printf("勝ち\n");
		}
		else {
			printf("負け\n");
		}

	}

	return 0;
}