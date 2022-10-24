#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <stdio.h>
using namespace std;

/*		Tools ini Menggunakan
		- Tipe Data
		- For (looping)
		- Fungsi
		- Array
		- Prosedur
		- If
*/
void z(){
	system("cls");
}

void color(int cr){
	switch (cr){
		case 1 	: system("color 0");//hitam
		break;
		case 2 	: system("color 1");//biru
		break;
		case 3 	: system("color 2");//hijau
		break;
		case 4 	: system("color 3");//aqua/biru toska
		break;
		case 5 	: system("color 4");//merah
		break;
		case 6 	: system("color 5");//ungu
		break;
		case 7 	: system("color 6");//kuning
		break;
		case 8 	: system("color 7");//putih
		break;
		case 9 	: system("color 8");//abu2
		break;
		case 10 : system("color 9");//biru cerah
		break;	
		case 11 : system("color A");//Hijau cerah
		break;	
		case 12 : system("color B");//Aqua cerah
		break;	
		case 13 : system("color C");//Merah cerah
		break;	
		case 14 : system("color D");//Ungu cerah
		break;	
		case 15 : system("color E");//Kuning cerah
		break;	
	default 	: system("color F");//Putih cerah
	}
}

void cover (){
	cout<< "#=========================================================#"<<endl;
	cout<< "|                   CAFE EKSPLOLER TOOL                   |"<<endl;
	cout<< "|                Project by Coding Resident               |"<<endl;
	cout<< "|                           2021                          |"<<endl;
	cout<< "#=========================================================#"<<endl;
	cout<<endl;
	
}

int loading(int l){
	for(l=0; l<=10; l++){
	printf(".");
	Sleep(50);
	}
	z();
	return l;
	z();
}
int loading2(int ll){
	for(ll=0; ll<=9; ll++){
	printf("=",&ll);
	Sleep(90);
	z();
	}
}

int sabar(){
	//system("color A");
	color(11);
	cout<<"Mohon Tunggu\n";
	for (int lod=0; lod<=20; lod++){
	printf("-");
	Sleep(100);
	
	}}
	

int detail(int pil){
	cout<<loading2(30);
	z();
	cout<<"\n     Mau Cari Apa ?      "<<endl;
	cout<<"\n+=======================+"<<endl;
    cout<<"\n(1) Information\n(2) Daftar Menu & Harga\n(3) back"<<endl;
    cout<<"\nPilih (1/2/3) = ";cin>>pil;
    z();
    return pil;
}
int lokasi(int lk){
	
	switch (lk){
		case 1 : cout<<"Jln. Keranji, Kp. Jl. Muara Beres, RT.06/RW.03, Sukahati, Cibinong, Kabupaten Bogor, Jawa Barat 16912";
		break;
		case 2 : cout<<"Graha Pena Bogor, Jl KHR Abdullah Bin Nuh Jl. Ring Road Taman Yasmin No 30, RT 02/RW 03, Curug Mekar, Kec. Bogor Barat, Kota Bogor, Jawa Barat 16113";
		break;
		case 3 : cout<<"Jl. Cilendek No.80, RT.02/RW.06, Cilendek, Kec. Bogor Barat, Kota Bogor, Jawa Barat 16112";
		break;
		case 4 : cout<<"Jl. Pemuda Kios Ps. Hewan No.20, RT.01/RW.06, Tanah Sereal, Kec. Tanah Sereal, Kota Bogor, Jawa Barat 16162";
		break;
		case 5 : cout<<"Jl. Tunas No.86, RT.01/RW.04, Sukaresmi, Kec. Tanah Sereal, Kota Bogor, Jawa Barat 16165";
		break;
		case 6 : cout<<"Jl. Gardu Raya No.25, RT.02/RW.01, Margajaya, Kec. Bogor Barat, Kota Bogor, Jawa Barat 16116";
		break;
		case 7 : cout<<"Babakan, Kec. Dramaga, Kabupaten Bogor, Jawa Barat 16680";
		break;
		case 8 : cout<<"Jl. Raya Puncak - Gadog No.20, Tugu Selatan, Kec. Cisarua, Kabupaten Bogor, Jawa Barat 16750";
		break;
		case 9 : cout<<"Jl. Raya Puncak - Gadog No.17, Tugu Selatan, Kec. Cisarua, Kabupaten Bogor, Jawa Barat 16750";
		break;
		case 10 : cout<<"Jl. Raya Puncak - Cianjur, Tugu Utara, Kec. Cisarua, Kabupaten Bogor, Jawa Barat 16750";
		break;
		case 11 : cout<<"The Capitol Park, Jl. Salemba Raya No.16 Kenari, Kec. Senen, Kota Jakarta Pusat, DKI Jakarta";
		break;
		case 12 : cout<<"Jl. KH Ahmad Dahlan No.16, Gandaria, Jakarta Selatan";
		break;
		case 13 : cout<<"Jl. Surabaya No.20, Menteng, Jakarta Pusat";
		break;
		case 14 : cout<<"Jl. Arjuna Utara No.1, Duri Kepa, Kebonjeruk, Jakarta Barat, DKI Jakarta";
		break;
		case 15 : cout<<"Jl. Penjernihan IV No.9, Bendungan Hilir, Tanah Abang, Jakarta Pusat";
		break;
		case 16 : cout<<"Jl. Teuku Cik Ditiro No.52, RT.10/RW.05, Menteng, Kec. Menteng, Kota Jakarta Pusat";
		break;
		case 17 : cout<<"Jl. Hang Tuah Raya No.9, RT.02/RW.06, Kec. Kebayoran Baru, Kota Jakarta Selatan";
		break;
		case 18 : cout<<"Jl. H. Agus Salim No.26F, RT.02/RW.01, Kebon Sirih, Menteng, Jakarta Selatan";
		break;
		case 19 : cout<<"Jl. Kolonel Sugiono No.24, RT.14/RW.09, Pondok Bambu, Kec. Duren Sawit, Kota Jakarta Timur";
		break;
		case 20 : cout<<"Jl. Pertengahan No.5, RW.03, Cijantung, Kec. Pasar Rebo, Kota Jakarta Timur";
		break;
		default : "Zonk";
	}
	return lk;
}  
//DATA MENU & HARGA-------------------------------------------------------------------------------------
void menu1(){
	string harga1[]= {" ","\t\t\t16k","\t\t\t13k","\t\t\t10k","\t\t16k","\t\t\t13k","\t\t\t\t10k","\t\t\t\t19k","\t\t\t\t9k","\t\t\t3.8k","\t\t\t\t2.5k","\t\t\t\t12k","\t\t\t\t6.3k","\t\t\t12k","\t\t\t\t6.3k"}; 
	string menu1[] = {" ","Nasi Goreng Spesial","Nasi Goreng Telor","Nasi goreng biasa","Indomie Goreng Spesial","Indomie Goreng Telur","Mie jangkak","Sate Taichan","Sate Pisang","Sosis Bernardi","Sosis Ayam","Sosis Besar","Burger","Ayam Gunting","Milkshake" };
	for (int mm=1; mm<=14; mm++){
		cout<<mm<<". "<<menu1[mm]<<"\t"<<harga1[mm]<<endl;
	}
}

void menu2(){
string harga2[]={ " ", "\t\t\t18k","\t\t\t22k","\t\t\t30k","\t\t\t30k","\t\t\t18k","\t\t\t18k","\t\t\t22k","\t\t\t24k","\t22k"};
	string menu2[]={" ","Nasi Goreng Ayam","Nasi Goreng Tuna","Nasi Goreng Seafood","Nasi Goreng Bozz","Mie Tek Tek Goreng","Mie Tek Tek Rebus","Omelet+French Fries","Ayam Geprek+Nasi","Sausage Tomato+Sauce+French Fries"};
	for (int mn=1; mn<=9; mn++){
		cout<<mn<<". "<<menu2[mn]<<"\t"<<harga2[mn]<<endl;
	}
}
void menu3(){
	string harga3[]={ " ", "\t\t\t15k","\t\t\t17,5k","\t\t\t15k","\t\t\t17k","\t\t\t6k","\t\t\t\t17,5k","\t\t\t17k","\t\t17,5k"};
	string menu3[]={" ","Es Kopi Santuy","Es Kopi Raspberry","Es Kopi Mocca","Pink Lemonade","Es teh Manis Santuy","Oreo cream","Pempek Santuy Jibeuh","Mie Setan teu santuy Sosis"};
	
	for (int mp=1; mp<=8; mp++){
		cout<<mp<<". "<<menu3[mp]<<"\t"<<harga3[mp]<<endl;
	}
}
void menu4(){
	string harga4[]={ " ", "\t\t\t32k","\t\t24k","\t\t26k","\t\t20k","\t20k","\t\t\t26k","\t\t\t20k","\t\t\t12k","\t\t\t\t8k","\t\t\t7k"};
	string menu4[]={" ","Bento","Nasi Beef Bowl","Nasi Ayam Penyet","Nasi Goreng Telor","Roti Bakar Coklat Keju","Cireng Rujak","Es manggo","Jeruk panas","Aqua","Nasi Putih"};

	for (int mq=1; mq<=10; mq++){
		cout<<mq<<". "<<menu4[mq]<<"\t"<<harga4[mq]<<endl;
	}
}
void menu5(){
	string harga5[]={ " ","\t\t\t17k","\t\t20k","\t\t\t10k","\t\t\t\t15k","\t\t\t12k","\t\t\t10k"};
	string menu5[]={" ","Mie Tek Tek Telur","Indomie Goreng Spesial","Indomie polos"," Roti Bakar"," Es Teh Tarik Susu"," Es Nutrisari"};

	for (int mr=1; mr<=6; mr++){
		cout<<mr<<". "<<menu5[mr]<<"\t"<<harga5[mr]<<endl;
	}
}
void menu6(){
	string harga6[]={ " ", "\t\t\t14k","\t\t\t15k","\t\t\t16k","\t\t\t15k","\t\t\t12k"};
	string menu6[]={" ","Geprek Original","Geprek Rica Rica","Geprek Sambal Matah","Kopi Chocolate","Vanilla Frape"};

	for (int ms=1; ms<=5; ms++){
		cout<<ms<<". "<<menu6[ms]<<"\t"<<harga6[ms]<<endl;
	}
}
void menu7(){
	string harga7 []={ " ", "\t\t\t15k","\t\t\t15k","\t\t\t15k","\t\t\t20k","\t\t\t18k","\t\t\t\t15k","\t\t\t\t15k","\t\t\t\t15k","\t\t\t\t15k","\t\t\t\t15k","\t\t\t15k","\t\t\t\t15k"};
	string menu7[]={" ","Mocat Alvocado","Alvocado Dalgona","Amazing Manooo","Cendol Durian","Vanilla Cookies","Boba Brown","Choco Lava","Goyobod","Matcha Latte","Berry Milk","Orange Milk Galaxy","Blue Ocean"};

	for (int mt=1; mt<=12; mt++){
		cout<<mt<<". "<<menu7[mt]<<"\t"<<harga7[mt]<<endl;
	}
}
void menu8(){
	string harga8 []={ " ", "\t\t\t\t29k","\t\t\t\t29k","\t\t\t\t29k","\t\t\t\t29k","\t\t\t\t35k","\t\t\t\t25k","\t\t\t32k","\t\t32k","\t\t\t28k","\t\t\t30k","\t\t30k","\t\t\t55k","\t\t\t65k","\t\t20k","\t\t\t35k","\t\t\t30k","\t\t35k","\t\t\t25k","\t\t28k","\t\t\t\t32k","\t\t\t38k"};
	string menu8[]={" ","Spicy Ramen","Soyu Ramen","Miso Ramen","Kare Ramen","Cheese Ramen","Katsudon","Beef Teriyaki Don","Chicken Mozarella Don","Chicken Teriyaki Don","Chicken Steak","Crispy Chicken Steak","Sirloin Steak","Tanderloin Steak","Spaghetti Bolognaise","Spaghetti Carbonara","Spaghetti Oriental","Spaghetti Cheese Fondue","Chicken Burger","Spicy Chicken Burger","Beef Burger","Pizza Burger"};

	for (int mu=1; mu<=21; mu++){
		cout<<mu<<". "<<menu8[mu]<<"\t"<<harga8[mu]<<endl;
	}
}
void menu9(){
	string harga9 []={ " ", "\t\t17k","\t\t17k","\t\t\t15k","\t\t\t20k","\t\t\t35k","\t\t\t45k","\t\t\t15k","\t\t\t18k","\t\t\t15k","\t\t18k","\t\t\t35k","\t\t\t35k","\t\t\t35k","\t\t\t35k","\t\t\t15k","\t\t\t15k","\t\t25k","\t\t20k","\t\t20k","\t\t\t15k","\t\t\t20k","\t\t\t18k","\t\t\t20k","\t\t25k","\t\t\t20k","\t\t\t20k","\t\t\t20k"};
	string menu9[]={" ","Indomie Goreng","Indomie Rebus","Nasi Putih","Nasi goreng","Pecel Ayam","Ayam Bakar","Ayam Geprek","Omelate","Roti Bakar","Pisang Bakar","Soto Ayam","Soto Babat","Soto Kikil","Soto Daging","Kopi Hitam","Kopi Susu","Kopi Susu Tubruk","Kopi Nescafe","Kopi Cappucino","Teh Manis","Teh Tubruk","Teh Tarik","Bandrek","Bandrek Susu","Susu Putih","Susu Coklat","Susu Jahe"};

	for (int mv=1; mv<=27; mv++){
		cout<<mv<<". "<<menu9[mv]<<"\t"<<harga9[mv]<<endl;
	}
}
void menu10(){
	string harga10[]={" ", "\t\t17k","\t\t25k","\t\t\t30k","\t\t\t5k","\t\t5k","\t\t40k","\t\t\t\t5k","\t\t\t10k","\t\t\t8k","\t\t\t10k","\t\t\t10k","\t\t\t8k"};
	string menu10[]={" ","Nasi Goreng biasa","Nasi Goreng Seafood","Bebek Bakar","Baso Bakar","Otak - Otak Bakar","Bebek Bakar+Nasi","Susu","Cappucino","Kopi HItam","Nescafe","Moccacino","Teh Manis"};

	for (int mx=1; mx<=12; mx++){
		cout<<mx<<". "<<menu10[mx]<<"\t"<<harga10[mx]<<endl;
	}
}
void menu11(){
	string menu11[]={" ", "Americano","Espresso","Macchiato","Latte","Cappuccino","Mocha","Tea","Mineral water","Chocolate","Lemon of Life","French fries","Coleslaw Salad","Mac and Cheese","Spaghetti","Chicken Wings","Tomato Soup","Burger","Chicken Wrap","Waffle and Egg","Avocado Toast","Pizza"};
	string harga11[]={" ","\t\t\t35k","\t\t\t30k","\t\t\t38k","\t\t\t40k","\t\t\t40k","\t\t\t45k","\t\t\t\t35k","\t\t16k","\t\t\t40k","\t\t50k","\t\t45k","\t\t45k","\t\t85k","\t\t\t70k","\t\t48k","\t\t\t35k","\t\t\t90k","\t\t70k","\t\t65k","\t\t60k","\t\t\t120k"
	};

	for(int my=1; my<=21; my++){
		cout<<my<<". "<<menu11[my]<<"\t"<<harga11[my]<<endl;
	}
}
void menu12(){
	string menu12[]={" ","Espresso","Americano","Tubruk","Macchiato","Piccolo","Cappuccino","Affogato","Mocha latte","Chocolate","Green tea","TC water","Lemon","Peach","Fresh milk","Sprite","Soy"};
	string harga12[]={" ","\t\t\t28k","\t\t\t33k","\t\t\t33k","\t\t\t33k","\t\t\t33k","\t\t\t42k","\t\t\t35k","\t\t\t48k","\t\t\t42k","\t\t\t42k","\t\t\t10k","\t\t\t32k","\t\t\t32k","\t\t\t20k","\t\t\t25k","\t\t\t\t33k"};

	for(int mz=1; mz<=16; mz++){
		cout<<mz<<". "<<menu12[mz]<<"\t"<<harga12[mz]<<endl;
	}
}
void menu13(){
	string menu13[]={" ","Affogato","Black coffee","Espresso","Cappuccino","Latte","Macchiato","Piccolo","Flat White","Cloud Mountain","Magic","Plain Croissant","Almond Croissant","Pain au Chocolate","Apple Pie","Chicken Pie","Beef pie","Eggtart Portugu","Bolu pandan","Canele","Carrot Cake","Choco Cheese Brownies","Lamington","Oatmeal Banana"};
	string harga13[]={" ","\t\t\t54k","\t\t\t43k","\t\t\t38k","\t\t\t44k","\t\t\t45k","\t\t\t43k","\t\t\t43k","\t\t\t46k","\t\t56k","\t\t\t44k","\t\t40k","\t\t42k","\t\t43k","\t\t\t46k","\t\t\t47k","\t\t\t47k","\t\t37k","\t\t\t42k","\t\t\t35k","\t\t\t46k","\t45k","\t\t\t45k","\t\t47k"};

	for(int na=1; na<=23; na++){
		cout<<na<<". "<<menu13[na]<<"\t"<<harga13[na]<<endl;
	}
}
void menu14(){
	string menu14[]={" ","Espresso","Americano","Cappuccino","Latte","Affogato","Kopi Maiko","Es Kopi Susu","Es Avocado Coffee","Lychee Tea","Mango Tea","Iced Tea","Chocolate","Soft Drink","Mineral Water","Corn Soup","French Fries","Brownies Ice Cream","Croissant Plain","Croissant Choco","Croissant Almond","Roti Bakar Susu Manis","Roti Bakar Coklat Keju","Roti Bakar Coklat Susu","Roti Bakar Nutella"};
	string harga14[]={" ","\t\t\t25k","\t\t\t33k","\t\t\t33k","\t\t\t33k","\t\t\t38k","\t\t\t45k","\t\t\t20k","\t\t23k","\t\t\t30k","\t\t\t30k","\t\t\t10k","\t\t\t35k","\t\t\t8k","\t\t8k","\t\t\t20k","\t\t25k","\t\t28k","\t\t20k","\t\t25k","\t\t25k","\t18k","\t25k","\t20k","\t\t22k"};

	for(int nb=1; nb<=24; nb++){
		cout<<nb<<". "<<menu14[nb]<<"\t"<<harga14[nb]<<endl;
	}
}
void menu15(){
	string menu15[]={" ","Americano","Mocha","Long Black","Cappuccino","Piccolo","Chocolate Smooth","Matcha Latte","Vegetable Drink","Iced Choco Banana","Es Kopi Susu Jadoel","Es Kopi Susu Pandan","Nasi Goreng Kampung","Mie Godok Jawa","Mie Goreng Tek Tek","Soto Banjar","Sop Buntut","Nasi Capcay Goreng","Spaghetti Bolognese","Spaghetti Tuna Pedas","Singkong Goreng Ubud","Kentang Goreng","Piramida Tofu","Nachos"};
	string harga15[]={" ","\t\t\t20k","\t\t\t27k","\t\t\t20k","\t\t\t23k","\t\t\t23k","\t\t23k","\t\t\t23k","\t\t25k","\t\t28k","\t\t23k","\t\t28k","\t\t38,5k","\t\t38,5k","\t\t38,5k","\t\t\t38,5k","\t\t\t65k","\t\t42,5k","\t\t38,5k","\t38,5k","\t28k","\t\t25k","\t\t28k","\t\t\t28k"};

	for(int nc=1; nc<24; nc++){
		cout<<nc<<". "<<menu15[nc]<<"\t"<<harga15[nc]<<endl;
	}
}
void menu16(){
	string menu16[]={" ","Espresso","Macchiato","Piccolo","Americano","Cappucino","Caramel Latte","Vanilla Latte","Chocolate","Vanila","Orange Juice","Mixed Juice","Kopi Susu","Cookies & Cream","Teh Susu","Pasta Carbonara","Tuna Salad","Rawon Buntut","Kampung Fried Rice","Ayam Sambel Ijo","Sop Iga","Roti Bakar","Singkong Goreng","Siomay","Pisang Goreng","French Fries"};
	string harga16[]={" ","\t\t\t23k","\t\t\t25k","\t\t\t29k","\t\t\t30k","\t\t\t38k","\t\t38k","\t\t42k","\t\t\t40k","\t\t\t40k","\t\t42k","\t\t\t42k","\t\t\t40k","\t\t53k","\t\t\t40k","\t\t55k","\t\t\t50k","\t\t59k","\t\t55k","\t\t59k","\t\t\t55k","\t\t\t22k","\t\t22k","\t\t\t35k","\t\t40k","\t\t35k"};

	for(int nd=1; nd<=25; nd++){
		cout<<nd<<". "<<menu16[nd]<<"\t"<<harga16[nd]<<endl;
	}
}
void menu17(){
	string menu17[]={" ","Espresso","Black Coffee","Mocha","Caramel Macchiato","Affogato","Ice Tea","Lychee Tea","Green Tea Latte","Chocolate","Mojito","Es Kopi Getuk","Cream Blue","Brownies"};
	string harga17[]={" ","\t\t\t23k","\t\t\t28k","\t\t\t35k","\t\t38k","\t\t\t35k","\t\t\t28k","\t\t\t33k","\t\t35k","\t\t\t35k","\t\t\t40k","\t\t85k","\t\t\t38k","\t\t\t50k"};

	for(int ne=1; ne<=13; ne++){
		cout<<ne<<". "<<menu17[ne]<<"\t"<<harga17[ne]<<endl;
	}
}
void menu18(){
	string menu18[]={" ","Espresso","Macchiato","Piccolo","Cappucino","Kopi Tarik","Affogato","Lemon Tea","Tea","Chocolate","Matcha Latte","Taro Latte","Milk","Mineral Water","Nasi Soto Betawi","Baso Kuah","Baso Goreng","Roti Bakar Keju","Apple Tart","Kentang Goreng"};
	string harga18[]={" ","\t\t\t29k","\t\t\t30k","\t\t\t33k","\t\t\t37k","\t\t\t37k","\t\t\t45k","\t\t\t29k","\t\t\t\t17k","\t\t\t33k","\t\t37k","\t\t\t33k","\t\t\t19k","\t\t11k","\t\t47k","\t\t\t40k","\t\t\t42k","\t\t26k","\t\t\t25k","\t\t42k"};

	for(int nf=1; nf<=19; nf++){
		cout<<nf<<". "<<menu18[nf]<<"\t"<<harga18[nf]<<endl;
	}
}
void menu19(){
	string menu19[]={" ","Espresso","Americano","Piccolo","Cappucino","Mocca","Vanilla Latte","Mocca Caramel","Hazelnut Latte","Chocolate","Tea","Lemon Tea","Nasi Goreng","Chicken Katsu Curry","Pasta Bolognese","Pisang Goreng","Kentang Goreng","Chicken Burrito"};
	string harga19[]={" ","\t\t\t18k","\t\t\t22k","\t\t\t25k","\t\t\t26k","\t\t\t27k","\t\t27k","\t\t29k","\t\t27k","\t\t\t26k","\t\t\t\t15k","\t\t\t18k","\t\t\t30k","\t\t38k","\t\t38k","\t\t20k","\t\t20k","\t\t33k"};

	for(int ng=1; ng<=17; ng++){
		cout<<ng<<". "<<menu19[ng]<<"\t"<<harga19[ng]<<endl;
	}
}
void menu20(){
	string menu20[]={" ","Espresso","Cappucino","Americano","Affogato","Iced Taro","Iced Thai Tea","Tea","Mineral Water","Banana Choco Toast Mozarella","Berry Creamy Toast","Egg Benedict Hakuna","Smoked Beef Simple Sandwich","Nasi Goreng Jambal Roti","Chicken Katsu Don"};
	string harga20[]={" ","\t\t\t15k","\t\t\t25k","\t\t\t20k","\t\t\t22k","\t\t\t25k","\t\t20k","\t\t\t\t8k","\t\t6k","\t33k","\t\t35k","\t\t35k","\t30k","\t35k","\t\t35k"};

	for(int nh=1; nh<=14; nh++){
		cout<<nh<<". "<<menu20[nh]<<"\t"<<harga20[nh]<<endl;
	}
}

//-------------------------------------------------------------------------------------


int akhir1(int akhir){
	printf("\n---------Silahkan Pilih---------\n(1) Cari Info Lagi\n(2) Keluar");
	cout<<"\nMasukan Pilihan = ";cin>>akhir;
		
	return akhir;
	}
int akhir2(int akhir3){
	printf("\n---------Silahkan Pilih---------\n(1) Home\n(2) Keluar");
	cout<<"\nMasukan Pilihan = ";cin>>akhir3;
		
	return akhir3;
	}

main (){


	cout<<endl<<sabar();
	z();
    cover();
	color(14);
	    
    int a,b,c,d,e,f;
    int pil, home, akhir, akhir3;


//================================================================================

    cout<<"#     DOMISILI     #"<<endl;
    cout<<"===================="<<endl;
    cout<<"\n1. Bogor\n2. Jakarta"<<endl;
    cout<<"\n\nMasukan Pilihan = ";cin>>a;
	z();
	if (a == 1){		// PIlihan Bogor dan Jakarta
		//Bogor doang
		cout<<loading(100);
		z();
		color(11);
		cover();
		cout<<"\n\t# Daftar Cafe #\t"<<endl;
		cout<<"\t----------------->"<<endl;
       	cout<<"\n\t1. Kedai Fiqri\n\t2. Dbozzfood Cafe\n\t3. Kopi Santuy\n\t4. Pelataran Griya\n\t5. Tampomas Miko\n\t6. Alamanda Cafe\n\t7. Cafe Mokat Pafesta\n\t8. Cafe Kopi Puncak\n\t9. Cafe Galau\n\t10. Cafe Baja"<<endl;
    	cout<<"\nMasukan Pilihan = ";cin>>b;
    	z();
    	if (b == 1){	//Kedai Fiqri
    			z();
				switch (detail(pil)){
    				case 1 :	cout<<loading(20);
    							z();
								printf("\n\t# Berikut Beberapa Informasi Yang Didapat #\n\t-------------------------------------------\n");
								cout<<"Lokasi\t\t= ";
								cout<<lokasi(1);
								cout<<"\nBuka\t\t= Setiap Hari\nJam\t\t= 11.00 - 23.00";
								cout<<"\nNomor Telp.\t= 0896-0702-4528"<<endl;
								cout<<"------------------------------------------------------------"<<endl;
								getch();
								
								switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}	
					break;
					case 2 :	cout<<loading(20);
								z();
								cout<<"+    Berikut Menu dan Harganya    +\n-----------------------------------"<<endl;
								menu1();
								switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}
					break;
					case 3 :	main();		
					break;
					default : cout<<"\nTerima Kasih atas Kunjungannya :v";
				}}
		if (b == 2){
				z();
				switch (detail(pil)){
    				case 1 :	cout<<loading(20);
    							z();
								printf("\n\t# Berikut Beberapa Informasi Yang Didapat #\n\t-------------------------------------------\n");
								cout<<"Lokasi\t\t= ";
								cout<<lokasi(2);
								cout<<"\nBuka\t\t= Setiap Hari\nJam\t\t= 08.00 - 21.00";
								cout<<"\nNomor Telp.\t= 0813-8905-8055"<<endl;
								cout<<"------------------------------------------------------------"<<endl;
								getch();
								
								switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}	
					break;
					case 2 :	cout<<loading(20);
								z();
								cout<<"+    Berikut Menu dan Harganya    +\n-----------------------------------"<<endl;
								menu2();
                                switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}
					break;
					case 3 :	main();		
					break;
                    default : cout<<"\nTerima Kasih atas Kunjungannya :v";
				}}
		if (b == 3){
				z();
				switch (detail(pil)){
    				case 1 :	cout<<loading(20);
    							z();
								printf("\n\t# Berikut Beberapa Informasi Yang Didapat #\n\t-------------------------------------------\n");
								cout<<"Lokasi\t\t= ";
								cout<<lokasi(3);
								cout<<"\nBuka\t\t= Setiap Hari\nJam\t\t= 08.00 - 21.00";
								cout<<"\nNomor Telp.\t= 0813-8905-8055"<<endl;
								cout<<"------------------------------------------------------------"<<endl;
								getch();
								
								switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}	
					break;
					case 2 :	cout<<loading(20);
								z();
								cout<<"+    Berikut Menu dan Harganya    +\n-----------------------------------"<<endl;
								menu3();
                                switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}
					break;
					case 3 :	main();		
					break;
                    default : cout<<"\nTerima Kasih atas Kunjungannya :v";
				}}
		if (b == 4){
				z();
				switch (detail(pil)){
    				case 1 :	cout<<loading(20);
    							z();
								printf("\n\t# Berikut Beberapa Informasi Yang Didapat #\n\t-------------------------------------------\n");
								cout<<"Lokasi\t\t= ";
								cout<<lokasi(4);
								cout<<"\nBuka\t\t= Setiap Hari Kecuali Rabu \nJam\t\t= 09.00 - 21.00 ";
								cout<<"\nNomor Telp.\t= 0857-1730-3957"<<endl;
								cout<<"------------------------------------------------------------"<<endl;
								getch();
								
								switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}	
					break;
					case 2 :	cout<<loading(20);
								z();
								cout<<"+    Berikut Menu dan Harganya    +\n-----------------------------------"<<endl;
								menu4();
                                switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}
					break;
					case 3 :	main();		
					break;
                    default : cout<<"\nTerima Kasih atas Kunjungannya :v";
				}}
		if (b == 5){
				z();
				switch (detail(pil)){
    				case 1 :	cout<<loading(20);
    							z();
								printf("\n\t# Berikut Beberapa Informasi Yang Didapat #\n\t-------------------------------------------\n");
								cout<<"Lokasi\t\t= ";
								cout<<lokasi(5);
								cout<<"\nBuka\t\t= Setiap Hari \nJam\t\t= 09.00 - 22.00 ";
								cout<<"\nNomor Telp.\t= 0811-1177-743"<<endl;
								cout<<"------------------------------------------------------------"<<endl;
								getch();
								
								switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}	
					break;
					case 2 :	cout<<loading(20);
								z();
								cout<<"+    Berikut Menu dan Harganya    +\n-----------------------------------"<<endl;
								menu5();
								getch();
                                switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}
								
					break;
					case 3 :	main();		
					break;
                    default : cout<<"\nTerima Kasih atas Kunjungannya :v";
				}}
		if (b == 6){
				z();
				switch (detail(pil)){
    				case 1 :	cout<<loading(20);
    							z();
								printf("\n\t# Berikut Beberapa Informasi Yang Didapat #\n\t-------------------------------------------\n");
								cout<<"Lokasi\t\t= ";
								cout<<lokasi(6);
								cout<<"\nBuka\t\t= Setiap Hari \nJam\t\t= 24 Jam ";
								cout<<"\nNomor Telp.\t= 0812-8284-3838"<<endl;
								cout<<"------------------------------------------------------------"<<endl;
								getch();
								
								switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}	
					break;
					case 2 :	cout<<loading(20);
								z();
								cout<<"+    Berikut Menu dan Harganya    +\n-----------------------------------"<<endl;
								menu6();
                                switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}
					break;
					case 3 :	main();		
					break;
                    default : cout<<"\nTerima Kasih atas Kunjungannya :v";
				}}
		if (b == 7){
				z();
				switch (detail(pil)){
    				case 1 :	cout<<loading(20);
    							z();
								printf("\n\t# Berikut Beberapa Informasi Yang Didapat #\n\t-------------------------------------------\n");
								cout<<"Lokasi\t\t= ";
								cout<<lokasi(7);
								cout<<"\nBuka\t\t= Setiap Hari \nJam\t\t= 10.00 - 22.00 ";
								cout<<"\nNomor Telp.\t= - "<<endl;
								cout<<"------------------------------------------------------------"<<endl;
								getch();
								
								switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}	
					break;
					case 2 :	cout<<loading(20);
								z();
								cout<<"+    Berikut Menu dan Harganya    +\n-----------------------------------"<<endl;
								menu7();
                                switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}
					break;
					case 3 :	main();		
					break;
                    default : cout<<"\nTerima Kasih atas Kunjungannya :v";
				}}
		if (b == 8){
				z();
				switch (detail(pil)){
    				case 1 :	cout<<loading(20);
    							z();
								printf("\n\t# Berikut Beberapa Informasi Yang Didapat #\n\t-------------------------------------------\n");
								cout<<"Lokasi\t\t= ";
								cout<<lokasi(8);
								cout<<"\nBuka\t\t= Setiap Hari \nJam\t\t= 08.00 - 22.00 ";
								cout<<"\nNomor Telp.\t= - "<<endl;
								cout<<"------------------------------------------------------------"<<endl;
								getch();
								
								switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}	
					break;
					case 2 :	cout<<loading(20);
								z();
								cout<<"+    Berikut Menu dan Harganya    +\n-----------------------------------"<<endl;
								menu8();
                                switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}
					break;
					case 3 :	main();		
					break;
                    default : cout<<"\nTerima Kasih atas Kunjungannya :v";
				}}
		if (b == 9){
				z();
				switch (detail(pil)){
    				case 1 :	cout<<loading(20);
    							z();
								printf("\n\t# Berikut Beberapa Informasi Yang Didapat #\n\t-------------------------------------------\n");
								cout<<"Lokasi\t\t= ";
								cout<<lokasi(9);
								cout<<"\nBuka\t\t= Setiap Hari Kecuali Senin \nJam\t\t= 11.00 - 21.00 ";
								cout<<"\nNomor Telp.\t= 0817-270-476"<<endl;
								cout<<"------------------------------------------------------------"<<endl;
								getch();
								
								switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}	
					break;
					case 2 :	cout<<loading(20);
								z();
								cout<<"+    Berikut Menu dan Harganya    +\n-----------------------------------"<<endl;
								menu9();
                                switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}
					break;
					case 3 :	main();		
					break;
                    default : cout<<"\nTerima Kasih atas Kunjungannya :v";
				}}
		if (b == 10){
				z();
				switch (detail(pil)){
    				case 1 :	cout<<loading(20);
    							z();
								printf("\n\t# Berikut Beberapa Informasi Yang Didapat #\n\t-------------------------------------------\n");
								cout<<"Lokasi\t\t= ";
								cout<<lokasi(10);
								cout<<"\nBuka\t\t= Setiap Hari \nJam\t\t= 24 Jam ";
								cout<<"\nNomor Telp.\t= 0813-8048-8405"<<endl;
								cout<<"------------------------------------------------------------"<<endl;
								getch();
								
								switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}	
					break;
					case 2 :	cout<<loading(20);
								z();
								cout<<"+    Berikut Menu dan Harganya    +\n-----------------------------------"<<endl;
								menu10();
                                switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}
					break;
					case 3 :	main();		
					break;
                    default : cout<<"\nTerima Kasih atas Kunjungannya :v";
				}}
		}
	if (a == 2){
		cout<<loading(100);
		z();
		color(11);
		cover();
		cout<<"\n\t# Daftar Cafe #\t"<<endl;
		cout<<"\t----------------->"<<endl;
       	cout<<"\n\t1. Watt Coffe\n\t2. Tanamera Coffee\n\t3. Giyanti Coffee Roastery\n\t4. Maiko Cafe\n\t5. Atap Rumah Cafe\n\t6. Anomali Coffee\n\t7. Trafique Coffee\n\t8. Saudagar Kopi\n\t9. 404 Eatery\n\t10. Hakuna Matata Cafe"<<endl;
    	cout<<"\nMasukan Pilihan = ";cin>>e;
    	z();
    	if (e == 1){
    			z();
				switch (detail(pil)){
    				case 1 :	cout<<loading(20);
    							z();
								printf("\n\t# Berikut Beberapa Informasi Yang Didapat #\n\t-------------------------------------------\n");
								cout<<"Lokasi\t\t= ";
								cout<<lokasi(11);
								cout<<"\nBuka\t\t= Setiap Hari \nJam\t\t= 08.00 - 21.00";
								cout<<"\nNomor Telp.\t= 0878-8111-1413"<<endl;
								cout<<"------------------------------------------------------------"<<endl;
								getch();
								
								switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}	
					break;
					case 2 :	cout<<loading(20);
								z();
								cout<<"+    Berikut Menu dan Harganya    +\n-----------------------------------"<<endl;
								menu11();
								switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}
					break;
					case 3 :	main();		
					break;
					default : cout<<"\nTerima Kasih atas Kunjungannya :v";
				}}
		if (e == 2){
				z();
				switch (detail(pil)){
    				case 1 :	cout<<loading(20);
    							z();
								printf("\n\t# Berikut Beberapa Informasi Yang Didapat #\n\t-------------------------------------------\n");
								cout<<"Lokasi\t\t= ";
								cout<<lokasi(12);
								cout<<"\nBuka\t\t= Setiap Hari \nJam\t\t= 07.00 - 21.30";
								cout<<"\nNomor Telp.\t= 0812-8793-8835"<<endl;
								cout<<"------------------------------------------------------------"<<endl;
								getch();
								
								switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}	
					break;
					case 2 :	cout<<loading(20);
								z();
								cout<<"+    Berikut Menu dan Harganya    +\n-----------------------------------"<<endl;
								menu12();
                                switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}
					break;
					case 3 :	main();		
					break;
                    default : cout<<"\nTerima Kasih atas Kunjungannya :v";
				}}
		if (e == 3){
				z();
				switch (detail(pil)){
    				case 1 :	cout<<loading(20);
    							z();
								printf("\n\t# Berikut Beberapa Informasi Yang Didapat #\n\t-------------------------------------------\n");
								cout<<"Lokasi\t\t= ";
								cout<<lokasi(13);
								cout<<"\nBuka\t\t= Selasa - Sabtu \nJam\t\t= 09.30 - 17.30";
								cout<<"\nNomor Telp.\t= (021) 31923698"<<endl;
								cout<<"------------------------------------------------------------"<<endl;
								getch();
								
								switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}	
					break;
					case 2 :	cout<<loading(20);
								z();
								cout<<"+    Berikut Menu dan Harganya    +\n-----------------------------------"<<endl;
								menu13();
                                switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}
					break;
					case 3 :	main();		
					break;
                    default : cout<<"\nTerima Kasih atas Kunjungannya :v";
				}}
		if (e == 4){
				z();
				switch (detail(pil)){
    				case 1 :	cout<<loading(20);
    							z();
								printf("\n\t# Berikut Beberapa Informasi Yang Didapat #\n\t-------------------------------------------\n");
								cout<<"Lokasi\t\t= ";
								cout<<lokasi(14);
								cout<<"\nBuka\t\t= Setiap Hari \nJam\t\t= 08.00 - 20.00 ";
								cout<<"\nNomor Telp.\t= (021) 29414596"<<endl;
								cout<<"------------------------------------------------------------"<<endl;
								getch();
								
								switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}	
					break;
					case 2 :	cout<<loading(20);
								z();
								cout<<"+    Berikut Menu dan Harganya    +\n-----------------------------------"<<endl;
								menu14();
                                switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}
					break;
					case 3 :	main();		
					break;
                    default : cout<<"\nTerima Kasih atas Kunjungannya :v";
				}}
		if (e == 5){
				z();
				switch (detail(pil)){
    				case 1 :	cout<<loading(20);
    							z();
								printf("\n\t# Berikut Beberapa Informasi Yang Didapat #\n\t-------------------------------------------\n");
								cout<<"Lokasi\t\t= ";
								cout<<lokasi(15);
								cout<<"\nBuka\t\t= Setiap Hari \nJam\t\t= 09.00 - 21.00 ";
								cout<<"\nNomor Telp.\t= (021) 25981666"<<endl;
								cout<<"------------------------------------------------------------"<<endl;
								getch();
								
								switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}	
					break;
					case 2 :	cout<<loading(20);
								z();
								cout<<"+    Berikut Menu dan Harganya    +\n-----------------------------------"<<endl;
								menu15();
								getch();
                                switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}
					break;
					case 3 :	main();		
					break;
                    default : cout<<"\nTerima Kasih atas Kunjungannya :v";
				}}
		if (e == 6){
				z();
				switch (detail(pil)){
    				case 1 :	cout<<loading(20);
    							z();
								printf("\n\t# Berikut Beberapa Informasi Yang Didapat #\n\t-------------------------------------------\n");
								cout<<"Lokasi\t\t= ";
								cout<<lokasi(16);
								cout<<"\nBuka\t\t= Setiap Hari \nJam\t\t= 07.00 - 22.00 ";
								cout<<"\nNomor Telp.\t= (021) 3106370"<<endl;
								cout<<"------------------------------------------------------------"<<endl;
								getch();
								
								switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}	
					break;
					case 2 :	cout<<loading(20);
								z();
								cout<<"+    Berikut Menu dan Harganya    +\n-----------------------------------"<<endl;
								menu16();
                                switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}
					break;
					case 3 :	main();		
					break;
                    default : cout<<"\nTerima Kasih atas Kunjungannya :v";
				}}
		if (e == 7){
				z();
				switch (detail(pil)){
    				case 1 :	cout<<loading(20);
    							z();
								printf("\n\t# Berikut Beberapa Informasi Yang Didapat #\n\t-------------------------------------------\n");
								cout<<"Lokasi\t\t= ";
								cout<<lokasi(17);
								cout<<"\nBuka\t\t= Setiap Hari \nJam\t\t= 12.00 - 19.00 ";
								cout<<"\nNomor Telp.\t= 0877-0364-7189"<<endl;
								cout<<"------------------------------------------------------------"<<endl;
								getch();
								
								switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}	
					break;
					case 2 :	cout<<loading(20);
								z();
								cout<<"+    Berikut Menu dan Harganya    +\n-----------------------------------"<<endl;
								menu17();
                                switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}
					break;
					case 3 :	main();		
					break;
                    default : cout<<"\nTerima Kasih atas Kunjungannya :v";
				}}
		if (e == 8){
				z();
				switch (detail(pil)){
    				case 1 :	cout<<loading(20);
    							z();
								printf("\n\t# Berikut Beberapa Informasi Yang Didapat #\n\t-------------------------------------------\n");
								cout<<"Lokasi\t\t= ";
								cout<<lokasi(18);
								cout<<"\nBuka\t\t= Setiap Hari \nJam\t\t= 07.00 - 22.00 ";
								cout<<"\nNomor Telp.\t= (021) 3143270"<<endl;
								cout<<"------------------------------------------------------------"<<endl;
								getch();
								
								switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}	
					break;
					case 2 :	cout<<loading(20);
								z();
								cout<<"+    Berikut Menu dan Harganya    +\n-----------------------------------"<<endl;
								menu18();
                                switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}
					break;
					case 3 :	main();		
					break;
                    default : cout<<"\nTerima Kasih atas Kunjungannya :v";
				}}
		if (e == 9){
				z();
				switch (detail(pil)){
    				case 1 :	cout<<loading(20);
    							z();
								printf("\n\t# Berikut Beberapa Informasi Yang Didapat #\n\t-------------------------------------------\n");
								cout<<"Lokasi\t\t= ";
								cout<<lokasi(19);
								cout<<"\nBuka\t\t= Setiap Hari \nJam\t\t= 13.00 - 21.00 ";
								cout<<"\nNomor Telp.\t= 0857-1540-9966"<<endl;
								cout<<"------------------------------------------------------------"<<endl;
								getch();
								
								switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}	
					break;
					case 2 :	cout<<loading(20);
								z();
								cout<<"+    Berikut Menu dan Harganya    +\n-----------------------------------"<<endl;
								menu19();
                                switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}
					break;
					case 3 :	main();		
					break;
                    default : cout<<"\nTerima Kasih atas Kunjungannya :v"<<endl;
				}}
		if (e == 10){
				z();
				switch (detail(pil)){
    				case 1 :	cout<<loading(20);
    							z();
								printf("\n\t# Berikut Beberapa Informasi Yang Didapat #\n\t-------------------------------------------\n");
								cout<<"Lokasi\t\t= ";
								cout<<lokasi(20);
								cout<<"\nBuka\t\t= Setiap Hari \nJam\t\t= 11.00 - 22.00 ";
								cout<<"\nNomor Telp.\t= 0821-2345-6219"<<endl;
								cout<<"------------------------------------------------------------"<<endl;
								getch();
								
								switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}	
					break;
					case 2 :	cout<<loading(20);
								z();
								cout<<"+    Berikut Menu dan Harganya    +\n-----------------------------------"<<endl;
								menu20();
                                switch (akhir1(akhir)){
										case 1 : cout<<endl<<endl;main();
										break;
									
										default : printf("\nTerima Kasih atas Kunjungannya :v");
								}
					break;
					case 3 :	main();		
					break;
                    default : cout<<"\nTerima Kasih atas Kunjungannya :v";
				}}
	}	
   		else {
   			cout<<" "<<endl;
   			cout<<loading(20);
   			z();
   			switch (akhir2(akhir3)){
										case 1 : cout<<endl<<endl;main();
										break;
										
										default : printf("\nTerima Kasih Telah Berkunjung");
								}
		}
	
getch();
}
