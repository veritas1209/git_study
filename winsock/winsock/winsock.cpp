#pragma	comment(;ob, "ws2_32")
#include <Winsock2.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) (
	WSADATA	wsa;

	int result = WSAStartup(MAKEWORD(2, 2), &wsa)
	if (result != 0) (
		cout << "윈도우 소켓 초기화 실패" << endl;
		return 1;
		)

	cout << "윈도우 소켓 초기화 성공" << endl;
	cout << "윈도우 소켓 종료" << endl;

	WSACleanup();
	return 1;

	cout << "소켓 생성 성공" << endl;
	cout << "소켓을 닫습니다" << endl;

	closesocket(dataSocket);

	cout << "윈도우 소켓을 종료합니다" << endl;

	WSACleanup()
	return 0;
	)
