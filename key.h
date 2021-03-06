#pragma once

//키 쌍 생성소
class CreatKey {
	int n;
	int l;
	int e;
	int d;

public:
	// 최대공약수
	int gcd(int a, int b);

	// 최소공배수
	int lcm(int a, int b);

	// N 키
	int Nkey(int p, int q);
	// L 키
	int Lkey(int p, int q);
	// E 키
	int Ekey(int l);
	// D 키
	int Dkey(int l, int e);

	int getN() {
		return n;
	}
	int getL() {
		return l;
	}
	int getE() {
		return e;
	}
	int getD() {
		return d;
	}
};

// 앨리스
class Alice {
	int e;
	int n;

public:

	int getE() {
		return e;
	}
	void setE(int _n) {
		e = _n;
	}
	int getN() {
		return n;
	}
	void setN(int _n) {
		n = _n;
	}
};

// 밥
class  Bob {
	int d;
	int n;

public:
	int getD() {
		return d;
	}
	void setD(int _n) {
		d = _n;
	}
	int getN() {
		return n;
	}
	void setN(int _n) {
		n = _n;
	}
};