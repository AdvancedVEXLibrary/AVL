#pragma once
#ifndef _AVL_H_
#define _AVL_H_

#include "avl_version.h"
#include "avl_primarea.h" // doc
#include "avl_primperimeter.h" // doc
#include "avl_primvolume.h" // doc
#include "avl_round.h" // doc
#include "avl_swap.h" // doc
#include "avl_angle.h" // doc
#include "avl_unique.h" // doc
#include "avl_median.h" // doc
#include "avl_medianhigh.h" // doc
#include "avl_medianlow.h" // doc
#include "avl_clamp01.h" // doc
#include "avl_clamp11.h" // doc
#include "avl_shift.h" // doc
#include "avl_polyneighbours.h" // doc
#include "avl_pointattribs.h" // doc
#include "avl_vertexattribs.h" // doc
#include "avl_primattribs.h" // doc
#include "avl_detailattribs.h" // doc
#include "avl_pointgroups.h" // doc
#include "avl_vertexgroups.h" // doc
#include "avl_primgroups.h" // doc
#include "avl_edgegroups.h" // doc
#include "avl_padzero.h" // doc
#include "avl_inside.h" // doc
#include "avl_print.h" // doc
#include "avl_triarea.h" // doc
#include "avl_trinormal.h" // doc
#include "avl_insphere.h" // doc
#include "avl_range.h" // Todo: check
#include "avl_hedge_srcpos.h" // doc
#include "avl_hedge_dstpos.h" // doc
#include "avl_hedge_presrcpos.h" // doc
#include "avl_hedge_postdstpos.h" // doc
#include "avl_normalizevalues.h" // doc
#include "avl_count.h" // doc
#include "avl_colors.h" // doc
#include "avl_copypointattrib.h"
#include "avl_copypointattribs.h"
#include "avl_copyprimattrib.h"
#include "avl_copyprimattribs.h"
#include "avl_copyvertexattrib.h"
#include "avl_copyvertexattribs.h"
#include "avl_copydetailattrib.h"
#include "avl_copydetailattribs.h"
#include "avl_tostr.h"
#include "avl_sphericaldistance.h"
#include "avl_copypointgroup.h"
#include "avl_copypointgroups.h"
#include "avl_copyprimgroup.h"
#include "avl_copyprimgroups.h"
#include "avl_copyvertexgroup.h"
#include "avl_copyvertexgroups.h"
#include "avl_copyedgegroup.h"
#include "avl_copyedgegroups.h"
#include "avl_hedge_opposite.h"
#include "avl_pointcurvature.h"
#include "avl_splitext.h"
#include "avl_almostequal.h"
#include "avl_shiftvertexorder.h"
#include "avl_reversevertexorder.h"
#include "avl_getbbox_volume.h"
#include "avl_getpointbbox_volume.h"
#include "avl_getbbox_area.h"
#include "avl_getpointbbox_area.h"
#include "avl_tricentroid.h"
#include "avl_istiny.h"
#include "avl_mode.h"
#include "avl_sample.h"
#include "avl_choice.h"
#include "avl_shuffle.h"
#include "avl_isodd.h"
#include "avl_iseven.h"
#include "avl_inbbox.h"
#include "avl_inpointbbox.h"
#include "avl_inrect.h"
#include "avl_incircle.h"
#include "avl_circlelength.h"
#include "avl_circlearea.h"
#include "avl_spherevolume.h"
#include "avl_spherearea.h"
//#include "avl_isconvex.h"
//#include "avl_isconcave.h"
#include "avl_isflat.h"
//#include "avl_merge.h" // mergevalues?
//#include "avl_polycurvature.h"
#include "avl_triangulate.h"
#include "avl_polyextrude.h"
//#include "avl_convolve1d.h"
//#include "avl_filter.h"s
//#include "avl_gradient.h"
//#include "avl_convolve2d.h"
//#include "avl_convolve3d.h"
//#include "avl_rawgroupisvalid.h"
//#include "avl_rawgrouppack.h"
//#include "avl_rawgroupunpack.h"
//#include "avl_rawgroupcompress.h"
//#include "avl_rawgroupmerge.h"
//#include "avl_rawgroupcontains.h"
//#include "avl_rawgroupbyrange.h"
//#include "avl_selectloop.h"
//#include "avl_selectring.h"
#include "avl_polyarea.h"
#include "avl_polyvolume.h"
#include "avl_polycentroid.h"
#include "avl_primcentroid.h"
#include "avl_polyperimeter.h"
#include "avl_triperimeter.h"
#include "avl_trivolume.h"
//#include "avl_bfind.h"
#include "avl_limits.h" // doc // double ??
#include "avl_randrange.h"
#include "avl_frompolar.h"
#include "avl_topolar.h"
#include "avl_in.h"
#include "avl_randint.h"
//#include "avl_fromspherical.h"
//#include "avl_tospherical.h"
#include "avl_removeduplicates.h"
#include "avl_removevertex.h" // doc
#include "avl_maxindex.h" // doc
#include "avl_minindex.h" // doc
#include "avl_primtype.h"
#include "avl_primtypename.h"
#include "avl_polysplit.h"
#include "avl_copyprim.h"
#include "avl_copypoint.h"
#include "avl_pointnormal.h"
#include "avl_vertexnormal.h"
#include "avl_primnormal.h"
//#include "avl_divide.h"
#include "avl_isclosed.h"
#include "avl_ispolyline.h"

#endif  // _AVL_H_
