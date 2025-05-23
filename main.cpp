/*
 * Copyright (C) 2025 Tec de Monterrey
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#include <iostream>
#include <memory>
#include "suma.h"
#include "resta.h"
#include "division.h"

void mostrarResultado(const Operacion& op, double x, double y) {
    try {
        std::cout << "Resultado: " << op.calcular(x, y) << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}

int main() {
    // Crear instancias de las operaciones
    Suma suma;
    Resta resta;
    Division division;

    // Usar polimorfismo a través de referencia a la clase base
    const Operacion& op1 = suma;
    const Operacion& op2 = resta;
    const Operacion& op3 = division;

    // Demostración del polimorfismo
    mostrarResultado(op1, 1, 5);    // Suma
    mostrarResultado(op2, 5, 1);    // Resta
    mostrarResultado(op3, 9, 3);    // División
    
    // Probar caso de error
    mostrarResultado(op3, 5, 0);    // División por cero

    return 0;
}
