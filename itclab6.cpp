//#include <iostream>
//using namespace std;
//int main()
//{
//	int w_v, w_p, w_q, s_v, s_p, s_q, r_v, r_p, r_q;
//	cout << "enter the price of Wheat" << endl;
//	cin >> w_p;
//	cout << "enter the Quantity of Wheat" << endl;
//	cin >> w_q;
//	cout << "enter the price of Rice" << endl;
//	cin >>r_p;
//	cout << "enter the Quantity of Rice" << endl;
//	cin >> r_q;
//	cout << "enter the price of Sugar" << endl;
//	cin >> s_p;
//	cout << "enter the Quantity of Sugar" << endl;
//	cin >> s_q;
//	w_v = w_p*w_q;
//	r_v = r_p*r_q;
//	s_v = s_p*s_q;
//	cout << "The value of Wheat is:"<<w_v << endl;
//	cout << "The value of Rice is:" << r_v << endl;
//	cout << "The value of Sugar is:" << s_v << endl;
//	system("pause");
//	return 0;
//
//}
//task 2
//#include <iostream>
//using namespace std;
//int main()
//{
//	int m;
//	cout << "enter any number to print names of month" << endl;
//	cin >> m;
//	switch (m)
//	{
//
//	case 1:
//		cout << "january" << endl;
//		break;
//	case 2:
//		cout << "February" << endl;
//		break;
//	case 3:
//		cout << "March" << endl;
//		break;
//	case 4:
//		cout << "April" << endl;
//		break;
//	case 5:
//		cout << "May" << endl;
//		break;
//	case 6:
//		cout << "June" << endl;
//		break;
//	case 7:
//		cout << "July" << endl;
//		break;
//	case 8:
//		cout << "August" << endl;
//		break;
//	case 9:
//		cout << "September" << endl;
//		break;
//	case 10:
//		cout << "October" << endl;
//		break;
//	case 11:
//		cout << "November" << endl;
//		break;
//	case 12:
//		cout << "december" << endl;
//		break;
//	default:
//		cout << "invalid input" << endl;
//	}
//	system("pause");
//	return 0;
//
//}
//task3
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a, b;
//	char ch;
//	cout << "enter two number " << endl;
//	cin >> a >> b;
//	cout << "enter operation (+,-,*,/,%)" << endl;
//	cin >> ch;
//	switch (ch)
//	{
//	case '+':
//		cout << "sum of  given two numbers is:" << a + b;
//		break;
//	case '-':
//		cout << "Difference of  given two numbers is:" << a - b;
//		break;
//	case '*':
//		cout << "Product of  given two numbers is:" << a * b;
//		break;
//	case '/':
//		cout << "Divison of  given two numbers is:" << a / b;
//		break;
//	case '%':
//		cout << "Modulus of  given two numbers is:" << a % b;
//		break;
//	default:
//		cout << "invalid input";
//	}
//	system("pause");
//	return 0;
//}
//task 4
//#include <iostream>
//using namespace std;
//int main()
//{
//	int s;
//	cout << "enter your score " << endl;
//	cin >> s;
//	switch (s)
//	{
//	case 90:
//		cout << "your score of " << s << " coresponds to A grade" << endl;
//		break;
//	case 80:
//		cout << "your score of " << s << " coresponds to B grade" << endl;
//		break;
//	case 70:
//		cout << "your score of " << s <<  "coresponds to C grade" << endl;
//		break;
//	case 60: 
//		cout << "your score of " << s << " coresponds to D grade" << endl;
//		break;
//	case 50:
//		cout << "your score of " << s << " coresponds to E grade" << endl;
//		break;
//	default:
//		cout << "you are failed" << endl;
//	}
//	system("pause");
//	return 0;
//
//}
//task5
//#include <iostream>
//using namespace std;
//int main()
//{
//	int num;
//	cout << "enter any number from 1 to 7" << endl;
//	cin >> num;
//	switch (num)
//	{
//
//	case 1:
//		cout << "MONDAY" << endl;
//		break;
//	case 2:
//		cout << "TURSDAY" << endl;
//		break;
//	case 3:
//		cout << "WEDNESDAY" << endl;
//		break;
//	case 4:
//		cout << "THURSDAY" << endl;
//		break;
//	case 5:
//		cout << "FRIDAY" << endl;
//		break;
//	case 6:
//		cout << "SATURDAY" << endl;
//		break;
//	case 7:
//		cout << "SUNDAY" << endl;
//		break;
//	default:
//		cout << "invalid input";
//	}
//	system("pause");
//	return 0;
//
//}
//task6
//#include <iostream>
//using namespace std;
//int main()
//{
//	int choice;
//	cout << "select time range \n1 for Morning\n2 for Afternoon\n3 for Evening\n4 for Night" << endl;
//	cin >> choice;	
//	switch (choice)
//	{
//    case 1:
//		cout << "MORNING" << endl;
//		break;
//	case 2:
//		cout << "AFTERNOON" << endl;
//		break;
//	case 3:
//		cout << "EVENING" << endl;
//		break;
//	case 4:
//		cout << "NIGHT" << endl;
//		break;
//	default:
//		cout << "invalid input";
//}
//system("pause");
//return 0;
//
//}