/*
 * This file is part of Cleanflight and Betaflight.
 *
 * Cleanflight and Betaflight are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight and Betaflight are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

//#include "platform.h"

#include "version.h"

char __TARGET__[] = "STM32F405";
char __REVISION__[] = "no_revision";

const char * const targetName = __TARGET__;
const char * const shortGitRevision = __REVISION__;
const char * const buildDate = __DATE__;
const char * const buildTime = __TIME__;

pilotConfig_t pilotConfig;

void pilotConfig_Init(void)
{
	pilotConfig.name[MAX_NAME_LENGTH + 1] = 0;
	pilotConfig.displayName[MAX_NAME_LENGTH + 1] = 0;
}
