/*
 * Cave.h
 *
 *  Created on: 2015. 2. 19.
 *      Author: jhs
 */

#ifndef CAVETEMPLATE_CAVE_H_
#define CAVETEMPLATE_CAVE_H_


#include <iostream>

using namespace std;

class Cave {
public:
	Cave() {
		cout << "생성자" << endl;
	}

	template<typename ...Types>
	void Invoke(Types ...T) {
		cout << " 가변인자 템플릿: " << endl;
	}

	template<typename T>
	void Invoke(T*& type, int size) {
		cout << " 포인터 템플릿 : 길이  " << size << endl;
	}

	template<typename T, size_t N>
	void Invoke(T (&arr)[N]) {
		size_t length = N;
		cout << " 배열 템플릿: 길이 " << length << endl;
	}
	template<typename T>
	void Invoke(T type) {
		cout << " 일반 템플릿: 값 "  << type << endl;
	}

	virtual ~Cave() {

	}
};


#endif /* CAVETEMPLATE_CAVE_H_ */
