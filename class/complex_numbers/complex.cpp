#include <iostream>

using namespace std;

class ComplexNumber {

private:
	int _Re, _Im;
public:
	ComplexNumber(int Re, int Im){
		_Re = Re;
		_Im = Im;
	}

	ComplexNumber *conjugate(){
		return new ComplexNumber(_Re, -_Im);
	}

	void print(){
		cout << "Re: " << _Re << " Im: " << _Im << endl;
	}

	friend ComplexNumber *add(ComplexNumber *, ComplexNumber *);
	friend ComplexNumber *sub(ComplexNumber *, ComplexNumber *);
	friend ComplexNumber *mult(ComplexNumber *, ComplexNumber *);
	friend ComplexNumber *div(ComplexNumber *, ComplexNumber *);
	friend bool equal(ComplexNumber *, ComplexNumber *);
};

ComplexNumber *add(ComplexNumber *a, ComplexNumber *b){
	int re = a->_Re + b->_Re;
	int im = a->_Im + b->_Im;
	return new ComplexNumber(re, im);
}

ComplexNumber *sub(ComplexNumber *minued, ComplexNumber *subtrahend){
	int re = minued->_Re - subtrahend->_Re;
	int im = minued->_Im - subtrahend->_Im;
	return new ComplexNumber(re, im);
}

ComplexNumber *mult(ComplexNumber *a, ComplexNumber *b){
	int re = a->_Re*b->_Re - a->_Im*b->_Im;
	int im = a->_Re*b->_Im + a->_Im*b->_Re;
	return new ComplexNumber(re, im);
}

ComplexNumber *div(ComplexNumber *dividend, ComplexNumber *divider){
	int c = divider->_Re*divider->_Re + divider->_Im*divider->_Im;
	int re = (dividend->_Re*divider->_Re + dividend->_Im*divider->_Im) / c;
	int im = (divider->_Re*dividend->_Im - divider->_Im*dividend->_Re) / c; 
	return new ComplexNumber(re, im);
}

bool equal(ComplexNumber *a, ComplexNumber *b){
	return a->_Re == b->_Re && a->_Im == b->_Im;
}

int main(){
	ComplexNumber *a = new ComplexNumber(0, 0);
	ComplexNumber *b = new ComplexNumber(10, -10);

	ComplexNumber *c = add(a, b);
	c->print();
	c = sub(a, b);
	c->print();

	ComplexNumber *d = mult(b, c);
	d->print();

	ComplexNumber *e = div(d, c);
	e->print();

	cout << equal(b, e) << endl;
}