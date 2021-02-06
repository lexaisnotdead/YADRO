#include "dododo.h"

bool dododo(const std::string& expr)
{
	const unsigned SIZE = expr.length();

	Stack stk(SIZE/2);

	char token;

	for (int i = 0; expr[i] != '\0' ; ++i)
	{
		token = expr[i];

		switch (token)
		{
		case '(': case '{': case '[':
			stk.Push(token);
			break;
		case ')': case '}': case ']':
			if (stk.IsEmpty() || token == ')' && stk.Top() != '(' || token == '}' && stk.Top() != '{' || token == ']' && stk.Top() != '[')
			{
				std::cout << "FALSE" << std::endl;
				return 0;
			}
			stk.Pop();
			break;
		}
	}
	if (stk.IsEmpty())
	{
		std::cout << "TRUE" << std::endl;
		return 1;
	}
	std::cout << "FALSE" << std::endl;
	return 0;
}