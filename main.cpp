#include <iostream>
using namespace std;
#include "key.h"

Alice* ali = new Alice;
Bob* bob = new Bob;

// 거듭제곱 메소드
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
	string messege; // 평문
	string EnMessege; // 암호문
	string DnMessege; // 복호문


	cout << "두 소수 p,q 입력 :" << endl;
	cout << " p :";
	cin >> p;
	cout << " q :";
	cin >> q;

	CreatKey* Key = new CreatKey;

	int n = Key->Nkey(p, q);
	int l = Key->Lkey(p, q);
	int e = Key->Ekey(l);
	int d = Key->Dkey(l, e);

	// 키 쌍 생성
	//cout << "N 키 : " << n << endl;
	//cout << "L 키 : " << l << endl;
	//cout << "E 키 : " << e << endl;
	//cout << "D 키 : " << d << endl;
	cout << " --------------------------------------" << endl;


	/*
	// 6.앨리스 - 공개키 획득
	ali->setE(e);
	ali->setN(e);

	// 7. 밥 - 개인 키 획득
	bob->setD(d);
	bob->setN(n);

	/*
	// 8. 평문 입력
	cout << "평문 : ";
	cin >> messege;

	// 평문 암호화
	for (unsigned int i = 0; i < messege.length(); i++) {
		EnMessege += pow(messege[i], e) % n;
	}

	cout << "평문 암호문 : " << EnMessege << endl;
	/*
	// 8. 밥 - 세션키 획득
	int bob_k = GetBobKey();

	// 9. 암호문 복호화.
	for (unsigned int i = 0; i < EnMessege.length(); i++) {
		DnMessege += EnMessege[i] ^ bob_k;
	}

	cout << "복호문 : " << DnMessege << endl;
	cout << " --------------------------------------" << endl;
	cout << "엘리스 세션키 : " << ali_k << endl;
	cout << "밥 세션 키 : " << bob_k << endl;
	*/
	return 0;
}

