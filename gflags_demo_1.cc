#include <gflags/gflags.h>
#include <iostream>

DEFINE_bool(big_menu, 
            true, 
            "Include 'advance' option in the menu listing");
DEFINE_string(languages, 
              "english, french, chinese", 
              "comma-separated list of languages to offer in the 'lang' menu");
DEFINE_uint32(age, 
              10, 
              "age");


int main(int argc, char** argv) {
    ::gflags::ParseCommandLineFlags(&argc, &argv, true);
    std::cout<<std::boolalpha;

    std::cout<<"big_menu: "<<FLAGS_big_menu<<'\n'
             <<"languages: "<<FLAGS_languages<<'\n'
             <<"age: "<<FLAGS_age<<std::endl;

    return 0;
}
