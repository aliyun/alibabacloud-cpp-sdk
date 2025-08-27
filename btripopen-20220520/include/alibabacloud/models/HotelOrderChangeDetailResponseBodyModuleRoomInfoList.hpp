// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERCHANGEDETAILRESPONSEBODYMODULEROOMINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERCHANGEDETAILRESPONSEBODYMODULEROOMINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HotelOrderChangeDetailResponseBodyModuleRoomInfoListRoomDailyRefundInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderChangeDetailResponseBodyModuleRoomInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderChangeDetailResponseBodyModuleRoomInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(cancel_date, cancelDate_);
      DARABONBA_PTR_TO_JSON(room_daily_refund_infos, roomDailyRefundInfos_);
      DARABONBA_PTR_TO_JSON(room_no, roomNo_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderChangeDetailResponseBodyModuleRoomInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(cancel_date, cancelDate_);
      DARABONBA_PTR_FROM_JSON(room_daily_refund_infos, roomDailyRefundInfos_);
      DARABONBA_PTR_FROM_JSON(room_no, roomNo_);
    };
    HotelOrderChangeDetailResponseBodyModuleRoomInfoList() = default ;
    HotelOrderChangeDetailResponseBodyModuleRoomInfoList(const HotelOrderChangeDetailResponseBodyModuleRoomInfoList &) = default ;
    HotelOrderChangeDetailResponseBodyModuleRoomInfoList(HotelOrderChangeDetailResponseBodyModuleRoomInfoList &&) = default ;
    HotelOrderChangeDetailResponseBodyModuleRoomInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderChangeDetailResponseBodyModuleRoomInfoList() = default ;
    HotelOrderChangeDetailResponseBodyModuleRoomInfoList& operator=(const HotelOrderChangeDetailResponseBodyModuleRoomInfoList &) = default ;
    HotelOrderChangeDetailResponseBodyModuleRoomInfoList& operator=(HotelOrderChangeDetailResponseBodyModuleRoomInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cancelDate_ != nullptr
        && this->roomDailyRefundInfos_ != nullptr && this->roomNo_ != nullptr; };
    // cancelDate Field Functions 
    bool hasCancelDate() const { return this->cancelDate_ != nullptr;};
    void deleteCancelDate() { this->cancelDate_ = nullptr;};
    inline const vector<string> & cancelDate() const { DARABONBA_PTR_GET_CONST(cancelDate_, vector<string>) };
    inline vector<string> cancelDate() { DARABONBA_PTR_GET(cancelDate_, vector<string>) };
    inline HotelOrderChangeDetailResponseBodyModuleRoomInfoList& setCancelDate(const vector<string> & cancelDate) { DARABONBA_PTR_SET_VALUE(cancelDate_, cancelDate) };
    inline HotelOrderChangeDetailResponseBodyModuleRoomInfoList& setCancelDate(vector<string> && cancelDate) { DARABONBA_PTR_SET_RVALUE(cancelDate_, cancelDate) };


    // roomDailyRefundInfos Field Functions 
    bool hasRoomDailyRefundInfos() const { return this->roomDailyRefundInfos_ != nullptr;};
    void deleteRoomDailyRefundInfos() { this->roomDailyRefundInfos_ = nullptr;};
    inline const vector<Models::HotelOrderChangeDetailResponseBodyModuleRoomInfoListRoomDailyRefundInfos> & roomDailyRefundInfos() const { DARABONBA_PTR_GET_CONST(roomDailyRefundInfos_, vector<Models::HotelOrderChangeDetailResponseBodyModuleRoomInfoListRoomDailyRefundInfos>) };
    inline vector<Models::HotelOrderChangeDetailResponseBodyModuleRoomInfoListRoomDailyRefundInfos> roomDailyRefundInfos() { DARABONBA_PTR_GET(roomDailyRefundInfos_, vector<Models::HotelOrderChangeDetailResponseBodyModuleRoomInfoListRoomDailyRefundInfos>) };
    inline HotelOrderChangeDetailResponseBodyModuleRoomInfoList& setRoomDailyRefundInfos(const vector<Models::HotelOrderChangeDetailResponseBodyModuleRoomInfoListRoomDailyRefundInfos> & roomDailyRefundInfos) { DARABONBA_PTR_SET_VALUE(roomDailyRefundInfos_, roomDailyRefundInfos) };
    inline HotelOrderChangeDetailResponseBodyModuleRoomInfoList& setRoomDailyRefundInfos(vector<Models::HotelOrderChangeDetailResponseBodyModuleRoomInfoListRoomDailyRefundInfos> && roomDailyRefundInfos) { DARABONBA_PTR_SET_RVALUE(roomDailyRefundInfos_, roomDailyRefundInfos) };


    // roomNo Field Functions 
    bool hasRoomNo() const { return this->roomNo_ != nullptr;};
    void deleteRoomNo() { this->roomNo_ = nullptr;};
    inline int32_t roomNo() const { DARABONBA_PTR_GET_DEFAULT(roomNo_, 0) };
    inline HotelOrderChangeDetailResponseBodyModuleRoomInfoList& setRoomNo(int32_t roomNo) { DARABONBA_PTR_SET_VALUE(roomNo_, roomNo) };


  protected:
    std::shared_ptr<vector<string>> cancelDate_ = nullptr;
    std::shared_ptr<vector<Models::HotelOrderChangeDetailResponseBodyModuleRoomInfoListRoomDailyRefundInfos>> roomDailyRefundInfos_ = nullptr;
    std::shared_ptr<int32_t> roomNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
