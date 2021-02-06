#include "dododo.h"

using namespace std;

int main()
{
	std::string expr1 = "({[]})";
	std::string expr2 = "({)}";
	std::string expr3 = "([]){()}";
	dododo(expr1);
	dododo(expr2);
	dododo(expr3);
	system("PAUSE");
	return 0;
}