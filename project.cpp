#include<graphics.h>
#include<bits/stdc++.h>
using namespace std;
void graphics();
void reaction();
void compound();
int main()
{
    initwindow(1400,700);
    int gd=DETECT,gm;
    int x1,y1,x2,y2,i,j,k,x,y;
    setcolor(YELLOW);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
    outtextxy(300,300,"Loading");
    delay(1000);
    cleardevice();
    graphics();
    reaction();
    compound();
    getch();
    return 0;
}
void graphics ()
{
    int x1,y1,x2,y2,i,j,k,x,y;
    setfillstyle(SOLID_FILL,9);
    bar(1,1,1400,700);
    setfillstyle(SOLID_FILL,RED);
    bar(30,80,75,540);
    for(x1=30,y1=146,x2=75,y2=146; y1<=540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,GREEN);
    bar(75,146,125,540);
    for(x1=75,y1=146,x2=125,y2=146; y1<=540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,BLUE);
    bar(125,278,175,540);
    for(x1=125,y1=344,x2=175,y2=344; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,YELLOW);
    bar(175,278,225,540);
    for(x1=175,y1=344,x2=225,y2=344; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,8);
    bar(225,278,275,540);
    for(x1=225,y1=344,x2=275,y2=344; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,10);
    bar(275,278,325,540);
    for(x1=275,y1=344,x2=325,y2=344; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,2);
    bar(325,278,375,540);
    for(x1=325,y1=344,x2=375,y2=344; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,7);
    bar(375,278,425,540);
    for(x1=375,y1=344,x2=425,y2=344; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,6);
    bar(425,278,475,540);
    for(x1=425,y1=344,x2=475,y2=344; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,5);
    bar(475,278,525,540);
    for(x1=475,y1=344,x2=525,y2=344; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,4);
    bar(525,278,575,540);
    for(x1=525,y1=344,x2=575,y2=344; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,3);
    bar(575,278,625,540);
    for(x1=575,y1=344,x2=625,y2=344; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,12);
    bar(625,148,675,540);
    for(x1=625,y1=212,x2=675,y2=212; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,11);
    bar(675,148,725,540);
    for(x1=675,y1=212,x2=725,y2=212; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,13);
    bar(725,148,775,540);
    for(x1=725,y1=212,x2=775,y2=212; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,14);
    bar(775,148,825,540);
    for(x1=775,y1=212,x2=825,y2=212; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,6);
    bar(825,148,875,540);
    for(x1=825,y1=212,x2=875,y2=212; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,4);
    bar(875,80,925,540);
    for(x1=875,y1=80,x2=925,y2=80; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
     setcolor(BLUE);
    outtextxy(35,85,"H");
     setcolor(RED);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(35,150,"Li");
    outtextxy(35,215,"Na");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
    outtextxy(35,285,"K");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(35,350,"Rb");
    outtextxy(35,415,"Cs");
    outtextxy(35,485,"Fr");
    outtextxy(80,153,"Be");
    outtextxy(80,218,"Mg");
    outtextxy(80,287,"Ca");
    outtextxy(80,351,"Sr");
    outtextxy(80,418,"Ba");
    outtextxy(80,485,"Ra");
     setcolor(YELLOW);
    outtextxy(130,282,"Sc");
    outtextxy(130,348,"Y");
     settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
    outtextxy(130,414,"Lanth");
    outtextxy(130,480,"Actin");
     settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(180,282,"Ti");
    outtextxy(180,348,"Zr");
    outtextxy(180,414,"Hf");
    outtextxy(180,480,"Rf");
    outtextxy(230,282,"V");
    outtextxy(230,348,"Nb");
    outtextxy(230,414,"Ta");
    outtextxy(230,480,"Db");
    outtextxy(280,282,"Cr");
    outtextxy(280,348,"Mo");
    outtextxy(280,414,"W");
    outtextxy(280,480,"Sg");
    outtextxy(330,282,"Mn");
    outtextxy(330,348,"Tc");
    outtextxy(330,414,"Re");
    outtextxy(330,480,"Bh");
    outtextxy(380,282,"Fe");
    outtextxy(380,348,"Ru");
    outtextxy(380,414,"Os");
    outtextxy(380,480,"Hs");
    outtextxy(430,282,"Co");
    outtextxy(430,348,"Rh");
    outtextxy(430,414,"Ir");
    outtextxy(430,480,"Mt");
    outtextxy(480,282,"Ni");
    outtextxy(480,348,"Pd");
    outtextxy(480,414,"Pt");
    outtextxy(480,480,"Ds");
    outtextxy(530,282,"Cu");
    outtextxy(530,348,"Ag");
    outtextxy(530,414,"Au");
    outtextxy(530,480,"Rg");
    outtextxy(580,282,"Zn");
    outtextxy(580,348,"Cd");
    outtextxy(580,414,"Hg");
    outtextxy(580,480,"Cn");
     setcolor(BLUE);
    outtextxy(630,153,"B");
     setcolor(RED);
    outtextxy(630,219,"Al");
    outtextxy(630,285,"Ga");
    outtextxy(630,351,"In");
    outtextxy(630,417,"Tl");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
    outtextxy(630,483,"Uut");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
     setcolor(BLUE);
    outtextxy(680,153,"C");
    outtextxy(680,219,"Si");
     setcolor(RED);
    outtextxy(680,285,"Ge");
    outtextxy(680,351,"sn");
    outtextxy(680,417,"Pb");
     settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
    outtextxy(680,483,"Uuq");
     setcolor(BLUE);
      settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(730,153,"N");
    outtextxy(730,219,"P");
    outtextxy(730,285,"As");
     setcolor(RED);
    outtextxy(730,351,"Sb");
    outtextxy(730,417,"Bi");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
    outtextxy(730,483,"Uup");
     setcolor(BLUE);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(780,153,"O");
    outtextxy(780,219,"S");
    outtextxy(780,285,"Se");
    outtextxy(780,351,"Te");
     setcolor(RED);
    outtextxy(780,417,"Po");
     settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
    outtextxy(780,483,"Uuh");
     setcolor(BLUE);
      settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(830,153,"F");
    outtextxy(830,219,"Cl");
    outtextxy(830,285,"Br");
    outtextxy(830,351,"I");
    outtextxy(830,417,"At");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
    outtextxy(830,485,"Uus");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(880,85,"He");
    outtextxy(880,151,"Ne");
    outtextxy(880,217,"Ar");
    outtextxy(880,283,"Kr");
    outtextxy(880,349,"Xe");
    outtextxy(880,415,"Rn");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
    outtextxy(880,481,"Uuo");
    setfillstyle(SOLID_FILL,BLUE);
    bar(28,560,975,615);
    setfillstyle(SOLID_FILL,GREEN);
    bar(28,615,975,670);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
     setcolor(YELLOW);
    outtextxy(35,575,"Lanthanide");
    outtextxy(35,595,"serise");
    outtextxy(35,625,"Actinide");
    outtextxy(35,645,"serise");
      setcolor(GREEN);
       outtextxy(230,575,"La");
    outtextxy(280,575,"Ce");
    outtextxy(330,575,"Pr");
    outtextxy(380,575,"Nd");
    outtextxy(430,575,"Pm");
    outtextxy(480,575,"Sm");
    outtextxy(530,575,"Eu");
    outtextxy(580,575,"Gd");
    outtextxy(630,575,"Tb");
    outtextxy(680,575,"Dy");
    outtextxy(730,575,"Ho");
    outtextxy(780,575,"Er");
    outtextxy(830,575,"Tm");
    outtextxy(880,575,"Yb");
    outtextxy(930,575,"Lu");
     outtextxy(230,625,"Ac");
    outtextxy(280,625,"Th");
    outtextxy(330,625,"Pa");
    outtextxy(380,625,"U");
    outtextxy(430,625,"Np");
    outtextxy(480,625,"Pu");
    outtextxy(530,625,"Am");
    outtextxy(580,625,"Cm");
    outtextxy(630,625,"Bk");
    outtextxy(680,625,"Cf");
    outtextxy(730,625,"Es");
    outtextxy(780,625,"Fm");
    outtextxy(830,625,"Md");
    outtextxy(880,625,"No");
    outtextxy(930,625,"Lr");
      setcolor(YELLOW);
    outtextxy(35,60,"1");
    outtextxy(90,126,"2");
    outtextxy(143,258,"3");
    outtextxy(191,258,"4");
    outtextxy(239,258,"5");
    outtextxy(287,258,"6");
    outtextxy(335,258,"7");
    outtextxy(383,258,"8");
    outtextxy(431,258,"9");
    outtextxy(481,258,"10");
    outtextxy(531,258,"11");
    outtextxy(581,258,"12");
    outtextxy(631,126,"13");
    outtextxy(681,126,"14");
    outtextxy(731,126,"15");
    outtextxy(781,126,"16");
    outtextxy(831,126,"17");
    outtextxy(881,44,"18");
    outtextxy(890,62,"0");
    outtextxy(10,90,"1");
    outtextxy(10,156,"2");
    outtextxy(10,222,"3");
    outtextxy(10,288,"4");
    outtextxy(10,354,"5");
    outtextxy(10,420,"6");
    outtextxy(10,486,"7");

    outtextxy(190,10,"Modern IUPAC Periodic Table of the Elements");
    outtextxy(210,40,"GET REACTION");
    if(x>206&&x<405&&y>38&&y<57)
        reaction();
    while(!ismouseclick(WM_LBUTTONDOWN))
    {
        cout<<"1"<<endl;
        delay(0);
    }
    getmouseclick(WM_LBUTTONDOWN, x, y);
    cout<<"x"<<x;
    cout<<"y"<<y;
    if(x>30&&x<75&&y<146&&y>80)
    {
        printf("\a");
        circle(1110,170,20);
        circle(1127,178,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1103,161,"H");
        outtextxy(1000,400,"Name:Hydrogen");
        outtextxy(1000,420,"Symbool:H");
        outtextxy(1000,440," Atom number:1");
        outtextxy(1000,460,"Atomic mass:1.01");
        outtextxy(1000,480,"Group number:1");
        outtextxy(1000,500,"Periode number:1");
        outtextxy(950,520,"Electron configration:1");
    }
    if(x>30&&x<75&&y<212&&y>146)
    {
        printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1071,161,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Li");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Lithium");
        outtextxy(1000,420,"Symbool:Li");
        outtextxy(1000,440," Atom number:3");
        outtextxy(1000,460,"Atomic mass:6.94");
        outtextxy(1000,480,"Group number:1");
        outtextxy(1000,500,"Periode number:2");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"1.");
    }
    if(x>30&&x<75&&y<276&&y>212)
    {
        printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1070,126,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Na");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Sodium");
        outtextxy(1000,420,"Symbool:Na");
        outtextxy(1000,440," Atom number:11");
        outtextxy(1000,460,"Atomic mass:22.99");
        outtextxy(1000,480,"Group number:1");
        outtextxy(1000,500,"Periode number:3");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,1.");

    }
    if(x>30&&x<75&&y<344&&y>276)
    {
        printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1127,178,6);
        circle(1127,178,6);
        circle(1078,92,8);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1103,161,"K");
        outtextxy(1000,400,"Name:potassium");
        outtextxy(1000,420,"Symbool:K");
        outtextxy(1000,440," Atom number:19");
        outtextxy(1000,460,"Atomic mass:39.10");
        outtextxy(1000,480,"Group number:1");
        outtextxy(1000,500,"Periode number:4");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,1.");
    }
    if(x>30&&x<75&&y>344&&y<410)
    {
        printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);
        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);
        circle(1142,245,8);
        circle(1178,217,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Rb");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Rubidium");
        outtextxy(1000,420,"Symbool:Rb");
        outtextxy(1000,440," Atom number:37");
        outtextxy(1000,460,"Atomic mass:85.47");
        outtextxy(1000,480,"Group number:1");
        outtextxy(1000,500,"Periode number:5");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,1.");
    }
    if(x>30&&x<75&&y>410&&y<476)
    {
        printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Cs");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Caesium");
        outtextxy(1000,420,"Symbool:Cs");
        outtextxy(1000,440," Atom number:55");
        outtextxy(1000,460,"Atomic mass:132.91");
        outtextxy(1000,480,"Group number:1");
        outtextxy(1000,500,"Periode number:6");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,1.");
    }
    if(x>30&&x<75&&y>476&&y<542)
    {
        printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1110,170,160);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);


        circle(1139,37,8);
        circle(993,100,8);
        circle(984,218,8);
        circle(1263,207,8);
        circle(1081,300,8);

        circle(1230,107,8);
        circle(1240,138,8);
        circle(1195,64,8);
        circle(1173,50,8);


        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);


        circle(1114,302,8);
        circle(1141,298,8);
        circle(1174,288,8);
        circle(1210,258,8);

        circle(1240,202,8);
        circle(1243,161,8);
        circle(1195,274,8);
        circle(1226,237,8);
        circle(1233,222,8);

        circle(1103,35,8);
        circle(1063,43,8);
        circle(977,141,8);
        circle(975,173,8);
        circle(983,119,8);

        circle(1039,55,8);
        circle(1009,77,8);
        circle(996,241,8);
        circle(1003,253,8);
        circle(1023,272,8);
        circle(1045,287,8);

        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Fr");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Francium");
        outtextxy(1000,420,"Symbool:Fr");
        outtextxy(1000,440," Atom number:87");
        outtextxy(1000,460,"Atomic mass:223.00");
        outtextxy(1000,480,"Group number:1");
        outtextxy(1000,500,"Periode number:7");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,32,1.");
    }
    if(x>75&&x<125&&y>146&&y<212)
    {
        printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1071,161,8);
        circle(1148,175,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Be");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Beryllium");
        outtextxy(1000,420,"Symbool:Be");
        outtextxy(1000,440," Atom number:4");
        outtextxy(1000,460,"Atomic mass:9.01");
        outtextxy(1000,480,"Group number:2");
        outtextxy(1000,500,"Periode number:2");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"2.");
    }
    if(x>75&&x<125&&y>212&&y<278)
    {
        printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1146,122,8);
        circle(1070,126,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Mg");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Megnesium");
        outtextxy(1000,420,"Symbool:Mg");
        outtextxy(1000,440," Atom number:12");
        outtextxy(1000,460,"Atomic mass:24.31");
        outtextxy(1000,480,"Group number:2");
        outtextxy(1000,500,"Periode number:3");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,2.");
    }
    if(x>75&&x<125&&y>278&&y<344)
    {
        printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1147,245,8);
        circle(1127,178,6);
        circle(1127,178,6);
        circle(1078,92,8);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Ca");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Calcium");
        outtextxy(1000,420,"Symbool:Ca");
        outtextxy(1000,440," Atom number:20");
        outtextxy(1000,460,"Atomic mass:40.08");
        outtextxy(1000,480,"Group number:2");
        outtextxy(1000,500,"Periode number:4");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,2.");
    }
    if(x>75&&x<125&&y>344&&y<410)
    {
        printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);
        circle(1142,245,8);
        circle(1178,217,8);
        circle(1032,246,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Sr");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Strontium");
        outtextxy(1000,420,"Symbool:Sr");
        outtextxy(1000,440," Atom number:38");
        outtextxy(1000,460,"Atomic mass:87.62");
        outtextxy(1000,480,"Group number:2");
        outtextxy(1000,500,"Periode number:5");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,2.");
    }
    if(x>75&&x<125&&y>410&&y<476)
    {
        printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);
        circle(1008,257,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Ba");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Barium");
        outtextxy(1000,420,"Symbool:Ba");
        outtextxy(1000,440," Atom number:56");
        outtextxy(1000,460,"Atomic mass:137.33");
        outtextxy(1000,480,"Group number:2");
        outtextxy(1000,500,"Periode number:6");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,2.");
    }
    if(x>75&&x<125&&y>476&&y<542)
    {
        printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1110,170,160);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);


        circle(1139,37,8);
        circle(993,100,8);
        circle(984,218,8);
        circle(1263,207,8);
        circle(1081,300,8);

        circle(1230,107,8);
        circle(1240,138,8);
        circle(1195,64,8);
        circle(1173,50,8);


        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);


        circle(1114,302,8);
        circle(1141,298,8);
        circle(1174,288,8);
        circle(1210,258,8);

        circle(1240,202,8);
        circle(1243,161,8);
        circle(1195,274,8);
        circle(1226,237,8);
        circle(1233,222,8);

        circle(1103,35,8);
        circle(1063,43,8);
        circle(977,141,8);
        circle(975,173,8);
        circle(983,119,8);

        circle(1039,55,8);
        circle(1009,77,8);
        circle(996,241,8);
        circle(1003,253,8);
        circle(1023,272,8);
        circle(1045,287,8);
        circle(994,57,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Ra");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Radium");
        outtextxy(1000,420,"Symbool:Ra");
        outtextxy(1000,440," Atom number:88");
        outtextxy(1000,460,"Atomic mass:226.00");
        outtextxy(1000,480,"Group number:2");
        outtextxy(1000,500,"Periode number:7");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,32,2.");
    }
    if(x>125&&x<175&&y>278&&y<344)
    {
        printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1147,245,8);
        circle(1078,92,8);
        circle(1038,214,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Sc");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Sacndium");
        outtextxy(1000,420,"Symbool:sc");
        outtextxy(1000,440," Atom number:21");
        outtextxy(1000,460,"Atomic mass:44.96");
        outtextxy(1000,480,"Group number:3");
        outtextxy(1000,500,"Periode number:4");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,3.");
    }
    if(x>125&&x<175&&y>344&&y<410)
    {
        printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);
        circle(1142,245,8);
        circle(1178,217,8);
        circle(1032,246,8);
        circle(1195,237,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1103,161,"Y");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Yttrium");
        outtextxy(1000,420,"Symbool:Y");
        outtextxy(1000,440," Atom number:39");
        outtextxy(1000,460,"Atomic mass:88.91");
        outtextxy(1000,480,"Group number:3");
        outtextxy(1000,500,"Periode number:5");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,3.");
    }
    if(x>125&&x<175&&y>410&&y<476)
    {
        printf("\a");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Lanthanide series");
    }
    if(x>125&&x<175&&y>476&&y<542)
    {
        printf("\a");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Actinide series");
    }
    if(x>175&&x<225&&y>278&&y<344)
    {
        printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1147,245,8);
        circle(1078,92,8);
        circle(1038,214,8);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1183,127,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Ti");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Titanium");
        outtextxy(1000,420,"Symbool:Ti");
        outtextxy(1000,440," Atom number:22");
        outtextxy(1000,460,"Atomic mass:47.87");
        outtextxy(1000,480,"Group number:4");
        outtextxy(1000,500,"Periode number:4");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,4.");
    }
    if(x>175&&x<225&&y>344&&y<410)
    {
        printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);
        circle(1142,245,8);
        circle(1178,217,8);
        circle(1032,246,8);
        circle(1195,237,8);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1016,113,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Zr");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Zirconium");
        outtextxy(1000,420,"Symbool:Zr");
        outtextxy(1000,440," Atom number:40");
        outtextxy(1000,460,"Atomic mass:91.22");
        outtextxy(1000,480,"Group number:4");
        outtextxy(1000,500,"Periode number:5");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,4.");
    }
    if(x>175&&x<225&&y>410&&y<476)
    {
        printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);
        circle(1008,257,8);
        circle(1183,282,8);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1007,81,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Hf");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Hafnium");
        outtextxy(1000,420,"Symbool:Hf");
        outtextxy(1000,440," Atom number:72");
        outtextxy(1000,460,"Atomic mass:178.49");
        outtextxy(1000,480,"Group number:4");
        outtextxy(1000,500,"Periode number:6");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,4.");
    }
    if(x>175&&x<225&&y>476&&y<542)
    {
        printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1110,170,160);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);


        circle(1139,37,8);
        circle(993,100,8);
        circle(984,218,8);
        circle(1263,207,8);
        circle(1081,300,8);

        circle(1230,107,8);
        circle(1240,138,8);
        circle(1195,64,8);
        circle(1173,50,8);


        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);


        circle(1114,302,8);
        circle(1141,298,8);
        circle(1174,288,8);
        circle(1210,258,8);

        circle(1240,202,8);
        circle(1243,161,8);
        circle(1195,274,8);
        circle(1226,237,8);
        circle(1233,222,8);

        circle(1103,35,8);
        circle(1063,43,8);
        circle(977,141,8);
        circle(975,173,8);
        circle(983,119,8);

        circle(1039,55,8);
        circle(1009,77,8);
        circle(996,241,8);
        circle(1003,253,8);
        circle(1023,272,8);
        circle(1045,287,8);
        circle(994,57,8);
        circle(1050,317,8);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1217,52,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Rf");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Rutherfordium");
        outtextxy(1000,420,"Symbool:Rf");
        outtextxy(1000,440," Atom number:104");
        outtextxy(1000,460,"Atomic mass:261.00");
        outtextxy(1000,480,"Group number:4");
        outtextxy(1000,500,"Periode number:7");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,32,4.");
    }
    if(x>225&&x<275&&y>278&&y<344)
    {
        printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1147,245,8);
        circle(1078,92,8);
        circle(1038,214,8);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1183,127,8);
        circle(1088,251,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1103,161,"V");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Vanadium");
        outtextxy(1000,420,"Symbool:V");
        outtextxy(1000,440," Atom number:23");
        outtextxy(1000,460,"Atomic mass:50.94");
        outtextxy(1000,480,"Group number:5");
        outtextxy(1000,500,"Periode number:4");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,5.");
    }
    if(x>225&&x<275&&y>344&&y<410)
    {
        printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);
        circle(1142,245,8);
        circle(1178,217,8);
        circle(1032,246,8);
        circle(1195,237,8);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1016,113,8);
        circle(1116,279,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Nb");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Ntobium");
        outtextxy(1000,420,"Symbool:Nb");
        outtextxy(1000,440," Atom number:41");
        outtextxy(1000,460,"Atomic mass:92.91");
        outtextxy(1000,480,"Group number:5");
        outtextxy(1000,500,"Periode number:5");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,5.");
    }
    if(x>225&&x<275&&y>410&&y<476)
    {
        printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);
        circle(1008,257,8);
        circle(1183,282,8);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1007,81,8);
        circle(1095,303,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Ta");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Tantanium");
        outtextxy(1000,420,"Symbool:Ta");
        outtextxy(1000,440," Atom number:73");
        outtextxy(1000,460,"Atomic mass:180.95");
        outtextxy(1000,480,"Group number:5");
        outtextxy(1000,500,"Periode number:6");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,5.");
    }
    if(x>225&&x<275&&y>476&&y<542)
    {
        printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1110,170,160);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);


        circle(1139,37,8);
        circle(993,100,8);
        circle(984,218,8);
        circle(1263,207,8);
        circle(1081,300,8);

        circle(1230,107,8);
        circle(1240,138,8);
        circle(1195,64,8);
        circle(1173,50,8);


        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);


        circle(1114,302,8);
        circle(1141,298,8);
        circle(1174,288,8);
        circle(1210,258,8);

        circle(1240,202,8);
        circle(1243,161,8);
        circle(1195,274,8);
        circle(1226,237,8);
        circle(1233,222,8);

        circle(1103,35,8);
        circle(1063,43,8);
        circle(977,141,8);
        circle(975,173,8);
        circle(983,119,8);

        circle(1039,55,8);
        circle(1009,77,8);
        circle(996,241,8);
        circle(1003,253,8);
        circle(1023,272,8);
        circle(1045,287,8);
        circle(994,57,8);
        circle(1050,317,8);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1217,52,8);
        circle(1160,321,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Db");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Dubinium");
        outtextxy(1000,420,"Symbool:Db");
        outtextxy(1000,440," Atom number:105");
        outtextxy(1000,460,"Atomic mass:262");
        outtextxy(1000,480,"Group number:5");
        outtextxy(1000,500,"Periode number:7");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,32,5.");
    }
    if(x>275&&x<325&&y>278&&y<344)
    {
        printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1147,245,8);
        circle(1078,92,8);
        circle(1038,214,8);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1183,127,8);
        circle(1088,251,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Cr");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:chromium");
        outtextxy(1000,420,"Symbool:Cr");
        outtextxy(1000,440," Atom number:24");
        outtextxy(1000,460,"Atomic mass:52.00");
        outtextxy(1000,480,"Group number:6");
        outtextxy(1000,500,"Periode number:4");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,6.");
    }
    if(x>275&&x<325&&y>344&&y<410)
    {
        printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);
        circle(1142,245,8);
        circle(1178,217,8);
        circle(1032,246,8);
        circle(1195,237,8);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1016,113,8);
        circle(1116,279,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Mo");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:MOlybdenum");
        outtextxy(1000,420,"Symbool:Mo");
        outtextxy(1000,440," Atom number:42");
        outtextxy(1000,460,"Atomic mass:95.96");
        outtextxy(1000,480,"Group number:6");
        outtextxy(1000,500,"Periode number:5");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,6.");
    }
    if(x>275&&x<325&&y>410&&y<476)
    {
        printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);
        circle(1008,257,8);
        circle(1183,282,8);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1007,81,8);
        circle(1095,303,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1103,161,"W");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Tungstan");
        outtextxy(1000,420,"Symbool:W");
        outtextxy(1000,440," Atom number:74");
        outtextxy(1000,460,"Atomic mass:183.84");
        outtextxy(1000,480,"Group number:6");
        outtextxy(1000,500,"Periode number:6");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,20.");
    }
    if(x>275&&x<325&&y>476&&y<542)
    {
        printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1110,170,160);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);


        circle(1139,37,8);
        circle(993,100,8);
        circle(984,218,8);
        circle(1263,207,8);
        circle(1081,300,8);

        circle(1230,107,8);
        circle(1240,138,8);
        circle(1195,64,8);
        circle(1173,50,8);


        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);


        circle(1114,302,8);
        circle(1141,298,8);
        circle(1174,288,8);
        circle(1210,258,8);

        circle(1240,202,8);
        circle(1243,161,8);
        circle(1195,274,8);
        circle(1226,237,8);
        circle(1233,222,8);

        circle(1103,35,8);
        circle(1063,43,8);
        circle(977,141,8);
        circle(975,173,8);
        circle(983,119,8);

        circle(1039,55,8);
        circle(1009,77,8);
        circle(996,241,8);
        circle(1003,253,8);
        circle(1023,272,8);
        circle(1045,287,8);
        circle(994,57,8);
        circle(1050,317,8);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1217,52,8);
        circle(1160,321,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Sg");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Seaborgium");
        outtextxy(1000,420,"Symbool:Sg");
        outtextxy(1000,440," Atom number:106");
        outtextxy(1000,460,"Atomic mass:266");
        outtextxy(1000,480,"Group number:6");
        outtextxy(1000,500,"Periode number:7");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,32,20.");
    }
    if(x>325&&x<375&&y>278&&y<344)
    {
        printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1147,245,8);
        circle(1078,92,8);
        circle(1038,214,8);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1183,127,8);
        circle(1088,251,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Mn");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Manganese");
        outtextxy(1000,420,"Symbool:Mn");
        outtextxy(1000,440," Atom number:25");
        outtextxy(1000,460,"Atomic mass:54.94");
        outtextxy(1000,480,"Group number:7");
        outtextxy(1000,500,"Periode number:4");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,7.");
    }
    if(x>325&&x<375&&y>344&&y<410)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);
        circle(1142,245,8);
        circle(1178,217,8);
        circle(1032,246,8);
        circle(1195,237,8);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1016,113,8);
        circle(1116,279,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Tc");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Technetium");
        outtextxy(1000,420,"Symbool:Tc");
        outtextxy(1000,440," Atom number:43");
        outtextxy(1000,460,"Atomic mass:98.00");
        outtextxy(1000,480,"Group number:7");
        outtextxy(1000,500,"Periode number:5");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,7.");
    }
    if(x>325&&x<375&&y>410&&y<476)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);
        circle(1008,257,8);
        circle(1183,282,8);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1007,81,8);
        circle(1095,303,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Re");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Rhenium");
        outtextxy(1000,420,"SymboolRe");
        outtextxy(1000,440," Atom number:75");
        outtextxy(1000,460,"Atomic mass:186.21");
        outtextxy(1000,480,"Group number:7");
        outtextxy(1000,500,"Periode number:6");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,21.");
    }
    if(x>325&&x<375&&y>476&&y<542)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1110,170,160);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);


        circle(1139,37,8);
        circle(993,100,8);
        circle(984,218,8);
        circle(1263,207,8);
        circle(1081,300,8);

        circle(1230,107,8);
        circle(1240,138,8);
        circle(1195,64,8);
        circle(1173,50,8);


        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);


        circle(1114,302,8);
        circle(1141,298,8);
        circle(1174,288,8);
        circle(1210,258,8);

        circle(1240,202,8);
        circle(1243,161,8);
        circle(1195,274,8);
        circle(1226,237,8);
        circle(1233,222,8);

        circle(1103,35,8);
        circle(1063,43,8);
        circle(977,141,8);
        circle(975,173,8);
        circle(983,119,8);

        circle(1039,55,8);
        circle(1009,77,8);
        circle(996,241,8);
        circle(1003,253,8);
        circle(1023,272,8);
        circle(1045,287,8);
        circle(994,57,8);
        circle(1050,317,8);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1217,52,8);
        circle(1160,321,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Bh");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Bohrium");
        outtextxy(1000,420,"Symbool:Bh");
        outtextxy(1000,440," Atom number:107");
        outtextxy(1000,460,"Atomic mass:264");
        outtextxy(1000,480,"Group number:7");
        outtextxy(1000,500,"Periode number:7");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,32,21.");
    }
    if(x>375&&x<425&&y>278&&y<344)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1147,245,8);
        circle(1078,92,8);
        circle(1038,214,8);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1183,127,8);
        circle(1088,251,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Fe");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Iron");
        outtextxy(1000,420,"Symbool:Fe");
        outtextxy(1000,440," Atom number:26");
        outtextxy(1000,460,"Atomic mass:55.85");
        outtextxy(1000,480,"Group number:8");
        outtextxy(1000,500,"Periode number:4");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,8.");
    }
    if(x>375&&x<425&&y>344&&y<410)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);
        circle(1142,245,8);
        circle(1178,217,8);
        circle(1032,246,8);
        circle(1195,237,8);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1016,113,8);
        circle(1116,279,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Ru");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Ruthenium");
        outtextxy(1000,420,"Symbool:Ru");
        outtextxy(1000,440," Atom number:44");
        outtextxy(1000,460,"Atomic mass:101.07");
        outtextxy(1000,480,"Group number:8");
        outtextxy(1000,500,"Periode number:5");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,8.");
    }
    if(x>375&&x<425&&y>410&&y<476)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);
        circle(1008,257,8);
        circle(1183,282,8);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1007,81,8);
        circle(1095,303,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Os");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Osmium");
        outtextxy(1000,420,"Symbool:Os");
        outtextxy(1000,440," Atom number:76");
        outtextxy(1000,460,"Atomic mass:190.23");
        outtextxy(1000,480,"Group number:8");
        outtextxy(1000,500,"Periode number:6");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,22.");
    }
    if(x>375&&x<425&&y>476&&y<542)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1110,170,160);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);


        circle(1139,37,8);
        circle(993,100,8);
        circle(984,218,8);
        circle(1263,207,8);
        circle(1081,300,8);

        circle(1230,107,8);
        circle(1240,138,8);
        circle(1195,64,8);
        circle(1173,50,8);


        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);


        circle(1114,302,8);
        circle(1141,298,8);
        circle(1174,288,8);
        circle(1210,258,8);

        circle(1240,202,8);
        circle(1243,161,8);
        circle(1195,274,8);
        circle(1226,237,8);
        circle(1233,222,8);

        circle(1103,35,8);
        circle(1063,43,8);
        circle(977,141,8);
        circle(975,173,8);
        circle(983,119,8);

        circle(1039,55,8);
        circle(1009,77,8);
        circle(996,241,8);
        circle(1003,253,8);
        circle(1023,272,8);
        circle(1045,287,8);
        circle(994,57,8);
        circle(1050,317,8);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1217,52,8);
        circle(1160,321,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Hs");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Hassium");
        outtextxy(1000,420,"Symbool:Hs");
        outtextxy(1000,440," Atom number:108");
        outtextxy(1000,460,"Atomic mass:277");
        outtextxy(1000,480,"Group number:8");
        outtextxy(1000,500,"Periode number:7");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,32,22.");
    }
    if(x>425&&x<475&&y>278&&y<344)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1147,245,8);
        circle(1078,92,8);
        circle(1038,214,8);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1183,127,8);
        circle(1088,251,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Co");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:cobalt");
        outtextxy(1000,420,"Symbool:co");
        outtextxy(1000,440," Atom number:27");
        outtextxy(1000,460,"Atomic mass:58.93");
        outtextxy(1000,480,"Group number:9");
        outtextxy(1000,500,"Periode number:4");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,9.");
    }
    if(x>425&&x<475&&y>344&&y<410)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);
        circle(1142,245,8);
        circle(1178,217,8);
        circle(1032,246,8);
        circle(1195,237,8);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1016,113,8);
        circle(1116,279,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Rh");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Rhodium");
        outtextxy(1000,420,"Symbool:Rh");
        outtextxy(1000,440," Atom number:45");
        outtextxy(1000,460,"Atomic mass:102.91");
        outtextxy(1000,480,"Group number:9");
        outtextxy(1000,500,"Periode number:5");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,9.");
    }
    if(x>425&&x<475&&y>410&&y<476)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);
        circle(1008,257,8);
        circle(1183,282,8);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1007,81,8);
        circle(1095,303,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Ir");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Iridium");
        outtextxy(1000,420,"Symbool:Ir");
        outtextxy(1000,440," Atom number:77");
        outtextxy(1000,460,"Atomic mass:192.22");
        outtextxy(1000,480,"Group number:9");
        outtextxy(1000,500,"Periode number:6");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,23.");
    }
    if(x>425&&x<475&&y>476&&y<542)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1110,170,160);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);


        circle(1139,37,8);
        circle(993,100,8);
        circle(984,218,8);
        circle(1263,207,8);
        circle(1081,300,8);

        circle(1230,107,8);
        circle(1240,138,8);
        circle(1195,64,8);
        circle(1173,50,8);


        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);


        circle(1114,302,8);
        circle(1141,298,8);
        circle(1174,288,8);
        circle(1210,258,8);

        circle(1240,202,8);
        circle(1243,161,8);
        circle(1195,274,8);
        circle(1226,237,8);
        circle(1233,222,8);

        circle(1103,35,8);
        circle(1063,43,8);
        circle(977,141,8);
        circle(975,173,8);
        circle(983,119,8);

        circle(1039,55,8);
        circle(1009,77,8);
        circle(996,241,8);
        circle(1003,253,8);
        circle(1023,272,8);
        circle(1045,287,8);
        circle(994,57,8);
        circle(1050,317,8);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1217,52,8);
        circle(1160,321,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Mt");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Mitrenium");
        outtextxy(1000,420,"Symbool:Mt");
        outtextxy(1000,440," Atom number:109");
        outtextxy(1000,460,"Atomic mass:268");
        outtextxy(1000,480,"Group number:9");
        outtextxy(1000,500,"Periode number:7");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,32,23.");
    }
    if(x>475&&x<525&&y>278&&y<344)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1147,245,8);
        circle(1078,92,8);
        circle(1038,214,8);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1183,127,8);
        circle(1088,251,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Ni");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Nickel");
        outtextxy(1000,420,"Symbool:Ni");
        outtextxy(1000,440," Atom number:28");
        outtextxy(1000,460,"Atomic mass:58.69");
        outtextxy(1000,480,"Group number:10");
        outtextxy(1000,500,"Periode number:4");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,10.");
    }
    if(x>475&&x<525&&y>344&&y<410)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);
        circle(1142,245,8);
        circle(1178,217,8);
        circle(1032,246,8);
        circle(1195,237,8);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1016,113,8);
        circle(1116,279,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"pd");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Palladium");
        outtextxy(1000,420,"Symbool:Pd");
        outtextxy(1000,440," Atom number:46");
        outtextxy(1000,460,"Atomic mass:106.42");
        outtextxy(1000,480,"Group number:10");
        outtextxy(1000,500,"Periode number:5");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,10.");
    }
    if(x>475&&x<525&&y>410&&y<476)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);
        circle(1008,257,8);
        circle(1183,282,8);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1007,81,8);
        circle(1095,303,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Pt");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Platinum");
        outtextxy(1000,420,"Symbool:Pt");
        outtextxy(1000,440," Atom number:78");
        outtextxy(1000,460,"Atomic mass:195.08");
        outtextxy(1000,480,"Group number:10");
        outtextxy(1000,500,"Periode number:6");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,24.");
    }
    if(x>475&&x<525&&y>476&&y<542)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1110,170,160);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);


        circle(1139,37,8);
        circle(993,100,8);
        circle(984,218,8);
        circle(1263,207,8);
        circle(1081,300,8);

        circle(1230,107,8);
        circle(1240,138,8);
        circle(1195,64,8);
        circle(1173,50,8);


        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);


        circle(1114,302,8);
        circle(1141,298,8);
        circle(1174,288,8);
        circle(1210,258,8);

        circle(1240,202,8);
        circle(1243,161,8);
        circle(1195,274,8);
        circle(1226,237,8);
        circle(1233,222,8);

        circle(1103,35,8);
        circle(1063,43,8);
        circle(977,141,8);
        circle(975,173,8);
        circle(983,119,8);

        circle(1039,55,8);
        circle(1009,77,8);
        circle(996,241,8);
        circle(1003,253,8);
        circle(1023,272,8);
        circle(1045,287,8);
        circle(994,57,8);
        circle(1050,317,8);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1217,52,8);
        circle(1160,321,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Ds");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Darmastadium");
        outtextxy(1000,420,"Symbool:Ds");
        outtextxy(1000,440," Atom number:110");
        outtextxy(1000,460,"Atomic mass:271");
        outtextxy(1000,480,"Group number:10");
        outtextxy(1000,500,"Periode number:7");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,32,24.");
    }
    if(x>525&&x<575&&y>278&&y<344)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1147,245,8);
        circle(1078,92,8);
        circle(1038,214,8);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1183,127,8);
        circle(1088,251,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Cu");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Copper");
        outtextxy(1000,420,"Symbool:Cu");
        outtextxy(1000,440," Atom number:29");
        outtextxy(1000,460,"Atomic mass:63.55");
        outtextxy(1000,480,"Group number:11");
        outtextxy(1000,500,"Periode number:4");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,11.");
    }
    if(x>525&&x<575&&y>344&&y<410)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);
        circle(1142,245,8);
        circle(1178,217,8);
        circle(1032,246,8);
        circle(1195,237,8);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1016,113,8);
        circle(1116,279,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Ag");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Silver");
        outtextxy(1000,420,"Symbool:Ag");
        outtextxy(1000,440," Atom number:47");
        outtextxy(1000,460,"Atomic mass:107.87");
        outtextxy(1000,480,"Group number:11");
        outtextxy(1000,500,"Periode number:5");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,11.");
    }
    if(x>525&&x<575&&y>410&&y<476)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);
        circle(1008,257,8);
        circle(1183,282,8);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1007,81,8);
        circle(1095,303,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Au");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Gold");
        outtextxy(1000,420,"Symbool:Au");
        outtextxy(1000,440," Atom number:79");
        outtextxy(1000,460,"Atomic mass:196.97");
        outtextxy(1000,480,"Group number:11");
        outtextxy(1000,500,"Periode number:6");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,25.");
    }
    if(x>525&&x<575&&y>476&&y<542)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1110,170,160);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);


        circle(1139,37,8);
        circle(993,100,8);
        circle(984,218,8);
        circle(1263,207,8);
        circle(1081,300,8);

        circle(1230,107,8);
        circle(1240,138,8);
        circle(1195,64,8);
        circle(1173,50,8);


        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);


        circle(1114,302,8);
        circle(1141,298,8);
        circle(1174,288,8);
        circle(1210,258,8);

        circle(1240,202,8);
        circle(1243,161,8);
        circle(1195,274,8);
        circle(1226,237,8);
        circle(1233,222,8);

        circle(1103,35,8);
        circle(1063,43,8);
        circle(977,141,8);
        circle(975,173,8);
        circle(983,119,8);

        circle(1039,55,8);
        circle(1009,77,8);
        circle(996,241,8);
        circle(1003,253,8);
        circle(1023,272,8);
        circle(1045,287,8);
        circle(994,57,8);
        circle(1050,317,8);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1217,52,8);
        circle(1160,321,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Rg");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Roentgenium");
        outtextxy(1000,420,"Symbool:Rg");
        outtextxy(1000,440," Atom number:111");
        outtextxy(1000,460,"Atomic mass:272");
        outtextxy(1000,480,"Group number:11");
        outtextxy(1000,500,"Periode number:7");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,32,25.");
    }
    if(x>575&&x<625&&y>278&&y<344)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1147,245,8);
        circle(1078,92,8);
        circle(1038,214,8);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1183,127,8);
        circle(1088,251,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Zn");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Zinc");
        outtextxy(1000,420,"Symbool:Zn");
        outtextxy(1000,440," Atom number:30");
        outtextxy(1000,460,"Atomic mass:65.38");
        outtextxy(1000,480,"Group number:12");
        outtextxy(1000,500,"Periode number:4");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,12.");
    }
    if(x>575&&x<625&&y>344&&y<410)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);
        circle(1142,245,8);
        circle(1178,217,8);
        circle(1032,246,8);
        circle(1195,237,8);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1016,113,8);
        circle(1116,279,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Cd");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Cadmium");
        outtextxy(1000,420,"Symbool:Cd");
        outtextxy(1000,440," Atom number:48");
        outtextxy(1000,460,"Atomic mass:112.44");
        outtextxy(1000,480,"Group number:12");
        outtextxy(1000,500,"Periode number:5");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,12.");
    }
    if(x>575&&x<625&&y>410&&y<476)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);
        circle(1008,257,8);
        circle(1183,282,8);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1007,81,8);
        circle(1095,303,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Hg");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Mercury");
        outtextxy(1000,420,"Symbool:Hg");
        outtextxy(1000,440," Atom number:80");
        outtextxy(1000,460,"Atomic mass:200.59");
        outtextxy(1000,480,"Group number:12");
        outtextxy(1000,500,"Periode number:6");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,26.");
    }
    if(x>575&&x<625&&y>476&&y<542)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1110,170,160);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);


        circle(1139,37,8);
        circle(993,100,8);
        circle(984,218,8);
        circle(1263,207,8);
        circle(1081,300,8);

        circle(1230,107,8);
        circle(1240,138,8);
        circle(1195,64,8);
        circle(1173,50,8);


        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);


        circle(1114,302,8);
        circle(1141,298,8);
        circle(1174,288,8);
        circle(1210,258,8);

        circle(1240,202,8);
        circle(1243,161,8);
        circle(1195,274,8);
        circle(1226,237,8);
        circle(1233,222,8);

        circle(1103,35,8);
        circle(1063,43,8);
        circle(977,141,8);
        circle(975,173,8);
        circle(983,119,8);

        circle(1039,55,8);
        circle(1009,77,8);
        circle(996,241,8);
        circle(1003,253,8);
        circle(1023,272,8);
        circle(1045,287,8);
        circle(994,57,8);
        circle(1050,317,8);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1217,52,8);
        circle(1160,321,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Cn");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Copernicium");
        outtextxy(1000,420,"Symbool:Cn");
        outtextxy(1000,440," Atom number:112");
        outtextxy(1000,460,"Atomic mass:273");
        outtextxy(1000,480,"Group number:12");
        outtextxy(1000,500,"Periode number:7");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,32,26.");
    }
    if(x>625&&x<675&&y>146&&y<212)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1071,161,8);
        circle(1148,175,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1103,161,"B");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Boron");
        outtextxy(1000,420,"Symbool:B");
        outtextxy(1000,440," Atom number:5");
        outtextxy(1000,460,"Atomic mass:10.81");
        outtextxy(1000,480,"Group number:13");
        outtextxy(1000,500,"Periode number:2");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"3.");
    }
    if(x>625&&x<675&&y>212&&y<278)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1146,122,8);
        circle(1070,126,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Al");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Aluminium");
        outtextxy(1000,420,"Symbool:Al");
        outtextxy(1000,440," Atom number:13");
        outtextxy(1000,460,"Atomic mass:26.98");
        outtextxy(1000,480,"Group number:13");
        outtextxy(1000,500,"Periode number:3");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,3.");
    }
    if(x>625&&x<675&&y>278&&y<344)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1147,245,8);
        circle(1127,178,6);
        circle(1127,178,6);
        circle(1078,92,8);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Ga");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Gallium");
        outtextxy(1000,420,"Symbool:Ga");
        outtextxy(1000,440," Atom number:31");
        outtextxy(1000,460,"Atomic mass:69.72");
        outtextxy(1000,480,"Group number:13");
        outtextxy(1000,500,"Periode number:4");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,13.");
    }
    if(x>625&&x<675&&y>344&&y<410)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);
        circle(1142,245,8);
        circle(1178,217,8);
        circle(1032,246,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"In");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Indium");
        outtextxy(1000,420,"Symbool:In");
        outtextxy(1000,440," Atom number:49");
        outtextxy(1000,460,"Atomic mass:114.82");
        outtextxy(1000,480,"Group number:13");
        outtextxy(1000,500,"Periode number:5");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,13.");
    }
    if(x>625&&x<675&&y>410&&y<476)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);
        circle(1008,257,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Tl");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Thallium");
        outtextxy(1000,420,"Symbool:Tl");
        outtextxy(1000,440," Atom number:81");
        outtextxy(1000,460,"Atomic mass:204.38");
        outtextxy(1000,480,"Group number:13");
        outtextxy(1000,500,"Periode number:6");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,27.");
    }
    if(x>625&&x<675&&y>476&&y<542)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1110,170,160);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);


        circle(1139,37,8);
        circle(993,100,8);
        circle(984,218,8);
        circle(1263,207,8);
        circle(1081,300,8);

        circle(1230,107,8);
        circle(1240,138,8);
        circle(1195,64,8);
        circle(1173,50,8);


        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);


        circle(1114,302,8);
        circle(1141,298,8);
        circle(1174,288,8);
        circle(1210,258,8);

        circle(1240,202,8);
        circle(1243,161,8);
        circle(1195,274,8);
        circle(1226,237,8);
        circle(1233,222,8);

        circle(1103,35,8);
        circle(1063,43,8);
        circle(977,141,8);
        circle(975,173,8);
        circle(983,119,8);

        circle(1039,55,8);
        circle(1009,77,8);
        circle(996,241,8);
        circle(1003,253,8);
        circle(1023,272,8);
        circle(1045,287,8);
        circle(994,57,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Uut");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Ununtrium");
        outtextxy(1000,420,"Symbool:Uut");
        outtextxy(1000,440," Atom number:113");
        outtextxy(1000,460,"Atomic mass:284");
        outtextxy(1000,480,"Group number:13");
        outtextxy(1000,500,"Periode number:7");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,32,27.");
    }
    if(x>675&&x<725&&y>146&&y<212)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1071,161,8);
        circle(1148,175,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"C");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Carbon");
        outtextxy(1000,420,"Symbool:C");
        outtextxy(1000,440," Atom number:6");
        outtextxy(1000,460,"Atomic mass:12.01");
        outtextxy(1000,480,"Group number:14");
        outtextxy(1000,500,"Periode number:2");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"4.");
    }
    if(x>675&&x<725&&y>212&&y<278)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1146,122,8);
        circle(1070,126,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Si");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:silicon");
        outtextxy(1000,420,"Symbool:Si");
        outtextxy(1000,440," Atom number:14");
        outtextxy(1000,460,"Atomic mass:28.09");
        outtextxy(1000,480,"Group number:14");
        outtextxy(1000,500,"Periode number:3");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,4.");
    }
    if(x>675&&x<725&&y>278&&y<344)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1147,245,8);
        circle(1127,178,6);
        circle(1127,178,6);
        circle(1078,92,8);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Ge");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Germanium");
        outtextxy(1000,420,"Symbool:Ge");
        outtextxy(1000,440," Atom number:332");
        outtextxy(1000,460,"Atomic mass:72.04");
        outtextxy(1000,480,"Group number:14");
        outtextxy(1000,500,"Periode number:4");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,14.");
    }
    if(x>675&&x<725&&y>344&&y<410)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);
        circle(1142,245,8);
        circle(1178,217,8);
        circle(1032,246,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Sn");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Tin");
        outtextxy(1000,420,"Symbool:Strontium");
        outtextxy(1000,440," Atom number:50");
        outtextxy(1000,460,"Atomic mass:118.71");
        outtextxy(1000,480,"Group number:14");
        outtextxy(1000,500,"Periode number:5");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,14.");
    }
    if(x>675&&x<725&&y>410&&y<476)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);
        circle(1008,257,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Pb");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Lead");
        outtextxy(1000,420,"Symbool:pb");
        outtextxy(1000,440," Atom number:82");
        outtextxy(1000,460,"Atomic mass:207.2");
        outtextxy(1000,480,"Group number:14");
        outtextxy(1000,500,"Periode number:6");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,28.");
    }
    if(x>675&&x<725&&y>476&&y<542)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1110,170,160);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);


        circle(1139,37,8);
        circle(993,100,8);
        circle(984,218,8);
        circle(1263,207,8);
        circle(1081,300,8);

        circle(1230,107,8);
        circle(1240,138,8);
        circle(1195,64,8);
        circle(1173,50,8);


        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);


        circle(1114,302,8);
        circle(1141,298,8);
        circle(1174,288,8);
        circle(1210,258,8);

        circle(1240,202,8);
        circle(1243,161,8);
        circle(1195,274,8);
        circle(1226,237,8);
        circle(1233,222,8);

        circle(1103,35,8);
        circle(1063,43,8);
        circle(977,141,8);
        circle(975,173,8);
        circle(983,119,8);

        circle(1039,55,8);
        circle(1009,77,8);
        circle(996,241,8);
        circle(1003,253,8);
        circle(1023,272,8);
        circle(1045,287,8);
        circle(994,57,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Fl");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Flerovium");
        outtextxy(1000,420,"Symbool:Fl");
        outtextxy(1000,440," Atom number:114");
        outtextxy(1000,460,"Atomic mass:289");
        outtextxy(1000,480,"Group number:14");
        outtextxy(1000,500,"Periode number:7");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,32,28.");
    }
    if(x>725&&x<775&&y>146&&y<212)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1071,161,8);
        circle(1148,175,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"N");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Nitrogen");
        outtextxy(1000,420,"Symbool:N");
        outtextxy(1000,440," Atom number:7");
        outtextxy(1000,460,"Atomic mass:14.01");
        outtextxy(1000,480,"Group number:15");
        outtextxy(1000,500,"Periode number:2");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"5.");
    }
    if(x>725&&x<775&&y>212&&y<278)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1146,122,8);
        circle(1070,126,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1103,161,"P");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Phosphors");
        outtextxy(1000,420,"Symbool:P");
        outtextxy(1000,440," Atom number:15");
        outtextxy(1000,460,"Atomic mass:30.98");
        outtextxy(1000,480,"Group number:115");
        outtextxy(1000,500,"Periode number:3");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,5.");
    }
    if(x>725&&x<775&&y>278&&y<344)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1147,245,8);
        circle(1127,178,6);
        circle(1127,178,6);
        circle(1078,92,8);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"As");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Arsenic");
        outtextxy(1000,420,"Symbool:As");
        outtextxy(1000,440," Atom number:33");
        outtextxy(1000,460,"Atomic mass:74.92");
        outtextxy(1000,480,"Group number:15");
        outtextxy(1000,500,"Periode number:4");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,15.");
    }
    if(x>725&&x<775&&y>344&&y<410)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);
        circle(1142,245,8);
        circle(1178,217,8);
        circle(1032,246,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Sb");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Antimony");
        outtextxy(1000,420,"Symbool:Sb");
        outtextxy(1000,440," Atom number:51");
        outtextxy(1000,460,"Atomic mass:121.76");
        outtextxy(1000,480,"Group number:15");
        outtextxy(1000,500,"Periode number:5");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,15.");
    }
    if(x>725&&x<775&&y>410&&y<476)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);
        circle(1008,257,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Bi");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Bismuth");
        outtextxy(1000,420,"Symbool:Bi");
        outtextxy(1000,440," Atom number:83");
        outtextxy(1000,460,"Atomic mass:208.8");
        outtextxy(1000,480,"Group number:15");
        outtextxy(1000,500,"Periode number:6");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,29.");
    }
    if(x>725&&x<775&&y>476&&y<542)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1110,170,160);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);


        circle(1139,37,8);
        circle(993,100,8);
        circle(984,218,8);
        circle(1263,207,8);
        circle(1081,300,8);

        circle(1230,107,8);
        circle(1240,138,8);
        circle(1195,64,8);
        circle(1173,50,8);


        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);


        circle(1114,302,8);
        circle(1141,298,8);
        circle(1174,288,8);
        circle(1210,258,8);

        circle(1240,202,8);
        circle(1243,161,8);
        circle(1195,274,8);
        circle(1226,237,8);
        circle(1233,222,8);

        circle(1103,35,8);
        circle(1063,43,8);
        circle(977,141,8);
        circle(975,173,8);
        circle(983,119,8);

        circle(1039,55,8);
        circle(1009,77,8);
        circle(996,241,8);
        circle(1003,253,8);
        circle(1023,272,8);
        circle(1045,287,8);
        circle(994,57,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Uup");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Ununpentium");
        outtextxy(1000,420,"Symbool:Uup");
        outtextxy(1000,440," Atom number:115");
        outtextxy(1000,460,"Atomic mass:288");
        outtextxy(1000,480,"Group number:15");
        outtextxy(1000,500,"Periode number:7");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,32,29.");
    }
    if(x>775&&x<825&&y>146&&y<212)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1071,161,8);
        circle(1148,175,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1103,161,"O");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Oxygen");
        outtextxy(1000,420,"Symbool:O");
        outtextxy(1000,440," Atom number:8");
        outtextxy(1000,460,"Atomic mass:16.00");
        outtextxy(1000,480,"Group number:16");
        outtextxy(1000,500,"Periode number:2");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"6.");
    }
    if(x>775&&x<825&&y>212&&y<278)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1146,122,8);
        circle(1070,126,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1103,161,"S");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Sulfer");
        outtextxy(1000,420,"Symbool:S");
        outtextxy(1000,440," Atom number:16");
        outtextxy(1000,460,"Atomic mass:30.98");
        outtextxy(1000,480,"Group number:16");
        outtextxy(1000,500,"Periode number:3");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,6.");
    }
    if(x>775&&x<825&&y>278&&y<344)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1147,245,8);
        circle(1127,178,6);
        circle(1127,178,6);
        circle(1078,92,8);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Se");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Selenium");
        outtextxy(1000,420,"Symbool:Se");
        outtextxy(1000,440," Atom number:34");
        outtextxy(1000,460,"Atomic mass:78.96");
        outtextxy(1000,480,"Group number:16");
        outtextxy(1000,500,"Periode number:4");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,16.");
    }
    if(x>775&&x<825&&y>344&&y<410)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);
        circle(1142,245,8);
        circle(1178,217,8);
        circle(1032,246,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Te");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Tellurium");
        outtextxy(1000,420,"Symbool:Te");
        outtextxy(1000,440," Atom number:52");
        outtextxy(1000,460,"Atomic mass:127.60");
        outtextxy(1000,480,"Group number:16");
        outtextxy(1000,500,"Periode number:5");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,16.");
    }
    if(x>775&&x<825&&y>410&&y<476)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);
        circle(1008,257,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Po");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Polonium");
        outtextxy(1000,420,"Symbool:Po");
        outtextxy(1000,440," Atom number:84");
        outtextxy(1000,460,"Atomic mass:210.00");
        outtextxy(1000,480,"Group number:16");
        outtextxy(1000,500,"Periode number:6");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,30.");
    }
    if(x>775&&x<825&&y>476&&y<542)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1110,170,160);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);


        circle(1139,37,8);
        circle(993,100,8);
        circle(984,218,8);
        circle(1263,207,8);
        circle(1081,300,8);

        circle(1230,107,8);
        circle(1240,138,8);
        circle(1195,64,8);
        circle(1173,50,8);


        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);


        circle(1114,302,8);
        circle(1141,298,8);
        circle(1174,288,8);
        circle(1210,258,8);

        circle(1240,202,8);
        circle(1243,161,8);
        circle(1195,274,8);
        circle(1226,237,8);
        circle(1233,222,8);

        circle(1103,35,8);
        circle(1063,43,8);
        circle(977,141,8);
        circle(975,173,8);
        circle(983,119,8);

        circle(1039,55,8);
        circle(1009,77,8);
        circle(996,241,8);
        circle(1003,253,8);
        circle(1023,272,8);
        circle(1045,287,8);
        circle(994,57,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Lv");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Livermovium");
        outtextxy(1000,420,"Symbool:Lv");
        outtextxy(1000,440," Atom number:116");
        outtextxy(1000,460,"Atomic mass:292");
        outtextxy(1000,480,"Group number:16");
        outtextxy(1000,500,"Periode number:7");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,32,30.");
    }
    if(x>825&&x<875&&y>146&&y<212)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1071,161,8);
        circle(1148,175,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1103,161,"F");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Flurine");
        outtextxy(1000,420,"Symbool:F");
        outtextxy(1000,440," Atom number:9");
        outtextxy(1000,460,"Atomic mass:19.00");
        outtextxy(1000,480,"Group number:17");
        outtextxy(1000,500,"Periode number:2");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"7.");
    }
    if(x>825&&x<875&&y>212&&y<278)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1146,122,8);
        circle(1070,126,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1103,161,"Cl");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Chlorine");
        outtextxy(1000,420,"Symbool:Cl");
        outtextxy(1000,440," Atom number:17");
        outtextxy(1000,460,"Atomic mass:35.45");
        outtextxy(1000,480,"Group number:17");
        outtextxy(1000,500,"Periode number:3");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,7.");
    }
    if(x>825&&x<875&&y>278&&y<344)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1147,245,8);
        circle(1127,178,6);
        circle(1127,178,6);
        circle(1078,92,8);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Br");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Bromin");
        outtextxy(1000,420,"Symbool:Br");
        outtextxy(1000,440," Atom number:35");
        outtextxy(1000,460,"Atomic mass:78.96");
        outtextxy(1000,480,"Group number:17");
        outtextxy(1000,500,"Periode number:4");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,17.");
    }
    if(x>825&&x<875&&y>344&&y<410)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);
        circle(1142,245,8);
        circle(1178,217,8);
        circle(1032,246,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1103,161,"I");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Iodin");
        outtextxy(1000,420,"Symbool:I");
        outtextxy(1000,440," Atom number:53");
        outtextxy(1000,460,"Atomic mass:126.90");
        outtextxy(1000,480,"Group number:17");
        outtextxy(1000,500,"Periode number:5");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,17.");
    }
    if(x>825&&x<875&&y>410&&y<476)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);
        circle(1008,257,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"At");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Astatine");
        outtextxy(1000,420,"Symbool:At");
        outtextxy(1000,440," Atom number:85");
        outtextxy(1000,460,"Atomic mass:210.00");
        outtextxy(1000,480,"Group number:17");
        outtextxy(1000,500,"Periode number:6");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,31.");
    }
    if(x>825&&x<875&&y>476&&y<542)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1110,170,160);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);


        circle(1139,37,8);
        circle(993,100,8);
        circle(984,218,8);
        circle(1263,207,8);
        circle(1081,300,8);

        circle(1230,107,8);
        circle(1240,138,8);
        circle(1195,64,8);
        circle(1173,50,8);


        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);


        circle(1114,302,8);
        circle(1141,298,8);
        circle(1174,288,8);
        circle(1210,258,8);

        circle(1240,202,8);
        circle(1243,161,8);
        circle(1195,274,8);
        circle(1226,237,8);
        circle(1233,222,8);

        circle(1103,35,8);
        circle(1063,43,8);
        circle(977,141,8);
        circle(975,173,8);
        circle(983,119,8);

        circle(1039,55,8);
        circle(1009,77,8);
        circle(996,241,8);
        circle(1003,253,8);
        circle(1023,272,8);
        circle(1045,287,8);
        circle(994,57,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Uus");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Ununseptium");
        outtextxy(1000,420,"Symbool:Uus");
        outtextxy(1000,440," Atom number:117");
        outtextxy(1000,460,"Atomic mass:293");
        outtextxy(1000,480,"Group number:17");
        outtextxy(1000,500,"Periode number:7");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,32,31.");
    }
    if(x>875&&x<925&&y<146&&y>80)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1127,178,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"He");
        outtextxy(1000,400,"Name:Helium");
        outtextxy(1000,420,"Symbool:He");
        outtextxy(1000,440," Atom number:2");
        outtextxy(1000,460,"Atomic mass:4.00");
        outtextxy(1000,480,"Group number:18");
        outtextxy(1000,500,"Periode number:1");
        outtextxy(950,520,"Electron configration:2");
    }
    if(x>875&&x<925&&y>146&&y<212)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1127,178,6);
        circle(1097,157,6);
        circle(1071,161,8);
        circle(1148,175,8);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Ne");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Neon");
        outtextxy(1000,420,"Symbool:Ne");
        outtextxy(1000,440," Atom number:10");
        outtextxy(1000,460,"Atomic mass:Ne");
        outtextxy(1000,480,"Group number:18");
        outtextxy(1000,500,"Periode number:2");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8.");
    }
    if(x>875&&x<925&&y>212&&y<278)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1146,122,8);
        circle(1070,126,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Ar");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Argon");
        outtextxy(1000,420,"Symbool:Ar");
        outtextxy(1000,440," Atom number:18");
        outtextxy(1000,460,"Atomic mass:39.95");
        outtextxy(1000,480,"Group number:18");
        outtextxy(1000,500,"Periode number:3");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8.");
    }
    if(x>875&&x<925&&y>278&&y<344)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1147,245,8);
        circle(1127,178,6);
        circle(1127,178,6);
        circle(1078,92,8);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Kr");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Krypton");
        outtextxy(1000,420,"Symbool:Kr");
        outtextxy(1000,440," Atom number:36");
        outtextxy(1000,460,"Atomic mass:83.80");
        outtextxy(1000,480,"Group number:18");
        outtextxy(1000,500,"Periode number:4");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18.");
    }
    if(x>875&&x<925&&y>344&&y<410)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);
        circle(1142,245,8);
        circle(1178,217,8);
        circle(1032,246,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Xe");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Xenon");
        outtextxy(1000,420,"Symbool:Xe");
        outtextxy(1000,440," Atom number:54");
        outtextxy(1000,460,"Atomic mass:131.94");
        outtextxy(1000,480,"Group number:18");
        outtextxy(1000,500,"Periode number:5");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18.");
    }
    if(x>875&&x<925&&y>410&&y<476)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);
        circle(1008,257,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Rn");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Radon");
        outtextxy(1000,420,"Symbool:Rn");
        outtextxy(1000,440," Atom number:86");
        outtextxy(1000,460,"Atomic mass:220");
        outtextxy(1000,480,"Group number:18");
        outtextxy(1000,500,"Periode number:6");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,32.");
    }
    if(x>875&&x<925&&y>476&&y<542)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1110,170,160);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);


        circle(1139,37,8);
        circle(993,100,8);
        circle(984,218,8);
        circle(1263,207,8);
        circle(1081,300,8);

        circle(1230,107,8);
        circle(1240,138,8);
        circle(1195,64,8);
        circle(1173,50,8);


        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);


        circle(1114,302,8);
        circle(1141,298,8);
        circle(1174,288,8);
        circle(1210,258,8);

        circle(1240,202,8);
        circle(1243,161,8);
        circle(1195,274,8);
        circle(1226,237,8);
        circle(1233,222,8);

        circle(1103,35,8);
        circle(1063,43,8);
        circle(977,141,8);
        circle(975,173,8);
        circle(983,119,8);

        circle(1039,55,8);
        circle(1009,77,8);
        circle(996,241,8);
        circle(1003,253,8);
        circle(1023,272,8);
        circle(1045,287,8);
        circle(994,57,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Uuo");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Ununoctium");
        outtextxy(1000,420,"Symbool:Uuo");
        outtextxy(1000,440," Atom number:118");
        outtextxy(1000,460,"Atomic mass:294");
        outtextxy(1000,480,"Group number:18");
        outtextxy(1000,500,"Periode number:7");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,32,32.");
    }
     if(x>216&&x<270&&y>560&&y<614)
     {
        printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);
        circle(1008,257,8);
        circle(1183,282,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"La");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Lanthanum");
        outtextxy(1000,420,"Symbool:La");
        outtextxy(1000,440," Atom number:57");
        outtextxy(1000,460,"Atomic mass:138.91");
        outtextxy(1000,480,"Group number:3");
        outtextxy(1000,500,"Periode number:6");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,3.");
    }
    if(x>270&&x<324&&y>559&&y<615)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);
        circle(1008,257,8);
        circle(1183,282,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Ce");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Cerium");
        outtextxy(1000,420,"Symbool:Ce");
        outtextxy(1000,440," Atom number:58");
        outtextxy(1000,460,"Atomic mass:140.17");
        outtextxy(1000,480,"Group number:3");
        outtextxy(1000,500,"Periode number:6");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,4.");
    }
    if(x>322&&x<376&&y>559&&y<615)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);
        circle(1008,257,8);
        circle(1183,282,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Pr");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Praseodymium");
        outtextxy(1000,420,"Symbool:Pr");
        outtextxy(1000,440," Atom number:59");
        outtextxy(1000,460,"Atomic mass:140.91");
        outtextxy(1000,480,"Group number:3");
        outtextxy(1000,500,"Periode number:6");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,5.");
    }
     if(x>376&&x<430&&y>559&&y<615)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);
        circle(1008,257,8);
        circle(1183,282,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Nd");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Neodymium");
        outtextxy(1000,420,"Symbool:Nd");
        outtextxy(1000,440," Atom number:60");
        outtextxy(1000,460,"Atomic mass:140.91");
        outtextxy(1000,480,"Group number:3");
        outtextxy(1000,500,"Periode number:6");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,6.");
    }
     if(x>430&&x<484&&y>559&&y<615)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);
        circle(1008,257,8);
        circle(1183,282,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Pm");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Promethium");
        outtextxy(1000,420,"Symbool:Pm");
        outtextxy(1000,440," Atom number:61");
        outtextxy(1000,460,"Atomic mass:144.24");
        outtextxy(1000,480,"Group number:3");
        outtextxy(1000,500,"Periode number:6");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,7.");
    }
    if(x>484&&x<516&&y>559&&y<615)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);
        circle(1008,257,8);
        circle(1183,282,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Sm");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Samarium");
        outtextxy(1000,420,"Symbool:Sm");
        outtextxy(1000,440," Atom number:62");
        outtextxy(1000,460,"Atomic mass:150.36");
        outtextxy(1000,480,"Group number:3");
        outtextxy(1000,500,"Periode number:6");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,8.");
    }
    if(x>520&&x<577&&y>559&&y<615)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);
        circle(1008,257,8);
        circle(1183,282,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Eu");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Europium");
        outtextxy(1000,420,"Symbool:Eu");
        outtextxy(1000,440," Atom number:63");
        outtextxy(1000,460,"Atomic mass:151.96");
        outtextxy(1000,480,"Group number:3");
        outtextxy(1000,500,"Periode number:6");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,9.");
    }
    if(x>577&&x<627&&y>559&&y<615)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);
        circle(1008,257,8);
        circle(1183,282,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Gd");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Gadolinum");
        outtextxy(1000,420,"Symbool:Gd");
        outtextxy(1000,440," Atom number:64");
        outtextxy(1000,460,"Atomic mass:157.25");
        outtextxy(1000,480,"Group number:3");
        outtextxy(1000,500,"Periode number:6");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,10.");
    }
    if(x>627&&x<677&&y>559&&y<615)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);
        circle(1008,257,8);
        circle(1183,282,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Tb");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Terbium");
        outtextxy(1000,420,"Symbool:Tb");
        outtextxy(1000,440," Atom number:65");
        outtextxy(1000,460,"Atomic mass:158.93");
        outtextxy(1000,480,"Group number:3");
        outtextxy(1000,500,"Periode number:6");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,11.");
    }
    if(x>677&&x<727&&y>559&&y<615)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);
        circle(1008,257,8);
        circle(1183,282,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Dy");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Dysporium");
        outtextxy(1000,420,"Symbool:Dy");
        outtextxy(1000,440," Atom number:66");
        outtextxy(1000,460,"Atomic mass:162.50");
        outtextxy(1000,480,"Group number:3");
        outtextxy(1000,500,"Periode number:6");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,12.");
    }
    if(x>727&&x<777&&y>559&&y<615)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);
        circle(1008,257,8);
        circle(1183,282,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Ho");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Holmium");
        outtextxy(1000,420,"Symbool:Ho");
        outtextxy(1000,440," Atom number:67");
        outtextxy(1000,460,"Atomic mass:164.93");
        outtextxy(1000,480,"Group number:3");
        outtextxy(1000,500,"Periode number:6");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,13.");
    }
     if(x>777&&x<827&&y>559&&y<615)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);
        circle(1008,257,8);
        circle(1183,282,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Er");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Erbium");
        outtextxy(1000,420,"Symbool:Er");
        outtextxy(1000,440," Atom number:68");
        outtextxy(1000,460,"Atomic mass:167.2");
        outtextxy(1000,480,"Group number:3");
        outtextxy(1000,500,"Periode number:6");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,14.");
    }
    if(x>827&&x<877&&y>559&&y<615)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);
        circle(1008,257,8);
        circle(1183,282,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Tm");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Thulium");
        outtextxy(1000,420,"Symbool:Tm");
        outtextxy(1000,440," Atom number:69");
        outtextxy(1000,460,"Atomic mass:168.93");
        outtextxy(1000,480,"Group number:3");
        outtextxy(1000,500,"Periode number:6");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,15.");
    }
    if(x>877&&x<927&&y>559&&y<615)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);
        circle(1008,257,8);
        circle(1183,282,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Yb");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Ytterbium");
        outtextxy(1000,420,"Symbool:Yb");
        outtextxy(1000,440," Atom number:70");
        outtextxy(1000,460,"Atomic mass:173.05");
        outtextxy(1000,480,"Group number:3");
        outtextxy(1000,500,"Periode number:6");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,16.");
    }
     if(x>927&&x<977&&y>559&&y<615)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);
        circle(1008,257,8);
        circle(1183,282,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Lu");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Latetium");
        outtextxy(1000,420,"Symbool:Lu");
        outtextxy(1000,440," Atom number:71");
        outtextxy(1000,460,"Atomic mass:174.97");
        outtextxy(1000,480,"Group number:3");
        outtextxy(1000,500,"Periode number:6");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,17.");
    }
      if(x>226&&x<270&&y>616&&y<668)
    {
        printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1110,170,160);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);


        circle(1139,37,8);
        circle(993,100,8);
        circle(984,218,8);
        circle(1263,207,8);
        circle(1081,300,8);

        circle(1230,107,8);
        circle(1240,138,8);
        circle(1195,64,8);
        circle(1173,50,8);


        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);


        circle(1114,302,8);
        circle(1141,298,8);
        circle(1174,288,8);
        circle(1210,258,8);

        circle(1240,202,8);
        circle(1243,161,8);
        circle(1195,274,8);
        circle(1226,237,8);
        circle(1233,222,8);

        circle(1103,35,8);
        circle(1063,43,8);
        circle(977,141,8);
        circle(975,173,8);
        circle(983,119,8);

        circle(1039,55,8);
        circle(1009,77,8);
        circle(996,241,8);
        circle(1003,253,8);
        circle(1023,272,8);
        circle(1045,287,8);
        circle(994,57,8);
        circle(1050,317,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Ac");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Actinum");
        outtextxy(1000,420,"Symbool:Ac");
        outtextxy(1000,440," Atom number:89");
        outtextxy(1000,460,"Atomic mass:227.00");
        outtextxy(1000,480,"Group number:3");
        outtextxy(1000,500,"Periode number:7");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,32,3.");
    }
    if(x>270&&x<314&&y>616&&y<668)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1110,170,160);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);


        circle(1139,37,8);
        circle(993,100,8);
        circle(984,218,8);
        circle(1263,207,8);
        circle(1081,300,8);

        circle(1230,107,8);
        circle(1240,138,8);
        circle(1195,64,8);
        circle(1173,50,8);


        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);


        circle(1114,302,8);
        circle(1141,298,8);
        circle(1174,288,8);
        circle(1210,258,8);

        circle(1240,202,8);
        circle(1243,161,8);
        circle(1195,274,8);
        circle(1226,237,8);
        circle(1233,222,8);

        circle(1103,35,8);
        circle(1063,43,8);
        circle(977,141,8);
        circle(975,173,8);
        circle(983,119,8);

        circle(1039,55,8);
        circle(1009,77,8);
        circle(996,241,8);
        circle(1003,253,8);
        circle(1023,272,8);
        circle(1045,287,8);
        circle(994,57,8);
        circle(1050,317,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Th");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Thorium");
        outtextxy(1000,420,"Symbool:Th");
        outtextxy(1000,440," Atom number:90");
        outtextxy(1000,460,"Atomic mass:232.04");
        outtextxy(1000,480,"Group number:3");
        outtextxy(1000,500,"Periode number:7");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,32,4.");
    }
    if(x>314&&x<358&&y>616&&y<668)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1110,170,160);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);


        circle(1139,37,8);
        circle(993,100,8);
        circle(984,218,8);
        circle(1263,207,8);
        circle(1081,300,8);

        circle(1230,107,8);
        circle(1240,138,8);
        circle(1195,64,8);
        circle(1173,50,8);


        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);


        circle(1114,302,8);
        circle(1141,298,8);
        circle(1174,288,8);
        circle(1210,258,8);

        circle(1240,202,8);
        circle(1243,161,8);
        circle(1195,274,8);
        circle(1226,237,8);
        circle(1233,222,8);

        circle(1103,35,8);
        circle(1063,43,8);
        circle(977,141,8);
        circle(975,173,8);
        circle(983,119,8);

        circle(1039,55,8);
        circle(1009,77,8);
        circle(996,241,8);
        circle(1003,253,8);
        circle(1023,272,8);
        circle(1045,287,8);
        circle(994,57,8);
        circle(1050,317,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Pa");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Protactinium");
        outtextxy(1000,420,"Symbool:Pa");
        outtextxy(1000,440," Atom number:91");
        outtextxy(1000,460,"Atomic mass:231.04");
        outtextxy(1000,480,"Group number:3");
        outtextxy(1000,500,"Periode number:7");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,32,5.");
    }
    if(x>358&&x<425&&y>616&&y<668)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1110,170,160);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);


        circle(1139,37,8);
        circle(993,100,8);
        circle(984,218,8);
        circle(1263,207,8);
        circle(1081,300,8);

        circle(1230,107,8);
        circle(1240,138,8);
        circle(1195,64,8);
        circle(1173,50,8);


        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);


        circle(1114,302,8);
        circle(1141,298,8);
        circle(1174,288,8);
        circle(1210,258,8);

        circle(1240,202,8);
        circle(1243,161,8);
        circle(1195,274,8);
        circle(1226,237,8);
        circle(1233,222,8);

        circle(1103,35,8);
        circle(1063,43,8);
        circle(977,141,8);
        circle(975,173,8);
        circle(983,119,8);

        circle(1039,55,8);
        circle(1009,77,8);
        circle(996,241,8);
        circle(1003,253,8);
        circle(1023,272,8);
        circle(1045,287,8);
        circle(994,57,8);
        circle(1050,317,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"U");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Uranium");
        outtextxy(1000,420,"Symbool:U");
        outtextxy(1000,440," Atom number:92");
        outtextxy(1000,460,"Atomic mass:238.03");
        outtextxy(1000,480,"Group number:3");
        outtextxy(1000,500,"Periode number:7");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,32,6.");
    }
    if(x>425&&x<470&&y>616&&y<668)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1110,170,160);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);


        circle(1139,37,8);
        circle(993,100,8);
        circle(984,218,8);
        circle(1263,207,8);
        circle(1081,300,8);

        circle(1230,107,8);
        circle(1240,138,8);
        circle(1195,64,8);
        circle(1173,50,8);


        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);


        circle(1114,302,8);
        circle(1141,298,8);
        circle(1174,288,8);
        circle(1210,258,8);

        circle(1240,202,8);
        circle(1243,161,8);
        circle(1195,274,8);
        circle(1226,237,8);
        circle(1233,222,8);

        circle(1103,35,8);
        circle(1063,43,8);
        circle(977,141,8);
        circle(975,173,8);
        circle(983,119,8);

        circle(1039,55,8);
        circle(1009,77,8);
        circle(996,241,8);
        circle(1003,253,8);
        circle(1023,272,8);
        circle(1045,287,8);
        circle(994,57,8);
        circle(1050,317,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Np");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Neptunium");
        outtextxy(1000,420,"Symbool:Np");
        outtextxy(1000,440," Atom number:93");
        outtextxy(1000,460,"Atomic mass:237.00");
        outtextxy(1000,480,"Group number:3");
        outtextxy(1000,500,"Periode number:7");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,32,7.");
    }
    if(x>470&&x<515&&y>616&&y<668)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1110,170,160);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);


        circle(1139,37,8);
        circle(993,100,8);
        circle(984,218,8);
        circle(1263,207,8);
        circle(1081,300,8);

        circle(1230,107,8);
        circle(1240,138,8);
        circle(1195,64,8);
        circle(1173,50,8);


        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);


        circle(1114,302,8);
        circle(1141,298,8);
        circle(1174,288,8);
        circle(1210,258,8);

        circle(1240,202,8);
        circle(1243,161,8);
        circle(1195,274,8);
        circle(1226,237,8);
        circle(1233,222,8);

        circle(1103,35,8);
        circle(1063,43,8);
        circle(977,141,8);
        circle(975,173,8);
        circle(983,119,8);

        circle(1039,55,8);
        circle(1009,77,8);
        circle(996,241,8);
        circle(1003,253,8);
        circle(1023,272,8);
        circle(1045,287,8);
        circle(994,57,8);
        circle(1050,317,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Pu");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Plutonium");
        outtextxy(1000,420,"Symbool:Pu");
        outtextxy(1000,440," Atom number:94");
        outtextxy(1000,460,"Atomic mass:244.00");
        outtextxy(1000,480,"Group number:3");
        outtextxy(1000,500,"Periode number:7");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,32,8.");
    }
    if(x>522&&x<568&&y>616&&y<668)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1110,170,160);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);


        circle(1139,37,8);
        circle(993,100,8);
        circle(984,218,8);
        circle(1263,207,8);
        circle(1081,300,8);

        circle(1230,107,8);
        circle(1240,138,8);
        circle(1195,64,8);
        circle(1173,50,8);


        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);


        circle(1114,302,8);
        circle(1141,298,8);
        circle(1174,288,8);
        circle(1210,258,8);

        circle(1240,202,8);
        circle(1243,161,8);
        circle(1195,274,8);
        circle(1226,237,8);
        circle(1233,222,8);

        circle(1103,35,8);
        circle(1063,43,8);
        circle(977,141,8);
        circle(975,173,8);
        circle(983,119,8);

        circle(1039,55,8);
        circle(1009,77,8);
        circle(996,241,8);
        circle(1003,253,8);
        circle(1023,272,8);
        circle(1045,287,8);
        circle(994,57,8);
        circle(1050,317,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Am");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Americium");
        outtextxy(1000,420,"Symbool:Am");
        outtextxy(1000,440," Atom number:95");
        outtextxy(1000,460,"Atomic mass:243.00");
        outtextxy(1000,480,"Group number:3");
        outtextxy(1000,500,"Periode number:7");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,32,9.");
    }
    if(x>568&&x<610&&y>616&&y<668)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1110,170,160);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);


        circle(1139,37,8);
        circle(993,100,8);
        circle(984,218,8);
        circle(1263,207,8);
        circle(1081,300,8);

        circle(1230,107,8);
        circle(1240,138,8);
        circle(1195,64,8);
        circle(1173,50,8);


        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);


        circle(1114,302,8);
        circle(1141,298,8);
        circle(1174,288,8);
        circle(1210,258,8);

        circle(1240,202,8);
        circle(1243,161,8);
        circle(1195,274,8);
        circle(1226,237,8);
        circle(1233,222,8);

        circle(1103,35,8);
        circle(1063,43,8);
        circle(977,141,8);
        circle(975,173,8);
        circle(983,119,8);

        circle(1039,55,8);
        circle(1009,77,8);
        circle(996,241,8);
        circle(1003,253,8);
        circle(1023,272,8);
        circle(1045,287,8);
        circle(994,57,8);
        circle(1050,317,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Cm");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Curium");
        outtextxy(1000,420,"Symbool:Cm");
        outtextxy(1000,440," Atom number:96");
        outtextxy(1000,460,"Atomic mass:247.00");
        outtextxy(1000,480,"Group number:3");
        outtextxy(1000,500,"Periode number:7");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,32,10.");
    }
    if(x>617&&x<664&&y>616&&y<668)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1110,170,160);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);


        circle(1139,37,8);
        circle(993,100,8);
        circle(984,218,8);
        circle(1263,207,8);
        circle(1081,300,8);

        circle(1230,107,8);
        circle(1240,138,8);
        circle(1195,64,8);
        circle(1173,50,8);


        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);


        circle(1114,302,8);
        circle(1141,298,8);
        circle(1174,288,8);
        circle(1210,258,8);

        circle(1240,202,8);
        circle(1243,161,8);
        circle(1195,274,8);
        circle(1226,237,8);
        circle(1233,222,8);

        circle(1103,35,8);
        circle(1063,43,8);
        circle(977,141,8);
        circle(975,173,8);
        circle(983,119,8);

        circle(1039,55,8);
        circle(1009,77,8);
        circle(996,241,8);
        circle(1003,253,8);
        circle(1023,272,8);
        circle(1045,287,8);
        circle(994,57,8);
        circle(1050,317,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Bk");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Berkelium");
        outtextxy(1000,420,"Symbool:Bk");
        outtextxy(1000,440," Atom number:97");
        outtextxy(1000,460,"Atomic mass:251.00");
        outtextxy(1000,480,"Group number:3");
        outtextxy(1000,500,"Periode number:7");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,32,11.");
    }
    if(x>664&&x<711&&y>616&&y<668)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1110,170,160);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);


        circle(1139,37,8);
        circle(993,100,8);
        circle(984,218,8);
        circle(1263,207,8);
        circle(1081,300,8);

        circle(1230,107,8);
        circle(1240,138,8);
        circle(1195,64,8);
        circle(1173,50,8);


        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);


        circle(1114,302,8);
        circle(1141,298,8);
        circle(1174,288,8);
        circle(1210,258,8);

        circle(1240,202,8);
        circle(1243,161,8);
        circle(1195,274,8);
        circle(1226,237,8);
        circle(1233,222,8);

        circle(1103,35,8);
        circle(1063,43,8);
        circle(977,141,8);
        circle(975,173,8);
        circle(983,119,8);

        circle(1039,55,8);
        circle(1009,77,8);
        circle(996,241,8);
        circle(1003,253,8);
        circle(1023,272,8);
        circle(1045,287,8);
        circle(994,57,8);
        circle(1050,317,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Cf");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Californium");
        outtextxy(1000,420,"Symbool:Cf");
        outtextxy(1000,440," Atom number:98");
        outtextxy(1000,460,"Atomic mass:252.00");
        outtextxy(1000,480,"Group number:3");
        outtextxy(1000,500,"Periode number:7");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,32,12.");
    }
    if(x>711&&x<758&&y>616&&y<668)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1110,170,160);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);


        circle(1139,37,8);
        circle(993,100,8);
        circle(984,218,8);
        circle(1263,207,8);
        circle(1081,300,8);

        circle(1230,107,8);
        circle(1240,138,8);
        circle(1195,64,8);
        circle(1173,50,8);


        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);


        circle(1114,302,8);
        circle(1141,298,8);
        circle(1174,288,8);
        circle(1210,258,8);

        circle(1240,202,8);
        circle(1243,161,8);
        circle(1195,274,8);
        circle(1226,237,8);
        circle(1233,222,8);

        circle(1103,35,8);
        circle(1063,43,8);
        circle(977,141,8);
        circle(975,173,8);
        circle(983,119,8);

        circle(1039,55,8);
        circle(1009,77,8);
        circle(996,241,8);
        circle(1003,253,8);
        circle(1023,272,8);
        circle(1045,287,8);
        circle(994,57,8);
        circle(1050,317,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Es");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Einestenium");
        outtextxy(1000,420,"Symbool:Es");
        outtextxy(1000,440," Atom number:99");
        outtextxy(1000,460,"Atomic mass:257.00");
        outtextxy(1000,480,"Group number:3");
        outtextxy(1000,500,"Periode number:7");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,32,13.");
    }
    if(x>758&&x<805&&y>616&&y<668)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1110,170,160);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);


        circle(1139,37,8);
        circle(993,100,8);
        circle(984,218,8);
        circle(1263,207,8);
        circle(1081,300,8);

        circle(1230,107,8);
        circle(1240,138,8);
        circle(1195,64,8);
        circle(1173,50,8);


        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);


        circle(1114,302,8);
        circle(1141,298,8);
        circle(1174,288,8);
        circle(1210,258,8);

        circle(1240,202,8);
        circle(1243,161,8);
        circle(1195,274,8);
        circle(1226,237,8);
        circle(1233,222,8);

        circle(1103,35,8);
        circle(1063,43,8);
        circle(977,141,8);
        circle(975,173,8);
        circle(983,119,8);

        circle(1039,55,8);
        circle(1009,77,8);
        circle(996,241,8);
        circle(1003,253,8);
        circle(1023,272,8);
        circle(1045,287,8);
        circle(994,57,8);
        circle(1050,317,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Fm");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Fermium");
        outtextxy(1000,420,"Symbool:Fm");
        outtextxy(1000,440," Atom number:100");
        outtextxy(1000,460,"Atomic mass:258.00");
        outtextxy(1000,480,"Group number:3");
        outtextxy(1000,500,"Periode number:7");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,32,14.");
    }
    if(x>805&&x<852&&y>616&&y<668)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1110,170,160);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);


        circle(1139,37,8);
        circle(993,100,8);
        circle(984,218,8);
        circle(1263,207,8);
        circle(1081,300,8);

        circle(1230,107,8);
        circle(1240,138,8);
        circle(1195,64,8);
        circle(1173,50,8);


        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);


        circle(1114,302,8);
        circle(1141,298,8);
        circle(1174,288,8);
        circle(1210,258,8);

        circle(1240,202,8);
        circle(1243,161,8);
        circle(1195,274,8);
        circle(1226,237,8);
        circle(1233,222,8);

        circle(1103,35,8);
        circle(1063,43,8);
        circle(977,141,8);
        circle(975,173,8);
        circle(983,119,8);

        circle(1039,55,8);
        circle(1009,77,8);
        circle(996,241,8);
        circle(1003,253,8);
        circle(1023,272,8);
        circle(1045,287,8);
        circle(994,57,8);
        circle(1050,317,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Md");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Mendelevium");
        outtextxy(1000,420,"Symbool:Md");
        outtextxy(1000,440," Atom number:101");
        outtextxy(1000,460,"Atomic mass:258.00");
        outtextxy(1000,480,"Group number:3");
        outtextxy(1000,500,"Periode number:7");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,32,15.");
    }
    if(x>852&&x<899&&y>616&&y<668)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1110,170,160);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);


        circle(1139,37,8);
        circle(993,100,8);
        circle(984,218,8);
        circle(1263,207,8);
        circle(1081,300,8);

        circle(1230,107,8);
        circle(1240,138,8);
        circle(1195,64,8);
        circle(1173,50,8);


        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);


        circle(1114,302,8);
        circle(1141,298,8);
        circle(1174,288,8);
        circle(1210,258,8);

        circle(1240,202,8);
        circle(1243,161,8);
        circle(1195,274,8);
        circle(1226,237,8);
        circle(1233,222,8);

        circle(1103,35,8);
        circle(1063,43,8);
        circle(977,141,8);
        circle(975,173,8);
        circle(983,119,8);

        circle(1039,55,8);
        circle(1009,77,8);
        circle(996,241,8);
        circle(1003,253,8);
        circle(1023,272,8);
        circle(1045,287,8);
        circle(994,57,8);
        circle(1050,317,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"No");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Norbelium");
        outtextxy(1000,420,"Symbool:No");
        outtextxy(1000,440," Atom number:102");
        outtextxy(1000,460,"Atomic mass:259.00");
        outtextxy(1000,480,"Group number:3");
        outtextxy(1000,500,"Periode number:7");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,32,16.");
    }
    if(x>899&&x<980&&y>616&&y<668)
    {
         printf("\a");
        circle(1110,170,20);
        circle(1110,170,40);
        circle(1110,170,60);
        circle(1110,170,85);
        circle(1110,170,110);
        circle(1110,170,135);
        circle(1110,170,160);
        circle(1104,132,8);
        circle(1126,134,8);
        circle(1071,161,8);
        circle(1074,188,8);
        circle(1103,208,8);
        circle(1127,204,8);
        circle(1147,184,8);
        circle(1146,155,8);
        circle(1070,126,8);
        circle(1074,217,8);
        circle(1049,174,8);
        circle(1168,166,8);
        circle(1119,228,8);
        circle(1160,200,8);
        circle(1152,127,8);
        circle(1115,110,8);
        circle(1078,92,8);
        circle(1103,86,8);
        circle(1127,86,8);
        circle(1054,105,8);
        circle(1039,123,8);
        circle(1169,109,8);
        circle(1029,143,8);

        circle(1050,230,8);
        circle(1115,252,8);
        circle(1156,70,8);
        circle(1192,157,8);
        circle(1026,184,8);
        circle(1163,233,8);
        circle(1034,207,8);
        circle(1026,163,8);
        circle(1071,244,8);
        circle(1088,251,8);

        circle(1181,86,8);
        circle(11202,113,8);
        circle(1213,132,8);
        circle(1219,178,8);
        circle(1192,238,8);
        circle(1142,245,8);
        circle(1178,217,8);

        circle(1024,101,8);
        circle(1003,143,8);
        circle(1005,201,8);
        circle(1046,258,8);
        circle(1128,274,8);

        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);

        circle(1082,274,8);
        circle(1019,230,8);
        circle(998,173,8);
        circle(1215,87,8);


        circle(1139,37,8);
        circle(993,100,8);
        circle(984,218,8);
        circle(1263,207,8);
        circle(1081,300,8);

        circle(1230,107,8);
        circle(1240,138,8);
        circle(1195,64,8);
        circle(1173,50,8);


        circle(1068,67,8);
        circle(1106,58,8);
        circle(1211,209,8);
        circle(1167,263,8);
        circle(1046,79,8);


        circle(1114,302,8);
        circle(1141,298,8);
        circle(1174,288,8);
        circle(1210,258,8);

        circle(1240,202,8);
        circle(1243,161,8);
        circle(1195,274,8);
        circle(1226,237,8);
        circle(1233,222,8);

        circle(1103,35,8);
        circle(1063,43,8);
        circle(977,141,8);
        circle(975,173,8);
        circle(983,119,8);

        circle(1039,55,8);
        circle(1009,77,8);
        circle(996,241,8);
        circle(1003,253,8);
        circle(1023,272,8);
        circle(1045,287,8);
        circle(994,57,8);
        circle(1050,317,8);
        circle(1127,178,6);
        circle(1097,157,6);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
        outtextxy(1103,161,"Lr");
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(1000,400,"Name:Lawreneium");
        outtextxy(1000,420,"Symbool:Lr");
        outtextxy(1000,440," Atom number:103");
        outtextxy(1000,460,"Atomic mass:262.00");
        outtextxy(1000,480,"Group number:3");
        outtextxy(1000,500,"Periode number:7");
        outtextxy(950,520,"Electron configration:2,");
        outtextxy(950,540,"8,8,18,18,32,17.");
    }
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    setcolor(BLUE);
    outtextxy(120,90,"D");
    delay(10);
    outtextxy(135,90,"E");
    delay(10);
    setcolor(RED);
    outtextxy(150,90,"M");
    delay(10);
    outtextxy(165,90,"E");
    delay(10);
    outtextxy(180,90,"T");
    delay(10);
    outtextxy(195,90,"R");
    delay(10);
    outtextxy(212,90,"I");
    delay(10);
    setcolor(GREEN);
    outtextxy(235,90,"M");
    delay(10);
    outtextxy(251,90,"E");
    delay(10);
    outtextxy(265,90,"N");
    delay(10);
    outtextxy(280,90,"D");
    delay(10);
    setcolor(YELLOW);
    outtextxy(295,90,"L");
    delay(10);
    outtextxy(310,90,"I");
    delay(10);
    outtextxy(325,90,"V");
    delay(10);
    outtextxy(342,90,"E");
    delay(10);
    outtextxy(155,140,"F");
    delay(10);
    outtextxy(173,140,"A");
    delay(10);
    outtextxy(191,140,"T");
    delay(10);
    outtextxy(209,140,"H");
    delay(10);
    outtextxy(227,140,"E");
    delay(10);
    outtextxy(245,140,"R");
    delay(10);
    setcolor(BLUE);
    outtextxy(280,140,"O");
    delay(10);
    outtextxy(298,140,"F");
    delay(10);
    setcolor(RED);
    outtextxy(333,140,"M");
    delay(10);
    outtextxy(351,140,"O");
    delay(10);
    outtextxy(369,140,"D");
    delay(10);
    outtextxy(387,140,"E");
    delay(10);
    outtextxy(405,140,"R");
    delay(10);
    outtextxy(423,140,"N");
    delay(10);
    setcolor(YELLOW);
    outtextxy(452,140,"P");
    delay(10);
    outtextxy(470,140,"E");
    delay(10);
    outtextxy(488,140,"R");
    delay(10);
    outtextxy(506,140,"I");
    delay(10);
    outtextxy(524,140,"O");
    delay(10);
    outtextxy(542,140,"D");
    delay(10);
    outtextxy(560,140,"I");
    delay(10);
    outtextxy(578,140,"C");
    delay(10);
    setcolor(GREEN);
    outtextxy(173,190,"T");
    delay(10);
    outtextxy(191,190,"A");
    delay(10);
    outtextxy(209,190,"B");
    delay(10);
    outtextxy(227,190,"L");
    delay(10);
    outtextxy(245,190,"E");
    delay(10);
    outtextxy(210,40,"GET REACTION");
    if(x>206&&x<405&&y>38&&y<57)
        reaction();
    while(!ismouseclick(WM_LBUTTONDOWN))
    {
        cout<<"1"<<endl;
        delay(0);
    }
    getmouseclick(WM_LBUTTONDOWN, x, y);
    cout<<"x"<<x;
    cout<<"y"<<y;
    graphics();
    getch();
}
void reaction()
{

    int x1,y1,x2,y2,i,j,k,x,y;
    setfillstyle(SOLID_FILL,9);
    bar(1,1,1400,700);
    setfillstyle(SOLID_FILL,RED);
    bar(30,80,75,540);
    for(x1=30,y1=146,x2=75,y2=146; y1<=540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,GREEN);
    bar(75,146,125,540);
    for(x1=75,y1=146,x2=125,y2=146; y1<=540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,BLUE);
    bar(125,278,175,540);
    for(x1=125,y1=344,x2=175,y2=344; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,YELLOW);
    bar(175,278,225,540);
    for(x1=175,y1=344,x2=225,y2=344; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,8);
    bar(225,278,275,540);
    for(x1=225,y1=344,x2=275,y2=344; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,10);
    bar(275,278,325,540);
    for(x1=275,y1=344,x2=325,y2=344; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,2);
    bar(325,278,375,540);
    for(x1=325,y1=344,x2=375,y2=344; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,7);
    bar(375,278,425,540);
    for(x1=375,y1=344,x2=425,y2=344; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,6);
    bar(425,278,475,540);
    for(x1=425,y1=344,x2=475,y2=344; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,5);
    bar(475,278,525,540);
    for(x1=475,y1=344,x2=525,y2=344; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,4);
    bar(525,278,575,540);
    for(x1=525,y1=344,x2=575,y2=344; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,3);
    bar(575,278,625,540);
    for(x1=575,y1=344,x2=625,y2=344; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,12);
    bar(625,148,675,540);
    for(x1=625,y1=214,x2=675,y2=214; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,11);
    bar(675,148,725,540);
    for(x1=675,y1=214,x2=725,y2=214; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,13);
    bar(725,148,775,540);
    for(x1=725,y1=214,x2=775,y2=214; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,14);
    bar(775,148,825,540);
    for(x1=775,y1=214,x2=825,y2=214; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,6);
    bar(825,148,875,540);
    for(x1=825,y1=214,x2=875,y2=214; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,4);
    bar(875,80,925,540);
    for(x1=875,y1=80,x2=925,y2=80; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
     setcolor(BLUE);
    outtextxy(35,85,"H");
     setcolor(RED);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(35,150,"Li");
    outtextxy(35,215,"Na");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
    outtextxy(35,285,"K");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(35,350,"Rb");
    outtextxy(35,415,"Cs");
    outtextxy(35,485,"Fr");
    outtextxy(80,153,"Be");
    outtextxy(80,218,"Mg");
    outtextxy(80,287,"Ca");
    outtextxy(80,351,"Sr");
    outtextxy(80,418,"Ba");
    outtextxy(80,485,"Ra");
     setcolor(YELLOW);
    outtextxy(130,282,"Sc");
    outtextxy(130,348,"Y");
     settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
    outtextxy(130,414,"Lanth");
    outtextxy(130,480,"Actin");
     settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(180,282,"Ti");
    outtextxy(180,348,"Zr");
    outtextxy(180,414,"Hf");
    outtextxy(180,480,"Rf");
    outtextxy(230,282,"V");
    outtextxy(230,348,"Nb");
    outtextxy(230,414,"Ta");
    outtextxy(230,480,"Db");
    outtextxy(280,282,"Cr");
    outtextxy(280,348,"Mo");
    outtextxy(280,414,"W");
    outtextxy(280,480,"Sg");
    outtextxy(330,282,"Mn");
    outtextxy(330,348,"Tc");
    outtextxy(330,414,"Re");
    outtextxy(330,480,"Bh");
    outtextxy(380,282,"Fe");
    outtextxy(380,348,"Ru");
    outtextxy(380,414,"Os");
    outtextxy(380,480,"Hs");
    outtextxy(430,282,"Co");
    outtextxy(430,348,"Rh");
    outtextxy(430,414,"Ir");
    outtextxy(430,480,"Mt");
    outtextxy(480,282,"Ni");
    outtextxy(480,348,"Pd");
    outtextxy(480,414,"Pt");
    outtextxy(480,480,"Ds");
    outtextxy(530,282,"Cu");
    outtextxy(530,348,"Ag");
    outtextxy(530,414,"Au");
    outtextxy(530,480,"Rg");
    outtextxy(580,282,"Zn");
    outtextxy(580,348,"Cd");
    outtextxy(580,414,"Hg");
    outtextxy(580,480,"Cn");
     setcolor(BLUE);
    outtextxy(630,153,"B");
     setcolor(RED);
    outtextxy(630,219,"Al");
    outtextxy(630,285,"Ga");
    outtextxy(630,351,"In");
    outtextxy(630,417,"Tl");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
    outtextxy(630,483,"Uut");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
     setcolor(BLUE);
    outtextxy(680,153,"C");
    outtextxy(680,219,"Si");
     setcolor(RED);
    outtextxy(680,285,"Ge");
    outtextxy(680,351,"sn");
    outtextxy(680,417,"Pb");
     settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
    outtextxy(680,483,"Uuq");
     setcolor(BLUE);
      settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(730,153,"N");
    outtextxy(730,219,"P");
    outtextxy(730,285,"As");
     setcolor(RED);
    outtextxy(730,351,"Sb");
    outtextxy(730,417,"Bi");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
    outtextxy(730,483,"Uup");
     setcolor(BLUE);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(780,153,"O");
    outtextxy(780,219,"S");
    outtextxy(780,285,"Se");
    outtextxy(780,351,"Te");
     setcolor(RED);
    outtextxy(780,417,"Po");
     settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
    outtextxy(780,483,"Uuh");
     setcolor(BLUE);
      settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(830,153,"F");
    outtextxy(830,219,"Cl");
    outtextxy(830,285,"Br");
    outtextxy(830,351,"I");
    outtextxy(830,417,"At");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
    outtextxy(830,485,"Uus");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(880,85,"He");
    outtextxy(880,151,"Ne");
    outtextxy(880,217,"Ar");
    outtextxy(880,283,"Kr");
    outtextxy(880,349,"Xe");
    outtextxy(880,415,"Rn");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
    outtextxy(880,481,"Uuo");
    setfillstyle(SOLID_FILL,BLUE);
    bar(28,560,975,615);
    setfillstyle(SOLID_FILL,GREEN);
    bar(28,615,975,670);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
     setcolor(YELLOW);
    outtextxy(35,575,"Lanthanide");
    outtextxy(35,595,"serise");
    outtextxy(35,625,"Actinide");
    outtextxy(35,645,"serise");
      setcolor(GREEN);
       outtextxy(230,575,"La");
    outtextxy(280,575,"Ce");
    outtextxy(330,575,"Pr");
    outtextxy(380,575,"Nd");
    outtextxy(430,575,"Pm");
    outtextxy(480,575,"Sm");
    outtextxy(530,575,"Eu");
    outtextxy(580,575,"Gd");
    outtextxy(630,575,"Tb");
    outtextxy(680,575,"Dy");
    outtextxy(730,575,"Ho");
    outtextxy(780,575,"Er");
    outtextxy(830,575,"Tm");
    outtextxy(880,575,"Yb");
    outtextxy(930,575,"Lu");
     outtextxy(230,625,"Ac");
    outtextxy(280,625,"Th");
    outtextxy(330,625,"Pa");
    outtextxy(380,625,"U");
    outtextxy(430,625,"Np");
    outtextxy(480,625,"Pu");
    outtextxy(530,625,"Am");
    outtextxy(580,625,"Cm");
    outtextxy(630,625,"Bk");
    outtextxy(680,625,"Cf");
    outtextxy(730,625,"Es");
    outtextxy(780,625,"Fm");
    outtextxy(830,625,"Md");
    outtextxy(880,625,"No");
    outtextxy(930,625,"Lr");
      setcolor(YELLOW);
    outtextxy(35,60,"1");
    outtextxy(90,126,"2");
    outtextxy(143,258,"3");
    outtextxy(191,258,"4");
    outtextxy(239,258,"5");
    outtextxy(287,258,"6");
    outtextxy(335,258,"7");
    outtextxy(383,258,"8");
    outtextxy(431,258,"9");
    outtextxy(481,258,"10");
    outtextxy(531,258,"11");
    outtextxy(581,258,"12");
    outtextxy(631,126,"13");
    outtextxy(681,126,"14");
    outtextxy(731,126,"15");
    outtextxy(781,126,"16");
    outtextxy(831,126,"17");
    outtextxy(881,44,"18");
    outtextxy(890,62,"0");
    outtextxy(10,90,"1");
    outtextxy(10,156,"2");
    outtextxy(10,222,"3");
    outtextxy(10,288,"4");
    outtextxy(10,354,"5");
    outtextxy(10,420,"6");
    outtextxy(10,486,"7");
    setcolor(YELLOW);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,8);
    outtextxy(204,160,"->");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(190,10,"Modern IUPAC Periodic Table of the Elements");
    outtextxy(210,40,"CLICK  2 Elements AND GET THEIR REACTION");
    outtextxy(210,60,"CLICK HERE FOR 3 ELEMENTS REACTION");
    while(!ismouseclick(WM_LBUTTONDOWN))
    {
        cout<<"1"<<endl;
        delay(0);
    }
    getmouseclick(WM_LBUTTONDOWN, x, y);
    cout<<"x"<<x;
    cout<<"y"<<y;
     if(x>209&&x<475&&y>59&&y<80)
        compound();
    if(x>186&&x<880&&y>9&&y<29)
        graphics();
    if(x>30&&x<75&&y<146&&y>80)
    {
         printf("\a");
        outtextxy(150,100,"CLICK SECOND");
         settextstyle(DEFAULT_FONT,HORIZ_DIR,8);
          outtextxy(950,300,"H WITH");
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            cout<<"1"<<endl;
            delay(0);
        }
        getmouseclick(WM_LBUTTONDOWN, x, y);
        cout<<"x"<<x;
        cout<<"y"<<y;
        if(x>825&&x<875&&y>146&&y<212)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<145; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"2H+");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"F");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(470,i,"2");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(550,i,"->2HF");
            }
            for(i=-20; i<400; i=i+1)
            {
                settextstyle(0,0,4);
                outtextxy(i,350,"[HYDROGENFLURIDE]");
            }
        }
        if(x>825&&x<875&&y>212&&y<278)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<70; i++)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"2H+");
            }
            for(i=700; i>200; i--)
            {
                settextstyle(0,0,10);
                outtextxy(310,i,"Cl");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(470,i,"2");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(550,i,"->2HCl");
            }
            for(i=700; i>400; i--)
            {
                settextstyle(0,0,4);
                outtextxy(350,i,"[HYDROGENCHLORIDE]");
            }
        }
        if(x>825&&x<875&&y>278&&y<344)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<70; i++)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"2H+");
            }
            for(i=700; i>200; i--)
            {
                settextstyle(0,0,10);
                outtextxy(310,i,"Br");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(470,i,"2");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(550,i,"->2HBr");
            }
            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(350,i,"[HYDROGENBROMIDE]");
            }
        }
        if(x>825&&x<875&&y>344&&y<410)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<145; i++)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"2H+");
            }
            for(i=700; i>200; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"I");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(470,i,"2");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(550,i,"->2HI");
            }
            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(350,i,"[HYDROGENIODIDE]");
            }
        }
        if(x>725&&x<775&&y>146&&y<212)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<145; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"3H");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(300,i,"2");
            }
            for(i=0; i<200; i=i+1)
            {
                outtextxy(370,i,"+");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(445,i,"N");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(523,i,"2");
            }
            for(i=0; i<200; i=i+1)
            {
                outtextxy(595,i,"->");
            }
            for(i=1320; i>755; i--)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"2NH");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(995,i,"3");
            }
            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(350,i,"[AMMONIA]");
            }
        }
        if(x>775&&x<825&&y>146&&y<212)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<140; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(i,100,"4H+");
            }
            for(i=0; i<100; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"O");
            }
            for(i=0; i<130; i=i+1)
            {
                outtextxy(470,i,"2");
            }
            for(i=1320; i>550; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(i,100,"->2H");
            }
            for(i=0; i<130; i=i+1)
            {
                outtextxy(880,i,"2");
            }
            for(i=0; i<100; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(950,i,"O");
            }
            for(i=700; i>250; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(450,i,"[WATER]");
            }
            for(i=0; i<140; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(i,300,"2H+");
            }
            for(i=700; i>300; i--)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"O");
            }
            for(i=700; i>330; i--)
            {
                outtextxy(470,i,"2");
            }
            for(i=1320; i>550; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(i,300,"->2HO");
            }
            for(i=700; i>450; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(350,i,"[HYDROXIDE]");
            }
        }
    }
    if(x>30&&x<75&&y<340&&y>276)
    {
         printf("\a");
        outtextxy(150,100,"CLICK SECOND");
          settextstyle(DEFAULT_FONT,HORIZ_DIR,8);
          outtextxy(950,300,"K WITH");
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            cout<<"1"<<endl;
            delay(0);
        }
        getmouseclick(WM_LBUTTONDOWN, x, y);
        cout<<"x"<<x;
        cout<<"y"<<y;
        if(x>825&&x<875&&y>146&&y<212)
        {
            cleardevice();
            for(i=0; i<145; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"2K+");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"F");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(470,i,"2");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(550,i,"->2KF");
            }
            for(i=-20; i<350; i=i+1)
            {
                settextstyle(0,0,4);
                outtextxy(i,400,"[POTASIUMFLURIDE]");
            }
        }
        if(x>825&&x<875&&y>212&&y<278)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<70; i++)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"2K+");
            }
            for(i=700; i>200; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(310,i,"Cl");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(470,i,"2");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(550,i,"->2KCl");
            }
            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(350,i,"[POTASIUMCHLORIDE]");
            }
        }
        if(x>825&&x<875&&y>278&&y<344)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<70; i++)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"2K+");
            }
            for(i=700; i>200; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(310,i,"Br");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(470,i,"2");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(550,i,"->2KBr");
            }
            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(350,i,"[POTASIUMBROMIDE]");
            }
        }
        if(x>825&&x<875&&y>344&&y<410)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<145; i++)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"2K+");
            }
            for(i=700; i>200; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"I");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(470,i,"2");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(550,i,"->2KI");
            }
            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(350,i,"[POTASIUMIODIDE]");
            }
        }
        if(x>775&&x<825&&y>146&&y<212)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<70; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(i,100,"4K+");
            }
            for(i=0; i<100; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(315,i,"O");
            }
            for(i=0; i<130; i=i+1)
            {
                outtextxy(400,i,"2");
            }
            for(i=1320; i>480; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(i,100,"->2k");
            }
            for(i=0; i<130; i=i+1)
            {
                outtextxy(810,i,"2");
            }
            for(i=0; i<100; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(880,i,"O");
            }
            for(i=700; i>250; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(350,i,"[POTASIUMOXYIDE]");
            }
            for(i=0; i<70; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(i,300,"2K+");
            }
            for(i=700; i>300; i--)
            {
                settextstyle(0,0,10);
                outtextxy(315,i,"O");
            }
            for(i=700; i>330; i--)
            {
                outtextxy(400,i,"2");
            }
            for(i=1320; i>480; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(i,300,"->k");
            }
            for(i=700; i>330; i--)
            {
                outtextxy(740,i,"2");
            }
            for(i=700; i>300; i--)
            {
                settextstyle(0,0,10);
                outtextxy(810,i,"O");
            }
            for(i=700; i>330; i--)
            {
                outtextxy(890,i,"2");
            }
            for(i=700; i>450; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(350,i,"[POTASIUMPEROXYIDE]");
            }
            for(i=0; i<70; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(i,480,"K+");
            }
            for(i=700; i>480; i--)
            {
                settextstyle(0,0,10);
                outtextxy(245,i,"O");
            }
            for(i=700; i>510; i--)
            {
                outtextxy(330,i,"2");
            }
            for(i=1320; i>400; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(i,480,"->K");
            }
            for(i=700; i>480; i--)
            {
                settextstyle(0,0,10);
                outtextxy(645,i,"O");
            }
            for(i=700; i>510; i--)
            {
                outtextxy(740,i,"2");
            }
            for(i=700; i>600; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(350,i,"[POTASIUMSUPEROXYIDE]");
            }
        }
    }
    if(x>30&&x<75&&y<410&&y>342)
    {
         printf("\a");
        outtextxy(150,100,"CLICK SECOND");
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            cout<<"1"<<endl;
            delay(0);
        }
        getmouseclick(WM_LBUTTONDOWN, x, y);
        cout<<"x"<<x;
        cout<<"y"<<y;
        if(x>825&&x<875&&y>146&&y<212)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<70; i++)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"2Rb+");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"F");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(470,i,"2");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(550,i,"->2RbF");
            }
            for(i=-20; i<350; i=i+1)
            {
                settextstyle(0,0,4);
                outtextxy(i,400,"[RUBIDIUMFLURIDE]");
            }
        }
        if(x>825&&x<875&&y>212&&y<278)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<70; i++)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"2Rb+");
            }
            for(i=700; i>200; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"Cl");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(540,i,"2");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(620,i,"->2RbCl");
            }
            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(350,i,"[RUBIDIUMCHLORIDE]");
            }
        }
        if(x>825&&x<875&&y>278&&y<344)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<70; i++)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"2Rb+");
            }
            for(i=700; i>200; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"Br");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(550,i,"2");
            }
            for(i=1320; i>630; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"->2RbBr");
            }
            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(350,i,"[RUBIDIUMBROMIDE]");
            }
        }
        if(x>825&&x<875&&y>344&&y<410)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<70; i++)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"2Rb+");
            }
            for(i=700; i>200; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"I");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(470,i,"2");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(550,i,"->2RbI");
            }
            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(350,i,"[RUBIDIUMIODIDE]");
            }
        }
        if(x>775&&x<825&&y>146&&y<212)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<70; i++)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"Rb+");
            }
            for(i=700; i>200; i--)
            {
                settextstyle(0,0,10);
                outtextxy(315,i,"O");
            }
            for(i=1300; i>450; i--)
            {
                settextstyle(0,0,30);
                outtextxy(i,200,"->FIRE");
            }
        }
    }
    if(x>30&&x<75&&y<476&&y>410)
    {
         printf("\a");
        outtextxy(150,100,"CLICK SECOND");
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            cout<<"1"<<endl;
            delay(0);
        }
        getmouseclick(WM_LBUTTONDOWN, x, y);
        cout<<"x"<<x;
        cout<<"y"<<y;
        if(x>825&&x<875&&y>146&&y<212)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<70; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"2Cs+");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"F");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(470,i,"2");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(550,i,"->2CsF");
            }
            for(i=-20; i<350; i=i+1)
            {
                settextstyle(0,0,4);
                outtextxy(i,400,"[CEASIUMFLURIDE]");
            }
        }
        if(x>825&&x<875&&y>212&&y<278)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<70; i++)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"2Cs+");
            }
            for(i=700; i>200; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"Cl");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(550,i,"2");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(620,i,"->2CsCl");
            }
            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(350,i,"[CAESIUMCHLORIDE]");
            }
        }
        if(x>825&&x<875&&y>278&&y<344)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<70; i++)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"2Cs+");
            }
            for(i=700; i>200; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"Br");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(550,i,"2");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(620,i,"->2CsBr");
            }
            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(350,i,"[CAESIUMBROMIDE]");
            }
        }
        if(x>825&&x<875&&y>344&&y<410)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<70; i++)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"2Cs+");
            }
            for(i=700; i>200; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"I");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(470,i,"2");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(550,i,"->2CsI");
            }
            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(385,i,"[CAESIUMIODIDE]");
            }
        }
    }
    if(x>30&&x<75&&y<276&&y>212)
    {
         printf("\a");
        outtextxy(150,100,"CLICK SECOND");
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            cout<<"1"<<endl;
            delay(0);
        }
        getmouseclick(WM_LBUTTONDOWN, x, y);
        cout<<"x"<<x;
        cout<<"y"<<y;
        if(x>825&&x<875&&y>212&&y<278)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<70; i++)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"2Na+");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"Cl");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(550,i,"2");
            }
            for(i=1320; i>621; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"->2NaCl");
            }
            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(350,i,"[SODIUMCHLORIDE]");
            }
        }
        if(x>825&&x<875&&y>146&&y<212)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<70; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"2Na+");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"F");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(470,i,"2");
            }
            for(i=1320; i>550; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"->2NaF");
            }
            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(385,i,"[SODIUMFLORIDE]");
            }
        }

        if(x>825&&x<875&&y>344&&y<410)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<70; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"2Na+");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"I");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(470,i,"2");
            }
            for(i=1320; i>550; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"->2NaI");
            }
            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(350,i,"[SODIUMIODIDE]");
            }
        }
        if(x>825&&x<875&&y>278&&y<344)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<70; i++)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"2Na+");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"Br");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(550,i,"2");
            }
            for(i=1320; i>620; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"->2NaBr");
            }
            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(350,i,"[SODIUMBROMIDE]");
            }
        }
        if(x>775&&x<825&&y>146&&y<212)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<70; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(i,100,"4Na+");
            }
            for(i=0; i<100; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"O");
            }
            for(i=0; i<130; i=i+1)
            {
                outtextxy(470,i,"2");
            }
            for(i=1320; i>550; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(i,100,"->2Na");
            }
            for(i=0; i<130; i=i+1)
            {
                outtextxy(950,i,"2");
            }
            for(i=0; i<100; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(1020,i,"O");
            }
            for(i=700; i>250; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(350,i,"[SODIUMOXYIDE]");
            }
            for(i=0; i<70; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(i,300,"2Na+");
            }
            for(i=700; i>300; i--)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"O");
            }
            for(i=700; i>330; i--)
            {
                outtextxy(470,i,"2");
            }
            for(i=1320; i>550; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(i,300,"->Na");
            }
            for(i=700; i>330; i--)
            {
                outtextxy(880,i,"2");
            }
            for(i=700; i>300; i--)
            {
                settextstyle(0,0,10);
                outtextxy(950,i,"O");
            }
            for(i=700; i>330; i--)
            {
                outtextxy(1030,i,"2");
            }
            for(i=700; i>450; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(350,i,"[SODIUMPEROXYIDE]");
            }
        }
    }
    if(x>30&&x<75&&y<212&&y>146)
    {
         printf("\a");
        outtextxy(150,100,"CLICK SECOND");
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            cout<<"1"<<endl;
            delay(0);
        }
        getmouseclick(WM_LBUTTONDOWN, x, y);
        cout<<"x"<<x;
        cout<<"y"<<y;
        if(x>825&&x<875&&y>146&&y<212)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<70; i++)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"2Li+");
            }
            for(i=700; i>200; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"F");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(470,i,"2");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(550,i,"->2LiF");
            }
            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(350,i,"[LITHIUMFLORIDE]");
            }
        }
        if(x>825&&x<875&&y>212&&y<278)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<70; i++)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"2Li+");
            }
            for(i=700; i>200; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"Cl");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(550,i,"2");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(620,i,"->2LiCl");
            }
            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(350,i,"[LITHIUMCHLORIDE]");
            }
        }
        if(x>825&&x<875&&y>278&&y<344)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<70; i++)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"2Li+");
            }
            for(i=700; i>200; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"Br");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(550,i,"2");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(620,i,"->2LiBr");
            }
            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(350,i,"[LITHIUMBROMIDE]");
            }
        }
        if(x>825&&x<875&&y>344&&y<410)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<70; i++)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"2Li+");
            }
            for(i=700; i>200; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"I");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(470,i,"2");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(550,i,"->2LiI");
            }
            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(385,i,"[LITHIUMIODIDE]");
            }
        }
        if(x>775&&x<825&&y>146&&y<212)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<70; i++)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"4Li+");
            }
            for(i=700; i>200; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"2O");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(550,i,"2");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(620,i,"->2Li");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(1020,i,"2");
            }
            for(i=0; i<200; i=i+1)
            {
                outtextxy(1090,i,"O");
            }
            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(385,i,"[LITHIUMOXYIDE]");
            }
        }
    }
    if(x>75&&x<125&&y<212&&y>146)
    {
         printf("\a");
        outtextxy(150,100,"CLICK SECOND");
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            cout<<"1"<<endl;
            delay(0);
        }
        getmouseclick(WM_LBUTTONDOWN, x, y);
        cout<<"x"<<x;
        cout<<"y"<<y;
        if(x>825&&x<875&&y>212&&y<278)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<145; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"Be+");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"Cl");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(550,i,"2");
            }
            for(i=1320; i>630; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"->BeCl");
            }
            for(i=0; i<230; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(1115,i,"2");
            }
            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(450,i,"[BERILIUMCHLORIDE]");
            }
        }
        if(x>825&&x<875&&y>146&&y<212)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<145; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"Be+");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"F");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(470,i,"2");
            }
            for(i=1320; i>550; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"->BeF");
            }
            for(i=0; i<230; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(955,i,"2");
            }
            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(450,i,"[BERILIUMFLORIDE]");
            }
        }

        if(x>825&&x<875&&y>344&&y<410)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<145; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"Be+");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"I");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(470,i,"2");
                delay(0);
            }
            for(i=1320; i>550; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"->BeI");
            }
            for(i=0; i<230; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(955,i,"2");
            }
            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(450,i,"[BERILIUMIODIDE]");
            }
        }
        if(x>825&&x<875&&y>278&&y<344)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<145; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"Be+");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"Br");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(550,i,"2");
            }
            for(i=1320; i>630; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"->BeBr");
            }
            for(i=0; i<230; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(1115,i,"2");
            }
            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(450,i,"[BERILIUMBROMIDE]");
            }
        }
    }
    if(x>75&&x<125&&y<276&&y>212)
    {
         printf("\a");
        outtextxy(150,100,"CLICK SECOND");
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            cout<<"1"<<endl;
            delay(0);
        }
        getmouseclick(WM_LBUTTONDOWN, x, y);
        cout<<"x"<<x;
        cout<<"y"<<y;
        if(x>825&&x<875&&y>212&&y<278)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<145; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"Mg+");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"Cl");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(550,i,"2");
            }
            for(i=1320; i>630; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"->MgCl");
            }
            for(i=0; i<230; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(1115,i,"2");
            }
            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(450,i,"[MAGNSIUMCHLORIDE]");
            }
        }
        if(x>825&&x<875&&y>146&&y<212)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<145; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"Mg+");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"F");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(470,i,"2");
            }
            for(i=1320; i>550; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"->MgF");
            }
            for(i=0; i<230; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(955,i,"2");
            }
            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(450,i,"[MAGNISIUMFLORIDE]");
            }
        }

        if(x>825&&x<875&&y>344&&y<410)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<145; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"Mg+");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"I");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(470,i,"2");
            }
            for(i=1320; i>550; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"->MgI");
            }
            for(i=0; i<230; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(955,i,"2");
            }
            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(450,i,"[MAGNISIUMIODIDE]");
            }
        }
        if(x>825&&x<875&&y>278&&y<344)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<145; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"Mg+");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"Br");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(550,i,"2");
            }
            for(i=1320; i>630; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"->MgBr");
            }
            for(i=0; i<230; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(1115,i,"2");
            }
            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(450,i,"[MAGNISIUMBROMIDE]");
            }
        }
        if(x>725&&x<775&&y>146&&y<212)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<70; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(i,300,"3Mg+");
            }
            for(i=700; i>300; i--)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"N");
            }
            for(i=700; i>330; i--)
            {
                outtextxy(470,i,"2");
            }
            for(i=1320; i>550; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(i,300,"->Mg");
            }
            for(i=700; i>330; i--)
            {
                outtextxy(875,i,"3");
            }
            for(i=700; i>300; i--)
            {
                settextstyle(0,0,10);
                outtextxy(950,i,"N");
            }
            for(i=700; i>330; i--)
            {
                outtextxy(1030,i,"2");
            }
            for(i=700; i>450; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(350,i,"[MAGNISIUMNITRIDE]");
            }
        }
        if(x>725&&x<775&&y>212&&y<278)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<70; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(i,300,"3Mg+");
            }
            for(i=700; i>300; i--)
            {
                outtextxy(385,i,"2");
            }
            for(i=700; i>300; i--)
            {
                settextstyle(0,0,10);
                outtextxy(470,i,"P");
            }
            for(i=1320; i>550; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(i,300,"->Mg");
            }
            for(i=700; i>330; i--)
            {
                outtextxy(875,i,"3");
            }
            for(i=700; i>300; i--)
            {
                settextstyle(0,0,10);
                outtextxy(950,i,"P");
            }
            for(i=700; i>330; i--)
            {
                outtextxy(1030,i,"2");
            }
            for(i=700; i>450; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(350,i,"[MAGNISIUMPHOSPHIDE]");
            }
        }
    }
    if(x>75&&x<125&&y<340&&y>276)
    {
         printf("\a");
        outtextxy(150,100,"CLICK SECOND");
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            cout<<"1"<<endl;
            delay(0);
        }
        getmouseclick(WM_LBUTTONDOWN, x, y);
        cout<<"x"<<x;
        cout<<"y"<<y;
        if(x>825&&x<875&&y>146&&y<212)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<145; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"Ca+");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"F");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(470,i,"2");
            }
            for(i=1320; i>550; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"->CaF");
            }
            for(i=0; i<230; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(955,i,"2");
            }
            for(i=-20; i<200; i=i+1)
            {
                settextstyle(0,0,4);
                outtextxy(i,300,"[CALSIUMFLURIDE]");
            }
        }
        if(x>825&&x<875&&y>212&&y<278)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<145; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"Ca+");
            }
            for(i=700; i>200; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"Cl");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(550,i,"2");
            }
            for(i=1320; i>630; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"->CaCl");
            }
            for(i=0; i<230; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(1115,i,"2");
            }
            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(450,i,"[CALSIUMCHLORIDE]");
            }
        }
        if(x>825&&x<875&&y>278&&y<344)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<145; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"Ca+");
            }
            for(i=700; i>200; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"Br");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(550,i,"2");
            }
            for(i=1320; i>630; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"->CaBr");
            }
            for(i=0; i<230; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(1115,i,"2");
            }
            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(450,i,"[CALSIUMBROMIDE]");
            }
        }
        if(x>825&&x<875&&y>344&&y<410)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<145; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"Ca+");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"I");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(470,i,"2");
            }
            for(i=1320; i>550; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"->CaI");
            }
            for(i=0; i<230; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(955,i,"2");
            }

            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(450,i,"[CALSIUMIODIDE]");
            }
        }
        if(x>725&&x<775&&y>146&&y<212)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<70; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(i,300,"3Ca+");
            }
            for(i=700; i>300; i--)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"N");
            }
            for(i=700; i>330; i--)
            {
                outtextxy(470,i,"2");
            }
            for(i=1320; i>550; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(i,300,"->Ca");
            }
            for(i=700; i>330; i--)
            {
                outtextxy(875,i,"3");
            }
            for(i=700; i>300; i--)
            {
                settextstyle(0,0,10);
                outtextxy(950,i,"N");
            }
            for(i=700; i>330; i--)
            {
                outtextxy(1030,i,"2");
            }
            for(i=700; i>450; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(350,i,"[CALSIUMNITRIDE]");
            }
        }
        if(x>725&&x<775&&y>212&&y<278)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<70; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(i,300,"3Ca+");
            }
            for(i=700; i>300; i--)
            {
                outtextxy(385,i,"2");
            }
            for(i=700; i>300; i--)
            {
                settextstyle(0,0,10);
                outtextxy(470,i,"P");
            }
            for(i=1320; i>550; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(i,300,"->Ca");
            }
            for(i=700; i>330; i--)
            {
                outtextxy(875,i,"3");
            }
            for(i=700; i>300; i--)
            {
                settextstyle(0,0,10);
                outtextxy(950,i,"P");
            }
            for(i=700; i>330; i--)
            {
                outtextxy(1030,i,"2");
            }
            for(i=700; i>450; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(350,i,"[CALSIUMPHOSPHIDE]");
            }
        }
    }
    if(x>75&&x<125&&y<410&&y>342)
    {
         printf("\a");
        outtextxy(150,100,"CLICK SECOND");
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            cout<<"1"<<endl;
            delay(0);
        }
        getmouseclick(WM_LBUTTONDOWN, x, y);
        cout<<"x"<<x;
        cout<<"y"<<y;
        if(x>825&&x<875&&y>212&&y<278)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<145; i++)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"Sr+");
            }
            for(i=700; i>200; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"Cl");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(550,i,"2");
            }
            for(i=1320; i>630; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"->SrCl");
            }
            for(i=0; i<230; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(1115,i,"2");
            }

            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(450,i,"[STRONTIUMCHLORIDE]");
            }
        }
        if(x>825&&x<875&&y>278&&y<344)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<145; i++)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"Sr+");
            }
            for(i=700; i>200; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"Br");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(550,i,"2");
            }
            for(i=1320; i>630; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"->SrBr");
            }
            for(i=0; i<230; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(1115,i,"2");
            }

            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(450,i,"[STRONTIUMBROMIDE]");
            }
        }
        if(x>825&&x<875&&y>344&&y<410)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<145; i++)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"Sr+");
            }
            for(i=700; i>200; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"I");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(470,i,"2");
            }
            for(i=1320; i>550; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"->SrI");
            }
            for(i=0; i<230; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(955,i,"2");
            }

            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(450,i,"[STRONTIUMIODIDE]");
            }
        }
        if(x>825&&x<875&&y>146&&y<212)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<145; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"Sr+");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"F");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(470,i,"2");
            }
            for(i=1320; i>550; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"->SrF");
            }
            for(i=0; i<230; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(955,i,"2");
            }
            for(i=-20; i<200; i=i+1)
            {
                settextstyle(0,0,4);
                outtextxy(i,300,"[STRONTIUMFLURIDE]");
            }
        }
    }
    if(x>75&&x<125&&y<476&&y>410)
    {
         printf("\a");
        outtextxy(150,100,"CLICK SECOND");
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            cout<<"1"<<endl;
            delay(0);
        }
        getmouseclick(WM_LBUTTONDOWN, x, y);
        cout<<"x"<<x;
        cout<<"y"<<y;
        if(x>825&&x<875&&y>212&&y<278)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<145; i++)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"Ba+");
            }
            for(i=700; i>200; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"Cl");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(550,i,"2");
            }
            for(i=1320; i>630; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"->BaCl");
            }
            for(i=0; i<230; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(1115,i,"2");
            }

            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(450,i,"[BARIUMCHLORIDE]");
            }
        }
        if(x>825&&x<875&&y>278&&y<344)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<145; i++)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"Ba+");
            }
            for(i=700; i>200; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"Br");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(550,i,"2");
            }
            for(i=1320; i>630; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"->BaBr");
            }
            for(i=0; i<230; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(1115,i,"2");
            }

            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(450,i,"[BARIUMBROMIDE]");
            }
        }
        if(x>825&&x<875&&y>344&&y<410)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<145; i++)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"Ba+");
            }
            for(i=700; i>200; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"I");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(470,i,"2");
            }
            for(i=1320; i>550; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"->BaI");
            }
            for(i=0; i<230; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(955,i,"2");
            }

            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(450,i,"[BARIUMIODIDE]");
            }
        }
    }
    if(x>625&&x<675&&y>146&&y<212)
    {
         printf("\a");
        outtextxy(150,100,"CLICK SECOND");
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            cout<<"1"<<endl;
            delay(0);
        }
        getmouseclick(WM_LBUTTONDOWN, x, y);
        cout<<"x"<<x;
        cout<<"y"<<y;
        if(x>725&&x<775&&y>146&&y<212)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<145; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"2B+");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"N");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(470,i,"2");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(550,i,"->2BN");
            }
            for(i=-20; i<400; i=i+1)
            {
                settextstyle(0,0,4);
                outtextxy(i,350,"[BORONNITRIDE]");
            }
        }
    }
    if(x>625&&x<675&&y>212&&y<278)
    {
         printf("\a");
        outtextxy(150,100,"CLICK SECOND");
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            cout<<"1"<<endl;
            delay(0);
        }
        getmouseclick(WM_LBUTTONDOWN, x, y);
        cout<<"x"<<x;
        cout<<"y"<<y;
        if(x>725&&x<775&&y>146&&y<212)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<70; i++)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"2Al+");
            }
            for(i=700; i>200; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"N");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(470,i,"2");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(550,i,"->2ALN");
            }
            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(350,i,"[ALUMINIUMNITRIDE]");
            }
        }
    }
    if(x>625&&x<675&&y>278&&y<344)
    {
         printf("\a");
        outtextxy(150,100,"CLICK SECOND");
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            cout<<"1"<<endl;
            delay(0);
        }
        getmouseclick(WM_LBUTTONDOWN, x, y);
        cout<<"x"<<x;
        cout<<"y"<<y;
        if(x>725&&x<775&&y>146&&y<212)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<70; i++)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"2Ga+");
            }
            for(i=700; i>200; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"N");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(470,i,"2");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(550,i,"->2GaN");
            }
            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(350,i,"[GALIUMNITRIDE]");
            }
        }
    }
    if(x>625&&x<675&&y>344&&y<410)
    {
         printf("\a");
        outtextxy(150,100,"CLICK SECOND");
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            cout<<"1"<<endl;
            delay(0);
        }
        getmouseclick(WM_LBUTTONDOWN, x, y);
        cout<<"x"<<x;
        cout<<"y"<<y;
        if(x>725&&x<775&&y>146&&y<212)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<70; i++)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"2In+");
            }
            for(i=700; i>200; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"N");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(470,i,"2");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(550,i,"->2InN");
            }
            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(350,i,"[INDIUMNITRIDE]");
            }
        }
    }
    if(x>625&&x<675&&y>410&&y<476)
    {
         printf("\a");
        outtextxy(150,100,"CLICK SECOND");
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            cout<<"1"<<endl;
            delay(0);
        }
        getmouseclick(WM_LBUTTONDOWN, x, y);
        cout<<"x"<<x;
        cout<<"y"<<y;
        if(x>725&&x<775&&y>146&&y<212)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<70; i++)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"2Th+");
            }
            for(i=700; i>200; i=i-1)
            {
                settextstyle(0,0,10);
                outtextxy(385,i,"N");
            }
            for(i=0; i<230; i=i+1)
            {
                outtextxy(470,i,"2");
            }
            for(i=0; i<200; i=i+1)
            {
                settextstyle(0,0,10);
                outtextxy(550,i,"->2ThN");
            }
            for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(350,i,"[THALIUMNITRIDE]");
            }
        }
    }
      if(x>675&&x<725&&y>146&&y<212)
    {
         printf("\a");
        outtextxy(150,100,"CLICK SECOND");
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            cout<<"1"<<endl;
            delay(0);
        }
        getmouseclick(WM_LBUTTONDOWN, x, y);
        cout<<"x"<<x;
        cout<<"y"<<y;
        if(x>775&&x<825&&y>146&&y<212)
        {
             printf("\a");
            cleardevice();
            for(i=0; i<150; i++)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"C+");
            }
               for(i=0; i<200; i++)
            {
                settextstyle(0,0,10);
                outtextxy(300,i,"O");
            }
                  for(i=0; i<230; i++)
            {
                settextstyle(0,0,10);
                outtextxy(380,i,"2");
            }
                    for(i=0; i<200; i++)
            {
                settextstyle(0,0,10);
                outtextxy(460,i,"->");
            }
                     for(i=0; i<200; i++)
            {
                settextstyle(0,0,10);
                outtextxy(650,i,"CO");
            }
                      for(i=0; i<230; i++)
            {
                settextstyle(0,0,10);
                outtextxy(820,i,"2");
            }
               for(i=700; i>400; i=i-1)
            {
                settextstyle(0,0,4);
                outtextxy(350,i,"[CARBODIOXIDE]");
            }
        }
    }
    while(!ismouseclick(WM_LBUTTONDOWN))
    {
        cout<<"1"<<endl;
        delay(0);
    }
    getmouseclick(WM_LBUTTONDOWN, x, y);
    cout<<"x"<<x;
    cout<<"y"<<y;
    reaction();
    getch();
}
void compound(){
      int x1,y1,x2,y2,i,j,k,x,y;
    setfillstyle(SOLID_FILL,9);
    bar(1,1,1400,700);
    setfillstyle(SOLID_FILL,RED);
    bar(30,80,75,540);
    for(x1=30,y1=146,x2=75,y2=146; y1<=540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,GREEN);
    bar(75,146,125,540);
    for(x1=75,y1=146,x2=125,y2=146; y1<=540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,BLUE);
    bar(125,278,175,540);
    for(x1=125,y1=344,x2=175,y2=344; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,YELLOW);
    bar(175,278,225,540);
    for(x1=175,y1=344,x2=225,y2=344; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,8);
    bar(225,278,275,540);
    for(x1=225,y1=344,x2=275,y2=344; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,10);
    bar(275,278,325,540);
    for(x1=275,y1=344,x2=325,y2=344; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,2);
    bar(325,278,375,540);
    for(x1=325,y1=344,x2=375,y2=344; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,7);
    bar(375,278,425,540);
    for(x1=375,y1=344,x2=425,y2=344; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,6);
    bar(425,278,475,540);
    for(x1=425,y1=344,x2=475,y2=344; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,5);
    bar(475,278,525,540);
    for(x1=475,y1=344,x2=525,y2=344; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,4);
    bar(525,278,575,540);
    for(x1=525,y1=344,x2=575,y2=344; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,3);
    bar(575,278,625,540);
    for(x1=575,y1=344,x2=625,y2=344; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,12);
    bar(625,148,675,540);
    for(x1=625,y1=214,x2=675,y2=214; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,11);
    bar(675,148,725,540);
    for(x1=675,y1=214,x2=725,y2=214; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,13);
    bar(725,148,775,540);
    for(x1=725,y1=214,x2=775,y2=214; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,14);
    bar(775,148,825,540);
    for(x1=775,y1=214,x2=825,y2=214; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,6);
    bar(825,148,875,540);
    for(x1=825,y1=214,x2=875,y2=214; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    setfillstyle(SOLID_FILL,4);
    bar(875,80,925,540);
    for(x1=875,y1=80,x2=925,y2=80; y1<540; y1=y1+66,y2=y2+66)
        line(x1,y1,x2,y2);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
     setcolor(BLUE);
    outtextxy(35,85,"H");
     setcolor(RED);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(35,150,"Li");
    outtextxy(35,215,"Na");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
    outtextxy(35,285,"K");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(35,350,"Rb");
    outtextxy(35,415,"Cs");
    outtextxy(35,485,"Fr");
    outtextxy(80,153,"Be");
    outtextxy(80,218,"Mg");
    outtextxy(80,287,"Ca");
    outtextxy(80,351,"Sr");
    outtextxy(80,418,"Ba");
    outtextxy(80,485,"Ra");
     setcolor(YELLOW);
    outtextxy(130,282,"Sc");
    outtextxy(130,348,"Y");
     settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
    outtextxy(130,414,"Lanth");
    outtextxy(130,480,"Act");
     settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(180,282,"Ti");
    outtextxy(180,348,"Zr");
    outtextxy(180,414,"Hf");
    outtextxy(180,480,"Rf");
    outtextxy(230,282,"V");
    outtextxy(230,348,"Nb");
    outtextxy(230,414,"Ta");
    outtextxy(230,480,"Db");
    outtextxy(280,282,"Cr");
    outtextxy(280,348,"Mo");
    outtextxy(280,414,"W");
    outtextxy(280,480,"Sg");
    outtextxy(330,282,"Mn");
    outtextxy(330,348,"Tc");
    outtextxy(330,414,"Re");
    outtextxy(330,480,"Bh");
    outtextxy(380,282,"Fe");
    outtextxy(380,348,"Ru");
    outtextxy(380,414,"Os");
    outtextxy(380,480,"Hs");
    outtextxy(430,282,"Co");
    outtextxy(430,348,"Rh");
    outtextxy(430,414,"Ir");
    outtextxy(430,480,"Mt");
    outtextxy(480,282,"Ni");
    outtextxy(480,348,"Pd");
    outtextxy(480,414,"Pt");
    outtextxy(480,480,"Ds");
    outtextxy(530,282,"Cu");
    outtextxy(530,348,"Ag");
    outtextxy(530,414,"Au");
    outtextxy(530,480,"Rg");
    outtextxy(580,282,"Zn");
    outtextxy(580,348,"Cd");
    outtextxy(580,414,"Hg");
    outtextxy(580,480,"Cn");
     setcolor(BLUE);
    outtextxy(630,153,"B");
     setcolor(RED);
    outtextxy(630,219,"Al");
    outtextxy(630,285,"Ga");
    outtextxy(630,351,"In");
    outtextxy(630,417,"Tl");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
    outtextxy(630,483,"Uut");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
     setcolor(BLUE);
    outtextxy(680,153,"C");
    outtextxy(680,219,"Si");
     setcolor(RED);
    outtextxy(680,285,"Ge");
    outtextxy(680,351,"sn");
    outtextxy(680,417,"Pb");
     settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
    outtextxy(680,483,"Uuq");
     setcolor(BLUE);
      settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(730,153,"N");
    outtextxy(730,219,"P");
    outtextxy(730,285,"As");
     setcolor(RED);
    outtextxy(730,351,"Sb");
    outtextxy(730,417,"Bi");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
    outtextxy(730,483,"Uup");
     setcolor(BLUE);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(780,153,"O");
    outtextxy(780,219,"S");
    outtextxy(780,285,"Se");
    outtextxy(780,351,"Te");
     setcolor(RED);
    outtextxy(780,417,"Po");
     settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
    outtextxy(780,483,"Uuh");
     setcolor(BLUE);
      settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(830,153,"F");
    outtextxy(830,219,"Cl");
    outtextxy(830,285,"Br");
    outtextxy(830,351,"I");
    outtextxy(830,417,"At");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
    outtextxy(830,485,"Uus");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(880,85,"He");
    outtextxy(880,151,"Ne");
    outtextxy(880,217,"Ar");
    outtextxy(880,283,"Kr");
    outtextxy(880,349,"Xe");
    outtextxy(880,415,"Rn");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
    outtextxy(880,481,"Uuo");
    setfillstyle(SOLID_FILL,BLUE);
    bar(28,560,975,615);
    setfillstyle(SOLID_FILL,GREEN);
    bar(28,615,975,670);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
     setcolor(YELLOW);
    outtextxy(35,575,"Lanthanide");
    outtextxy(35,595,"serise");
    outtextxy(35,625,"Actinide");
    outtextxy(35,645,"serise");
      setcolor(GREEN);
       outtextxy(230,575,"La");
    outtextxy(280,575,"Ce");
    outtextxy(330,575,"Pr");
    outtextxy(380,575,"Nd");
    outtextxy(430,575,"Pm");
    outtextxy(480,575,"Sm");
    outtextxy(530,575,"Eu");
    outtextxy(580,575,"Gd");
    outtextxy(630,575,"Tb");
    outtextxy(680,575,"Dy");
    outtextxy(730,575,"Ho");
    outtextxy(780,575,"Er");
    outtextxy(830,575,"Tm");
    outtextxy(880,575,"Yb");
    outtextxy(930,575,"Lu");
     outtextxy(230,625,"Ac");
    outtextxy(280,625,"Th");
    outtextxy(330,625,"Pa");
    outtextxy(380,625,"U");
    outtextxy(430,625,"Np");
    outtextxy(480,625,"Pu");
    outtextxy(530,625,"Am");
    outtextxy(580,625,"Cm");
    outtextxy(630,625,"Bk");
    outtextxy(680,625,"Cf");
    outtextxy(730,625,"Es");
    outtextxy(780,625,"Fm");
    outtextxy(830,625,"Md");
    outtextxy(880,625,"No");
    outtextxy(930,625,"Lr");
      setcolor(YELLOW);
    outtextxy(35,60,"1");
    outtextxy(90,126,"2");
    outtextxy(143,258,"3");
    outtextxy(191,258,"4");
    outtextxy(239,258,"5");
    outtextxy(287,258,"6");
    outtextxy(335,258,"7");
    outtextxy(383,258,"8");
    outtextxy(431,258,"9");
    outtextxy(481,258,"10");
    outtextxy(531,258,"11");
    outtextxy(581,258,"12");
    outtextxy(631,126,"13");
    outtextxy(681,126,"14");
    outtextxy(731,126,"15");
    outtextxy(781,126,"16");
    outtextxy(831,126,"17");
    outtextxy(881,44,"18");
    outtextxy(890,62,"0");
    outtextxy(10,90,"1");
    outtextxy(10,156,"2");
    outtextxy(10,222,"3");
    outtextxy(10,288,"4");
    outtextxy(10,354,"5");
    outtextxy(10,420,"6");
    outtextxy(10,486,"7");
    setcolor(YELLOW);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,8);
    outtextxy(204,160,"->");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(190,10,"Modern IUPAC Periodic Table of the Elements");
    outtextxy(210,40,"CLICK HERE FOR 2 ELEMENTS REACTION");
    outtextxy(210,60,"CLICK  3 Elements AND GET THEIR REACTION");
    while(!ismouseclick(WM_LBUTTONDOWN))
    {
        cout<<"1"<<endl;
        delay(0);
    }
    getmouseclick(WM_LBUTTONDOWN, x, y);
    cout<<"x"<<x;
    cout<<"y"<<y;
     if(x>209&&x<470&&y>40&&y<60)
        reaction();
    if(x>186&&x<880&&y>9&&y<29)
        graphics();
     if(x>30&&x<75&&y<146&&y>80)
    {
         printf("\a");
        outtextxy(150,100,"CLICK SECOND");
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            cout<<"1"<<endl;
            delay(0);
        }
        getmouseclick(WM_LBUTTONDOWN, x, y);
        cout<<"x"<<x;
        cout<<"y"<<y;
         if(x>675&&x<725&&y>146&&y<212){
             printf("\a");
          outtextxy(150,100,"CLICK THIRD");
            while(!ismouseclick(WM_LBUTTONDOWN))
        {
            cout<<"1"<<endl;
            delay(0);
        }
        getmouseclick(WM_LBUTTONDOWN, x, y);
        cout<<"x"<<x;
        cout<<"y"<<y;
           if(x>775&&x<825&&y>146&&y<212)
        {
             printf("\a");
            cleardevice();
                   for(i=0; i<10; i++)
            {
                settextstyle(0,0,10);
                outtextxy(i,200,"CH");
            }
                     for(i=0; i<235; i++)
            {
                settextstyle(0,0,10);
                outtextxy(170,i,"4");
            }
                        for(i=0; i<200; i++)
            {
                settextstyle(0,0,10);
                outtextxy(250,i,"+2O");
            }
                        for(i=0; i<230; i++)
            {
                settextstyle(0,0,10);
                outtextxy(490,i,"2");
            }
                        for(i=0; i<200; i++)
            {
                settextstyle(0,0,10);
                outtextxy(570,i,"->CO");
            }
                          for(i=0; i<230; i++)
            {
                settextstyle(0,0,10);
                outtextxy(890,i,"2");
            }
                          for(i=0; i<200; i++)
            {
                settextstyle(0,0,10);
                outtextxy(970,i,"+2H");
            }
                          for(i=0; i<230; i++)
            {
                settextstyle(0,0,10);
                outtextxy(1210,i,"2");
            }
                          for(i=0; i<200; i++)
            {
                settextstyle(0,0,10);
                outtextxy(1290,i,"O");
            }
        }
    }
    }
    while(!ismouseclick(WM_LBUTTONDOWN))
    {
        cout<<"1"<<endl;
        delay(0);
    }
    getmouseclick(WM_LBUTTONDOWN, x, y);
    cout<<"x"<<x;
    cout<<"y"<<y;
    compound();
    getch();
}
