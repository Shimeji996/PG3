#include "Enemy.h"

void Enemy::Update() {
	state = static_cast<size_t>(EnemyState::Approach);
	(this->*spFuncTable[state])();
	state = static_cast<size_t>(EnemyState::Shot);
	(this->*spFuncTable[state])();
	state = static_cast<size_t>(EnemyState::Leave);
	(this->*spFuncTable[state])();
}

void Enemy::Approach() {
	printf("接近\n");
	std::this_thread::sleep_for(std::chrono::seconds(2));
}

void Enemy::Shot() {
	printf("射撃\n");
	std::this_thread::sleep_for(std::chrono::seconds(2));
}

void Enemy::Leave() {
	printf("離脱\n");
	std::this_thread::sleep_for(std::chrono::seconds(2));
}

void (Enemy::* Enemy::spFuncTable[])() = {
	&Enemy::Approach,
	&Enemy::Shot,
	&Enemy::Leave
};