#include <stdio.h>

long long giaithua(int n) {
	long long gt = 1;
	for (int i = 1; i <= n; i++) {
		gt *= i;
	}
	return gt;
}

long long ChinhHop(int k, int n){
	return giaithua(n)/giaithua(n-k);
}

long long ToHop(int k, int n){
	return giaithua(n)/(giaithua(k)*giaithua(n-k));
}

/*Cau a. Co bao nhieu cach xep 5 nguoi dung thanh hang ngang de chup anh*/

/*Cau b. Trong mot lop hoc co 30 nguoi. Cho biet co bao nhieu cach cu mot ban dai dien gom
1 lop truong, 1 lop pho va 1 thu quy*/

/*Cau c. Co bao nhieu so tu nhien n gom 2 chu so khac nhau duoc tao thanh tu {1,2,3,4,5,6}*/
void Cauc(){
	int count = 0;
	for(int i = 1; i <= 6; i++){
		for(int j = 1; j <= 6; j++){
			if(i != j){
				count++;
			}
		}
	}
	printf("Cau c. Co %lld so tu nhien gom 2 chu so khac nhau tao thanh tu {1,2,3,4,5,6}\n", count);
}
/*Cau d. Co 20 bai hat, hoi co bao nhieu playlist gom 10 bai hat khac nhau duoc tao tu 20 bai
hat da cho?*/

/*Cau e. Gia su nguoi dung tao mat khau su dung 3 chu cai va 3 chu so. Hoi co toi da bao nhieu
mat khau khac nhau co the duoc tao thanh*/

/*Cau f. Doi MU dang ky 18 cau thu thi dau, gom 2 thu mon, 6 hau ve, 6 tien ve, 4 tien dao.
Huan luyen vien co bao nhieu cach chon cac cau thu thi dau theo so do 4-4-2*/

/*Cau g. Co bao nhieu chuoi ki tu khac nhau bang cach sap xep cac chu cai cua tu agreeableness*/

/*Cau h. So cach chia 25 vien bi giong nhau cho 5 dua tre*/



int main() {
	printf("Cau a. Co %d cach xep 5 nguoi dung thanh hang ngang de chup anh\n", giaithua(5));
	printf("Cau b. Co %lld cach cu mot dai dien gom 1 lop truong, 1 lop pho va 1 thu quy", ChinhHop(3,30));
	Cauc();
	printf("Cau d. Co %lld playlist gom 10 bai hat khac nhau duoc tao tu 20 bai hat da cho\n", ToHop(10,20));
	
	return 1;
}
