#include <iostream>
using namespace std;

int checkAvailableSeats(int Seats[][7], int rows, int cols)
{
	int available=0;
	for (int row=0;row<rows;row++)
	{
		for (int col=0;col<cols;col++)
		{
			if (Seats[row][col]==0)
			{
				available++;
			}
		}
	}
	return available;
}

bool bookFirstClass(int Seats[][7],int rows,int cols, int noOfSeats)
{
	int available=0;
	for (int row=0;row<rows;row++)
	{
		for (int col=0;col<cols;col++)
		{
			if (Seats[row][col]==0)
			{
				available++;
			}
		}
	}

	if (noOfSeats<=available)
	{
		int booked=0;
		for (int row=0; row<rows; row++)
		{
	    	for (int col=0; col<cols; col++)
			{
		        if (Seats[row][col]==0 && booked<noOfSeats) 
				{
		            Seats[row][col]=1;
		            booked++;
		        }
	    	}
		}
		cout<<"Your seats have been booked!!! We look forward to flying with you ^_^"<<endl;
		cout<<endl;
		return true;
	}
	int rem_all_around=checkAvailableSeats(Seats,12,7);
	if (rem_all_around<noOfSeats)
	{
		cout<<"Sorry but that amount of seats is not available in the entire plane."<<endl;
	}
	else
	{
		cout<<"Sorry but that amount of seats is not available. Though on the bright side we also have "<<rem_all_around<<" seats remaining in the plan including all classes, so you can divide up or book in the other classes."<<endl;
	}
	cout<<endl;
	return false;
}

bool bookBusinessClass(int Seats[][7],int rows,int cols, int noOfSeats)
{
	int available=0;
	for (int row=2; row<rows; row++)
	{
		for (int col=0;col<cols;col++)
		{
			if (Seats[row][col]==0)
			{
				available++;
			}
		}
	}

	if (noOfSeats<=available)
	{
		int booked=0;
		for (int row=2; row<rows; row++)
		{
	    	for (int col=0; col<cols; col++)
			{
		        if (Seats[row][col]==0 && booked<noOfSeats) 
				{
		            Seats[row][col]=1;
		            booked++;
		        }
	    	}
		}
		cout<<"Your seats have been booked!!! We look forward to flying with you ^_^"<<endl;
		cout<<endl;
		return true;
	}
	int rem_all_around=checkAvailableSeats(Seats,12,7);
	if (rem_all_around<noOfSeats)
	{
		cout<<"Sorry but that amount of seats is not available in the entire plane."<<endl;
	}
	else
	{
		cout<<"Sorry but that amount of seats is not available. Though on the bright side we also have "<<rem_all_around<<" seats remaining in the plan including all classes, so you can divide up or book in the other classes."<<endl;
	}
	cout<<endl;
	return false;
}

bool bookEconomyClass(int Seats[][7],int rows,int cols, int noOfSeats)
{
	int available=0;
	for (int row=4; row<rows; row++)
	{
		for (int col=0;col<cols;col++)
		{
			if (Seats[row][col]==0)
			{
				available++;
			}
		}
	}
	
	if (noOfSeats<=available)
	{
		int booked=0;
		for (int row=4; row<rows; row++)
		{
	    	for (int col=0; col<cols; col++)
			{
		        if (Seats[row][col]==0 && booked<noOfSeats) 
				{
		            Seats[row][col]=1;
		            booked++;
		        }
	    	}
		}
		cout<<"Your seats have been booked!!! We look forward to flying with you ^_^"<<endl;
		cout<<endl;
		return true;
	}
	int rem_all_around=checkAvailableSeats(Seats,12,7);
	if (rem_all_around<noOfSeats)
	{
		cout<<"Sorry but that amount of seats is not available in the entire plane."<<endl;
	}
	else
	{
		cout<<"Sorry but that amount of seats is not available. Though on the bright side we also have "<<rem_all_around<<" seats remaining in the plan including all classes, so you can divide up or book in the other classes."<<endl;
	}
	cout<<endl;
	return false;
}

void systemReset(int Seats[][7], int rows, int cols)
{
	for (int r=0;r<12;r++)
	{
		for (int c=0;c<7;c++)
		{
			Seats[r][c]=0;
		}
	}
	cout<<endl;
}

void getFare()
{
	cout<<"The fare for the differentiated classes are:\nFirst Class-->Rs.18,000\nBusiness Class-->Rs.14,000\nEconomy Class-->Rs.10,000"<<endl;
	cout<<endl;
}

void viewSeatingPlan(int Seats[][7], int rows, int cols)
{
	for (int row=0;row<12;row++)
	{
		if (row==0)
		{
			cout<<"First Class:"<<endl;
		}
		else if (row==2)
		{
			cout<<"Business Class:"<<endl;
		}
		else if (row==4)
		{
			cout<<"Economy Class:"<<endl;
		}
		for (int col=0;col<7;col++)
		{
			if (col==2 || col==5)
			{
				cout<<"|| ";
			}
			cout<<Seats[row][col]<<' ';
		}
		cout<<endl;
	}
}

int main()
{
	int seats[12][7]={0};
	int choice=0;
	while (choice!=7)
	{
		cout<<"-----------------------------------------------------\n       Welcome to Airplane Reservation System\n-----------------------------------------------------"<<endl;
		cout<<"1. Book First Class Seats\n2. Book Business Class Seats\n3. Book Economy Class Seats\n4. View Airplane Seating Plan\n5. View Fare(s)\n6. System Reset\n7. Exit from The Booking System"<<endl;
		cin>>choice;
		if (choice==1)
		{
			int noOfSeats;
			cout<<"How many seats would you like to reserve in First Class?"<<endl;
			cin>>noOfSeats;
			bookFirstClass(seats,2,7,noOfSeats);
		}
		else if (choice==2)
		{
		 int noOfSeats;
			cout<<"How many seats would you like to reserve in Business Class?"<<endl;
			cin>>noOfSeats;
			bookBusinessClass(seats,4,7,noOfSeats);
		}
		else if (choice==3)
		{
			int noOfSeats;
			cout<<"How many seats would you like to reserve in Economy Class?"<<endl;
			cin>>noOfSeats;
			bookEconomyClass(seats,12,7,noOfSeats);
		}
		else if (choice==4){viewSeatingPlan(seats,12,7);}
		else if (choice==5){getFare();}
		else if (choice==6){systemReset(seats,12,7);}
		else if (choice>7 || choice<1){cout<<"Please only choose from the given options!"<<endl;}
	}
	return 0;
}
