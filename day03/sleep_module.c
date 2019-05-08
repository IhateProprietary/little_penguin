// SPDX-License-Identifier: GPL-3.0
/*
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/delay.h>
#include <linux/slab.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("jye");

static int      make_nap(int length)
{
	for (int i = 0; i < length; i++)
		udelay(10);
	if (length < 10)
		pr_info("We slept a long time!");

	return length * length;
}

static int      my_init(void)
{
	int     length = 10;

	length = make_nap(length);

	return length;
}

static void     my_exit(void)
{
}

module_init(my_init);
module_exit(my_exit);
