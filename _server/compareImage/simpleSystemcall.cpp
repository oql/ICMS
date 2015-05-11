#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

#include <sstream>
// 2015-05-02_2316.jpg
// 2015-05-02_2314.jpg


void ci(std::string source, std::string operand, std::string destination);
void mit(std::string source, std::string destination, int transparent);
void csi(std::string source, std::string operand, std::string destination);

int main(){
	std::string source = "./ImageSource/2015-05-02_2316.jpg";
	std::string operand = "./ImageSource/2015-05-02_2318.jpg";

	std::string different = "./StepSource/diff.png";
	std::string result_compare = "./StepSource/result.png";
	std::string result_composite = "./ResultFiles/umm.png";

	ci(source, operand, different);
	mit(different, result_compare, 50);
	csi( result_compare,operand, result_composite);

	return 0;
}

// compare image
void ci(std::string source, std::string operand, std::string destination){
	std::string tmp = "compare -fuzz 7% -highlight-color Magenta ";
	tmp.append(source);
	tmp.append(" "+operand);
	tmp.append(" "+destination);
	std::cout << tmp <<std::endl;
	system(tmp.c_str());
	return;
}

// make image transparently
void mit(std::string source, std::string destination, int transparent){
	// mingw bugs
	std::stringstream ss;
	ss << transparent;
	// mingw bugs	std::to_string(transparent)

	std::string tmp = "convert ";
	tmp.append(source);
	tmp.append(" -alpha on -channel a -evaluate set ");
	tmp.append(ss.str()+"% ");
	tmp.append(destination);
	std::cout << tmp <<std::endl;
	system(tmp.c_str());
	return;
}

// composite image
void csi(std::string source, std::string operand, std::string destination){
	std::string tmp = "composite ";
	tmp.append(source);
	tmp.append(" "+operand);
	tmp.append(" "+destination);
	std::cout << tmp <<std::endl;
	system(tmp.c_str());
	return;
}
