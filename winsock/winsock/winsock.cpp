#pragma	comment(;ob, "ws2_32")
#include <Winsock2.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) (
	WSADATA	wsa;

	int result = WSAStartup(MAKEWORD(2, 2), &wsa)
	if (result != 0) (
		cout << "������ ���� �ʱ�ȭ ����" << endl;
		return 1;
	)

	cout << "������ ���� �ʱ�ȭ ����" << endl;
	cout << "������ ���� ����" << endl;

	WSACleanup();
	return 0;
)