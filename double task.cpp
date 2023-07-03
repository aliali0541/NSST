#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  double semi_major, semi_minor, eccentricity, choosing_number, choosing_task, circumference;
  double const earth_radius = 6378, moon_radius = 1738, M_E_distance = 384400, pi = 3.14159;
  int count = 2;
  for (int i = 0; i < count;)
  {
    cout << "Choose the task you want to calculate.\n";
    cout << "[1] Ellipse Task.\n[2] Moon Task.\n\n[3] End Program.\n";
    cin >> choosing_task;

    if (choosing_task == 1)
    {
      for (int i = 0; i < count;)
      {
        cout << "Choose what you want to calculate : \n";
        cout << "[1] Semi-Major Axis. \n[2] Semi-Minor Axis. \n[3] Eccentricity. \n\n[4] Close the Calculator.\n";
        cin >> choosing_number;

        if (choosing_number == 1)
        {
          cout << "Enter the Semi-Minor Axis value in KM : \n";
          cin >> semi_minor;
          cout << "Enter the Eccentricity value : \n(NOTE): The Eccentricity value is between 0 and 1.\n";
          cin >> eccentricity;

          semi_major = semi_minor / (sqrt(1 - pow(eccentricity, 2)));
          cout << "The Semi-Major Axis = " << semi_major << " KM.\n";
        }

        else if (choosing_number == 2)
        {
          cout << "Enter the Semi-Major Axis value in KM : \n";
          cin >> semi_major;
          cout << "Enter the Eccentricity value : \n(NOTE): The Eccentricity value is between 0 and 1.\n";
          cin >> eccentricity;

          semi_minor = semi_major * (sqrt(1 - pow(eccentricity, 2)));
          cout << "The Semi-Minor Axis = " << semi_minor << " KM.\n";
        }

        else if (choosing_number == 3)
        {
          cout << "Enter the Semi-Major Axis value in KM : \n";
          cin >> semi_major;
          cout << "Enter the Semi-Minor Axis value in KM : \n";
          cin >> semi_minor;

          eccentricity = sqrt(1 - pow((semi_minor / semi_major), 2));
          cout << "The Eccentricity = " << eccentricity << "\n";
        }

        else if (choosing_number == 4)
        {
          break;
        }

        else
          cout << "Choose a correct number.\n";

        cout << "\n";
      }
    }
    else if (choosing_task == 2)
    {
      circumference = (2 * pi) * (moon_radius + earth_radius + M_E_distance) * 12;
      cout << "The Circumference of Moon's orbit in one year = " << circumference << " KM.\n";
      cout << "The Circumference of Moon's orbit in 1000 year = " << circumference * 1000 << " KM.\n\n";
    }
    else if (choosing_task == 3)
    {
      cout << "Thanks for attention <3\n";
      break;
    }
    else
      cout << "Choose a correct number.\n\n";
  }
  return 0;
}