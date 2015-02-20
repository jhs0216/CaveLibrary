/*
 * Cave.h
 *
 *  Created on: 2015. 2. 19.
 *      Author: jhs
 */

#ifndef CAVETEMPLATE_CAVE_H_
#define CAVETEMPLATE_CAVE_H_

#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Cave {
	//for Pointer Dynamic Array size
	stack<int> pSizeStack;
public:
	Cave() {
		cout << "생성자" << endl;
	}

	template<typename ...Types>
	void Invoke(const char * s, Types ...type) {
		cout << " 요청 : " << s << endl;
		cout << " 가변인자 템플릿 " << endl;
		Invoke(type...);
	}
	template<typename T, typename ...Types>
	void Invoke(T t, Types ...types) {
		cout << " string 없음 " << endl;
		Invoke(t);
		Invoke(types...);
	}
	// 포인터 타입 부분 특수화.
	template<typename T , typename...Types>
	void Invoke(T*& type ,Types ...types) {
		setPointerSize(types...);
		int pSize = pSizeStack.top();
		pSizeStack.pop();
		cout << "남은 포인터 로직 수행 , 포인터 크기 : "<<pSize << endl;
	}
	template<typename T,typename...Types>
	int setPointerSize(T t,Types...types) {
		cout << "setPointerSize "<< endl;
		setPointerSize(t);
		Invoke(types...);
	}
	template<typename T>
	void setPointerSize(T t)
	{
		pSizeStack.push(t);
		cout << "PointerSize(Push) : " << pSizeStack.top() << endl;
	}

	template<typename T, size_t N>
	void Invoke(T (&arr)[N]) {
		size_t length = N;
		cout << " 배열 템플릿: 길이 " << length << endl;
	}
	template<typename T>
	void Invoke(T type) {
		cout << " 일반 템플릿: 값 " << type << endl;
		return;
	}
	void Invoke(const char * s) {
		cout << " 인자없음 " << s << endl;
		return;
	}
	virtual ~Cave() {

	}
};

#endif /* CAVETEMPLATE_CAVE_H_ */
