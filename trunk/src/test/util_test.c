#include "ftk_util.h"
int main(int argc, char* argv[])
{
	int i = 0;
	unsigned short codes[] = {0x9690, 0x5f0f, 0x58f0, 0x660e, 0x4e0e, 0x5185, 0x5efa, 0x51fd, 0x6570};
	const char* str = "隐式声明与内建函数";
	const char* p = str;

	for(i = 0; *p; i++)
	{
		assert(codes[i] == utf8_get_char(p, &p));	
		assert(codes[i] == utf8_get_prev_char(p, NULL));
	}
	assert(utf8_count_char(str, strlen(str)) == 9);
	str = "abc";
	assert(utf8_count_char(str, strlen(str)) == 3);
	str = "abc中国";
	assert(utf8_count_char(str, strlen(str)) == 5);
	
	str = "abc中国";
	assert(utf8_count_char(str, 3) == 3);

	return 0;
}