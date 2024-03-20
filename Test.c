#include <stdio.h>

int main() {
	float dosages[5] = {0.8,2,3,4,5};
	int num_dosages = sizeof(dosages)/sizeof(dosages[0]);
	int min_injection = 10;
	int max_injection = 180;
	int increasing = 10;
	for(int i = 0; i < num_dosages; i++)
	{
		float dosage = dosages[i];
		for(int num_injection = min_injection; num_injection <= max_injection; num_injection += increasing)
		{
			float single_injection = dosage/num_injection;
			printf("注射剂量选择：%.1fml\n",dosage);
			printf("注射次数选择：%d次\n",num_injection);
			printf("单次注射剂量为：%.2fml\n\n",single_injection);
		}
	}

    return 0;
}