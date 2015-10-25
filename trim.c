// 用C语言实现Trim()函数功能

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// 第一个参数输入，第二个参数输出
void Trim(char* str, char* out)
{
	int i = 0;
	int len = strlen(str);
	int j = len - 1;
	int pos = 0;

	memset(out, 0, len);

	while (str[i] != '\0' && isspace(str[i]))
	{
		++i;
	}
	while (str[j] != '\0' && isspace(str[j]))
	{
		--j;
	}

	while (i <= j)
	{
		out[pos++] = str[i++];
	}

}

int main()
{
	char* str = "   Hello world		\r\n"; // 这里面混合了制表符 空格和换行
	// 你的结果数组大于str即可
	//char res[1000];
	printf("%s\n", str);
	char* res1 = (char*)malloc(strlen(str));
	Trim(str, res1);
	printf("%s", res1);

	free(res1);
	res1 = NULL;
	return 0;
}