#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double tau[] = {0.5, 1, 2, 5, 10};
    int size = sizeof(tau) / sizeof(tau[0]);
    
    for (int i = 0; i < size; i++) {
        double h = 4.87 * sqrt(tau[i]);
        
        double t_cp;
        
        if (h < 11) {
            t_cp = 15.2 - 6.55 * h;
        } else {
            t_cp = -56.6 + 0.01 * h;
        }
        
        std::cout << std::fixed << std::setprecision(2);
        
        std::cout << "Для tau = " << tau[i] << " часов:\n";
        std::cout << "Высота h = " << h << " км\n";
        std::cout << "Средняя температура t_cp = " << t_cp << " C\n\n";
    }
    
    return 0;
}