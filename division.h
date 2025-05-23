/*
 * Copyright (C) 2025 Tec de Monterrey
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef DIVISION_H
#define DIVISION_H

#include "operacion.h"
#include <stdexcept>

class Division : public Operacion {
public:
    double calcular(double x, double y) const override {
        if (y == 0) {
            throw std::runtime_error("División por cero");
        }
        return x / y;
    }
};

#endif // DIVISION_H
