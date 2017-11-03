// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;



int main()
{
	int number_of_pods, peas_per_pod, total_peas;

	cout << "Press return after entering number.\n";
	cout << "Enter the number of pods:\n";
	cin >> number_of_pods;
	cout << "enter the number of peas in a pod:\n";
	cin >> peas_per_pod;

	total_peas = number_of_pods * peas_per_pod;

	cout << "If you have ";
	cout << number_of_pods;
	cout << " pea pods\n";
	cout << "and ";
	cout << peas_per_pod;
	cout << " peas in each pod, then\n";
	cout << "you have ";
	cout << total_peas;
	cout << " peas in all the pods.\n";

	char letter;
	cout << "Enter a letter and press return to end.\n";
	cin >> letter;


    return 0;
}

