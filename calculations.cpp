#include<iostream>
#include"variables.h"
double dpc();
double wall();
using namespace std;
double dpc(){
        double hdpc=0.2;
        double wdpc = wwo[1]+.05*wwo[1];
        double vdpc/*volume */ =hdpc*wdpc*(dlo+dli);
        double vrdpc=0.04*vdpc;
        double vcdpc=0.137*vdpc;
        double vsndpc=0.274*vdpc;
        double vagdpc=0.548*vdpc;
        costdpc = (vrdpc*rod_dens*rods)+((vcdpc/cem_vol)*opc)+(vsndpc/sand_vol*snd)+(vagdpc/grav_vol*snd);
        return costdpc;
}

    double wall(){
        double bvcs=0.00167;
        double vwall[3];
        vwall[0]=1;
        double vbrk=0.00157;
        int nbrick[3];
        nbrick[0]=(vwall[0]/bvcs);
        float bprice=5.5;
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
