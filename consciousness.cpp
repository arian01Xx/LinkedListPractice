#include <iostream>
#include <vector>

struct Brain(){
	int lobules;
	int behavior;

};

class functions(){
public:
	void execute(int atom){
		Brain* newBrain=new Brain();
		newBrain->lobules=atom;
		if(ato==1){
			newBrain->behavior=0;
			std::cout<<behavior<<std::endl;
		}
	}

};

int main(){
	functions fun;
	fun.execute(1);
	return 0;
}