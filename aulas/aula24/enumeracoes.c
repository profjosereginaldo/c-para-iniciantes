#include <stdio.h>

int main() {
    // Enumeração para representar os dias da semana
    enum dias_da_semana_e {
        dom,
        seg,
        ter,
        qua,
        qui,
        sex,
        sab
    };
    
    enum dias_da_semana_e dia = qui;
    
	// Seleção de multipla escolha usando a enumeração
    switch (dia) {
        case seg:
        case ter:
        case qua:
        case qui:
        case sex: printf("Dia útil\n"); break;
    	case sab: 
    	case dom: printf("Dia não útil\n"); break;
    }    

    return 0;
}
