#include <synchapi.h>
#include <utilapiset.h>
#include <cstdio>
#include <cstdlib>
#define p(a,b) Beep(a,b);
#define s(b) Sleep(b);
#define w(q) printf("%s\n",q);
#define ting 128
#define st s(ting);
using namespace std;

// _��ǰ��ʾ����, �ں��ʾ����
// o��ʾ��
const int _oC = 277, _oD = 311,_oE = 659, _oF = 370, _oG = 415, _oA = 466,_oB = 988;
const int _C = 262, _D = 294, _E = 330, _F = 349, _G = 392, _A = 440, _B = 494;
const int oC = 554, oD = 622, oF = 740, oG = 831, oA = 932,oB = 988;
const int C = 523, D = 578, E = 659, F = 698, G = 784, A = 880, B = 988;
const int C_ = 1047, D_ = 1175, E_ = 1319, F_ = 1397, G_ = 1568, A_ = 1760, B_ = 1976;
const int oC_ = 1109, oD_ = 1245, oF_ = 1480, oG_ = 1661, oA_ = 1865,oB_ = 1976;
const int C__ = C_*2-C, D__ = D_*2-D, E__ = E_*2-E, F__ = F_*2-F, G__ = G_*2-G, A__ = A_*2-A, B__ = B_*2-B;
const int oC__ = C__+oC_-C_, oD__ = D__+oD_-D_, oF__ = F__+oF_-F_, oG__ = G__+oG_-G_, oA__ = A__+oA_-A_, oB__ = B__+oB_-B_;

const int T = 400; //һ�ĵĳ���
const int Stop = 800; //һ����ֹ���ĳ���

int main(){
    s(500);
    
	p(0,T/2);
	p(C,T/2);
	st
	p(D,T/2);
	p(F,T/2);
	st
	
	p(C_,T*2);
	st
	
	p(oA,T*2);
	st
	
	p(G,T/2);
	s(64);
	p(G,T/4);
	s(32);
	p(G,T/4);
	st
	
	p(C_,T);
	st
	
	p(C_,T);
	st
	
	// 
	p(A,T/2);
	s(64);
	p(oA,T/2);
	st
	
	p(C_,T/4);
	s(32);
	p(C_,T/4);
	s(32);
	p(C_,T/2);
	st
	p(0,T/2);
	s(64);
	p(C_,T/2);
	st
	
	p(0,T/2);
	s(64);
	p(C_,T/2);
	st
	p(oA,T/2);
	s(64);
	p(A,T/2);
	s(100);
	
	p(G,T*3);
	st
	p(E,T/2);
	s(64);
	p(F,T/2);
	st
	
	p(G,T/4);
	s(32);
	p(G,T/4);
	s(32);
	p(G,T/2);
	st
	p(0,T/2);
	s(64);
	p(G,T/2);
	st
	
	p(0,T/2);
	s(64);
	p(oA,T/2);
	st
	p(A,T/2);
	s(64);
	p(G,T/2);
	st
	
	p(C,T*2);
	st
	
	//
	p(0,T/2);
	p(C,T/2);
	st
	p(D,T/2);
	p(F,T/2);
	st
	
	p(C_,T*2);
	st
	
	p(oA,T*2);
	st
	
	p(A,T/4);
	s(32);
	p(A,T/4);
	s(32);
	p(A,T/2);
	st
	p(0,T/2);
	p(C_,T/2);
	st
	
	p(F,T/2);
	p(C,T/2);
	st
	
    return 0;
}
