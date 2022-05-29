#include <iostream>		// input & output, system
#include <fstream>		// operator file (.txt)
#include <Windows.h>	// Sleep & //standard library buat tipe data HANDLE, fungsi GetStdHandle dan prosedur SetConsoleTextAtrribute
#include <conio.h>		// getch;
#include <stdio.h>		// textcolor
#include <time.h>		// waktu

using namespace std;

/* TOSERBA (Tool Serba Guna)

	Materi yang digunakan dalam tool adalah :
	1. Fungsi 			[ DONE ]
	2. Struct 			[ DONE ]
	3. Pointer 			[ DONE ]
	4. Array 			[ DONE ]
	5. Stack     		[ DONE ]
	6. Sorting 			[ DONE ] 
	
*/

struct variabel{		//struct
	int a,bb,c,d;
	char nama;
	string b;
};
string pilih;
int num=0,jml=0,jump=0,jmlah,total=0,harga[100],jumlah[100],
	harga1[6] = {4000, 5000, 7000, 10000, 3000, 9000};


variabel pilih1;
void gotoxy();		//buat posisi output
void setcolor();	//buat mewarnai text
void border();		//hiasan login page
void login();		//login akses diawal program
void loading2();	//loading awal program
void tampilan();	//awalan
void Masuk();		//program 1 
void tampil();		//nampilin hasil belanja ke oprator file
void loading();		//loading di profile
void profile();		//data dev
void thnks();		//tampilan tengkyu
void credits();		//akhiran program

    //-----------------------------------------------------------------

	int main (){		//PROGRAM UTAMA
    border();
    login();
    Masuk();

	}
	
    //-----------------------------------------------------------------

	void waktu(){
		
	}
	
    void gotoxy(int x, int y){
        HANDLE kiri;
        COORD kanan;
        cout.flush();
        kanan.X = x;
        kanan.Y = y;
        kiri = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleCursorPosition(kiri,kanan);
    }

    void setcolor(unsigned short color)		//
    {
    HANDLE rendy = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(rendy,color);
    }

	void tampilan(){
		system("color A");
        system("cls");
        for(int i=0;i<15; i++){       
	    cout << "\t\t\t>_<";
        Sleep(100);
        system("cls");
        }
        
        cout<<endl;
		cout<<"+====================================================+\n"
			<<"|                       TOSERBA                      |\n"
            <<"|                   Tool Serba Guna                  |\n"
            <<"|                       (c)2022                      |\n"	
			<<"+====================================================+\n"
			<<"|                  PROGRAM TERSEDIA                  |\n"
            <<"|----------------------------------------------------|\n"
			<<"| 1 > Supermarket Billing                            |\n"
			<<"| 2 > Profile                                        |\n"
			<<"| 3 > Print [Jika sudah membeli]                     |\n"
			<<"| 4 > Exit                                           |\n"
			<<"#====================================================#\n"
            <<"\nMasukan Pilihan > ";
			
		cin>>pilih1.a;
		switch(pilih1.a){
			case 1 :
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n									        \"	\n\n"
				 		"							    KALAU ORANG LAIN BISA, KENAPA HARUS SAYA		\n\n"
				 		"										\"										\n";
				getch();
                Masuk();
				break;
			case 2 :
				profile();
				break;
			case 3 :
				// ifstream ngulang("pembelian.txt");
				system("START /MIN NOTEPAD /P pembelian.txt");
				tampilan();
				break;
            case 4 :
                credits();
                break;
			default :
				system("cls");
				cout<<" \n\nInput Yang Benar!!! \n";
				getch();
                tampilan();
		}
	}
	
	void loading(){
		for (int a=0; a<100; a++){
		cout<<"Loading...[ "<<a<<"% ]";
        if(a<3)
		{Sleep(1000);}
		if(a < 90)
		{Sleep(0);}
		if(a>95)
		{Sleep(1000);}
		system("cls"); 
		}
	}
	
	void profile(){
		system("cls");
        loading();
        string nama1[]={"Rendi\t[ 065121163 ] ","Latief\t[ 065121170 ]","Niko\t[ 065121167 ]","Fahdin\t[ 065121154 ]","Adam\t[ 065121169 ]","Wildan\t[ 065121156 ]"};
		int bt=sizeof(nama1)/sizeof(*nama1);
		string pelampiasan;
		
		for (int a=1; a<bt; a++){
			for(int b=0; b<bt-1; b++){
				if(nama1[b] > nama1[b+1]){
					pelampiasan = nama1[b];		
					nama1[b]=nama1[b+1];
					nama1[b+1]=pelampiasan;
				}			
			}
		}
		cout<<"\aProfil Personil Grup : "<<endl <<endl;
		for(int x=0; x<bt; x++){
		cout<<nama1[x]<<"  "<<endl;
	    }
        cout << "\n\n\nENTER!";
		getch();
        system("cls");
        tampilan();
	}

    void loading2(){
        system("color 3");
        for(int x=73; x<105; x++){  // garis atas
            gotoxy(x, 19);
            cout<<char(205);
        }
        for(int y=73; y<105; y++){  //bwah
            gotoxy(y, 21);
            cout<<char(205);
        }
        for(int z=19; z<21; z++){   //kiri
            gotoxy(73, z);      //x = kolom y=baris
            cout<<char(186);
            if(z!=10)
            gotoxy(73, 19); 
            cout<<char(201);
            if(z>10)
            gotoxy(73, 21);
            cout<<char(200);
        }
        for(int v=19; v<21; v++){
            gotoxy(104, v);
            cout<<char(186);
            if(v!=10)
            gotoxy(104,19);
            cout<<char(187);
            if(v>10)
            gotoxy(104, 21);
            cout<<char(188);
        }
        gotoxy(65,20);
		cout<<"Loading";
		
		gotoxy(74,20);
        for(int b=0; b<30; b++){
            printf("%c",176);
        }
		gotoxy(74,20);
        for(int a=0; a<30; a++){
            printf("%c",178);
            Sleep(50);
        }       

        cout<<"\a";
        cout<<endl;
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
            <<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t";
        printf("Tekan untuk lanjut..");getch();
        system("cls");
        system("cls");
    	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n									             \"	\n\n"
			 	"							          JANGAN MENGULANGI KESALAHAN YANG SAMA			\n"
			 	"									           karena								\n"
			 	"							          MASIH BANYAK KESALAHAN-KESALAHAN LAIN			\n"
			 	"									     YANG HARUS DICOBA							\n\n"
			 	"										     \"										\n";
        getch();
        tampilan();
    }

    void login(){
        int pas=0,use=0,pilihan;
        string nama,us, ps;
        char username,password,pass[100],user[100];
        
        gotoxy(70,19);			// kordinatnya ke tengahin
        cout<<" Username : ";
        
        for(use=0;use<19;){					//
        username=getch();
        if((username>='a'&&username<='z')||(username>='A'&&username<='Z')||( username>='0'&&username<='9')){
        	user[use]=username;
        	++use;
        	cout<<username;
		}
		if((username=='\b' && use>=1) || (use == 18)){	// username=='\b' -> buat BACKSPACE, use==18 -> batas inputan nya sampai 18 kata
			cout << "\b \b"; // \b ke1 u/ cursor, \b ke2 u/ fungsi(backspace)
			--use;
		}
		if(username=='\r'){					// \r -> simbol ENTER, simbol \0 = NULL jdi inputan ke array nya di stop
			user[use]='\0';					
			break;							// berhentiin looping nya terus next ke statment berikutnya
		}
    	}
        
        gotoxy(70,20);			// kordinatnya ke tengahin
        cout<<" Password : ";
    	
    for(pas=0;pas<19;){					//password dijadiin simbol
        password=getch();
        if((password>='a'&&password<='z')||(password>='A'&&password<='Z')||(password>='0'&&password<='9')) // Syarat Inputan nya 
        {
            pass[pas]=password;
            ++pas;
            cout<<char(3);
        }
        if(pas==18){
        	cout << "\b \b";
        	--pas;
		}
        if(password=='\b' && pas>=1)	// arti \b = backspace    // DELETE
        {
            cout<<"\b \b";		// \b1 = fungsi  \b2 = cursor
            --pas;
        }
        if(password=='\r')				//  \r = ENTER
        {
            pass[pas]='\0';		// NULL / \0 = gk ada nilai		
            break;				// next
        }

    }	
        ifstream log("dataAdmin.txt");		//buka file
        while(log>>us>>ps) 					// perulangan
        {
            if(us==user && ps==pass) 
            {
            	nama = "RENDY NURUL SAPUTRA";
				pilihan=1;	
                system("cls");
            }
        }
        log.close();
        if(pilihan==1)		// Jika benar/jika pilihan =1
        {
			system("cls");
			gotoxy(70,20);
            cout<<"WELCOME "<<nama;
			gotoxy(76,21);
			cout<<"<LOGIN SUKSES>\n";
			gotoxy(70,22);
			for(int a=0; a<26; a++){
			cout << ".";
			if (a>11)
			Sleep(50);	
			else
			Sleep(200);
			}
			system("cls");
            loading2();
        }
        else
        {
        	system("cls");
        	gotoxy(75,20);
            cout<<"LOGIN SALAH!";
            gotoxy(75,21);
			cout<<"MOHON ULANGI";
			for(int a=0; a<3; a++){
			cout<<".";
			Sleep(500);	
			}
            system("cls");
            main();
        }
    }

    
void border(){
    float z = 75.5;
    system("color D");	// tidak bisa di kombinasiin
    gotoxy(z, 15);
    cout << "L O G I N   P A G E";
    // BORDER PINGGIRAN BUKAN ORANG PINGGIRAN DI TRANS7
    for(int i=1; i<=165; i++){   //top border na
        gotoxy(i,2);
        cout<<char(223);
    }
    for(int i=2; i<=38; i++){   //left
        gotoxy(1,i);
        cout<<char(223);
    }
    for(int k=1; k<=165; k++){   //bottom
        gotoxy(k,39);
        cout<<char(223);
    }
    for(int l=38; l>=2; l--){   //right
        gotoxy(165,l);
        cout<<char(223);
    }
    for(int x=70; x<100; x++){  // garis atas
        gotoxy(x, 17);
        cout<<char(205);
    }
    for(int y=70; y<100; y++){  //bwah
        gotoxy(y, 22);
        cout<<char(205);
    }
    
    //  DALEMAN BORDER BUKAN DALEMAN ORANG :v
    for(int z=18; z<23; z++){   // PIPA kiri	
        gotoxy(69, z);      // x = kolom y=baris
        cout<<char(186);
        if(z==18){			// berarti nilai z yg terbaru bernilai 18 Z = 18
        gotoxy(69, 17); 	// atas 
        cout<<char(201);
		}
		if(z!=18){			// bawah
		gotoxy(69, 22);
        cout<<char(200);
		}	
    }
    for(int v=18; v<23; v++){	// PIPA kanan
        gotoxy(100, v);
        cout<<char(186);
        if(v!=10)		// atas
        gotoxy(100,17);
        cout<<char(187);
        if(v>10)		//bawah
        gotoxy(100, 22);
        cout<<char(188);
    }
}
void ulang(){
        cout << "TERIMA KASIH!!!!!!!!!!!";
		getch();
    } 

void Masuk(){
  do{
  int xx,yy;

	system("cls");
	for (int a=0; a<20; a++){
      if (xx=1){
        gotoxy(1+a,1);
        cout<<">";
	  Sleep(50);
      }
      if(a>1){
        gotoxy(0+a,1);
        cout<<"-";
		Sleep(50);
      }
  }
  system("cls");
  cout << endl;
  cout	<< "#=============================================#\n"
  		<< "| \t\t TOSERBA SHOP		      |\n"
		<< "|=============================================|\n"
		<< "|No.| Daftar Produk\t\t ||   Harga   |\n"
		<< "|---|-----------------------------------------|\n"
		<< "| 1 | Aqia		\t || Rp. 4000  | \n" 
		<< "|---|----------------------------||-----------| \n"
		<< "| 2 | Fenta		\t || Rp. 5000  | \n"
		<< "|---|----------------------------||-----------| \n" 
		<< "| 3 | Pecari		\t || Rp. 7000  | \n" 
		<< "|---|----------------------------||-----------| \n"
		<< "| 4 | Chops		\t || Rp. 10000 | \n" 
		<< "|---|----------------------------||-----------| \n"
		<< "| 5 | Waper		\t || Rp. 3000  | \n"
		<< "|---|----------------------------||-----------| \n"
		<< "| 6 | Comory		\t || Rp. 9000  | \n"
		<< "+=============================================+\n"
		<< "[ 7 ] Kembali                                 |\n"
		<< "|---------------------------------------------|\n"
		<< "[ 8 ] Exit                                    |\n"
		<< "#---------------------------------------------#\n";
	
  
  cout << "Masukan No. Pesanan : ";
  while(!(cin >> num)){			// perulangan jika memasukan string/bukan nomor bakal looping terus
	cout << "\nINPUT ANGKA BUKAN HURUF! \nMasukan No. Pesanan : ";
	cin.clear();
	cin.ignore(100,'\n');		// 100 = batas huruf nya, jika melebihi 100 huruf maka tidak akan bisa input tpi bakal ditampilin cout nya aja
}								// \n = jika inputan nya salah atau benar nanti bisa lanjut/ next,. JIKA DIHILANGIN BAKAL STAK DI getch() tanpa batas;
  if (num == 0){
        cout << "\n\nZONK!!!";
        getch();
        Masuk();
  }

  if (num<7){
        cout <<endl;
        cout << "Belinya berapa? ";
        cin >> jmlah;
  }
  if (num>8){
        cout << "\n\nInput yang bener!!";
        getch();
        Masuk();
  }
  if (num==7){
        tampilan();
  }
  if (num==8){
		thnks();
        ngulang_sampai_pingsan:
        goto ngulang_sampai_pingsan;
  }
  
  
  jml += 1; // jumlah = jumlah + 1 == 0 + 1 = 1
  jump +=1;
  harga[jml] = num;		// price [1] = num
  jumlah[jump] = jmlah;
  cout << "Mohon tunggu";
  for(int a=0; a<5; a++){
	  cout<<".";
	  Sleep(100);
  }system("cls");
  
  if (num>0 && num<7){
  	cout << "Pesanan Sudah ditulis!";
  	Sleep(2000);
//   }else{
//   	cout << "MASUKAN INPUTAN YANG BENER!!!"<<endl;
//   	Sleep(1500);
  }
  
  cout << endl << endl;
  cout << "APAKAH MAU PESEN LAGI? (y/t) : ";
  cin >> pilih;
  }while(pilih =="y");

  tampil();
//	system("START /MIN NOTEPAD keranjang.txt");
}

void tampil(){				
system("cls");
	char ii;
	time_t waktunya;
	time (&waktunya);
	string wib = ctime(&waktunya);
	
	ofstream beli;
	beli.open("pembelian.txt");
	
	cout<<endl;
    
    beli<<"--------------------------------------\n"
		<<"            LIST BELANJAAN\n"
        <<"            TOSERBA SHOP\n"
		<<"--------------------------------------\n"
		<<"              "<<wib;
	
	Sleep(150);
	cout << "============================================\n"
			"------------| STRUK PEMBELIAN |-------------\n"
			"============================================\n";
	
	for (int i = jml; i>0; i--)
  {

	if ( harga[i]==1 ){
		beli << "\nNo. Produk		= [ 1 ] \n"
			 << "Nama Produk		= Aqia \n"
			 << "Harga Satuan		= Rp. 4.000 \n"
			 << "Jumlah Pembelian	= "<<jumlah[i]<<" Biji \n"
			 << "--------------------------------------\n";
			 total += harga1[0]*jumlah[i];
	}
	else if( harga[i]==2 ){
		beli << "\nNo. Produk		= [ 2 ] \n"
			 << "Nama Produk		= Fenta  \n"
			 << "Harga Satuan		= Rp. 5.000 \n"
			 << "Jumlah Pembelian	= "<<jumlah[i]<<" Biji \n"
			 << "--------------------------------------\n";
			 total += harga1[1]*jumlah[i];
	}else if( harga[i]==3 ){
		beli << "\nNo. Produk		= [ 3 ] \n"
			 << "Nama Produk		= Pecari \n"
			 << "Harga Satuan		= Rp. 7.000 \n"
			 << "Jumlah Pembelian	= "<<jumlah[i]<<" Biji \n"
			 << "--------------------------------------\n";
			 total += harga1[2]*jumlah[i];
	}else if( harga[i]==4 ){
		beli << "\nNo. Produk		= [ 4 ] \n"
			 << "Nama Produk		= Chips  \n"
			 << "Harga Satuan		= Rp. 10.000 \n"
			 << "Jumlah Pembelian	= "<<jumlah[i]<<" Biji \n"
			 << "--------------------------------------\n";
			 total += harga1[3]*jumlah[i];
	}else if( harga[i]==5 ){
		beli << "\nNo. Produk		= [ 5 ] \n"
			 << "Nama Produk		= Wafer  \n"
			 << "Harga Satuan		= Rp. 3.000 \n"
			 << "Jumlah Pembelian	= "<<jumlah[i]<<" Biji \n"
			 << "--------------------------------------\n";
			 total += harga1[4]*jumlah[i];
	}else if( harga[i]==6 ){
		beli << "\nNo. Produk		= [ 6 ] \n"
			 << "Nama Produk		= Comory  \n"
			 << "Harga Satuan		= Rp. 9.000 \n"
			 << "Jumlah Pembelian	= "<<jumlah[i]<<" Biji \n"
			 << "--------------------------------------\n";
			 total += harga1[5]*jumlah[i];
	}
	
}	
	  
beli <<"\n--------------------------------------"
	  <<"\nTOTAL HARGA		= "<<total;
 bisa :
 Sleep(100);
 cout << "Apakah mau diprint asli? (y/t) ";
 cin >> ii;
 if (ii=='y'){
	cout << "TEKAN ENTER!!";
	getch();
	system("cls");
	cout << "\nPrinting";
	for (int a=0; a<5; a++){
		cout <<".";
		Sleep(600);
	}

	ifstream buka ("pembelian.txt");
	system("START /MIN NOTEPAD /P pembelian.txt");
 }else{
	 cout << "KEMBALI KE HOME!!!";
	 getch();
	 system("cls");
	 tampilan();
}
}

void thnks(){
    int x,y;
    system("cls");
    //T
	
	for (int a=0; a<10; a++){	
		setcolor(4);
		gotoxy(a,0);
		cout<<"#";
		Sleep(100);
	}
	
	for (int a=0; a<6; a++){	
		gotoxy(4, a+1);
		cout<<"#";
		Sleep(100);
		if(a>1)
		setcolor(7);
	}
	//H
	setcolor(4);
	for(int a=0; a<7; a++){		
		gotoxy(12, a);
		cout<<"#";
		Sleep(100);
		if(a>2)
		setcolor(7);
	}
	setcolor(4);
	for(int a=13; a<18; a++){	
		gotoxy(a,3);
		cout<<"#";
		Sleep(100);
	}
	setcolor(4);
	for(int a=0; a<7; a++){	
		gotoxy(18,a);
		cout<<"#";
		Sleep(100);
		if(a>2)
		setcolor(7);	
	}
	// A
	setcolor(7);
	for(int a=0; a<7; a++){    
		gotoxy(21,6-a);
    	cout<<"#";
    	Sleep(100);
		if(a>1)
		setcolor(4);	
	}
	setcolor(4);
	for(int a=0; a<6; a++){    
		gotoxy(22+a,0);
    	cout<<"#";
    	Sleep(100);	
	}
	setcolor(4);
	for(int a=0; a<7; a++){
		gotoxy(27,0+a);
    	cout<<"#";
    	Sleep(100);
		if(a>2)
		setcolor(7);	
	}
	setcolor(4);
	for(int a=0; a<6; a++){
		gotoxy(21+a,3);
    	cout<<"#";
    	Sleep(100);	
	}  
	//N
	setcolor(4);
	for (int a=0; a<7; a++){
  		gotoxy(30,a);
  		cout<<"#";
  		Sleep(100);
		if(a>2)
		setcolor(7);
	}
	setcolor(4);
	for (int a=0; a<7; a++){
		setcolor(4);
		gotoxy(x,y);
		if (y=1){
  		x=31;
  		gotoxy(x,y);
  		cout<<"#";
		Sleep(100);
		
  }
  if (y=2){
		x=32;
		gotoxy(x,y);
		cout<<"#";
		Sleep(10);
		setcolor(4);
  }
  if (y=3){
		x=33;
		gotoxy(x,y);
		cout<<"#";
		Sleep(10);
		setcolor(7);
  }
  if (y=4){
		x=34;
		gotoxy(x,y);
		cout<<"#";
		Sleep(10);
		setcolor(7);
  }
  if (y=5){
		x=35;
		gotoxy(x,y);
		cout<<"#";
		Sleep(10);
		setcolor(7);
		}
  if (y=6){
		x=36;
		gotoxy(x,y);
		cout<<"#";
		Sleep(10);
		setcolor(7);
		}
}
setcolor(4);
for (int a=0; a<7; a++){
		gotoxy(36,a);
		cout<<"#";
		Sleep(10);
		if(a>2)
		setcolor(7);
}
// K
setcolor(4);
    for (int a=0; a<7; a++){
      gotoxy(39,a);
      cout<<"#";
	  Sleep(100);
	  if(a>2)
	  setcolor(7);
    }
    for (int a=0; a<6; a++){
      gotoxy(x,y);
      setcolor(4);
	  if(y=1){
        gotoxy(40,3);
        cout<<" #";
      }}
      if(y=2){
        gotoxy(41,2);
        cout<<" #";
		Sleep(100);
      }
      if(y=3){
        gotoxy(42,1);
        cout<<" #";
		Sleep(100);
      }
      if(y=4){
        gotoxy(43,0);
        cout<<" #";
		Sleep(100);
      }
    //   //-------------
    setcolor(7);  
	  if(y=2){
        gotoxy(42,4);
        cout<<"#";
		Sleep(100);
      }
      if(y=3){
        gotoxy(43,5);
        cout<<"#";
		Sleep(100);
      }
      if(y=4){
        gotoxy(44,6);
        cout<<"#";
		Sleep(100);
      }
//S
setcolor(4);
  for (int a=0; a<7; a++){
      gotoxy(53-a,0);
      cout<<"#";
      Sleep(100);
    }
	setcolor(4);  
    for(int a=0; a<3; a++){
      gotoxy(47,1+a);
      cout<<"#";
	  Sleep(100);
    }
	setcolor(4);
    for (int a=0; a<7; a++){
      gotoxy(47+a,3);
      cout<<"#";
	  Sleep(100);
    }
    for (int a=3; a<6; a++){
      gotoxy(53,a);
      cout<<"#";
	  Sleep(100);
	  if(a>0)
	  setcolor(7);
    }
    for(int a=0; a<7; a++){
      gotoxy(53-a,6);
      cout<<"#";
	  Sleep(100);
    }
	
}

void credits(){
    int x,y;
    string yy;
    for(int a=0; a<30; a++){
		gotoxy(x,y);
		gotoxy(70,29-a);
		// cout << "          TOSERBA          \n            2022           \n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n        Developed by       \n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\nNiko Sukma Dewanto			\nMoch. Fahdin				\nRendy Nurul Saputra		\nAdam Zakaria				\nWildan Abdillah			\n"
		cout << "          TOSERBA          \n";
		gotoxy(70,30-a);
		cout	 << "            2022           \n";
		gotoxy(70,31-a);
		cout	 << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
		gotoxy(70,32-a);
		cout	 << "        Developed by       \n";
		gotoxy(70,33-a);
		cout	 << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
		gotoxy(70,34-a);
		cout	 << "Niko Sukma Dewanto			\n";
		gotoxy(70,35-a);
		cout	 << "Moch. Fahdin				\n";
		gotoxy(70,36-a);
		cout	 << "Rendy Nurul Saputra		\n";
		gotoxy(70,37-a);
		cout	 << "Adam Zakaria				\n";
		gotoxy(70,38-a);
		cout	 << "Latief Ali Firdaus			\n";
		gotoxy(70,39-a);
		cout	 << "Wildan Abdillah			\n";
		gotoxy(70,40-a);
		cout	 << "- - - - - - - - - - - - - -\n";
		gotoxy(70,41-a);
		cout	 << "         Thanks To         \n";
		gotoxy(70,42-a);
		cout	 << "- - - - - - - - - - - - - -\n";
		gotoxy(70,43-a);
		cout	 << "         ALLAH SWT         \n";
		gotoxy(70,44-a);
		cout	 << "      ASPRAK ALGORITMA     \n";
		gotoxy(70,45-a);
		cout	 << "    Support From Friends   \n";
		gotoxy(70,46-a);
		cout	 << "+++++++++++++++++++++++++++\n";
		if (x==0 && y==0){
		gotoxy(x,y);
		cout<<""<<endl;
		}
    	system("cls");
		Sleep(200);
	}
    cout << "BACK TO HOME OR EXIT ? \n"
         << "Input : ";
    cin >> yy;
    if ( yy == "home" || yy == "Home" || yy == "HOME" || yy == "h"){
		tampilan();
	}
    
    else{
        thnks();
		ngulang_terus_sampai_lebaran_onta:
		system("exit");
		goto ngulang_terus_sampai_lebaran_onta;
    }
    

}
