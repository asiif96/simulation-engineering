# 1.Build all what's needed to make a complete build
# 2.g++ is the c++ compiler used for this task
# 3. main.cpp is my source file which contains my code
# 4. output is the name of output file generated after compilation of main.cpp
# 5. clean added for deleting all previous output ".o" files if any so that only one output file remains

all:

	g++ main.cpp -o output		
clean:
	-rm -f *.o	
