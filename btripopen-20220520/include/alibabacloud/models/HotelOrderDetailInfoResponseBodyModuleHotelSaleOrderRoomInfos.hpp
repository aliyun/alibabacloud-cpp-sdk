// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERDETAILINFORESPONSEBODYMODULEHOTELSALEORDERROOMINFOS_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERDETAILINFORESPONSEBODYMODULEHOTELSALEORDERROOMINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderDetailInfoResponseBodyModuleHotelSaleOrderRoomInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderDetailInfoResponseBodyModuleHotelSaleOrderRoomInfos& obj) { 
      DARABONBA_PTR_TO_JSON(checkin_date, checkinDate_);
      DARABONBA_PTR_TO_JSON(checkout_date, checkoutDate_);
      DARABONBA_PTR_TO_JSON(penal_sum, penalSum_);
      DARABONBA_PTR_TO_JSON(real_checkout_date, realCheckoutDate_);
      DARABONBA_PTR_TO_JSON(refund_status, refundStatus_);
      DARABONBA_PTR_TO_JSON(room_no, roomNo_);
      DARABONBA_PTR_TO_JSON(room_price, roomPrice_);
      DARABONBA_PTR_TO_JSON(room_refund_price, roomRefundPrice_);
      DARABONBA_PTR_TO_JSON(traveler_id, travelerId_);
      DARABONBA_PTR_TO_JSON(traveler_name, travelerName_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderDetailInfoResponseBodyModuleHotelSaleOrderRoomInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(checkin_date, checkinDate_);
      DARABONBA_PTR_FROM_JSON(checkout_date, checkoutDate_);
      DARABONBA_PTR_FROM_JSON(penal_sum, penalSum_);
      DARABONBA_PTR_FROM_JSON(real_checkout_date, realCheckoutDate_);
      DARABONBA_PTR_FROM_JSON(refund_status, refundStatus_);
      DARABONBA_PTR_FROM_JSON(room_no, roomNo_);
      DARABONBA_PTR_FROM_JSON(room_price, roomPrice_);
      DARABONBA_PTR_FROM_JSON(room_refund_price, roomRefundPrice_);
      DARABONBA_PTR_FROM_JSON(traveler_id, travelerId_);
      DARABONBA_PTR_FROM_JSON(traveler_name, travelerName_);
    };
    HotelOrderDetailInfoResponseBodyModuleHotelSaleOrderRoomInfos() = default ;
    HotelOrderDetailInfoResponseBodyModuleHotelSaleOrderRoomInfos(const HotelOrderDetailInfoResponseBodyModuleHotelSaleOrderRoomInfos &) = default ;
    HotelOrderDetailInfoResponseBodyModuleHotelSaleOrderRoomInfos(HotelOrderDetailInfoResponseBodyModuleHotelSaleOrderRoomInfos &&) = default ;
    HotelOrderDetailInfoResponseBodyModuleHotelSaleOrderRoomInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderDetailInfoResponseBodyModuleHotelSaleOrderRoomInfos() = default ;
    HotelOrderDetailInfoResponseBodyModuleHotelSaleOrderRoomInfos& operator=(const HotelOrderDetailInfoResponseBodyModuleHotelSaleOrderRoomInfos &) = default ;
    HotelOrderDetailInfoResponseBodyModuleHotelSaleOrderRoomInfos& operator=(HotelOrderDetailInfoResponseBodyModuleHotelSaleOrderRoomInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkinDate_ != nullptr
        && this->checkoutDate_ != nullptr && this->penalSum_ != nullptr && this->realCheckoutDate_ != nullptr && this->refundStatus_ != nullptr && this->roomNo_ != nullptr
        && this->roomPrice_ != nullptr && this->roomRefundPrice_ != nullptr && this->travelerId_ != nullptr && this->travelerName_ != nullptr; };
    // checkinDate Field Functions 
    bool hasCheckinDate() const { return this->checkinDate_ != nullptr;};
    void deleteCheckinDate() { this->checkinDate_ = nullptr;};
    inline string checkinDate() const { DARABONBA_PTR_GET_DEFAULT(checkinDate_, "") };
    inline HotelOrderDetailInfoResponseBodyModuleHotelSaleOrderRoomInfos& setCheckinDate(string checkinDate) { DARABONBA_PTR_SET_VALUE(checkinDate_, checkinDate) };


    // checkoutDate Field Functions 
    bool hasCheckoutDate() const { return this->checkoutDate_ != nullptr;};
    void deleteCheckoutDate() { this->checkoutDate_ = nullptr;};
    inline string checkoutDate() const { DARABONBA_PTR_GET_DEFAULT(checkoutDate_, "") };
    inline HotelOrderDetailInfoResponseBodyModuleHotelSaleOrderRoomInfos& setCheckoutDate(string checkoutDate) { DARABONBA_PTR_SET_VALUE(checkoutDate_, checkoutDate) };


    // penalSum Field Functions 
    bool hasPenalSum() const { return this->penalSum_ != nullptr;};
    void deletePenalSum() { this->penalSum_ = nullptr;};
    inline int64_t penalSum() const { DARABONBA_PTR_GET_DEFAULT(penalSum_, 0L) };
    inline HotelOrderDetailInfoResponseBodyModuleHotelSaleOrderRoomInfos& setPenalSum(int64_t penalSum) { DARABONBA_PTR_SET_VALUE(penalSum_, penalSum) };


    // realCheckoutDate Field Functions 
    bool hasRealCheckoutDate() const { return this->realCheckoutDate_ != nullptr;};
    void deleteRealCheckoutDate() { this->realCheckoutDate_ = nullptr;};
    inline string realCheckoutDate() const { DARABONBA_PTR_GET_DEFAULT(realCheckoutDate_, "") };
    inline HotelOrderDetailInfoResponseBodyModuleHotelSaleOrderRoomInfos& setRealCheckoutDate(string realCheckoutDate) { DARABONBA_PTR_SET_VALUE(realCheckoutDate_, realCheckoutDate) };


    // refundStatus Field Functions 
    bool hasRefundStatus() const { return this->refundStatus_ != nullptr;};
    void deleteRefundStatus() { this->refundStatus_ = nullptr;};
    inline int32_t refundStatus() const { DARABONBA_PTR_GET_DEFAULT(refundStatus_, 0) };
    inline HotelOrderDetailInfoResponseBodyModuleHotelSaleOrderRoomInfos& setRefundStatus(int32_t refundStatus) { DARABONBA_PTR_SET_VALUE(refundStatus_, refundStatus) };


    // roomNo Field Functions 
    bool hasRoomNo() const { return this->roomNo_ != nullptr;};
    void deleteRoomNo() { this->roomNo_ = nullptr;};
    inline int32_t roomNo() const { DARABONBA_PTR_GET_DEFAULT(roomNo_, 0) };
    inline HotelOrderDetailInfoResponseBodyModuleHotelSaleOrderRoomInfos& setRoomNo(int32_t roomNo) { DARABONBA_PTR_SET_VALUE(roomNo_, roomNo) };


    // roomPrice Field Functions 
    bool hasRoomPrice() const { return this->roomPrice_ != nullptr;};
    void deleteRoomPrice() { this->roomPrice_ = nullptr;};
    inline int64_t roomPrice() const { DARABONBA_PTR_GET_DEFAULT(roomPrice_, 0L) };
    inline HotelOrderDetailInfoResponseBodyModuleHotelSaleOrderRoomInfos& setRoomPrice(int64_t roomPrice) { DARABONBA_PTR_SET_VALUE(roomPrice_, roomPrice) };


    // roomRefundPrice Field Functions 
    bool hasRoomRefundPrice() const { return this->roomRefundPrice_ != nullptr;};
    void deleteRoomRefundPrice() { this->roomRefundPrice_ = nullptr;};
    inline int64_t roomRefundPrice() const { DARABONBA_PTR_GET_DEFAULT(roomRefundPrice_, 0L) };
    inline HotelOrderDetailInfoResponseBodyModuleHotelSaleOrderRoomInfos& setRoomRefundPrice(int64_t roomRefundPrice) { DARABONBA_PTR_SET_VALUE(roomRefundPrice_, roomRefundPrice) };


    // travelerId Field Functions 
    bool hasTravelerId() const { return this->travelerId_ != nullptr;};
    void deleteTravelerId() { this->travelerId_ = nullptr;};
    inline string travelerId() const { DARABONBA_PTR_GET_DEFAULT(travelerId_, "") };
    inline HotelOrderDetailInfoResponseBodyModuleHotelSaleOrderRoomInfos& setTravelerId(string travelerId) { DARABONBA_PTR_SET_VALUE(travelerId_, travelerId) };


    // travelerName Field Functions 
    bool hasTravelerName() const { return this->travelerName_ != nullptr;};
    void deleteTravelerName() { this->travelerName_ = nullptr;};
    inline string travelerName() const { DARABONBA_PTR_GET_DEFAULT(travelerName_, "") };
    inline HotelOrderDetailInfoResponseBodyModuleHotelSaleOrderRoomInfos& setTravelerName(string travelerName) { DARABONBA_PTR_SET_VALUE(travelerName_, travelerName) };


  protected:
    std::shared_ptr<string> checkinDate_ = nullptr;
    std::shared_ptr<string> checkoutDate_ = nullptr;
    std::shared_ptr<int64_t> penalSum_ = nullptr;
    std::shared_ptr<string> realCheckoutDate_ = nullptr;
    std::shared_ptr<int32_t> refundStatus_ = nullptr;
    std::shared_ptr<int32_t> roomNo_ = nullptr;
    std::shared_ptr<int64_t> roomPrice_ = nullptr;
    std::shared_ptr<int64_t> roomRefundPrice_ = nullptr;
    std::shared_ptr<string> travelerId_ = nullptr;
    std::shared_ptr<string> travelerName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
