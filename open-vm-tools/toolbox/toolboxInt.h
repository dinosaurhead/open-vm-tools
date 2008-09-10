/*********************************************************
 * Copyright (C) 2008 VMware, Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation version 2.1 and no later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the Lesser GNU General Public
 * License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA.
 *
 *********************************************************/

/*
 * toolboxInt.h --
 *
 *     Common defines used by the toolbox-cmd and toolbox-gtk
 */
#ifndef _TOOLBOX_INT_H_
#define _TOOLBOX_INT_H_

#include "vm_basic_types.h"
#include "vm_version.h"
#include "dbllnklst.h"
#include "wiper.h"
#include "vmcheck.h"
#include "removable_device.h"
#include "guestApp.h"
#include "conf.h"
#include "file.h"
#include "wiper.h"
#include "backdoor_def.h"
#include "backdoor.h"
#include "vm_app.h"


#define MAX_DEVICES 50  /* maximum number of devices we'll show */
#define SHRINK_DISABLED_ERR "Shrink disk is disabled for this virtual machine." \
                            "Shrinking is disabled for linked clones, parents of " \
			    "linked clones, pre-allocated disks, snapshots, and " \
			    "other factors. See the User's manual for more " \
			    "information.\n"
#define SHRINK_FEATURE_ERR "The shrink feature is not available,\n\n" \
			    "either because you are running an old version of a VMware product, or " \
			    "because too many communication channels are open.\n\n If you are running " \
			    "an old version of a VMware product, you should consider upgrading.\n\n" \
			    "If too many communication channels are open, you should power off your " \
			    "virtual machine and then power it back on\n." 
#define SHRINK_CONFLICT_ERR "Error, The Toolbox believes disk shrinking is " \
			    "enabled while the host believes it is disabled. " \
			    "Please close and reopen the Toolbox to synchronize " \
			    "it with the host.\n"
#define RECORD_VMX_DISABLED "Error, this operation is prevented by current vmx setting.\n" \
                            "There may be reasons as follows:\n" \
                            "1. Controlling is disabled by vmx." \
                            "To enable it, add the following option to your vmx file:\n" \
                            "   isolation.tools.stateLoggerControl.disable = \"FALSE\"\n\n" \
                            "2. You may want to start recording when you are already in it.\n\n" \
                            "3. You may want to stop recording when you are not in recording.\n\n" \

#endif /*_TOOLBOX_INT_H_*/
