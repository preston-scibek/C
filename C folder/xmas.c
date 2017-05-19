#include <math.h>
#include <stdio.h> 
#include <stdlib.h>
int main(void) {
    int bird = 1;
	int dove = 2;
	int hen = 3;
	int call = 4;
	int gold = 5;
	int geese = 6;
	int swan = 7;
	int maid = 8;
	int ladie = 9;
	int lord = 10;
	int piper = 11;
	int drum = 12;
	int inc;
	for (inc = 1; inc < 12; inc++) {
	bird++;
	if (2 <= inc) {
	dove+=2;}
	if (3 <= inc) {
	hen+=3;}
	if (4 <= inc) {
	call+=4;}
	if (5 <= inc) {
	gold+=5;}
	if (6 <= inc) {
	geese+=6;}
	if (7 <= inc) {
	swan+=7;}
	if (8 <= inc) {
	maid+=8;}
	if (9 <= inc) {
	ladie+=9;}
	if (10 <= inc) {
	lord+=10;}
	if (11 <= inc) {
	piper+=11;}
	if (12 == inc) {
	drum+=12;}	
	}
	printf("There are %d Partridges, %d Turtle Doves, %d French Hens, %d Calling Brids, %d Gold Rings, %d Geese a-laying, %d Swans a-swimming, %d Maids a-milking, %d Ladies Dancing, %d Lords a-leaping, %d Pipers Piping, %d Drummers Drumming.", bird, dove, hen, call, gold, geese, swan, maid, ladie, lord, piper, drum);
	printf("%d gifts", bird+dove+hen+call+gold+geese+swan+maid+ladie+lord+piper+drum);
	}
    	