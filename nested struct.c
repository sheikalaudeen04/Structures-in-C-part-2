#include<stdio.h>
#include<string.h>
struct Adrr{
	char street[50];
	char city[50];
	int pin;
};
struct person{
	char Name[50];
	int age;
	struct Adrr ads;
};
int main(){
	struct person b;
	printf("Enter name: ");
        gets(b.Name);
	b.age=13;
	gets(b.ads.street);
	gets(b.ads.city);
	b.ads.pin=641021;
	//displaying
	printf("Name:%s\n",b.Name);
	printf("AGe:%d\n",b.age);
	printf("Street:%s\n",b.ads.street);
	printf("City:%s\n",b.ads.city);
	printf("Pin:%d",b.ads.pin);
	return 0;
}
