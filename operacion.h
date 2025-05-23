/*
 * Copyright (C) 2025 Tec de Monterrey
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef OPERACION_H
#define OPERACION_H

#include <stdexcept>

class Operacion {
public:
    virtual double calcular(double x, double y) const = 0;
    virtual ~Operacion() = default;
};

#endif // OPERACION_H
