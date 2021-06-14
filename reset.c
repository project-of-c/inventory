#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define SHOP_CAP 150

char dresses[SHOP_CAP] = {'i','i','i','i','i','i','i','i','i','i'};
char pants[SHOP_CAP] = {'i','i','i','i','i','i','i','i'};
char TS[SHOP_CAP] = {'i','i','i','i','i'};
int topd=9;
int topp=7;
int topt=4;
int bought_d=0, bought_p=0, bought_t=0, sold_d=0, sold_p=0, sold_t=0;
const initiald=10, initialp=8, iintialt=5;
void reset(){
    if(count(333)>initiald)
    {
        int d=count(333)-initiald;
        for(int i=1; i<=d; i++)
        {
            pop(333);
        }
    }
    else
    {
        int dd= initiald-count(333);
        for(int i=1; i<=dd; i++)
        {
            push(333);
        }
    }

    if(count(444)>initialp)
    {
        int p=count(444)-initialp;
        for(int i=1; i<=p; i++)
        {
            pop(333);
        }
    }
    else
    {
        int pp= initialp-count(444);
        for(int i=1; i<=pp; i++)
        {
            push(444);
        }
    }

    if(count(555)>initialt)
    {
        int t=count(555)-initialt;
        for(int i=1; i<=t; i++)
        {
            pop(555);
        }
    }
    else
    {
        int tt= initialt-count(555);
        for(int i=1; i<=tt; i++)
        {
            push(555);
        }
    }
        bought_d=0, bought_p=0, bought_t=0, sold_d=0, sold_p=0, sold_t=0;

}
