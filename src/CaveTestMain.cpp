////============================================================================
//// Name        : CaveLibrary.cpp
//// Author      :
//// Version     :
//// Copyright   : Your copyright notice
//// Description : Hello World in C++, Ansi-style
////============================================================================
//
//#include <iostream>
//#include "Socket/ClientSocket.h"
//#include "Socket/SocketException.h"
//using namespace std;
///*
// * 플로우 차트
// *	1.서버로 요청 후에 , 새로운 포트를 할당받는다.
// *
// *
// */
//int main() {
//	try {
//
//		ClientSocket client_socket("localhost", 30000);
//
//		std::string reply;
//
//		try {
//			client_socket << "Test message.";
//			client_socket >> reply;
//		} catch (SocketException&) {
//		}
//
//		std::cout << "We received this response from the server:\n\"" << reply
//				<< "\"\n";
//
//	} catch (SocketException& e) {
//		std::cout << "Exception was caught:" << e.description() << "\n";
//	}
//
//	return 0;
//}
