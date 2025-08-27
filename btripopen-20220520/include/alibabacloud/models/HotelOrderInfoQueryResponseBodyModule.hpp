// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERINFOQUERYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERINFOQUERYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo.hpp>
#include <alibabacloud/models/HotelOrderInfoQueryResponseBodyModuleBookerInfo.hpp>
#include <alibabacloud/models/HotelOrderInfoQueryResponseBodyModuleHotelInfo.hpp>
#include <alibabacloud/models/HotelOrderInfoQueryResponseBodyModuleHotelOrderFeeInfo.hpp>
#include <vector>
#include <alibabacloud/models/HotelOrderInfoQueryResponseBodyModuleHotelOrderRefundInfo.hpp>
#include <alibabacloud/models/HotelOrderInfoQueryResponseBodyModuleRoomTraverInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderInfoQueryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderInfoQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(base_order_info, baseOrderInfo_);
      DARABONBA_PTR_TO_JSON(booker_info, bookerInfo_);
      DARABONBA_PTR_TO_JSON(hotel_info, hotelInfo_);
      DARABONBA_PTR_TO_JSON(hotel_order_fee_info, hotelOrderFeeInfo_);
      DARABONBA_PTR_TO_JSON(hotel_order_refund_info, hotelOrderRefundInfo_);
      DARABONBA_PTR_TO_JSON(room_traver_info, roomTraverInfo_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderInfoQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(base_order_info, baseOrderInfo_);
      DARABONBA_PTR_FROM_JSON(booker_info, bookerInfo_);
      DARABONBA_PTR_FROM_JSON(hotel_info, hotelInfo_);
      DARABONBA_PTR_FROM_JSON(hotel_order_fee_info, hotelOrderFeeInfo_);
      DARABONBA_PTR_FROM_JSON(hotel_order_refund_info, hotelOrderRefundInfo_);
      DARABONBA_PTR_FROM_JSON(room_traver_info, roomTraverInfo_);
    };
    HotelOrderInfoQueryResponseBodyModule() = default ;
    HotelOrderInfoQueryResponseBodyModule(const HotelOrderInfoQueryResponseBodyModule &) = default ;
    HotelOrderInfoQueryResponseBodyModule(HotelOrderInfoQueryResponseBodyModule &&) = default ;
    HotelOrderInfoQueryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderInfoQueryResponseBodyModule() = default ;
    HotelOrderInfoQueryResponseBodyModule& operator=(const HotelOrderInfoQueryResponseBodyModule &) = default ;
    HotelOrderInfoQueryResponseBodyModule& operator=(HotelOrderInfoQueryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baseOrderInfo_ != nullptr
        && this->bookerInfo_ != nullptr && this->hotelInfo_ != nullptr && this->hotelOrderFeeInfo_ != nullptr && this->hotelOrderRefundInfo_ != nullptr && this->roomTraverInfo_ != nullptr; };
    // baseOrderInfo Field Functions 
    bool hasBaseOrderInfo() const { return this->baseOrderInfo_ != nullptr;};
    void deleteBaseOrderInfo() { this->baseOrderInfo_ = nullptr;};
    inline const Models::HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo & baseOrderInfo() const { DARABONBA_PTR_GET_CONST(baseOrderInfo_, Models::HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo) };
    inline Models::HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo baseOrderInfo() { DARABONBA_PTR_GET(baseOrderInfo_, Models::HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo) };
    inline HotelOrderInfoQueryResponseBodyModule& setBaseOrderInfo(const Models::HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo & baseOrderInfo) { DARABONBA_PTR_SET_VALUE(baseOrderInfo_, baseOrderInfo) };
    inline HotelOrderInfoQueryResponseBodyModule& setBaseOrderInfo(Models::HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo && baseOrderInfo) { DARABONBA_PTR_SET_RVALUE(baseOrderInfo_, baseOrderInfo) };


    // bookerInfo Field Functions 
    bool hasBookerInfo() const { return this->bookerInfo_ != nullptr;};
    void deleteBookerInfo() { this->bookerInfo_ = nullptr;};
    inline const Models::HotelOrderInfoQueryResponseBodyModuleBookerInfo & bookerInfo() const { DARABONBA_PTR_GET_CONST(bookerInfo_, Models::HotelOrderInfoQueryResponseBodyModuleBookerInfo) };
    inline Models::HotelOrderInfoQueryResponseBodyModuleBookerInfo bookerInfo() { DARABONBA_PTR_GET(bookerInfo_, Models::HotelOrderInfoQueryResponseBodyModuleBookerInfo) };
    inline HotelOrderInfoQueryResponseBodyModule& setBookerInfo(const Models::HotelOrderInfoQueryResponseBodyModuleBookerInfo & bookerInfo) { DARABONBA_PTR_SET_VALUE(bookerInfo_, bookerInfo) };
    inline HotelOrderInfoQueryResponseBodyModule& setBookerInfo(Models::HotelOrderInfoQueryResponseBodyModuleBookerInfo && bookerInfo) { DARABONBA_PTR_SET_RVALUE(bookerInfo_, bookerInfo) };


    // hotelInfo Field Functions 
    bool hasHotelInfo() const { return this->hotelInfo_ != nullptr;};
    void deleteHotelInfo() { this->hotelInfo_ = nullptr;};
    inline const Models::HotelOrderInfoQueryResponseBodyModuleHotelInfo & hotelInfo() const { DARABONBA_PTR_GET_CONST(hotelInfo_, Models::HotelOrderInfoQueryResponseBodyModuleHotelInfo) };
    inline Models::HotelOrderInfoQueryResponseBodyModuleHotelInfo hotelInfo() { DARABONBA_PTR_GET(hotelInfo_, Models::HotelOrderInfoQueryResponseBodyModuleHotelInfo) };
    inline HotelOrderInfoQueryResponseBodyModule& setHotelInfo(const Models::HotelOrderInfoQueryResponseBodyModuleHotelInfo & hotelInfo) { DARABONBA_PTR_SET_VALUE(hotelInfo_, hotelInfo) };
    inline HotelOrderInfoQueryResponseBodyModule& setHotelInfo(Models::HotelOrderInfoQueryResponseBodyModuleHotelInfo && hotelInfo) { DARABONBA_PTR_SET_RVALUE(hotelInfo_, hotelInfo) };


    // hotelOrderFeeInfo Field Functions 
    bool hasHotelOrderFeeInfo() const { return this->hotelOrderFeeInfo_ != nullptr;};
    void deleteHotelOrderFeeInfo() { this->hotelOrderFeeInfo_ = nullptr;};
    inline const Models::HotelOrderInfoQueryResponseBodyModuleHotelOrderFeeInfo & hotelOrderFeeInfo() const { DARABONBA_PTR_GET_CONST(hotelOrderFeeInfo_, Models::HotelOrderInfoQueryResponseBodyModuleHotelOrderFeeInfo) };
    inline Models::HotelOrderInfoQueryResponseBodyModuleHotelOrderFeeInfo hotelOrderFeeInfo() { DARABONBA_PTR_GET(hotelOrderFeeInfo_, Models::HotelOrderInfoQueryResponseBodyModuleHotelOrderFeeInfo) };
    inline HotelOrderInfoQueryResponseBodyModule& setHotelOrderFeeInfo(const Models::HotelOrderInfoQueryResponseBodyModuleHotelOrderFeeInfo & hotelOrderFeeInfo) { DARABONBA_PTR_SET_VALUE(hotelOrderFeeInfo_, hotelOrderFeeInfo) };
    inline HotelOrderInfoQueryResponseBodyModule& setHotelOrderFeeInfo(Models::HotelOrderInfoQueryResponseBodyModuleHotelOrderFeeInfo && hotelOrderFeeInfo) { DARABONBA_PTR_SET_RVALUE(hotelOrderFeeInfo_, hotelOrderFeeInfo) };


    // hotelOrderRefundInfo Field Functions 
    bool hasHotelOrderRefundInfo() const { return this->hotelOrderRefundInfo_ != nullptr;};
    void deleteHotelOrderRefundInfo() { this->hotelOrderRefundInfo_ = nullptr;};
    inline const vector<Models::HotelOrderInfoQueryResponseBodyModuleHotelOrderRefundInfo> & hotelOrderRefundInfo() const { DARABONBA_PTR_GET_CONST(hotelOrderRefundInfo_, vector<Models::HotelOrderInfoQueryResponseBodyModuleHotelOrderRefundInfo>) };
    inline vector<Models::HotelOrderInfoQueryResponseBodyModuleHotelOrderRefundInfo> hotelOrderRefundInfo() { DARABONBA_PTR_GET(hotelOrderRefundInfo_, vector<Models::HotelOrderInfoQueryResponseBodyModuleHotelOrderRefundInfo>) };
    inline HotelOrderInfoQueryResponseBodyModule& setHotelOrderRefundInfo(const vector<Models::HotelOrderInfoQueryResponseBodyModuleHotelOrderRefundInfo> & hotelOrderRefundInfo) { DARABONBA_PTR_SET_VALUE(hotelOrderRefundInfo_, hotelOrderRefundInfo) };
    inline HotelOrderInfoQueryResponseBodyModule& setHotelOrderRefundInfo(vector<Models::HotelOrderInfoQueryResponseBodyModuleHotelOrderRefundInfo> && hotelOrderRefundInfo) { DARABONBA_PTR_SET_RVALUE(hotelOrderRefundInfo_, hotelOrderRefundInfo) };


    // roomTraverInfo Field Functions 
    bool hasRoomTraverInfo() const { return this->roomTraverInfo_ != nullptr;};
    void deleteRoomTraverInfo() { this->roomTraverInfo_ = nullptr;};
    inline const vector<Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfo> & roomTraverInfo() const { DARABONBA_PTR_GET_CONST(roomTraverInfo_, vector<Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfo>) };
    inline vector<Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfo> roomTraverInfo() { DARABONBA_PTR_GET(roomTraverInfo_, vector<Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfo>) };
    inline HotelOrderInfoQueryResponseBodyModule& setRoomTraverInfo(const vector<Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfo> & roomTraverInfo) { DARABONBA_PTR_SET_VALUE(roomTraverInfo_, roomTraverInfo) };
    inline HotelOrderInfoQueryResponseBodyModule& setRoomTraverInfo(vector<Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfo> && roomTraverInfo) { DARABONBA_PTR_SET_RVALUE(roomTraverInfo_, roomTraverInfo) };


  protected:
    std::shared_ptr<Models::HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo> baseOrderInfo_ = nullptr;
    std::shared_ptr<Models::HotelOrderInfoQueryResponseBodyModuleBookerInfo> bookerInfo_ = nullptr;
    std::shared_ptr<Models::HotelOrderInfoQueryResponseBodyModuleHotelInfo> hotelInfo_ = nullptr;
    std::shared_ptr<Models::HotelOrderInfoQueryResponseBodyModuleHotelOrderFeeInfo> hotelOrderFeeInfo_ = nullptr;
    std::shared_ptr<vector<Models::HotelOrderInfoQueryResponseBodyModuleHotelOrderRefundInfo>> hotelOrderRefundInfo_ = nullptr;
    std::shared_ptr<vector<Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfo>> roomTraverInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
