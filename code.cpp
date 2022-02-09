#include <iostream>
#include <chrono>
using namespace std;


int main() {

	//4 bytes integer addition
	int b=9876;
	auto start_time = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < 2'000'000'000; i++)
	{
		b = b + 67890;
	}
	auto end_time = std::chrono::high_resolution_clock::now();
	auto diff_int_add = end_time - start_time;
	cout << "The time elapsed for integer(4 bytes) addition is : " << diff_int_add / std::chrono::nanoseconds(1) / 1'000'000'000. << " Seconds." << endl;
	



	//4 bytes integer multiplication
	int a = 9763;
	start_time = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < 2'000'000'000; i++)
	{
		a = a * 18;
	}
	end_time = std::chrono::high_resolution_clock::now();
	auto diff_int_mul = end_time - start_time;
	cout << "The time elapsed for integer(4 bytes) multiplication is : " << diff_int_mul / std::chrono::nanoseconds(1) / 1'000'000'000. << " Seconds."<< endl;
	
	
	
	//4 bytes float addition
	float x= 67.0878;
	float y;

	start_time = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < 2'000'000'000; i++)
	{
		y = x + x;
	}
    end_time = std::chrono::high_resolution_clock::now();
	auto diff_float_add = end_time - start_time;
	cout << "The time elapsed for float(4 bytes) addition is : " << diff_float_add / std::chrono::nanoseconds(1) / 1'000'000'000. << " Seconds."<<endl;
	


	//4 bytes float multiplication
	x = 7.898;

	start_time = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < 2'000'000'000; i++)
	{
		y = x * x;
	}
	end_time = std::chrono::high_resolution_clock::now();
	auto diff_float_mul = end_time - start_time;
	cout << "The time elapsed for float(4 bytes) multiplication is : " << diff_float_mul / std::chrono::nanoseconds(1) / 1'000'000'000. << " Seconds.";

	
	return 0;

}

