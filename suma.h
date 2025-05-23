/*
 * Copyright (C) 2025 Tec de Monterrey
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef SUMA_H
#define SUMA_H

#include "operacion.h"

class Suma : public Operacion {
public:
    double calcular(double x, double y) const override {
        return x + y;
    }
};

#endif // SUMA_H
