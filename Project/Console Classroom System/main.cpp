#include<iostream>
#include "user.h"
#include<string>
#include<cstring>
#include<sstream>
#include<fstream>
#include<ctime>
#include<cstdlib>
#include <conio.h>
using namespace std;

//``````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````
//`````````````````````````````````````````````````````````````` MAIN ``````````````````````````````````````````````````````````````````````
int main()
{
    cout << "\033[1;36m";
    cout << "\t\t\t\t____________________________________________________" << endl;
    cout << "\t\t\t\t|Advanced Console-based Classroom Management System|" << endl;
    cout << "\t\t\t\t|__________________________________________________|" << endl;
    cout << "\t\t\t\t\t\t_________________" << endl;
    cout << "\t\t\t\t\t\t|     MENU      |" << endl;
    cout << "\t\t\t\t\t\t|_______________|" << endl;
    cout << endl;
    cout << "____________________________" << endl;
    cout << "|   Select From The List   |" << endl;
    cout << "|__________________________|" << endl;
    cout << "|    1: REGISTER           |" << endl;
    cout << "|__________________________|" << endl;
    cout << "|    2: LOGIN              |" << endl;
    cout << "|__________________________|" << endl;
    cout << "|    3: EXIT               |" << endl;
    cout << "|__________________________|" << endl;
    cout << endl;
    int choice = 0;
    cout << "Enter: ";
    cin >> choice;
    cin.ignore();
    if (choice == 1)
    {
        string n = "";
        string em = "";
        string ro = "";
        int id = 0;
        string con = "";
        string password;
        cout << "------------------------------------------------------------------------------------------------" << endl;
        cout << "Enter your name    : ";
        getline(cin, n);
        cout << endl;
        cout << "Enter your email   : ";
        getline(cin, em);
        cout << endl;
        cout << "Enter your role    : ";
        getline(cin, ro);
        cout << endl;
        cout << "Enter your ID      : ";
        while (!(cin >> id))
        {
            cout << endl;
            cout << "Enter a valid ID: ";
            cin.clear();
            while (cin.get() != '\n')
            {
                continue;
            }
        }
        cin.ignore();
        cout << endl;
        cout << "Enter your contact : ";
        getline(cin, con);
        cout << endl;

        user u1(n, em, ro, id, con);
        u1.registration();
        system("cls");
        system("pause");
        cout << "____________________________" << endl;
        cout << "|   Select From The List   |" << endl;
        cout << "|__________________________|" << endl;
        cout << "|    1: REGISTER           |" << endl;
        cout << "|__________________________|" << endl;
        cout << "|    2: LOGIN              |" << endl;
        cout << "|__________________________|" << endl;
        cout << "|    3: EXIT               |" << endl;
        cout << "|__________________________|" << endl;
        cout << endl;
        cout << "Enter: ";
        cin >> choice;
        cin.ignore();
    }
    if (choice == 2)
    {
    l1:
        string username, password;
        cout << "------------------------------------------------------------------------------------------------" << endl;
        cout << "Enter your username: ";
        getline(cin, username);
        cout << endl;
        cout << "Enter your password: ";
        password = read_pass();
        cout << endl;
        user u1;
        if (u1.login(username, password))
        {
            Student s1("Tashfeen", 2042);
            Student s2("Laiba", 1855);
            Student s3("Shubu", 1899);
            Student s4("Aaimlik", 2120);
            Student s5("Sarmad", 1975);
            Student s6("Abyaz", 2058);
            Student s7("Saim", 1415);
            Student s8("Zarmeena", 2051);
            Student s9("Dansih", 1231);
            Student s10("Afnan", 1983);
            while (true)
            {
                int value = 0;
                cout << "------------------------------------------------------------------------------------------------" << endl;
                cout << "\t\t\t\t\t_________________________" << endl;
                cout << "\t\t\t\t\t|  Select From The List |" << endl;
                cout << "\t\t\t\t\t|_______________________|" << endl;
                cout << "\t\t\t\t\t|  1) Viewing Class     |" << endl;
                cout << "\t\t\t\t\t|_______________________|" << endl;
                cout << "\t\t\t\t\t|  2) Create  Class     |" << endl;
                cout << "\t\t\t\t\t|_______________________|" << endl;
                cout << "\t\t\t\t\t|  3) Updating Class    |" << endl;
                cout << "\t\t\t\t\t|_______________________|" << endl;
                cout << "\t\t\t\t\t|  4) Delete Class      |" << endl;
                cout << "\t\t\t\t\t|_______________________|" << endl;
                cout << "\t\t\t\t\t|  5) Exit              |" << endl;
                cout << "\t\t\t\t\t|_______________________|" << endl;
                cout << endl;
                cout << "Enter : ";
                cin >> value;
                cin.ignore();
                cout << endl;
                Class c1("B-301", "Riaz Ahmed Khan", 18, "Urdu", "A teacher with a golden heart", s1);
                Class c2("C-403", "Usman Rashid", 58, "Calculus", "The who taught us to live", s2);
                Class c3("C-310", "Usman Khan", 38, "Diffrential", "Einstein of Maths", s3);
                Class c4("A-303", "Ushna Shah", 14, "CPS Lab", "Teacher with big smile ", s4);
                Class c5("C-302", "Abid Hussain", 12, "", "A teacher with a chemistry brain", s5);
                if (value == 1)
                {
                    cout << c1;
                    cout << "\n";
                    cout << c2;
                    cout << "\n";
                    cout << c3;
                    cout << "\n";
                    cout << c4;
                    cout << "\n";
                    cout << c5;
                    cout << "\n";
                }
                else if (value == 2)
                {
                    string create_sub = "";
                    string create_teacher = "";
                    int create_id = 0;
                    string create_teacher_sub = "";
                    string create_description = "";
                    cout << "Enter the class name           : ";
                    getline(cin, create_sub);
                    cout << endl;
                    cout << "Enter the teacher name         : ";
                    getline(cin, create_teacher);
                    cout << endl;
                    cout << "Enter the teacher id           : ";
                    while (!(cin >> create_id))
                    {
                        cout << endl;
                        cout << "Enter a valid ID               : ";
                        cin.clear();
                        while (cin.get() != '\n')
                        {
                            continue;
                        }
                    }
                    cin.ignore();
                    cout << endl;
                    cout << "Enter the teacher's subject    : ";
                    getline(cin, create_teacher_sub);
                    cout << endl;
                    cout << "Enter the teacher's description: ";
                    getline(cin, create_description);
                    cout << endl;
                    c1.create_class(create_sub, create_teacher, create_id, create_teacher_sub, create_description, s1);
                }
                else if (value == 3)
                {
                    string update_sub = "";
                    string update_teacher = "";
                    int update_id = 0;
                    string update_teacher_sub = "";
                    string update_description = "";
                    cout << "Enter the class name           : ";
                    getline(cin, update_sub);
                    cout << endl;
                    cout << "Enter the teacher name         : ";
                    getline(cin, update_teacher);
                    cout << endl;
                    cout << "Enter the teacher id           : ";

                    while (!(cin >> update_id))
                    {
                        cout << endl;
                        cout << "Enter a valid ID               : ";
                        cin.clear();
                        while (cin.get() != '\n')
                        {
                            continue;
                        }
                    }
                    cin.ignore();
                    cout << endl;
                    cout << "Enter the teacher's subject    : ";
                    getline(cin, update_teacher_sub);
                    cout << endl;
                    cout << "Enter the teacher's description: ";
                    getline(cin, update_description);
                    cout << endl;
                    c1.update_class(update_sub, update_teacher, update_id, update_teacher_sub, update_description, s1);
                }
                else if (value == 4)
                {
                    c1.delete_class();
                }
                else if (value == 5)
                {
                    break;
                }
            }
            //````````````````````````````` ASSIGNMENT CLASS ````````````````````````````````````
            cout << "------------------------------------------------------------------------------------------------" << endl;
            Assignment ass("Object Oriented Programming", "A Subject with zero haters", time(0) + 1728, 15); //Time passed is 48 hours
            Assignment ass1("Pythan Data", "You need some practice", time(0) + 728, 25);
            Assignment ass2("Java", "A subject for Code Lovers", time(0) + 1658, 15);
            Assignment ass3("Programming Fundamentals", "A Subject with full of haters", time(0) + 1728, 15);
            Assignment ass4("Data Structures", "A Subject you will love", time(0) + 1218, 15);
            while (true)
            {
                int val = 0;
                cout << "\t\t\t\t\t___________________________" << endl;
                cout << "\t\t\t\t\t|  Select From The List   |" << endl;
                cout << "\t\t\t\t\t|_________________________|" << endl;
                cout << "\t\t\t\t\t|  1) Create Assignment   |" << endl;
                cout << "\t\t\t\t\t|_________________________|" << endl;
                cout << "\t\t\t\t\t|  2) Update  Assignment  |" << endl;
                cout << "\t\t\t\t\t|_________________________|" << endl;
                cout << "\t\t\t\t\t|  3) Delete  Assignment  |" << endl;
                cout << "\t\t\t\t\t|_________________________|" << endl;
                cout << "\t\t\t\t\t|  4) Exit                |" << endl;
                cout << "\t\t\t\t\t|_________________________|" << endl;
                cout << endl;
                cout << "Enter : ";
                cin >> val;
                cout << endl;
                cin.ignore();
                if (val == 1)
                {
                    ass.create_assignment();
                }
                else if (val == 2)
                {
                    ass.update_assignment();
                }
                else if (val == 3)
                {
                    ass.delete_assignment();
                }
                else if (val == 4)
                {
                    break;
                }
            }
            //````````````````````````````` SUBMISSION CLASS ````````````````````````````````````
            string stu1_text =
                R"(#include <iostream>
using namespace std;

double power(double base, int exponent) {
    // Base case: When the exponent is 0, any number raised to 0 is 1.
    if (exponent == 0) {
        return 1.0;
    }
    
    // Recursive case: Calculate the power recursively using the formula:
    // base^exponent = base * base^(exponent - 1)
    // Here, we call the power function with (base, exponent - 1) to get the
    // power of base^(exponent - 1).
    return base * power(base, exponent - 1);
}

int main() {
    double base;
    int exponent;

    cout << "Enter the base number: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;

    double result = power(base, exponent);
    cout << base << "^" << exponent << " = " << result << endl;

    return 0;
})";
            string stu2_text = R"(
#include <iostream>
#include <cmath>

bool is_prime(int number) {
    if (number < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(number); ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

void find_primes_in_range(int start, int end) {
    std::cout << "Prime numbers between " << start << " and " << end << ": ";
    for (int num = start; num <= end; ++num) {
        if (is_prime(num)) {
            std::cout << num << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int start_range = 1;
    int end_range = 50;
    find_primes_in_range(start_range, end_range);

    return 0;
})";
            string stu3_text = R"(
 #include<iostream>
using namespace std;
int main()
{
	int n;
	int i = 1;
	int j;
	cout << "Enter any number: ";
	cin >> n;
	do                       //i=1 j=1
	{
		j = 1;
		do                  // DRY RUN
		{
			cout << "*";
			j++;
		} while (j <= i);
		//for upper left spaces
		j = 1;
		if (i <= n-1)
		{
			do
			{
				cout << "s";
				j++;
			} while (j <= n - i);

			//for upper right spaces
			j = 1;
			do
			{
				cout << "s";
				j++;
			} while (j <= n - i);
		}
		//UPPER RIGHT TRIANGLE
		j = 1;
		do 
		{
			cout << "*";
			j++;
			
		} while (j <= i);
		cout << endl;
		i++;
	} while (i <= n);
	//lower left triangle
	int k = n - 1, l;
	do
	{
		l = 1;
		do
		{
			cout << "*";
			l++;
		} while (l <= k);
		l = 1;
	
		do
		{
			cout << "s";
			l++;
		} 
		while (l<=n-k);
		l = 1;
		do
		{
			cout << "s";
			l++;
		} while (l <= n - k);
		l = 1;
		do
		{
			cout << "*";
			l++;
		} while (l <= k);

		cout << endl;
		k--;
	} while (k >= 1);

	//PART B
	int p = 1;
	int q;
	do
	{
		q = 1;
		cout << "*";
		if (p < n)
		{

			do
			{
				q++;
				cout << "s";
			} while (q <= n - 2);
		}
		if (p == 5)
		{
			q = 1;
			do 
			{

				cout << "*";
				q++;
			} while (q<=2*n-1);
			cout << endl;
		}
		
		
		p++;
		cout << endl;
	} while (p<=n);
})";

            string stu4_text = R"(
#include<iostream>
using namespace std;
int main()
{
	//Declaring variables
	int ID;
	int password;
    int enter_password;
	string role;
	//Taking id as input from the user
	cout << "Enter your ID";
	cin >> ID
	//Storing separate password for each IDs
    switch (ID)
    {
    case 100:
        password = 10220;
        break;
    case 101:
        password = 16010;
        break;
    case 102:
        password = 11002;
        break;
    case 103:
        password = 22342;
        break;
    case 104:
        password = 44323;
        break;
    case 105:
        password = 33354;
        break;
    case 106:
        password = 87685;
        break;
    case 107:
        password = 99089;
        break;
    case 108:
        password = 34562;
        break;
    case 109:
        password = 44255;
        break;
    case 110:
        password = 32415;
        break;
    case 111:
        password = 90784;
        break;
    case 112:
        password = 78685;
        break;
    case 113:
        password = 44255;
        break;
    case 114:
        password = 81973;
        break;
    default:
        password = 0;
        break;
    }
    // Matching passwords for each id using switch again
    switch (ID)
    {
    case 100:
        role = " student ";
        cout << "Dear" << role << "please enter your password: " << endl;
        cin >> enter_password;
        switch ((enter_password == password))
        {
        	//displaying an appropiate message respectively using nested switch!
        case 1:
            cout << "Congrats" << role << "! you have entered a correct password\n";
            break;
        default:
            cout << "You have entered an incorrect value.\n";
            break;
        }
        break;
    
    case 101:
        role = " student ";
        cout << "Dear" << role << "please enter your password: " << endl;
        cin >> enter_password;
        switch (enter_password == password)
        {
        case 1:
            cout << "Congrats" << role << "! you have entered a correct password\n";
            break;
        default:
            cout << "You have entered an incorrect value.\n";
            break;
        }
        break;

    case 102:
        role = " student ";
        cout << "Dear" << role << "please enter your password: " << endl;
        cin >> enter_password;
        switch ((enter_password == password))
        {
        case 1:
            cout << "Congrats" << role << "! you have entered a correct password\n";
            break;
        default:
            cout << "You have entered an incorrect value.\n";
            break;
        }
        break;
    case 103:
        role = " student ";
        cout << "Dear" << role << "please enter your password: " << endl;
        cin >> enter_password;
        switch ((enter_password == password))
        {
        case 1:
            cout << "Congrats" << role << "! you have entered a correct password\n";
            break;
        default:
            cout << "You have entered an incorrect value.\n";
            break;
        }
        break;
    case 104:
        role = " student ";
        cout << "Dear" << role << "please enter your password: " << endl;
        cin >> enter_password;
        switch ((enter_password == password))
        {
        case 1:
            cout << "Congrats" << role << "! you have entered a correct password\n";
            break;
        default:
            cout << "You have entered an incorrect value.\n";
            break;
        }
        break;
    case 105:
        role = " student ";
        cout << "Dear" << role << "please enter your password: " << endl;
        cin >> enter_password;
        switch ((enter_password == password))
        {
        case 1:
            cout << "Congrats" << role << "! you have entered a correct password\n";
            break;
        default:
            cout << "You have entered an incorrect value.\n";
            break;
        }
        break;
        case 106:
            role = " student ";
            cout << "Dear" << role << "please enter your password: " << endl;
            cin >> enter_password;
            switch ((enter_password == password))
            {
            case 1:
                cout << "Congrats" << role << "! you have entered a correct password\n";
                break;
            default:
                cout << "You have entered an incorrect value.\n";
                break;
            }
            break;
        case 107:
            role = " student ";
            cout << "Dear" << role << "please enter your password: " << endl;
            cin >> enter_password;
            switch((enter_password == password))
            {
            case 1:
                cout << "Congrats" << role << "! you have entered a correct password\n";
                break;
            default:
                cout << "You have entered an incorrect value.\n";
                break;
            }

            break;
        case 108:
            role = " student ";
            cout << "Dear" << role << "please enter your password: " << endl;
            cin >> enter_password;
            switch ((enter_password == password))
            {
            case 1:
                cout << "Congrats" << role << "! you have entered a correct password\n";
                break;
            default:
                cout << "You have entered an incorrect value.\n";
                break;
            }
            break;
        case 109:
            role = " student ";
            cout << "Dear" << role << "please enter your password: " << endl;
            cin >> enter_password;
            switch ((enter_password == password))
            {
            case 1:
                cout << "Congrats" << role << "! you have entered a correct password\n";
                break;
            default:
                cout << "You have entered an incorrect value.\n";
                break;
            }
            break;
        case 110:

            role = " teacher ";
            cout << "Dear" << role << "please enter your password: " << endl;
            cin >> enter_password;
            switch ((enter_password == password))
            {
            case 1:
                cout << "Congrats" << role << "! you have entered a correct password\n";
                break;
            default:
                cout << "You have entered an incorrect value.\n";
                break;
            }
            break;
        case 111:
            role = " teacher ";
            cout << "Dear" << role << "please enter your password: " << endl;
            cin >> enter_password;
            switch ((enter_password == password))
            {
            case 1:
                cout << "Congrats" << role << "! you have entered a correct password\n";
                break;
            default:
                cout << "You have entered an incorrect value.\n";
                break;
            }
            break;
        case 112:
            role = " teacher ";
            cout << "Dear" << role << "please enter your password: " << endl;
            cin >> enter_password;
            switch ((enter_password == password))
            {
            case 1:
                cout << "Congrats" << role << "! you have entered a correct password\n";
                break;
            default:
                cout << "You have entered an incorrect value.\n";
                break;
            }
            break;
        case 113:
            role = " IT Staff ";
            cout << "Dear" << role << "please enter your password: " << endl;
            cin >> enter_password;
            switch ((enter_password == password))
            {
            case 1:
                cout << "Congrats" << role << "! you have entered a correct password\n";
                break;
            default:
                cout << "You have entered an incorrect value.\n";
                break;
            }
            break;
        case 114:
            role = " IT Staff ";
            cout << "Dear" << role << "please enter your password: " << endl;
            cin >> enter_password;
            switch ((enter_password == password))
            {
            case 1:
                cout << "Congrats" << role << "! you have entered a correct password\n";
                break;
            default:
                cout << "You have entered an incorrect value.\n";
                break;
            }
       break;
       // Displaying an appropriate message if the entered ID is incorrect!
       default:
       cout << "Incorrect ID";
       break;
     
    }

	return 0;
})";
            string stu5_text = R"(
   #include<iostream>
using namespace std;
int main()
{
	float percentage;
	int count_on=0;
	int count_off=0;
	int sensor_grid[6][6];
	cout<<"ENTER THE SENSOR GRID DATA:\n";
	


		for (int i = 0; i < 6; i++)
		{
				for (int j = 0; j < 6; j++)
				{
					cout << "Enter the value of the sensor" << endl;


				}
			cout << endl;
		}


	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout<< sensor_grid[i][j]<<" ";
		}
		cout << endl;
	}

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (sensor_grid[i][j] == 0)
			{
				sensor_grid[i][j] == '46';
				count_off++;
			}
			if (sensor_grid[i][j] == 1)
			{
				sensor_grid[i][j] == '88';
				count_on++;
			}
		}
		cout << endl;
	}

	cout << "SENSOR GRID:\n";

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout << sensor_grid[i][j] << " ";
		}
		cout << endl;
	}
	percentage=count_on/count_off;
	cout<< percentage;
	return 0;
})";
            string stu6_text = R"(
#include<iostream>
using namespace std;
int main()
{
	char pack;
	float data_used;
	float off_net_minutes;
	float on_net_minutes;
	int mbs;
	int additional_mbs;
	int over_charges;
	float data_bill=0;
	float off_net_bill=0;
	float on_net_bill=0;
	float off_net_additional=0;
	float on_net_additional=0;
	float total_amount_due=0;
	cout << "How many GBs data have you used ? ";
	cin >> data_used;
	cout << "How many call (OFF-NET) minutes have you used ?";
	cin >> off_net_minutes;
	cout << "How many call (ON-NET) minutes have you used ?";
	cin >> on_net_minutes;
	cout << "Which pack have you subscribed ?\n A \n B \n C \n D \n";
	cin >> pack;
	
	switch (pack)
	{
	case 'A':case'a':
	{
		if (data_used > 1)
		{
			mbs = data_used * 1024;
			additional_mbs = (mbs - 1024);
			over_charges = additional_mbs / 100;
			data_bill = over_charges * 20;
		}
		if (off_net_minutes > 100)
		{
			off_net_additional = off_net_minutes - 100;
			off_net_bill = off_net_additional * 3.75;
		}
		if (on_net_minutes > 200)
		{
			on_net_additional = on_net_minutes - 200;
			on_net_bill = on_net_additional * 2.25;
		}
		total_amount_due = on_net_bill + off_net_bill + data_bill + 100 + 500;
		cout << "Your total amount due is: Rs" << total_amount_due << "\-";
		break;
	}
		case 'B':case'b':
		{
			if (data_used > 5)
			{
				mbs = data_used * 1024;
				additional_mbs = (mbs - 5120);
				over_charges = additional_mbs / 100;
				data_bill = over_charges * 15;
			}
			if (off_net_minutes > 250)
			{
				off_net_additional = off_net_minutes - 250;
				off_net_bill = off_net_additional * 3.25;
			}
			if (on_net_minutes > 350)
			{
				on_net_additional = on_net_minutes - 350;
				on_net_bill = on_net_additional * 2.25;
			}

			//total_amount_due = on_net_bill + off_net_bill + data_bill + 100 + 500;
			//cout << "Your total amount due is: Rs" << total_amount_due << "\-";
			total_amount_due = on_net_bill + off_net_bill + data_bill + 800 + 350;
			cout << "Your total amount due is: Rs " << total_amount_due << "\-";
			break;
		}
		case 'C':case'c':
		{
			if (data_used > 7)
			{
				mbs = data_used * 1024;
				additional_mbs = (mbs - 7168);
				over_charges = additional_mbs / 100;
				data_bill = over_charges * 13;
			}
			if (off_net_minutes > 350)
			{
				off_net_additional = off_net_minutes - 350;
				off_net_bill = off_net_additional * 2.75;
			}
			if (on_net_minutes > 300)
			{
				on_net_additional = on_net_minutes - 300;
				on_net_bill = on_net_additional * 1.75;
			}
			total_amount_due = on_net_bill + off_net_bill + data_bill + 1000 + 500;
			cout << "Your total amount due is: Rs" << total_amount_due << "\-";
			break;
		}
		case 'D':case'd':
		{
			if (data_used > 50)
			{
				mbs = data_used * 1024;
				additional_mbs = (mbs - 51200);
				over_charges = additional_mbs / 100;
				data_bill = over_charges * 10;
			}
			if (off_net_minutes > 750)
			{
				off_net_additional = off_net_minutes - 750;
				off_net_bill = off_net_additional * 1.50;
			}
			if (on_net_minutes > 1000)
			{
				on_net_additional = on_net_minutes - 1000;
				on_net_bill = on_net_additional;
			}
			total_amount_due = on_net_bill + off_net_bill + data_bill + 1000 + 1500;
			cout << "Your total amount due is: Rs" << total_amount_due << "\-";
			break;
		}
	}

	// PART B
	if (pack == 'A' || pack == 'a')
	{
	   
	}
	return 0;
})";
            string stu7_text = R"(
#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include <cctype>
using namespace std;
int main()
{
	char arr[20];
	int length;
	int	count_upper = 0;
	int count_lower = 0;
	int a_vowel_count=0;
	int u_vowel_count = 0;
	int e_vowel_count = 0;
	int i_vowel_count = 0;
	int o_vowel_count = 0;
	cout << "Enter a sentence: ";
	cin.getline(arr, 20);
	cout << arr << endl;
	length = strlen(arr);
	for (int i = 0; i < length; i++)
	{
		if (isupper(arr[i]))
		{
			count_upper++;
		}
		else
		{
			count_lower++;
		}
		if (arr[i] == 'a' || arr[i] == 'A')
		{
			a_vowel_count++;
		}
		else if (arr[i] == 'e' || arr[i] == 'E')
		{
			e_vowel_count++;
		}
		else if (arr[i] == 'i' || arr[i] == 'I')
		{
			i_vowel_count++;
		}
		else if (arr[i] == 'o' || arr[i] == 'O')
		{
			o_vowel_count++;
		}
		else if (arr[i] == 'u' || arr[i] == 'U')
		{
			u_vowel_count++;
		}
		
	}
	for (int i = 0; i < length; i++)
	{
		if (arr[i] == ' ')
		{
			arr[i + 1] = toupper(i + 1);
		}
	}

		cout << arr;
	
	cout << "The upper case letters in the given sentence are: " << count_upper << endl;
	cout << "The lower case letters in the given sentence are: " << count_lower << endl;
	cout << "The vowel case A letters in the given sentence are: " << a_vowel_count << endl;
	cout << "The vowel case E letters in the given sentence are: " << e_vowel_count << endl;
	cout << "The vowel case I letters in the given sentence are: " << i_vowel_count << endl;
	cout << "The vowel case O letters in the given sentence are: " << o_vowel_count << endl;
	cout << "The vowel case U letters in the given sentence are: " << u_vowel_count << endl;

	return 0;
})";




            string stu8_text = R"(
#include<iostream>
using namespace std;
int main()
{
	float percentage1;
	float percentage2;
	int question;
	int option;
	int scholarship;
	int subj_chosen;
	float a, b,c,d;
	float  percentage_1;
	float percentage_2;
	float add_math_percentage;
	float weightage_calculation_1;
	float level_weightage_1;
	float weightage_calculation_2;
	float level_weightage_2;
	float academic_weightage;
	float Adm_test_req_percentage;
	int test_marks_required;
	bool blood_relations=false;
	bool maternal_cousin=false;
	bool paternal_cousin=false;
	char sibs;
	char alumnus;
	char cznz;
	float e,f;
	int test_weightage;
	int test_marks;
	int preferred_degree;
	int merit;
	bool add_math = false;
	cout<< "What do you want to enquire about eligibility of admissions ? \n";
	cout << "[1]Is a persin eligible to apply for FAST - NUCES ?\n";
	cout << "[2]Is there any scholarship offered by the university?\n";
	cin >>question;
	if (question == 1 || question == 2)
	{
		if (question == 1)
		{
			cout << "Which educational system was opted? \n";
			cout << "[1] O/A Levels.\n";
			cout << "[2] Matric/FSc.\n";
			cin >> option;

			if (option == 1)
			{
				cout << "Enter the O levels percentage: \n";
				cin >> percentage1;
				cout << "Enter the A levels percentage: \n";
				cin >> percentage2;

			}
			else
			{
				cout << "Enter the Matric percentage: \n";
				cin >> percentage1;
				cout << "Enter the FSc percentage: \n";
				cin >> percentage2;
			}
			cout << "Enter your subjects chosen: \n";
			cout << "[1]Pre -Medical\n";
			cout << "[2]Pre -Engineering\n";
			cin >> subj_chosen;
			if (subj_chosen == 1)
			{
				cout << "Enter you Add_Maths percentage:\n";
				cin >> add_math_percentage;
				if (add_math_percentage >= 50)
				{
				 			
		
						a = (percentage1 / 100.0);
						b = (15.0 / 100.0);
						weightage_calculation_1 =a *b ;
					    level_weightage_1= weightage_calculation_1 * 100.0;
						cout << level_weightage_1 << endl;
						c = (percentage2 / 100.0);
						d = (35.0 / 100.0);
						weightage_calculation_2 = c * d;
					    level_weightage_2 = weightage_calculation_2 * 100.0;
						cout << level_weightage_2;
						academic_weightage = level_weightage_1 + level_weightage_2;
						Adm_test_req_percentage = 75 -	academic_weightage ;
						test_marks_required = 250 * Adm_test_req_percentage / 50;
						cout << "The student needs " << Adm_test_req_percentage << " % score in the admission test to be eligible\n";
						cout << "The student needs " << test_marks_required << " marks in the admission test to be eligible\n";
				}
				else
				{
					cout << " Student is not eligible for FAST_NUCES\n";
					return 0;
				}
			}
			else if (subj_chosen == 2) {
				a = (percentage1 / 100.0);
				b = (15.0 / 100.0);
				weightage_calculation_1 = a * b;
				level_weightage_1 = weightage_calculation_1 * 100.0;
				cout << level_weightage_1 << endl;
				c = (percentage2 / 100.0);
				d = (35.0/ 100.0);
				weightage_calculation_2 = c * d;
				level_weightage_2 = weightage_calculation_2 * 100.0;
				cout << level_weightage_2;
				academic_weightage = level_weightage_1 + level_weightage_2;
				Adm_test_req_percentage = 75 - academic_weightage;
				test_marks_required = 250 * Adm_test_req_percentage / 50;
				cout << "The student needs " << Adm_test_req_percentage << " % score in the admission test to be eligible\n";
				cout << "The student needs " << test_marks_required << " marks in the admission test to be eligible\n";
			}
            cout<<endl;
			cout << "ENTER YOUR PREFERRED DEGREE PROGRAM:\n"<< endl;
			cout << " _____________________________________\n";
			cout << "|[1]|BS SOFTWARE ENGINEERING      |79%|\n";
			cout << "|[2]|BS COMPUTER SCIENCES         |80%|\n";
			cout << "|[3]|BS ARTIFICIAL INTELLIGENCE   |75%|\n";
			cout << "|[4]|BS DATA SCIENCES             |76%|\n";
			cout << "|[5]|BS  CYBER SECURITY           |77%|\n";
			cout << "|[6]|BS ELECTRICAL ENGINEERING    |76%|\n";
            cout << "|___|_____________________________|___|\n";
			cin >> preferred_degree;
			switch (preferred_degree)
			{
			case 1:
				merit = 79;
				test_weightage = merit - academic_weightage;
				test_marks = 250 * test_weightage / 50;
				cout << "The test score you need for the BS SOFTWARE ENGINEERING " << test_marks <<" out of 250\n";
				break;
			case 2:

				merit = 80;
				test_weightage = merit - academic_weightage;
				test_marks = 250 * test_weightage / 50;
				cout << "The test score you need for the BS COMPUTER SCIENCES " << test_marks << " out of 250\n";
				break;
			case 3:
				
				merit = 75;
				test_weightage = merit - academic_weightage;
				test_marks = 250 * test_weightage / 50;
				cout << "The test score you need for the BS ARTIFICIAL INTELLIGENCE is " << test_marks << " out of 250\n";
				break;
			case 4:

				merit = 76;
				test_weightage = merit - academic_weightage;
				test_marks = 250 * test_weightage / 50;
				cout << "The test score you need for the BS DATA SCIENCES is " << test_marks << " out of 250\n";
				break;
			case 5:

				merit = 77;
				test_weightage = merit - academic_weightage;
				test_marks = 250 * test_weightage / 50;
				cout << "The test score you need for the BS  CYBER SECURITY is " << test_marks << " out of 250\n";
				break;
			case 6:

				merit = 76;
				test_weightage = merit - academic_weightage;
				test_marks = 250 * test_weightage / 50;
				cout << "The test score you need for the BS ELECTRICAL ENGINEERING is " << test_marks << " out of 250\n";
				break;
			default:
				cout << "DEGREE NOT AVAILABLE!";
			}
		}
		else //PART 2
		{
			cout << "Which educational system was opted? \n";
			cout << "[1] O/A Levels.\n";
			cout << "[2] Matric/FSc.\n";
			cout << "[3] Is FAST, nuces Alumnus in Family?\n";
			cin >> option;
			if (option == 1)
			{  
					cout << "Enter the O levels percentage: \n";
					cin >> percentage_1;
					cout << "Enter the A levels percentage: \n";
					cin >> percentage_2;
			}
			else 
			{
				if (option == 2) {
					cout << "Enter the Matric percentage: \n";
					cin >> percentage_1;
					cout << "Enter the FSc percentage: \n";
					cin >> percentage_2;
				}
			}
			
			cout << " _____________________________________\n";
			cout << "|O-LEVELS          |90% above   |10%  |\n";
			cout << "|A-LEVELS          |90% above   |30%  |\n";
			cout << "|MATRIC            |90% above   |10%  |\n";
			cout << "|FSc               |90% above   |30%  |\n";
			cout << "|BLOOD RELATION    |            |20%  |\n|(siblings, parents)                  |\n";
			cout << "|MATERNAL OR       |            |10%  |\n|PATERNAL COUSINS                     |\n";
		    cout << "|__________________|____________|_____|\n";
		    cout<<"\n\n";
		    cout << "Do you have any alumus studying in FAST ?\n Press Y for yes and Press N for no.\n\n";
			cin >> alumnus;
			if(percentage_2 >= 90)
			{
				scholarship=30;
		    	cout << "Congrats! You are eligible for the scholarship!" << endl;
		    	cout<<"  You are awarded with "<<scholarship<<"% scholarship!\n";
			}
			else
			{
				cout<<"Are they your siblings? (Y or N)\n\n";
				cin>>sibs;
			if (sibs == 'y' || sibs == 'Y')
			{
				 	scholarship=20;
				 	cout << "Congrats! You are eligible for the scholarship!\n" << endl;
			}
			else{
				cout<<"Are they your maternal or paternal cousins?(Y or N)\n\n";
				cin>>cznz;
				if (percentage_1 >= 90|| cznz == 'y' || cznz == 'Y')
			     {
			       cout << "Congrats! You are eligible for the scholarship!\n" << endl;
				   scholarship=10;
			     }
		    	}
		    		cout<<"You are awarded with "<<scholarship<<"% scholarship!\n\n";
		    }   
		}
	}
	return 0; 
})";
            string stu9_text = R"(
 #include <iostream>
using namespace std;
int main()
{
    double x, term, result = 1.0;
    int n, sign = -1, fact = 2;

    cout << "Enter the value of x (in radians): ";
    cin >> x;

    for (n = 1; n <= 10; n++)
    {
        fact = (2*n-1)*(2*n);
        term = sign * pow(x, 2*n) / fact; 
        result += term; 
        sign *= -1; 
    }

    cout << "cos(" << x << ") = " << result << endl;

    return 0;
})";
            string stu10_text = R"(
 #include<iostream>
using namespace std;
int main()
{
	int store1;
	int store2;
	int store3;
	int store4;
	int store5;
	cout << "Enter today's sales for store 1 :";
	cin >> store1;
	cout << "Enter today's sales for store 2 :";
	cin >> store2;
	cout << "Enter today's sales for store 3 :";
	cin >> store3;
	cout << "Enter today's sales for store 4 :";
	cin >> store4;
	cout << "Enter today's sales for store 5 :";
	cin >> store5;
	for (int i = 1; i<store1 / 50; i++)
	 {
		cout << "*";
	 }
	cout << endl;
	for (int i = 1; i < store2 / 50; i++)
	{
		cout << "*";
	}
	cout << endl;
	for (int i = 1; i < store3/ 50; i++)
	{
		cout << "*";
	}
	cout << endl;
	for (int i = 1; i < store4/ 50; i++)
	{
		cout << "*";
	}
	cout << endl;
	for (int i = 1; i < store5 / 50; i++)
	{
		cout << "*";
	}
	cout << endl;
	return 0;
})";
            //``````````````````````````````````````````````````````````````````````````````````````
            string s1_gra = "D+";
            string s2_gra = "A+";
            string s3_gra = "C+";
            string s4_gra = "B+";
            string s5_gra = "B-";
            string s6_gra = "A+";
            string s7_gra = "A-";
            string s8_gra = "D";
            string s9_gra = "C-";
            string s10_gra = "B+";
            double s1_absoulutes = 48.2;
            double s2_absoulutes = 96.43;
            double s3_absoulutes = 58.98;
            double s4_absoulutes = 76.70;
            double s5_absoulutes = 71.93;
            double s6_absoulutes = 91.31;
            double s7_absoulutes = 79.93;
            double s8_absoulutes = 45.87;
            double s9_absoulutes = 56.86;
            double s10_absoulutes = 74.98;
            submission sub(ass, s1.get_studentname(), time(0) + 1210, stu1_text, s1_gra, "Could try harder ");
            submission sub1(ass, s2.get_studentname(), time(0) + 2010, stu2_text, s2_gra, "Excellent! Keep it up ");
            submission sub2(ass1, s3.get_studentname(), time(0) + 1555, stu3_text, s3_gra, "Good work, but could use more details in the explanations.");
            submission sub3(ass1, s4.get_studentname(), time(0) + 2041, stu4_text, s4_gra, "Active and insightful participation!");
            submission sub4(ass2, s5.get_studentname(), time(0) + 823, stu5_text, s5_gra, "Excellent progress in learning!");
            submission sub5(ass2, s6.get_studentname(), time(0) + 211, stu6_text, s6_gra, "Great presentation skills!");
            submission sub6(ass3, s7.get_studentname(), time(0) + 31, stu7_text, s7_gra, "Good work, but could use more details in the explanations.");
            submission sub7(ass3, s8.get_studentname(), time(0) + 12323, stu8_text, s8_gra, "Could try even harder ");
            submission sub8(ass4, s9.get_studentname(), time(0) + 2321, stu9_text, s9_gra, "Good work, but could use more  in the explanations.");
            submission sub9(ass4, s10.get_studentname(), time(0) + 1721, stu10_text, s10_gra, "Well done on the assignment!");
            while (true)
            {
                cout << "------------------------------------------------------------------------------------------------" << endl;
                int val = 0;
                cout << "\t\t\t\t\t__________________________" << endl;
                cout << "\t\t\t\t\t|  Select From The List  |" << endl;
                cout << "\t\t\t\t\t|________________________|" << endl;
                cout << "\t\t\t\t\t|  1) View Grade         |" << endl;
                cout << "\t\t\t\t\t|________________________|" << endl;
                cout << "\t\t\t\t\t|  2) View Feedbak       |" << endl;
                cout << "\t\t\t\t\t|________________________|" << endl;
                cout << "\t\t\t\t\t|  3) View Assignment    |" << endl;
                cout << "\t\t\t\t\t|________________________|" << endl;
                cout << "\t\t\t\t\t|  4) Sumbit  Assignment |" << endl;
                cout << "\t\t\t\t\t|________________________|" << endl;
                cout << "\t\t\t\t\t|  5) Exit               |" << endl;
                cout << "\t\t\t\t\t|________________________|" << endl;
                cout << endl;
                cout << "Enter : ";
                cin >> val;
                cout << endl;
                cin.ignore();
                if (val == 1)
                {
                    cout << "------------------------------------------------------------------------------------------------" << endl << endl;
                    cout << "Grade for " << s1.get_studentname() << " in " << ass.getTitle() << " is: " << sub.get_grade() << endl << endl;
                    cout << "Grade for " << s2.get_studentname() << " in " << ass.getTitle() << " is: " << sub1.get_grade() << endl << endl;
                    cout << "Grade for " << s3.get_studentname() << " in " << ass1.getTitle() << " is: " << sub2.get_grade() << endl << endl;
                    cout << "Grade for " << s4.get_studentname() << " in " << ass1.getTitle() << " is: " << sub3.get_grade() << endl << endl;
                    cout << "Grade for " << s5.get_studentname() << " in " << ass2.getTitle() << " is: " << sub4.get_grade() << endl << endl;
                    cout << "Grade for " << s6.get_studentname() << " in " << ass2.getTitle() << " is: " << sub5.get_grade() << endl << endl;
                    cout << "Grade for " << s7.get_studentname() << " in " << ass3.getTitle() << " is: " << sub6.get_grade() << endl << endl;
                    cout << "Grade for " << s8.get_studentname() << " in " << ass3.getTitle() << " is: " << sub7.get_grade() << endl << endl;
                    cout << "Grade for " << s9.get_studentname() << " in " << ass4.getTitle() << " is: " << sub8.get_grade() << endl << endl;
                    cout << "Grade for " << s10.get_studentname() << " in " << ass4.getTitle() << " is: " << sub9.get_grade() << endl << endl;
                }
                else if (val == 2)
                {
                    cout << "------------------------------------------------------------------------------------------------" << endl << endl;
                    cout << "Feedback from the teacher of " << ass.getTitle() << " for " << s1.get_studentname() << " is: " << sub.get_feedback() << endl << endl;
                    cout << "Feedback from the teacher of " << ass.getTitle() << " for " << s2.get_studentname() << " is: " << sub1.get_feedback() << endl << endl;
                    cout << "Feedback from the teacher of " << ass1.getTitle() << " for " << s3.get_studentname() << " is: " << sub2.get_feedback() << endl << endl;
                    cout << "Feedback from the teacher of " << ass1.getTitle() << " for " << s4.get_studentname() << " is: " << sub3.get_feedback() << endl << endl;
                    cout << "Feedback from the teacher of " << ass2.getTitle() << " for " << s5.get_studentname() << " is: " << sub4.get_feedback() << endl << endl;
                    cout << "Feedback from the teacher of " << ass2.getTitle() << " for " << s6.get_studentname() << " is: " << sub5.get_feedback() << endl << endl;
                    cout << "Feedback from the teacher of " << ass3.getTitle() << " for " << s7.get_studentname() << " is: " << sub6.get_feedback() << endl << endl;
                    cout << "Feedback from the teacher of " << ass3.getTitle() << " for " << s8.get_studentname() << " is: " << sub7.get_feedback() << endl << endl;
                    cout << "Feedback from the teacher of " << ass4.getTitle() << " for " << s9.get_studentname() << " is: " << sub8.get_feedback() << endl << endl;
                    cout << "Feedback from the teacher of " << ass4.getTitle() << " for " << s10.get_studentname() << " is: " << sub9.get_feedback() << endl << endl;
                }
                else if (val == 3)
                {
                    ifstream file("questionbank.txt");
                    if (file.is_open())
                    {
                        cout << "------------------------------------------------------------------------------------------------" << endl;
                        string line;
                        while (getline(file, line))
                        {
                            cout << line << endl;
                        }
                        file.close();
                    }
                    else
                    {
                        cout << "Failed to open the question bank file." << endl;
                    }
                }
                else if (val == 4)
                {
                    cout << "Assignment Submitted Successfully" << endl;
                    cout << endl;
                    continue;
                }
                else if (val == 5)
                {
                    break;
                }
            }
            while (true)
            {
                GradeBook g;
                GradeBook g1(s1_gra, 15.0);
                GradeBook g2(s2_gra, 19.5);
                GradeBook g3(s3_gra, 25.0);
                GradeBook g4(s4_gra, 15.0);
                GradeBook g5(s5_gra, 10.5);
                GradeBook g6(s6_gra, 5.0);
                GradeBook g7(s7_gra, 12.0);
                GradeBook g8(s8_gra, 25.0);
                GradeBook g9(s9_gra, 50.5);
                GradeBook g10(s10_gra, 15.5);
                int val = 0;
                cout << "------------------------------------------------------------------------------------------------" << endl;
                cout << "\t\t\t\t\t__________________________" << endl;
                cout << "\t\t\t\t\t|  Select From The List  |" << endl;
                cout << "\t\t\t\t\t|________________________|" << endl;
                cout << "\t\t\t\t\t|  1) View Grade         |" << endl;
                cout << "\t\t\t\t\t|________________________|" << endl;
                cout << "\t\t\t\t\t|  2) View Class Average |" << endl;
                cout << "\t\t\t\t\t|________________________|" << endl;
                cout << "\t\t\t\t\t|  3) View Reports       |" << endl;
                cout << "\t\t\t\t\t|________________________|" << endl;
                cout << "\t\t\t\t\t|  4) Exit               |" << endl;
                cout << "\t\t\t\t\t|________________________|" << endl;
                cout << endl;
                cout << "Enter : ";
                cin >> val;
                cout << endl;
                cin.ignore();
                if (val == 1)
                {
                    g1.view_grade();
                    g2.view_grade();
                    g3.view_grade();
                    g4.view_grade();
                    g5.view_grade();
                    g6.view_grade();
                    g7.view_grade();
                    g8.view_grade();
                    g9.view_grade();
                    g10.view_grade();
                }
                else if (val == 2)
                {
                    g.average(s1_absoulutes, s2_absoulutes, s3_absoulutes, s4_absoulutes, s5_absoulutes, s6_absoulutes, s7_absoulutes, s8_absoulutes, s9_absoulutes, s10_absoulutes);
                    cout << g;
                    cout << endl;
                }
                else if (val == 3)
                {
                    g1.view_files("reports.txt");
                }
                else if (val == 4)
                {
                    break;
                }
            }
            while (true)
            {
                int val = 0;
                cout << "\t\t\t\t\t___________________________" << endl;
                cout << "\t\t\t\t\t|  Select From The List   |" << endl;
                cout << "\t\t\t\t\t|_________________________|" << endl;
                cout << "\t\t\t\t\t|  1) Update Notification |" << endl;
                cout << "\t\t\t\t\t|_________________________|" << endl;
                cout << "\t\t\t\t\t|  2) View Notificaton    |" << endl;
                cout << "\t\t\t\t\t|_________________________|" << endl;
                cout << "\t\t\t\t\t|  3) Exit                |" << endl;
                cout << "\t\t\t\t\t|_________________________|" << endl;
                cout << endl;
                cout << "Enter : ";
                cin >> val;
                cout << endl;
                if (val == 1)
                {
                    UpdateNotification obj_update;
                    obj_update.setTimestamp(time(0) + 1321);
                    obj_update.handle_notification();
                }
                else if (val == 2)
                {
                    DeadlineNotification dead_obj;
                    dead_obj.setTimestamp(time(0) + 32213);
                    dead_obj.handle_notification();
                }
                else if (val == 3)
                {
                    break;
                }
            }
        }
        else
        {
            goto l1;
        }
    }
    else if (choice == 3)
    {
        cout << "Exiting the program." << endl;
    }
    else
    {
        cout << "Invalid choice. Exiting the program." << endl;
    }
    return 0;
}



