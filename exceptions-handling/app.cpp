#include<iostream>
#include<stdexcept>

int main {
    catch(std::range_error re) {
        std::cout<< "Error: " << re.what();        
    }
}