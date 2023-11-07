#include <stdio.h>
#include <math.h> 
int main (){
	int canh_dai_hcn=6;
	int canh_ngan_hcn = 3;
	int chu_vi_hcn = ((canh_dai_hcn+canh_ngan_hcn)*2);
	int dien_tich_hcn=(canh_dai_hcn * canh_ngan_hcn);
	int canh_hv= 10;
	int chu_vi_hv = (canh_hv*4);
	int dien_tich_hv = (canh_hv*canh_hv);
	float PI=3.14;
	int ban_kinh= 5;
	float chu_vi_ht= (2*ban_kinh*PI);
	float dien_tich_ht=(ban_kinh*ban_kinh*PI);
	printf chu_vi_hcn; 
}
