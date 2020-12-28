/*
 @file: process-fork-1.cpp

 @author: Salma Hanafi, shanafi@uncc.edu


 @description: A program that demonstrates processes.

 @course: ITSC 3146
 @assignment: In-class activity [n]
 */


#include <iostream>
#include <unistd.h>

int main()
{
	pid_t id = fork();

	if(id == -1) {
		std::cout << "Error creating process\n";
	} else if (id == 0) {
		std::cout << "I am a child process!\n";
	} else {
		std::cout << "I just became a parent!\n";
	}

	return 0;
}
