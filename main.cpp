#include "uvm_proxypattern_pseudocode.h"

int main(){
    objectwrapper<obj_d1> obj_wrapper1; //ʹ��proxyģʽ��ֻ�����wrapper������������obj
    
    map<string, objectwrapper<obj_d1>> map1; // ��map��ģ��sv�����������
    auto temp_pr = make_pair("obj_d1",obj_wrapper1);
    auto map_ptr = map1.insert(temp_pr);//�����������������Ŷ�����key���ַ���"obj_d1"�����ݷŸղ��������wrapper
    map<string, objectwrapper<obj_d1>> ::iterator itr;
    itr = map1.find("obj_d1");
    if (itr != map1.end()) //���������������ҵ�����Ҫ�������"obj_d1"
    {
        (map1.at("obj_d1")).createobj(); //Ȼ����������������wrapper���������������Ҫ����obj_d1
        
    }


    return 0;
}