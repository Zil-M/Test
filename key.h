#pragma once

//Ű �� ������
class CreatKey {
	int n;
	int l;
	int e;
	int d;

public:
	// �ִ�����
	int gcd(int a, int b);

	// �ּҰ����
	int lcm(int a, int b);

	// N Ű
	int Nkey(int p, int q);
	// L Ű
	int Lkey(int p, int q);
	// E Ű
	int Ekey(int l);
	// D Ű
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

// �ٸ���
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

// ��
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