#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

struct element
{
    int an;
    string name;
    float am;
    string s;
};

int main()
{
 element E[119];

 E[1].an=1;
 E[1].name="hydrogen";
 E[1].am=1.0079;
 E[1].s="H";

 E[2].an=2;
 E[2].name="helium";
 E[2].am=4.0025;
 E[2].s="He";

 E[3].an=3;
 E[3].name="lithium";
 E[3].am=6.941;
 E[3].s="Li";

 E[4].an=4;
 E[4].name="berillium";
 E[4].am=9.102;
 E[4].s="Be";

 E[5].an=5;
 E[5].name="boron";
 E[5].am=10.811;
 E[5].s="B";

 E[6].an=6;
 E[6].name="carbon";
 E[6].am=12.011;
 E[6].s="C";

 E[7].an=7;
 E[7].name="nitrogen";
 E[7].am=14.007;
 E[7].s="N";

 E[8].an=8;
 E[8].name="oxygen";
 E[8].am=15.999;
 E[8].s="0";

 E[9].an=9;
 E[9].name="fluorine";
 E[9].am=18.998;
 E[9].s="F";

 E[10].an=10;
 E[10].name="neon";
 E[10].am=20.18;
 E[10].s="Ne";

 E[11].an=11;
 E[11].name="sodium";
 E[11].am=22.990;
 E[11].s="Na";

 E[12].an=12;
 E[12].name="magnesium";
 E[12].am=24.305;
 E[12].s="Mg";

 E[13].an=13;
 E[13].name="aluminium";
 E[13].am=26.982;
 E[13].s="Al";

 E[14].an=14;
 E[14].name="silicon";
 E[14].am=28.086;
 E[14].s="Si";

 E[15].an=15;
 E[15].name="phosphorus";
 E[15].am=30.974;
 E[15].s="P";

 E[16].an=16;
 E[16].name="sulphur";
 E[16].am=32.066;
 E[16].s="S";

 E[17].an=17;
 E[17].name="chlorine";
 E[17].am=35.453;
 E[17].s="Cl";

 E[18].an=18;
 E[18].name="potassium";
 E[18].am=39.098;
 E[18].s="K";

 E[19].an=19;
 E[19].name="potassium";
 E[19].am=39.098;
 E[19].s="K";

 E[20].an=20;
 E[20].name="calcium";
 E[20].am=40.078;
 E[20].s="Ca";

 E[21].an=21;
 E[21].name="scandium";
 E[21].am=44.956;
 E[21].s="Sc";

 E[22].an=22;
 E[22].name="titanium";
 E[22].am=47.88;
 E[22].s="Ti";

 E[23].an=23;
 E[23].name="vanadium";
 E[23].am=50.942;
 E[23].s="V";

 E[24].an=24;
 E[24].name="chromium";
 E[24].am=51.996;
 E[24].s="Cr";

 E[25].an=25;
 E[25].name="manganese";
 E[25].am=54.983;
 E[25].s="Mn";
 
 E[26].an=26;
 E[26].name="iron";
 E[26].am=55.845;
 E[26].s="Fe";

 E[27].an=27;
 E[27].name="cobalt";
 E[27].am=58.933;
 E[27].s="Co";

 E[28].an=28;
 E[28].name="nickel";
 E[28].am=58.933;
 E[28].s="Cu";

 E[29].an=29;
 E[29].name="copper";
 E[29].am=63.546;
 E[29].s="Cu";

 E[30].an=30;
 E[30].name="zinc";
 E[30].am=65.39;
 E[30].s="Zn";

 E[31].an=31;
 E[31].name="gallium";
 E[31].am=69.723;
 E[31].s="Ga";

 E[32].an=32;
 E[32].name="germanium";
 E[32].am=72.61;
 E[32].s="Ge";

 E[33].an=33;
 E[33].name="arsenic";
 E[33].am=74.922;
 E[33].s="As";

 E[34].an=34;
 E[34].name="selenium";
 E[34].am=78.96;
 E[34].s="Se";

 E[35].an=35;
 E[35].name="bromine";
 E[35].am=79.904;
 E[35].s="Br";

 E[36].an=36;
 E[36].name="krypton";
 E[36].am=83.80;
 E[36].s="Kr";

 E[37].an=37;
 E[37].name="rubidium";
 E[37].am=85.468;
 E[37].s="Rb";

 E[38].an=38;
 E[38].name="strontium";
 E[38].am=87.62;
 E[38].s="Sr";

 E[39].an=39;
 E[39].name="ytterium";
 E[39].am=88.906;
 E[39].s="Y";

 E[40].an=40;
 E[40].name="zirconium";
 E[40].am=91.224;
 E[40].s="Zr";

 E[41].an=41;
 E[41].name="niobium";
 E[41].am=92.906;
 E[41].s="Nb";

 E[42].an=42;
 E[42].name="molybdenum";
 E[42].am=95.94;
 E[42].s="Mo";

 E[43].an=43;
 E[43].name="technetium";
 E[43].am=98    ;
 E[43].s="Tc";

 E[44].an=44;
 E[44].name="ruthenium";
 E[44].am=101.07;
 E[44].s="Ru";

 E[45].an=45;
 E[45].name="Rhodium";
 E[45].am=102.905;
 E[45].s="Rh";

 E[46].an=46;
 E[46].name="palladium";
 E[46].am=106.42;
 E[46].s="Pd";

 E[47].an=47;
 E[47].name="silver";
 E[47].am=107.87;
 E[47].s="Ag";

 E[48].an=48;
 E[48].name="cadmium";
 E[48].am=112.41;
 E[48].s="Cd";

 E[49].an=49;
 E[49].name="indium";
 E[49].am=114.82;
 E[49].s="In";

 E[50].an=50;
 E[50].name="tin";
 E[50].am=118.71;
 E[50].s="Sn";

 E[51].an=51;
 E[51].name="antimony";
 E[51].am=121.76;
 E[51].s="Sb";

 E[52].an=52;
 E[52].name="tellurium";
 E[52].am=127.60;
 E[52].s="Te";

 E[53].an=53;
 E[53].name="iodine";
 E[53].am=126.90;
 E[53].s="I";

 E[54].an=54;
 E[54].name="xenon";
 E[54].am=131.29;
 E[54].s="Xe";

 E[55].an=55;
 E[55].name="Caesium";
 E[55].am=132.905;
 E[55].s="Cs";

 E[56].an=56;
 E[56].name="barium";
 E[56].am=137.33;
 E[56].s="Ba";

 E[57].an=57;
 E[57].name="lanthanum";
 E[57].am=138.91;
 E[57].s="La";

 E[58].an=58;
 E[58].name="cerium";
 E[58].am=140.12;
 E[58].s="Ce";

 E[59].an=59;
 E[59].name="praseodymium";
 E[59].am=140.91;
 E[59].s="Pr";

 E[60].an=60;
 E[60].name="neodymium";
 E[60].am=144.24;
 E[60].s="Nd";

 E[61].an=61;
 E[61].name="promethium";
 E[61].am=144.24;
 E[61].s="Pm";

 E[62].an=62;
 E[62].name="samarium";
 E[62].am=150.36;
 E[62].s="Sm";

 E[63].an=63;
 E[63].name="europium";
 E[63].am=151.96;
 E[63].s="Eu";

 E[64].an=64;
 E[64].name="gadolinium";
 E[64].am=157.25;
 E[64].s="Gd";

 E[65].an=65;
 E[65].name="terbium";
 E[65].am=158.93;
 E[65].s="Tb";

 E[66].an=66;
 E[66].name="dysprosium";
 E[66].am=162.50;
 E[66].s="Dy";

 E[67].an=67;
 E[67].name="holmium";
 E[67].am=164.93;
 E[67].s="Ho";

 E[68].an=68;
 E[68].name="erbium";
 E[68].am=167.26;
 E[68].s="Er";

 E[69].an=69;
 E[69].name="thulium";
 E[69].am=168.93;
 E[69].s="Tm";

 E[70].an=70;
 E[70].name="ytterbium";
 E[70].am=173.04;
 E[70].s="Yb";

 E[71].an=71;
 E[71].name="lutetium";
 E[71].am=174.97;
 E[71].s="Lu";

 E[72].an=72;
 E[72].name="hafnium";
 E[72].am=178.49;
 E[72].s="Hf";

 E[73].an=73;
 E[73].name="tantalum";
 E[73].am=180.95;
 E[73].s="Ta";

 E[74].an=74;
 E[74].name="tungsten";
 E[74].am=183.84;
 E[74].s="W";

 E[75].an=75;
 E[75].name="rhenium";
 E[75].am=186.21;
 E[75].s="Re";

 E[76].an=76;
 E[76].name="osmium";
 E[76].am=190.23;
 E[76].s="Os";

 E[77].an=77;
 E[77].name="iridium";
 E[77].am=192.217;
 E[77].s="Ir";

 E[78].an=78;
 E[78].name="platinum";
 E[78].am=195.08;
 E[78].s="Pt";

 E[79].an=79;
 E[79].name="gold";
 E[79].am=196.97;
 E[79].s="Au";

 E[80].an=80;
 E[80].name="mercury";
 E[80].am=200.59;
 E[80].s="Hg";

 E[81].an=81;
 E[81].name="thallium";
 E[81].am=204.38;
 E[81].s="Tl";

 E[82].an=82;
 E[82].name="lead";
 E[82].am=207.19;
 E[82].s="Pb";

 E[83].an=83;
 E[83].name="bismuth";
 E[83].am=208.98;
 E[83].s="Bi";

 E[84].an=84;
 E[84].name="polonium";
 E[84].am=209.98;
 E[84].s="Po";

 E[85].an=85;
 E[85].name="astatine";
 E[85].am=209.99;
 E[85].s="At";

 E[86].an=86;
 E[86].name="radon";
 E[86].am=222.02;
 E[86].s="Rn";

 E[87].an=87;
 E[87].name="francium";
 E[87].am=223.02;
 E[87].s="Fr";

 E[88].an=88;
 E[88].name="radium";
 E[88].am=226.03;
 E[88].s="Ra";

 E[89].an=89;
 E[89].name="actinium";
 E[89].am=227;
 E[89].s="Ac";

 E[90].an=90;
 E[90].name="thorium";
 E[90].am=232.04;
 E[90].s="Th";

 E[91].an=91;
 E[91].name="protactinium";
 E[91].am=231.04;
 E[91].s="Pa";

 E[92].an=92;
 E[92].name="uranium";
 E[92].am=238.03;
 E[92].s="U";

 E[93].an=93;
 E[93].name="neptunium";
 E[93].am=237.05;
 E[93].s="Np";

 E[94].an=94;
 E[94].name="plutonium";
 E[94].am=244.06;
 E[94].s="Pu";

 E[95].an=95;
 E[95].name="americium";
 E[95].am=243.06;
 E[95].s="Am";

 E[96].an=96;
 E[96].name="curium";
 E[96].am=247.07;
 E[96].s="Cm";

 E[97].an=97;
 E[97].name="berkelium";
 E[97].am=247.07;
 E[97].s="Bk";

 E[98].an=98;
 E[98].name="californium";
 E[98].am=251.08;
 E[98].s="Cf";

 E[99].an=99;
 E[99].name="einsteinium";
 E[99].am=252.08;
 E[99].s="Es";

 E[100].an=100;
 E[100].name="fermium";
 E[100].am=257.18;
 E[100].s="Fm";

 E[101].an=101;
 E[101].name="mendelevium";
 E[101].am=258.10;
 E[101].s="Md";

 E[102].an=102;
 E[102].name="nobelium";
 E[102].am=259.10;
 E[102].s="No";

 E[103].an=103;
 E[103].name="lawrencium";
 E[103].am=262.11;
 E[103].s="Lr";

 E[104].an=104;
 E[104].name="rutherfordium";
 E[104].am=267;
 E[104].s="Rf";

 E[105].an=105;
 E[105].name="dubnium";
 E[105].am=268;
 E[105].s="Db";

 E[106].an=106;
 E[106].name="seaborgium";
 E[106].am=269;
 E[106].s="Sg";

 E[107].an=107;
 E[107].name="bohrium";
 E[107].am=270;
 E[107].s="Bh";

 E[108].an=108;
 E[108].name="hassium";
 E[108].am=277;
 E[108].s="Hs";

 E[109].an=109;
 E[109].name="meitnerium";
 E[109].am=278;
 E[109].s="Mt";

 E[110].an=110;
 E[110].name="darmstadtium";
 E[110].am=281;
 E[110].s="Ds";

 E[111].an=111;
 E[111].name="roentgenium";
 E[111].am=282;
 E[111].s="Rg";

 E[112].an=112;
 E[112].name="copernicium";
 E[112].am=282;
 E[112].s="Cn";

 E[113].an=113;
 E[113].name="nihonium";
 E[113].am=286;
 E[113].s="Nh";

 E[114].an=114;
 E[114].name="flerovium";
 E[114].am=289;
 E[114].s="Fl";

 E[115].an=115;
 E[115].name="moscovium";
 E[115].am=290;
 E[115].s="Mc";

 E[116].an=116;
 E[116].name="livermorium";
 E[116].am=293;
 E[116].s="Lv";

 E[117].an=117;
 E[117].name="tennessine";
 E[117].am=294;
 E[117].s="Ts";

 E[118].an=118;
 E[118].name="oganesson";
 E[118].am=294;
 E[118].s="Og";

 string again;

 do 
 {


 int choice;
 cout<<"Choose :-"<<endl;
 cout<<"Atomic number - 1"<<endl;
 cout<<"Name - 2"<<endl;
 cout<<"Symbol - 3"<<endl;
 cin>>choice;

 if(choice==1)
 {  
    int a;
    cout<<"Enter the atomic number : ";
    cin>>a;

    cout<<"Name : "<<E[a].name<<endl;
    cout<<"Atomic mass : "<<E[a].am<<endl; 
    cout<<"Symbol : "<<E[a].s<<endl;
    
 }

 else if(choice==2)
 {
     string n;
     cout<<"Enter the name of element (Lower case only): ";
     cin>>n;

    int x=0;
    for(int i=1; i<=118; i++)
    {
       if(E[i].name==n)
       {
           cout<<"Atomic number : "<<E[i].an<<endl;
           cout<<"Atomic mass : "<<E[i].am<<endl;
           cout<<"Symbol : "<<E[i].s<<endl;
           x=1;
       }
    } 
    if(x==0)
    {
        cout<<"The entered name may be wrong! check it plzz"<<endl;
    } 
    
 }
  else if(choice==3)
  {
      string symbol;
      cout<<"Enter the symbol : ";
      cin>>symbol;
      int y=0;
      for(int j=1; j<=118; j++)
      {
          if(E[j].s==symbol)
          {
              cout<<"Name : "<<E[j].name<<endl;
              cout<<"Atomic number : "<<E[j].an<<endl;
              cout<<"Atomic mass : "<<E[j].am<<endl;
              y=1;
          }

          
      }
      if(y==0)
          {
              cout<<"The entered symbol may be wrong!"<<endl;
          }
  }  
  else
  {
    cout<<"Select a valid option!"<<endl;
  }
  getch();

  cout<<"Would you like to run the program again?"<<endl;
  cout<<"yes - y"<<endl;
  cout<<"no - n"<<endl;
  cin>>again;

 }while(again=="y");

 cout<<"Thank you for using! (Press any key to close window)";
 getch();
 }
 
