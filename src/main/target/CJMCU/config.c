/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight is distributed in the hope that it
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdbool.h>
#include <stdint.h>

#include "platform.h"

#ifdef USE_TARGET_CONFIG

#include "drivers/io_types.h"
#include "hardware_revision.h"

#include "pg/pg.h"
#include "pg/gyrodev.h"

void targetConfiguration(void)
{
    gyroDeviceConfigMutable(0)->extiTag = selectMPUIntExtiConfigByHardwareRevision();
}
#endif
