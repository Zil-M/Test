#include <iostream>
using namespace std;
#include <string>
#include <random> 
random_device random;
#include "key.h"

CreatKey* Key = new CreatKey;
Alice* ali = new Alice;
Bob* bob = new Bob;


int main()
{
	string messege; // ��
	string EnMessege; // ��ȣ��
	string DnMessege; // ��ȣ��
	int N = Key->getN();
	int L = Key->getL();
	int E = Key->getE();
	int D = Key->getD();

	// Ű �� ����
	cout << "N Ű : " << N << endl;
	cout << "L Ű : " << L << endl;
	cout << "E Ű : " << E << endl;
	cout << "D Ű : " << D << endl;
	cout << " --------------------------------------" << endl;


	/*
	// 6.�ٸ��� - ����Ű ȹ��
	int ali_k = GetAliceKey();

	// 7. �� ��ȣȭ �� ����
	cout << "�� : ";
	cin >> messege;

	// �� ��ȣȭ
	for (unsigned int i = 0; i < messege.length(); i++) {
		EnMessege += messege[i] ^ ali_k;
	}

	cout << "�� ��ȣ�� : " << EnMessege << endl;

	// 8. �� - ����Ű ȹ��
	int bob_k = GetBobKey();

	// 9. ��ȣ�� ��ȣȭ.
	for (unsigned int i = 0; i < EnMessege.length(); i++) {
		DnMessege += EnMessege[i] ^ bob_k;
	}

	cout << "��ȣ�� : " << DnMessege << endl;
	cout << " --------------------------------------" << endl;
	cout << "������ ����Ű : " << ali_k << endl;
	cout << "�� ���� Ű : " << bob_k << endl;
	*/
	return 0;
}
