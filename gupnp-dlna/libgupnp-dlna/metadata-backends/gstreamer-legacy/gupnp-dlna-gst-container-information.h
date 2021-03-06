/*
 * Copyright (C) 2012,2013 Intel Corporation.
 *
 * Authors: Krzesimir Nowak <krnowak@openismus.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef __GUPNP_DLNA_GST_CONTAINER_INFORMATION_H__
#define __GUPNP_DLNA_GST_CONTAINER_INFORMATION_H__

#include <glib-object.h>
#include <gst/pbutils/pbutils.h>
#include "gupnp-dlna-container-information.h"

G_BEGIN_DECLS

#define GUPNP_TYPE_DLNA_GST_CONTAINER_INFORMATION \
        (gupnp_dlna_gst_container_information_get_type())

#define GUPNP_DLNA_GST_CONTAINER_INFORMATION(obj) \
        (G_TYPE_CHECK_INSTANCE_CAST \
                                   ((obj), \
                                    GUPNP_TYPE_DLNA_GST_CONTAINER_INFORMATION, \
                                    GUPnPDLNAGstContainerInformation))

#define GUPNP_DLNA_GST_CONTAINER_INFORMATION_CLASS(klass) \
        (G_TYPE_CHECK_CLASS_CAST ((klass), \
                                  GUPNP_TYPE_DLNA_GST_CONTAINER_INFORMATION, \
                                  GUPnPDLNAGstContainerInformationClass))

#define GUPNP_IS_DLNA_GST_CONTAINER_INFORMATION(obj) \
        (G_TYPE_CHECK_INSTANCE_TYPE ((obj), \
                                     GUPNP_TYPE_DLNA_GST_CONTAINER_INFORMATION))

#define GUPNP_IS_DLNA_GST_CONTAINER_INFORMATION_CLASS(klass) \
        (G_TYPE_CHECK_CLASS_TYPE ((klass), \
                                  GUPNP_TYPE_DLNA_GST_CONTAINER_INFORMATION))

#define GUPNP_DLNA_GST_CONTAINER_INFORMATION_GET_CLASS(obj) \
        (G_TYPE_INSTANCE_GET_CLASS ((obj), \
                                    GUPNP_TYPE_DLNA_GST_CONTAINER_INFORMATION, \
                                    GUPnPDLNAGstContainerInformationClass))

typedef struct _GUPnPDLNAGstContainerInformationPrivate
                GUPnPDLNAGstContainerInformationPrivate;

typedef struct {
        GUPnPDLNAContainerInformation parent;

        GUPnPDLNAGstContainerInformationPrivate *priv;
} GUPnPDLNAGstContainerInformation;

typedef struct {
        GUPnPDLNAContainerInformationClass parent_class;
} GUPnPDLNAGstContainerInformationClass;

GType
gupnp_dlna_gst_container_information_get_type (void);

GUPnPDLNAGstContainerInformation *
gupnp_dlna_gst_container_information_new_from_discoverer_info
                                        (GstDiscovererInfo *info);

G_END_DECLS

#endif /* __GUPNP_DLNA_GST_CONTAINER_INFORMATION_H__ */
