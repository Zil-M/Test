#include <iostream>
using namespace std;
#include <random> 
#include "key.h"



// 최대공약수
int CreatKey::gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

// 최소공배수
int CreatKey::lcm(int a, int b) {
	return a * b / gcd(a, b);
}

int CreatKey::Nkey(int p, int q) {
	int n = p * q;
	cout << n << endl;
	return n;
}

// L 키
int CreatKey::Lkey(int p, int q) {
	int l = lcm(p-1, q-1);
	cout << l << endl;
	return l;
}
// E 키
int CreatKey::Ekey(int l) {
	random_device random;
	mt19937 gen(random());
	uniform_int_distribution<int> dist1_(1, l);
	int n = dist1_(gen);
	for (;;) {
		cout << n << endl;
		if (gcd(n, l) == 1) {
			e = n;
			break;
		}
	}
	cout << e << endl;
	return e;
}

// D 키
int CreatKey::Dkey(int l, int e) {
	random_device random;
	mt19937 gen(random());
	uniform_int_distribution<int> dist1_(1, l);
	int d = dist1_(gen);
	cout << d << endl;
	return d;
}
