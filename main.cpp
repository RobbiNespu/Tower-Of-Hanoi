#include<iostream>

using namespace std;

void move(int num_disk, char *source, char *intermediate , char *destination)
{

  if (num_disk > 0)
	{
		move(num_disk -1, source, destination, intermediate);

		cout<<"  cakera "<< num_disk <<" di pindah dari "<< source <<" ke "<< destination<<endl;

		move(num_disk -1, intermediate, source, destination);
	}
}

int main(void)
{
	cout<<"\n*********************************************\n";
	cout<<"     Aturcara Teknik Rekursif Menara Hanoi";
	cout<<"\n*********************************************\n";

	int bil_disk;

	cout<<"Masukan bilangan cakera :";
	cin>>bil_disk;

	move(bil_disk, "Tiang A", "Tiang B", "Tiang C");

	cout<<"\n\n";
    return 0;
}

