/*
 macam - webcam app and QuickTime driver component
 Copyright (C) 2002 Matthias Krauss (macam@matthias-krauss.de)

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 $Id: MySPCA504Driver.h,v 1.2 2002/07/12 14:49:49 mattik Exp $
 */

#import <Cocoa/Cocoa.h>
#import "MyCameraDriver.h"

@interface MySPCA504Driver : MyCameraDriver {
    IOUSBInterfaceInterface** dscIntf;
}

+ (unsigned short) cameraUsbProductID;
+ (unsigned short) cameraUsbVendorID;
+ (NSString*) cameraName;

- (CameraError) startupWithUsbDeviceRef:(io_service_t)usbDeviceRef;
- (void) shutdown;

- (BOOL) supportsResolution:(CameraResolution)r fps:(short)fr;
- (void) setResolution:(CameraResolution)r fps:(short)fr;
- (CameraResolution) defaultResolutionAndRate:(short*)dFps;
- (BOOL) canStoreMedia;
- (long) numberOfStoredMediaObjects;
- (id) getStoredMediaObject:(long)idx;
- (void) eraseStoredMedia;



@end
