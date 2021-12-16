#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <array>
using namespace std;

/* Во входном файле INPUT.TXT в первой строке записано число N (1 ≤ N ≤ 100),
а в последующих N строках N моментов времени. Каждый момент времени задается 3 целыми числами - часы (от 0 до 23),
минуты (от 0 до 59) и секунды (от 0 до 59).В выходной файл OUTPUT.TXT выведите моменты времени,
упорядоченные в порядке неубывания без ведущих нулей. */





int main()
{
	ifstream input("input.txt");
	ofstream output("output.txt");
	int n;
	int hh;
	int mm;
	int ss;
	int x;
	int a[100];

	input >> n;
	for (int i = 0; i < n; i++) {
		input >> hh >> mm >> ss;
		a[i] = hh * 3600 + mm * 60 + ss;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				x = a[j];
				a[j] = a[j + 1];
				a[j + 1] = x;
			}
		}
	}

	for (int i = 0; i <n; i++) {
		hh = a[i] / 3600;
		mm = (a[i] / 60) % 60;
		ss = a[i]- hh * 3600 - mm * 60;
		output << hh <<' ' << mm << ' ' <<ss<<endl;

	}
}
