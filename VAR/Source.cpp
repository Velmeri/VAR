#include <iostream>
#include <string>

using namespace std;

template<class T>
class var {
	T value;
public:
	var(T v);
	T operator = (T v);
};

int main() {
	var <int> num = 1;

	return 0;
}

template<class T>
var<T>::var(T v)
{
	value = v;
}

template<class T>
T var<T>::operator=(T v)
{
	value = v;
	return v;
}