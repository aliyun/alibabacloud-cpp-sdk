// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERINFOQUERYRESPONSEBODYMODULEBASEORDERINFO_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERINFOQUERYRESPONSEBODYMODULEBASEORDERINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo& obj) { 
      DARABONBA_PTR_TO_JSON(book_mode, bookMode_);
      DARABONBA_PTR_TO_JSON(booker_id, bookerId_);
      DARABONBA_PTR_TO_JSON(booker_name, bookerName_);
      DARABONBA_PTR_TO_JSON(btrip_corp_id, btripCorpId_);
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(check_in_time, checkInTime_);
      DARABONBA_PTR_TO_JSON(check_out_time, checkOutTime_);
      DARABONBA_PTR_TO_JSON(is_agreement_price, isAgreementPrice_);
      DARABONBA_PTR_TO_JSON(nights, nights_);
      DARABONBA_PTR_TO_JSON(order_create_time, orderCreateTime_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(order_status, orderStatus_);
      DARABONBA_PTR_TO_JSON(order_status_desc, orderStatusDesc_);
      DARABONBA_PTR_TO_JSON(pay_status, payStatus_);
      DARABONBA_PTR_TO_JSON(pay_time, payTime_);
      DARABONBA_PTR_TO_JSON(room_num, roomNum_);
      DARABONBA_PTR_TO_JSON(settle_type, settleType_);
      DARABONBA_PTR_TO_JSON(trip_mode, tripMode_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(book_mode, bookMode_);
      DARABONBA_PTR_FROM_JSON(booker_id, bookerId_);
      DARABONBA_PTR_FROM_JSON(booker_name, bookerName_);
      DARABONBA_PTR_FROM_JSON(btrip_corp_id, btripCorpId_);
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(check_in_time, checkInTime_);
      DARABONBA_PTR_FROM_JSON(check_out_time, checkOutTime_);
      DARABONBA_PTR_FROM_JSON(is_agreement_price, isAgreementPrice_);
      DARABONBA_PTR_FROM_JSON(nights, nights_);
      DARABONBA_PTR_FROM_JSON(order_create_time, orderCreateTime_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(order_status, orderStatus_);
      DARABONBA_PTR_FROM_JSON(order_status_desc, orderStatusDesc_);
      DARABONBA_PTR_FROM_JSON(pay_status, payStatus_);
      DARABONBA_PTR_FROM_JSON(pay_time, payTime_);
      DARABONBA_PTR_FROM_JSON(room_num, roomNum_);
      DARABONBA_PTR_FROM_JSON(settle_type, settleType_);
      DARABONBA_PTR_FROM_JSON(trip_mode, tripMode_);
    };
    HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo() = default ;
    HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo(const HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo &) = default ;
    HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo(HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo &&) = default ;
    HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo() = default ;
    HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo& operator=(const HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo &) = default ;
    HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo& operator=(HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bookMode_ != nullptr
        && this->bookerId_ != nullptr && this->bookerName_ != nullptr && this->btripCorpId_ != nullptr && this->category_ != nullptr && this->checkInTime_ != nullptr
        && this->checkOutTime_ != nullptr && this->isAgreementPrice_ != nullptr && this->nights_ != nullptr && this->orderCreateTime_ != nullptr && this->orderId_ != nullptr
        && this->orderStatus_ != nullptr && this->orderStatusDesc_ != nullptr && this->payStatus_ != nullptr && this->payTime_ != nullptr && this->roomNum_ != nullptr
        && this->settleType_ != nullptr && this->tripMode_ != nullptr; };
    // bookMode Field Functions 
    bool hasBookMode() const { return this->bookMode_ != nullptr;};
    void deleteBookMode() { this->bookMode_ = nullptr;};
    inline string bookMode() const { DARABONBA_PTR_GET_DEFAULT(bookMode_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo& setBookMode(string bookMode) { DARABONBA_PTR_SET_VALUE(bookMode_, bookMode) };


    // bookerId Field Functions 
    bool hasBookerId() const { return this->bookerId_ != nullptr;};
    void deleteBookerId() { this->bookerId_ = nullptr;};
    inline string bookerId() const { DARABONBA_PTR_GET_DEFAULT(bookerId_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo& setBookerId(string bookerId) { DARABONBA_PTR_SET_VALUE(bookerId_, bookerId) };


    // bookerName Field Functions 
    bool hasBookerName() const { return this->bookerName_ != nullptr;};
    void deleteBookerName() { this->bookerName_ = nullptr;};
    inline string bookerName() const { DARABONBA_PTR_GET_DEFAULT(bookerName_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo& setBookerName(string bookerName) { DARABONBA_PTR_SET_VALUE(bookerName_, bookerName) };


    // btripCorpId Field Functions 
    bool hasBtripCorpId() const { return this->btripCorpId_ != nullptr;};
    void deleteBtripCorpId() { this->btripCorpId_ = nullptr;};
    inline string btripCorpId() const { DARABONBA_PTR_GET_DEFAULT(btripCorpId_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo& setBtripCorpId(string btripCorpId) { DARABONBA_PTR_SET_VALUE(btripCorpId_, btripCorpId) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline int32_t category() const { DARABONBA_PTR_GET_DEFAULT(category_, 0) };
    inline HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo& setCategory(int32_t category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // checkInTime Field Functions 
    bool hasCheckInTime() const { return this->checkInTime_ != nullptr;};
    void deleteCheckInTime() { this->checkInTime_ = nullptr;};
    inline int64_t checkInTime() const { DARABONBA_PTR_GET_DEFAULT(checkInTime_, 0L) };
    inline HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo& setCheckInTime(int64_t checkInTime) { DARABONBA_PTR_SET_VALUE(checkInTime_, checkInTime) };


    // checkOutTime Field Functions 
    bool hasCheckOutTime() const { return this->checkOutTime_ != nullptr;};
    void deleteCheckOutTime() { this->checkOutTime_ = nullptr;};
    inline int64_t checkOutTime() const { DARABONBA_PTR_GET_DEFAULT(checkOutTime_, 0L) };
    inline HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo& setCheckOutTime(int64_t checkOutTime) { DARABONBA_PTR_SET_VALUE(checkOutTime_, checkOutTime) };


    // isAgreementPrice Field Functions 
    bool hasIsAgreementPrice() const { return this->isAgreementPrice_ != nullptr;};
    void deleteIsAgreementPrice() { this->isAgreementPrice_ = nullptr;};
    inline bool isAgreementPrice() const { DARABONBA_PTR_GET_DEFAULT(isAgreementPrice_, false) };
    inline HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo& setIsAgreementPrice(bool isAgreementPrice) { DARABONBA_PTR_SET_VALUE(isAgreementPrice_, isAgreementPrice) };


    // nights Field Functions 
    bool hasNights() const { return this->nights_ != nullptr;};
    void deleteNights() { this->nights_ = nullptr;};
    inline int32_t nights() const { DARABONBA_PTR_GET_DEFAULT(nights_, 0) };
    inline HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo& setNights(int32_t nights) { DARABONBA_PTR_SET_VALUE(nights_, nights) };


    // orderCreateTime Field Functions 
    bool hasOrderCreateTime() const { return this->orderCreateTime_ != nullptr;};
    void deleteOrderCreateTime() { this->orderCreateTime_ = nullptr;};
    inline int64_t orderCreateTime() const { DARABONBA_PTR_GET_DEFAULT(orderCreateTime_, 0L) };
    inline HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo& setOrderCreateTime(int64_t orderCreateTime) { DARABONBA_PTR_SET_VALUE(orderCreateTime_, orderCreateTime) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // orderStatus Field Functions 
    bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
    void deleteOrderStatus() { this->orderStatus_ = nullptr;};
    inline int32_t orderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, 0) };
    inline HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo& setOrderStatus(int32_t orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


    // orderStatusDesc Field Functions 
    bool hasOrderStatusDesc() const { return this->orderStatusDesc_ != nullptr;};
    void deleteOrderStatusDesc() { this->orderStatusDesc_ = nullptr;};
    inline string orderStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(orderStatusDesc_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo& setOrderStatusDesc(string orderStatusDesc) { DARABONBA_PTR_SET_VALUE(orderStatusDesc_, orderStatusDesc) };


    // payStatus Field Functions 
    bool hasPayStatus() const { return this->payStatus_ != nullptr;};
    void deletePayStatus() { this->payStatus_ = nullptr;};
    inline int32_t payStatus() const { DARABONBA_PTR_GET_DEFAULT(payStatus_, 0) };
    inline HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo& setPayStatus(int32_t payStatus) { DARABONBA_PTR_SET_VALUE(payStatus_, payStatus) };


    // payTime Field Functions 
    bool hasPayTime() const { return this->payTime_ != nullptr;};
    void deletePayTime() { this->payTime_ = nullptr;};
    inline int64_t payTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, 0L) };
    inline HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo& setPayTime(int64_t payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


    // roomNum Field Functions 
    bool hasRoomNum() const { return this->roomNum_ != nullptr;};
    void deleteRoomNum() { this->roomNum_ = nullptr;};
    inline int32_t roomNum() const { DARABONBA_PTR_GET_DEFAULT(roomNum_, 0) };
    inline HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo& setRoomNum(int32_t roomNum) { DARABONBA_PTR_SET_VALUE(roomNum_, roomNum) };


    // settleType Field Functions 
    bool hasSettleType() const { return this->settleType_ != nullptr;};
    void deleteSettleType() { this->settleType_ = nullptr;};
    inline int32_t settleType() const { DARABONBA_PTR_GET_DEFAULT(settleType_, 0) };
    inline HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo& setSettleType(int32_t settleType) { DARABONBA_PTR_SET_VALUE(settleType_, settleType) };


    // tripMode Field Functions 
    bool hasTripMode() const { return this->tripMode_ != nullptr;};
    void deleteTripMode() { this->tripMode_ = nullptr;};
    inline int32_t tripMode() const { DARABONBA_PTR_GET_DEFAULT(tripMode_, 0) };
    inline HotelOrderInfoQueryResponseBodyModuleBaseOrderInfo& setTripMode(int32_t tripMode) { DARABONBA_PTR_SET_VALUE(tripMode_, tripMode) };


  protected:
    std::shared_ptr<string> bookMode_ = nullptr;
    std::shared_ptr<string> bookerId_ = nullptr;
    std::shared_ptr<string> bookerName_ = nullptr;
    std::shared_ptr<string> btripCorpId_ = nullptr;
    std::shared_ptr<int32_t> category_ = nullptr;
    std::shared_ptr<int64_t> checkInTime_ = nullptr;
    std::shared_ptr<int64_t> checkOutTime_ = nullptr;
    std::shared_ptr<bool> isAgreementPrice_ = nullptr;
    std::shared_ptr<int32_t> nights_ = nullptr;
    std::shared_ptr<int64_t> orderCreateTime_ = nullptr;
    std::shared_ptr<int64_t> orderId_ = nullptr;
    std::shared_ptr<int32_t> orderStatus_ = nullptr;
    std::shared_ptr<string> orderStatusDesc_ = nullptr;
    std::shared_ptr<int32_t> payStatus_ = nullptr;
    std::shared_ptr<int64_t> payTime_ = nullptr;
    std::shared_ptr<int32_t> roomNum_ = nullptr;
    std::shared_ptr<int32_t> settleType_ = nullptr;
    std::shared_ptr<int32_t> tripMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
