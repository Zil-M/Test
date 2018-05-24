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
	string messege; // 평문
	string EnMessege; // 암호문
	string DnMessege; // 복호문
	int N = Key->getN();
	int L = Key->getL();
	int E = Key->getE();
	int D = Key->getD();

	// 키 쌍 생성
	cout << "N 키 : " << N << endl;
	cout << "L 키 : " << L << endl;
	cout << "E 키 : " << E << endl;
	cout << "D 키 : " << D << endl;
	cout << " --------------------------------------" << endl;


	/*
	// 6.앨리스 - 세션키 획득
	int ali_k = GetAliceKey();

	// 7. 평문 암호화 후 전송
	cout << "평문 : ";
	cin >> messege;

	// 평문 암호화
	for (unsigned int i = 0; i < messege.length(); i++) {
		EnMessege += messege[i] ^ ali_k;
	}

	cout << "평문 암호문 : " << EnMessege << endl;

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
