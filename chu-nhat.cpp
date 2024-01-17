#include <iostream>
using namespace std;
class Chu_Nhat
{
 protected:
 float dai, rong;
 public:
 Chu_Nhat(float d = 0, float r=0)
 {dai = d; rong = r; }
 float Dien_tich() 
 {return dai*rong;}
};
class Vuong : public Chu_Nhat
{
 public:
 Vuong(float size)
 { dai = rong = size; };
};
main()
{
 Chu_Nhat cn(7,4);
 Vuong v(8); 
 cout << “D.tich HCN= "<< cn.Dien_tich();
 cout<<"\nD.tich HV= "<<v.Dien_tich();
}

