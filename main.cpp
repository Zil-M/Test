#include <iostream>
using namespace std;
#include "key.h"

Alice* ali = new Alice;
Bob* bob = new Bob;

// �ŵ����� �޼ҵ�
int pow(int x, int y)
{
	int result = x;
	int i;
	for (i = 1; i<y; i++)
	{
		result *= x;
	}
	return result;
}

int main()
{
	int p, q;
	string messege; // ��
	string EnMessege; // ��ȣ��
	string DnMessege; // ��ȣ��


	cout << "�� �Ҽ� p,q �Է� :" << endl;
	cout << " p :";
	cin >> p;
	cout << " q :";
	cin >> q;

	CreatKey* Key = new CreatKey;

	int n = Key->Nkey(p, q);
	int l = Key->Lkey(p, q);
	int e = Key->Ekey(l);
	int d = Key->Dkey(l, e);

	// Ű �� ����
	//cout << "N Ű : " << n << endl;
	//cout << "L Ű : " << l << endl;
	//cout << "E Ű : " << e << endl;
	//cout << "D Ű : " << d << endl;
	cout << " --------------------------------------" << endl;


	/*
	// 6.�ٸ��� - ����Ű ȹ��
	ali->setE(e);
	ali->setN(e);

	// 7. �� - ���� Ű ȹ��
	bob->setD(d);
	bob->setN(n);

	/*
	// 8. �� �Է�
	cout << "�� : ";
	cin >> messege;

	// �� ��ȣȭ
	for (unsigned int i = 0; i < messege.length(); i++) {
		EnMessege += pow(messege[i], e) % n;
	}

	cout << "�� ��ȣ�� : " << EnMessege << endl;
	/*
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

