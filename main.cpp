#include <stdio.h>

int CalcTypically(int time) {
	return 1072 * time;
}

int CalcRecursive(int time, int Hourly = 100) {
	if (time == 1) {
		return Hourly;
	}
	return Hourly + (CalcRecursive(time - 1, Hourly * 2 - 50));
}

void Comparison(int time) {

	int Typically = CalcTypically(time);
	int Recursive = CalcRecursive(time);

	printf("一般的な賃金 : %d\n", Typically);
	printf("再帰的な賃金 : %d\n", Recursive);

	if (Typically > Recursive) {
		printf("一般的な賃金体系");
	}

	else if (Typically < Recursive) {
		printf("再帰的な賃金体系");
	}

	else if (Typically == Recursive) {
		printf("同じ");
	}
}

int main() {

	Comparison(8);

	return 0;
}