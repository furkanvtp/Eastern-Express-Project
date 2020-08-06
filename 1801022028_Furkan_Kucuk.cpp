#include<iostream>
using namespace std;

class bilet{
	private:
		string isim;
		string soyisim;
		string cinsiyet;
		int yas;
		int koltuk;
		int vagon[4][2]={{0,0},{0,0},{0,0},{0,0}};
		int son_fiyat;
		
	
	public:	
			
	   	 int ankara=0;
		 int irmak=52;
		 int kayseri=247;
		 int sivas=402;
		 int erzincan=595;
		 int erzurum=745;
		 int kars=952;
        
    bilet(string name,string surname,string gender,int age) {
    	isim=name;
    	soyisim=surname;
    	cinsiyet=gender;
    	yas=age;
   	}
	//~bilet(){}  
		   
	 int biletturu_sec(){
	    	
	    	int secim;
	    	cout<<"Bilet turunu seciniz:"<<endl<<endl;
	    	cout<<"1.Normal"<<endl;
	    	cout<<"2.Yemekli"<<endl;
	    	cout<<"3.Business"<<endl;
	    	cin>>secim;
	    	
	    	return secim;
	    	
		}		
	 int acik_arttirma(){
	 int dizi[5],temp;
	 cout<<"Musteriler tekliflerini girsin:"<<endl;
        for(int i=0;i<=5;i++){
              cin>>dizi[i];
			  }
        for(int a=0;a<=5;a++){
         for(int b=0;b<=5;b++){
           if(dizi[b]>dizi[b+1]){
                temp=dizi[b];
                dizi[b]=dizi[b+1];
                dizi[b+1]=temp;
				}
			}
		}
		cout<<"Kazanan Musteri Teklifleri:"<<endl;
        for(int d=5;d>=3;d--){
           cout<<dizi[d]<<endl;
		   }
	 }	 
	 void veri_gir(){														//kullanıcı verisi alınıyor
	    	
			cout<<"\n\nAdiniz : "<<endl;
			cin>>isim;
			cout<<"Soyadiniz :"<<endl;
			cin>>soyisim;
			cout<<"Cinsiyetiniz :"<<endl;
			cin>>cinsiyet;
			cout<<"Yasiniz :"<<endl;
			cin>>yas;
	
		}
	 int kalkis_yer(){														//kalkıs yeri secimi
			
			int kalkis;
			
			cout<<"0.Ankara"<<endl;
			cout<<"1.Irmak"<<endl;
			cout<<"2.Kayseri"<<endl;
			cout<<"3.Sivas"<<endl;
			cout<<"4.Erzincan"<<endl;
			cout<<"5.Erzurum"<<endl;
			cout<<"6.Kars"<<endl;
			
			cin>>kalkis;
			
			return kalkis;
		}
	 int varis_yer(){														//varış yeri secimi
		
			int varis;	
			cout<<"0.Ankara"<<endl;
			cout<<"1.Irmak"<<endl;
			cout<<"2.Kayseri"<<endl;
			cout<<"3.Sivas"<<endl;
			cout<<"4.Erzincan"<<endl;
			cout<<"5.Erzurum"<<endl;
			cout<<"6.Kars"<<endl;
			
			cin>>varis;
			
			return varis;
		}
	 void guzergah(int a,int b){											//guzergah bılgısı
	    		int i;
	    		cout<<"Guzergahiniz: ";
	    		for(i=a ; i<=b ; i++){
	    			if(i==0)
	    				cout<<" Ankara ";
	    			else if(i==1)
	    				cout<<"-> Irmak ";
	    			else if(i==2)
	    				cout<<"-> Kayseri ";
	    			else if(i==3)
	    				cout<<"-> Sivas ";
	    			else if(i==4)
	    				cout<<" -> Erzincan ";
	    			else if(i==5)
	    				cout<<" -> Erzurum ";
	    			else if(i==6)
	    				cout<<" -> Kars ";
				}
		}
	 int seyahat_suresi(int a, int b){										//iki il arası dakika farkını hesaplayan ve onu return eden fonksiyon
	    	int m,h,sum;
	    	sum=b-a;
	    
			return sum;
		}
	 void saat_ve_dakika(int sum){											//dakika farkını parametre olarak alıp seyahat süresini dk vs saat olarak ayarlayan fonksiyon
			
			int m,h;
			
			m=sum%60;		
			h=sum/60;
	    	
			cout<<"\n\nSeyahat sureniz : "<< h <<" saat "<<m<<" dakikadir. "<<endl;
		}
	 int getYas(){															//indirim için privatetaki yaşa bilgisine ulasıyor
	    	return yas;
		}
	 int atama(int b){														//kalkıs/varis yeri fonksiyonlarından return edilen sayı degerlerini şehirele atıyor.
			if(b==0){
				return ankara;
			}
			else if (b==1){
				return irmak;
			}
			else if(b==2){
				return kayseri;
			}
			else if(b==3){
				return sivas;
			}
			else if(b==4){
				return erzincan;
			}
			else if(b==5){
				return erzurum;
			}
			else if(b==6);
				return kars;
		}
	 void vagon_goruntule(){												//önce boş atamadan sonra da dolu koltuğu  gösteren fonksiyon
    for(int i=0;i<4;i++){
      for (int j=0;j<2;j++){
          
          if ((j%2)==0){
             cout << "\n   |  ";}
          
          if (vagon[i][j]==0){
             cout << (i*2)+(j+1) << "  |  ";
          }
          else if(vagon[i][j]==1){
          		cout << "X  |  ";
				  }
             }
    	}
	}
 	 void koltuk_sec(int koltuk){											//vagon arrayine seçilen koltuğu atayan fonksiyon
  	 if (koltuk<=2){
      if(vagon[0][koltuk-1]==0){
        cout<<"Yeriniz:"<<koltuk<< endl;
         vagon[0][koltuk-1]=1;
      }
      else{
         cout << "\nAlmak istediginiz koltuk doludur.\n"; 
      }
   }
     else if (koltuk<=4){
      if(vagon[1][koltuk-3]==0){
         cout<< "Yeriniz:"<<koltuk<< endl;
         vagon[1][koltuk-3]=1;
      }
      else{
         cout << "\nAlmak istediginiz koltuk doludur.\n"; 
      }
   }
    else if (koltuk<=6){
      if(vagon[2][koltuk-5]==0){
         cout<< "Yeriniz:"<<koltuk<< endl;
         vagon[2][koltuk-5]=1;
      }
      else{
         cout << "\nAlmak istediginiz koltuk doludur.\n"; 
      }
   }
    else if (koltuk<=8){
      if(vagon[3][koltuk-7]==0){
         cout<< "Yeriniz:"<<koltuk<< endl;
         vagon[3][koltuk-7]=1;
      }
      else{
         cout << "\nAlmak istediginiz koltuk doludur.\n"; 
      		}
   		}
  	}
  	 int fiyat(int sure){													//iki il arasındaki dakika farkına bakarak normal vagonun normal yolcusunun fiyatını hesap. fonks.
		int fiyat;
		son_fiyat=sure*0.08;
		return son_fiyat;
		}
	 void genc_indirim(int fiyat){											//fiyat donksiyonunu parametre olarak alıp genç indirimi uygulayan fonksiyon
			int yeniFiyat;
			 yeniFiyat=fiyat*0.7;
			 son_fiyat=yeniFiyat;
			 cout<<"Indirimli Genc Bilet Fiyati ="<<son_fiyat<<"TL'dir"<<endl;
			}	
	 void yasli_indirim(int fiyat){											//fiyat donksiyonunu parametre olarak alıp yaşlı indirimi uygulayan fonksiyon
			int yeniFiyat;
			 yeniFiyat=fiyat*0.55;
			 son_fiyat=yeniFiyat;
			 cout<<"Indirimli Yasli Bilet Fiyati ="<<son_fiyat<<"TL'dir"<<endl;
		}		
	/* bilet operator+(const bilet& k){
	 	
	 	bilet musteri;
	 	musteri.son_fiyat = this->son_fiyat+k.son_fiyat;
	 	return musteri;
		
	}*/
	 };
	 
int main(){
	string isim,soyisim,cinsiyet;
	int a,b,c,yas;															//a=bilet türünü atama için gerekli değişken //b ve c= musteriden alınan değerin hangi şehir olduğunu belirten değer
	int yemekliVagonFiyat;												
	int koltuk;										

	cout<<"        * H O S G E L D I N I Z *      "<<endl;

	bilet musteri1(isim,soyisim,cinsiyet,yas);														//nesne olusturuldu.
	for(int i=1;i<9;i++){
	a=musteri1.biletturu_sec();

	cout<<"Kalkis yeri seciniz:"<<endl;									
	b=musteri1.kalkis_yer();											//kalkıs yeri secildi.
	
	cout<<"Varis yeri seciniz:"<<endl;
	c=musteri1.varis_yer();												//varis yeri secildi.

																		
	
	musteri1.guzergah(b,c);
	musteri1.saat_ve_dakika(musteri1.seyahat_suresi(musteri1.atama(b),musteri1.atama(c)));
	cout<<endl<<endl;

	
	
	if(a==1){																											//normal vagon işlemleri
	
		
		musteri1.vagon_goruntule();																						//vagon görüntülenir.
		cout<<"\nKoltuk secimi yapiniz:"<<endl;
		cin>>koltuk;								
		musteri1.koltuk_sec(koltuk);																					//girilen parametre vagon arrayine atanır
		musteri1.vagon_goruntule();																						//yeni vagon görüntüsü basılır.
		musteri1.veri_gir();																							//musteri verileri girilir
	
				if(musteri1.getYas()<=24){			
						musteri1.genc_indirim(musteri1.fiyat(musteri1.seyahat_suresi(musteri1.atama(b),musteri1.atama(c))));}		//genç indirimi uygula
				else if (musteri1.getYas()>=65){
						musteri1.yasli_indirim(musteri1.fiyat(musteri1.seyahat_suresi(musteri1.atama(b),musteri1.atama(c))));}		//yaşlı indirimi uygula
				else{
						cout<<"Fiyat: "<<musteri1.fiyat(musteri1.seyahat_suresi(musteri1.atama(b),musteri1.atama(c)))<<"TL'dir."<<endl;}	//indirim yok
		
	}
	else if(a==2){																										//yemekli vagon işlemleri
		musteri1.vagon_goruntule();																						//vagon görüntülenir.
		cout<<"\nKoltuk secimi yapiniz:"<<endl;		
		cin>>koltuk;
		musteri1.koltuk_sec(koltuk);																					//girilen parametre vagon arrayine atanır
		musteri1.vagon_goruntule();																						//yeni vagon görüntüsü basılır.
		musteri1.veri_gir();																							//musteri verileri girilir
		
		yemekliVagonFiyat=(musteri1.fiyat(musteri1.seyahat_suresi(musteri1.atama(b),musteri1.atama(c))))*2;				//normal fiyat*2
		
				if(musteri1.getYas()<=24){																							
						musteri1.genc_indirim(yemekliVagonFiyat);}														//genç indirimi uygula
				else if (musteri1.getYas()>=65){
						musteri1.yasli_indirim(yemekliVagonFiyat);}														//yaşlı indirimi uygula
				else{
						cout<<"Bilet Fiyati: "<<yemekliVagonFiyat<<"TL'dir."<<endl;}								    //indirim yok 
	}
	else if(a==3){
	musteri1.acik_arttirma();
		for(int a=1;a<4;a++){
			cout<<a<<". kazanan musteri verileri";
			musteri1.veri_gir();
		}
																											//business vagon işlemleri
	}
	else{
		cout<<"Hatali Giris"<<endl;
	}
}	


	//delete *must;
	return 0;
}
