#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, const char* argv[]){
	FILE *file = fopen(argv[1], "r");
	char line[1024];
	
	while(fgets(line, 1024, file)){
			long num, decimal_num, remainder, base = 1, binary = 0, ones = 0;
			num = atoi(line);
			decimal = num;
			while (num > 0)
    		{
				remainder = num % 2;
				if (remainder == 1)
				{
				    ones++;
				}
				binary = binary + remainder * base;
				num = num / 2;
				base = base * 10;
    		}
			printf("%ld\n", binary);
	}
	return 0;
}
