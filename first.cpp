#include <iostream>
#include <cctype>
#include <string>
#include <cstring>

void su();
// void li();

int main(){
    std::string ls;
    std::string lowerS;
	std::cout << "Login or Sign up?: ";
    std::getline(std::cin,ls);
    // std::cout << ls << " the input"<< std::endl;
    std::cout << ls.length() << " out of loop" << std::endl; //correct len replace sizeof in for loop with it

    // std::cin.ignore();

    for(int i=0;i < ls.length()+1;i++){
        // std::cout << i;
        lowerS = tolower(ls[0]);
        std::cout << lowerS;

        // std::cout << ":soemthing";
    }
    std::cout << std::endl;


    std::cout << "length of lowerS is " << lowerS.length() << std::endl;
    std::cout << "lowerS is: " << lowerS << std::endl;
    std::cout << "start loop 2" << std::endl;

    for(int i = 0; i < lowerS.length()+1;i++){
        std::cout << lowerS;
        // std::cout << "something";
        // std::cout << i << "sme" << std::endl;
    }


    // std::cout << sizeof(std::string) << std::endl;
    // std::cout << lowerS.length() << std::endl;


    std::cout << lowerS;
    if(lowerS=="s"){ //problem even if word contains s it actvatyes 
        // std::cout << lowerS;
        su();
    } else if(lowerS=="l"){
        // std::cout << lowerS;

        // li();
    } else{
        std::cout << lowerS;

        std::cout << "Not an option\n";
        exit(true);
    }
	return 0;
}

void su(){
    // std::cout << "soething";
    std::string username;
    std::string password;

    // std::cout << "Username(nospaces): ";

    std::cin.ignore();
    
    while(username.empty()){
        std::cout << "Username(nospaces): ";
        // std::cin.ignore();
        std::getline(std::cin, username);

        // std::cin >> username;
    }

    std::cout << "Welcome " << username << " enter a password: ";
    std::getline(std::cin,password);
    std::cout << "Password saved!\n";
    
}