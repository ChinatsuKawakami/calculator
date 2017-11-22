#pragma once
class Calculator
{
public:
	Calculator();
	~Calculator();

	public:
		int multiply(int first, int second) {

			return first * second;
		}

		int divide(int first, int second) {
			return first / second;
		}

		int add(int first, int second) {
			return first + second;
		}
		int subtract(int first, int second) {
			return first - second;
		}



	};



