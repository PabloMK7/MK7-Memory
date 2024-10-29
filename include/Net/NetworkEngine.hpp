#pragma once

#include "../types.hpp"

namespace Net
{
    class NetworkEngine
    {
    public:
        u8 gap_0x0[0x264];
        s32 m_local_station_id;
        s32 m_local_player_id;
        s32 m_master_station_id;
        s32 m_master_player_id;
        u8 gap_0x274[0x1C];
        NetworkErrorHandler *m_network_error_handler;
        u8 gap_0x294[0x304];
    };
    static_assert(sizeof(NetworkEngine) == 0x598);
}