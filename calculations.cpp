#include<iostream>
#include"variables.h"
//variables
  double ha;                         //ha=house area
  int ft,cd;                         // ft=foundation type || dc=dimension of columns
  double fd,fa;                      //depth of foundation || area of foundation
  int sn,bt;                            //ns=no. of stories ||brick type
  double dlo,dli;                    //lod=length of outer dpc || lid=length of inner dpc
  double costdpc;
  double ctcp,bkcp,rdcp,sncp,stcp;   //cost price of: cement per unit vol.,brick per piece,rod per kg,sand per unit volume,stone per unit kg
  double wh_1,wh_2,wh_3,wwo_1,wwo_2,wwo_3,wwi_1,wwi_2,wwi_3;                 //wall height ,wall width outer & inner
  int dno_1,dno_2,dno_3,dni_1,dni_2,dni_3,wno_1,wno_2,wno_3,wni_1,wni_2,wni_3;               //door no. outer & inner, windows number outer & inner
  double who_1,whi_1,wnwo_1,wnwi_1,who_2,whi_2,wnwo_2,wnwi_2,who_3,whi_3,wnwo_3,wnwi_3;          // windows height & width inner &outer
  double dho_1,dhi_1,dwo_1,dwi_1,dho_2,dhi_2,dwo_2,dwi_2,dho_3,dhi_3,dwo_3,dwi_3;            // doors height & width inner &out
  double st_1,sa_1,st_2,sa_2,st_3,sa_3;                      //slab thickness & area
  double ws_1,ws_2,ws_3;                         //width of inner staircase
  int wti_1,wto_1,bd_1,wti_2,wto_2,bd_2,wti_3,wto_3,bd_3;                     //window type inner/outer beam dimension
//database variables
  double b1p,b2p,opc,ppc,snd,grav,rods,stn;
  double marble,tile,granite,al,wood,upvc;
  double brick_vol,cem_vol,sand_vol,grav_vol,rod_dens,stn_dens,bvcs;
  double dpc();
  double wall();
using namespace std;
double dpc(){
        double hdpc=0.2;
        double wdpc = wwo_1+.05*wwo_1;
        double vdpc=hdpc*wdpc*(dlo+dli);
        double vrdpc=0.04*vdpc;
        double vcdpc=0.137*vdpc;
        double vsndpc=0.274*vdpc;
        double vagdpc=0.548*vdpc;
        costdpc = (vrdpc*rod_dens*rods)+((vcdpc/cem_vol)*opc)+(vsndpc/sand_vol*snd)+(vagdpc/grav_vol*snd);
        return costdpc;
}

    double wall(){
        double vwall_1=0,vwall_2=0,vwall_3=0;
        int nbrick=0;
        vwall_1=(wwo_1*wh_1*dlo)+(wwi_1*wh_1*dli);
        vwall_2=(wwo_2*wh_2*dlo)+(wwi_2*wh_2*dli);
        vwall_3=(wwo_3*wh_3*dlo)+(wwi_3*wh_3*dli);
        nbrick=(vwall_1/bvcs)+(vwall_2/bvcs)+(vwall_3/bvcs);
        if(bt==0) double brick=nbrick*b1p;
        else      double brick=nbrick*b2p;
        double vcs=nbrick*(bvcs-brick_vol);
        double vcem=vcs/7;
        double vsnd=(6*vcs)/7;
        double costwall=brick+((vcem/cem_vol)*ppc)+((vsnd/sand_vol)*snd);
        return costwall;
    }

