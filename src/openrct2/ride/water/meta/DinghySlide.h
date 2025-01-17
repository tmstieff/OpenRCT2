/*****************************************************************************
 * Copyright (c) 2014-2020 OpenRCT2 developers
 *
 * For a complete list of all authors, please refer to contributors.md
 * Interested in contributing? Visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is licensed under the GNU General Public License version 3.
 *****************************************************************************/

#pragma once

#include "../../RideData.h"
#include "../../ShopItem.h"
#include "../../Track.h"

// clang-format off
constexpr const RideTypeDescriptor DinghySlideRTD =
{
    SET_FIELD(AlternateType, RIDE_TYPE_NULL),
    SET_FIELD(Category, RIDE_CATEGORY_WATER),
    SET_FIELD(EnabledTrackPieces, (1ULL << TRACK_STRAIGHT) | (1ULL << TRACK_STATION_END) | (1ULL << TRACK_LIFT_HILL) | (1ULL << TRACK_SLOPE) | (1ULL << TRACK_SLOPE_STEEP) | (1ULL << TRACK_S_BEND) | (1ULL << TRACK_CURVE_SMALL) | (1ULL << TRACK_CURVE)),
    SET_FIELD(ExtraTrackPieces, 0),
    SET_FIELD(CoveredTrackPieces, (1ULL << TRACK_ELEM_FLAT) | (1ULL << TRACK_ELEM_25_DEG_UP) | (1ULL << TRACK_ELEM_60_DEG_UP) | 
                                  (1ULL << TRACK_ELEM_FLAT_TO_25_DEG_UP) | (1ULL << TRACK_ELEM_25_DEG_UP_TO_60_DEG_UP) | 
                                  (1ULL << TRACK_ELEM_60_DEG_UP_TO_25_DEG_UP) | (1ULL << TRACK_ELEM_25_DEG_UP_TO_FLAT) | 
                                  (1ULL << TRACK_ELEM_25_DEG_DOWN) | (1ULL << TRACK_ELEM_60_DEG_DOWN) | (1ULL << TRACK_ELEM_FLAT_TO_25_DEG_DOWN) | 
                                  (1ULL << TRACK_ELEM_25_DEG_DOWN_TO_60_DEG_DOWN) | (1ULL << TRACK_ELEM_60_DEG_DOWN_TO_25_DEG_DOWN) | 
                                  (1ULL << TRACK_ELEM_25_DEG_DOWN_TO_FLAT) | (1ULL << TRACK_ELEM_LEFT_QUARTER_TURN_5_TILES) | 
                                  (1ULL << TRACK_ELEM_RIGHT_QUARTER_TURN_5_TILES) | (1ULL << TRACK_ELEM_S_BEND_LEFT) | 
                                  (1ULL << TRACK_ELEM_S_BEND_RIGHT) | (1ULL << TRACK_ELEM_LEFT_QUARTER_TURN_3_TILES) | 
                                  (1ULL << TRACK_ELEM_RIGHT_QUARTER_TURN_3_TILES)),
    SET_FIELD(StartTrackPiece, TRACK_ELEM_END_STATION),
    SET_FIELD(TrackPaintFunction, get_track_paint_function_dinghy_slide),
    SET_FIELD(Flags, RIDE_TYPE_FLAGS_TRACK_HAS_3_COLOURS | RIDE_TYPE_FLAG_HAS_LEAVE_WHEN_ANOTHER_VEHICLE_ARRIVES_AT_STATION |
                     RIDE_TYPE_FLAG_CAN_SYNCHRONISE_ADJACENT_STATIONS | RIDE_TYPE_FLAG_HAS_G_FORCES |
                     RIDE_TYPE_FLAG_HAS_DATA_LOGGING | RIDE_TYPE_FLAG_HAS_DROPS | RIDE_TYPE_FLAG_TRACK_ELEMENTS_HAVE_TWO_VARIETIES |
                     RIDE_TYPE_FLAG_HAS_LOAD_OPTIONS | RIDE_TYPE_FLAG_PEEP_WILL_RIDE_AGAIN | RIDE_TYPE_FLAG_HAS_VEHICLE_COLOURS |
                     RIDE_TYPE_FLAG_CHECK_FOR_STALLING | RIDE_TYPE_FLAG_HAS_TRACK | RIDE_TYPE_FLAG_SUPPORTS_MULTIPLE_TRACK_COLOUR |
                     RIDE_TYPE_FLAG_ALLOW_MUSIC | RIDE_TYPE_FLAG_HAS_ENTRANCE_EXIT | RIDE_TYPE_FLAG_HAS_AIR_TIME |
                     RIDE_TYPE_FLAG_SHOW_IN_TRACK_DESIGNER | RIDE_TYPE_FLAG_INTERESTING_TO_LOOK_AT),
    SET_FIELD(RideModes, (1ULL << RIDE_MODE_CONTINUOUS_CIRCUIT)),
    SET_FIELD(DefaultMode, RIDE_MODE_CONTINUOUS_CIRCUIT),
    SET_FIELD(OperatingSettings, { 0, 0, 0, 0, 0, 0 }),
    SET_FIELD(Naming, { STR_RIDE_NAME_DINGHY_SLIDE, STR_RIDE_DESCRIPTION_DINGHY_SLIDE }),
    SET_FIELD(NameConvention, { RIDE_COMPONENT_TYPE_BOAT, RIDE_COMPONENT_TYPE_TRACK, RIDE_COMPONENT_TYPE_STATION }),
    SET_FIELD(EnumName, nameof(RIDE_TYPE_DINGHY_SLIDE)),
    SET_FIELD(AvailableBreakdowns, (1 << BREAKDOWN_SAFETY_CUT_OUT)),
    SET_FIELD(Heights, { 15, 24, 5, 7, }),
    SET_FIELD(MaxMass, 5),
    SET_FIELD(LiftData, { SoundId::LiftFrictionWheels, 4, 5 }),
    SET_FIELD(RatingsCalculationFunction, ride_ratings_calculate_dinghy_slide),
    SET_FIELD(RatingsMultipliers, { 50, 30, 10 }),
    SET_FIELD(UpkeepCosts, { 40, 20, 80, 4, 3, 10 }),
    SET_FIELD(BuildCosts, { 40, 4, 40, }),
    SET_FIELD(DefaultPrices, { 20, 20 }),
    SET_FIELD(DefaultMusic, MUSIC_STYLE_WATER),
    SET_FIELD(PhotoItem, SHOP_ITEM_PHOTO4),
    SET_FIELD(BonusValue, 55),
    SET_FIELD(ColourPresets, TRACK_COLOUR_PRESETS(
        { COLOUR_DARK_GREEN, COLOUR_SATURATED_BROWN, COLOUR_DARK_GREEN },
        { COLOUR_TEAL, COLOUR_BORDEAUX_RED, COLOUR_TEAL },
        { COLOUR_BRIGHT_RED, COLOUR_GREY, COLOUR_SATURATED_RED },
    )),
    SET_FIELD(ColourKey, RideColourKey::Ride),
};
// clang-format on
