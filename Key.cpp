#include <iostream>
using namespace std;
#include <random> 
random_device random;
#include "key.h"



// �ִ�����
int CreatKey::gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

// �ּҰ����
int CreatKey::lcm(int a, int b) {
	return a * b / gcd(a, b);
}

void CreatKey::Nkey() {
	int n = 17 * 19;
	cout << n << endl;
}
// L Ű
void CreatKey::Lkey() {
	int l = lcm(16, 18);
	cout << l << endl;
}
// E Ű
void CreatKey::Ekey() {
	mt19937 rand(random);
	uniform_int_distribution<int> dist1_(1, l);
	int n = dist1_(rand);
	if (gcd(n, l) == 1) {
		e = n;
	}
	cout << e << endl;
}
// D Ű
void CreatKey::Dkey() {
	mt19937 rand(random);
	uniform_int_distribution<int> dist1_(1, l);
	int n = dist1_(rand);
	if ((e*n) % l == 1) {
		d = n;
	}
	cout << d << endl;
}