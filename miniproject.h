
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

struct travel
{
	char tno[5];
	//char doj[10];
	int d1,m1,y1;
	char from[4];
	char to[4];
	char passen[6][20];
	char sex[6][2];
	char age[6][3];
	int seat_no[6];
	char coano[3];
   //	float pnr;
	 long int pnr;
	float bill;
}passenger;
struct
{
//	float pnr;
long int pnr;
}pass;
struct
{
	int seat_no;
	char coano[3];
	char status[1];
}berth;

struct
{
	char tno[5];
	char tname[20];
}train;
int pass_name(int ,int , int );
int pass_age(int ,int ,int );

