#include<iostream>
using namespace std;


int main()

{
	float moment_of_inertie = 3800;// 3800 kgm^2, moment of intertie of the helicopter in y axis
	float yaw_rate = 0; //0 radians/second, initial yaw rate of the helicopter
	float yaw = 0; // 0 radians, initial yaw of the helicopter
	float torque = 0.3; // 0.3t kgm^2 / s^2, torque applied to helicopter
	float angular_velocity = torque /moment_of_inertie ;// angular velocity and yaw around y axis.
	float start_time = 0, stop_time = 1000; // Start and stop time of simulation
	float step_size = 0.01; //Step size of increment

	
		//loop for simulation
		int i=start_time;
		while ( i <= stop_time)//run until simulation time

		{
			float time = i*step_size; // second to miliseconds conversion
			if (i % 100 == 0)
			{
				int counter = i/100;
				cout << "At " << counter << " seconds" << " the Yaw around Y-axis is " << yaw << " radians" << endl; // Printing Yaw around Y-axis at each second of time
			}
			torque*=time; // torque applied to helicopter
			yaw_rate=yaw_rate+angular_velocity*step_size; //angular velocity
			yaw=yaw+yaw_rate*step_size; //yaw
			++i;

		}

		

	return 0;
}
