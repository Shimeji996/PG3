#include <stdio.h>
#include <thread>

void Thread1(int num) {
	num += 0;
	printf("thread %d\n", num);
}

void Thread2(int num) {
	num += 1;
	printf("thread %d\n", num);
}

void Thread3(int num) {
	num += 2;
	printf("thread %d\n", num);
}

int main() {
	int num = 1;

	std::thread th1(Thread1, num);
	th1.join();
	std::thread th2(Thread2, num);
	th2.join();
	std::thread th3(Thread3, num);
	th3.join();

	return 0;
}