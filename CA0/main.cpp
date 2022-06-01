#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string cars_order;
    int main_counter=1;
    while (cin >> cars_order)
    {
        int cars_order_length=cars_order.length();
        if (cars_order=="STOP")
            return 0;
        else
        {
            if (main_counter != 1 )
                cout << endl;
            int leave_count;
            cin >> leave_count;
            cout << "Dataset #" << main_counter << ":  The initial order is " << cars_order << "." << endl;
            main_counter++;
            for(int i=0 ; i<leave_count ; i++)
            {
                char leaving_car;
                cin >> leaving_car;
                if (i != 0)
                    cars_order_length--;
                for (int j=0 ; j< cars_order_length ; j++ )
                {
                    if (cars_order[j]==leaving_car)
                    {
                        if (cars_order_length-j <= j )
                        {
                            int counter=j;
                            char copy[27];
                            for (int k=0;k<27;k++)
                            {
                                copy[k]='\0';
                            }
                            int l=0;
                            for (int k=cars_order_length-1;k>j;k--)
                            {
                                copy[l]=cars_order[k];
                                l++;
                            }
                            for (int k=0;k<=l;k++)
                            {
                                cars_order[counter]=copy[k];
                                counter++;
                            }
                            cars_order.erase(cars_order.size()-1);
                            //cars_order[counter-1]='\0';
                            break;
                        }
                        else
                        {
                            int counter=j;
                            char copy[27];
                            for (int k=0;k<27;k++)
                            {
                                copy[k]='\0';
                            }
                            int l=0;
                            for (int k=j-1;k>=0 ; k--)
                            {
                                copy[l]=cars_order[k];
                                l++;
                            }
                            int h=0;
                            for (h=j+1;h<cars_order_length;h++)
                            {
                                cars_order[h-1]=cars_order[h];
                            }
                            cars_order.erase(cars_order.size()-1);
                            //cars_order[h-1]='\0';
                            for (int k=0;k<j;k++)
                            {
                                cars_order[k]=copy[k];
                            }
                            break;
                        }
                    }
                }
                cout << "After " << leaving_car << " leaves, the order is " << cars_order << "." << endl;
            }
        }
    }
}