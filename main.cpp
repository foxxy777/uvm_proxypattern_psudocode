#include "uvm_proxypattern_pseudocode.h"

int main(){
    objectwrapper<obj_d1> obj_wrapper1; //使用proxy模式，只造出个wrapper，而不是先造obj
    
    map<string, objectwrapper<obj_d1>> map1; // 用map来模仿sv里的联合数组
    auto temp_pr = make_pair("obj_d1",obj_wrapper1);
    auto map_ptr = map1.insert(temp_pr);//往这个联合数组里面放东西，key放字符串"obj_d1"，内容放刚才造出来的wrapper
    map<string, objectwrapper<obj_d1>> ::iterator itr;
    itr = map1.find("obj_d1");
    if (itr != map1.end()) //在联合数组里面找到我们要造的类名"obj_d1"
    {
        (map1.at("obj_d1")).createobj(); //然后根据这个类名来在wrapper中真正地造出我们要的类obj_d1
        
    }


    return 0;
}