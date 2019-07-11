#include<iostream>
#include"variables.h"
#include"variables.h"
double dpc();
double wall();
using namespace std;
double dpc(){
        double hdpc=0.2;
        double wdpc = wwo_1+.05*wwo_1];
        double vdpc=hdpc*wdpc*(dlo+dli);
        double vrdpc=0.04*vdpc;
        double vcdpc=0.137*vdpc;
        double vsndpc=0.274*vdpc;
        double vagdpc=0.548*vdpc;
        costdpc = (vrdpc*rod_dens*rods)+((vcdpc/cem_vol)*opc)+(vsndpc/sand_vol*snd)+(vagdpc/grav_vol*snd);
        return costdpc;
}

    double wall(){
        double bvcs=0.00167;
        double vwall_1=0,vwall_2=0,vwall_3=0;
        double vbrk=0.00157;
        int nbrick_1=0,nbrick_2=0,nbrick_3=0;
        vwall_1=(wwo_1*wh_1*dlo)+(wwi_1*wh_1*dli);
        nbrick_1=(vwall_1/bvcs);
        float bprice;
        double cemvol=0.0347;
        double ppc=410;
        double sndvol=7.50396;
        double brick=nbrick[0]*bprice;
        double vcs=nbrick[0]*(bvcs-vbrk);
        double vcem=vcs/7;
        double vsnd=(6*vcs)/7;
        double cost=brick+((vcem/cemvol)*ppc)+((vsnd/sndvol)*2251);
        return cost;
    }
