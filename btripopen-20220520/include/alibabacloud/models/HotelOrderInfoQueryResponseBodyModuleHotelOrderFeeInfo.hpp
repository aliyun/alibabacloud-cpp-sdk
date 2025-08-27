// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERINFOQUERYRESPONSEBODYMODULEHOTELORDERFEEINFO_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERINFOQUERYRESPONSEBODYMODULEHOTELORDERFEEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderInfoQueryResponseBodyModuleHotelOrderFeeInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderInfoQueryResponseBodyModuleHotelOrderFeeInfo& obj) { 
      DARABONBA_PTR_TO_JSON(order_amount, orderAmount_);
      DARABONBA_PTR_TO_JSON(other_fee, otherFee_);
      DARABONBA_PTR_TO_JSON(pay_amount, payAmount_);
      DARABONBA_PTR_TO_JSON(promotion_amount, promotionAmount_);
      DARABONBA_PTR_TO_JSON(total_room_amount, totalRoomAmount_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderInfoQueryResponseBodyModuleHotelOrderFeeInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(order_amount, orderAmount_);
      DARABONBA_PTR_FROM_JSON(other_fee, otherFee_);
      DARABONBA_PTR_FROM_JSON(pay_amount, payAmount_);
      DARABONBA_PTR_FROM_JSON(promotion_amount, promotionAmount_);
      DARABONBA_PTR_FROM_JSON(total_room_amount, totalRoomAmount_);
    };
    HotelOrderInfoQueryResponseBodyModuleHotelOrderFeeInfo() = default ;
    HotelOrderInfoQueryResponseBodyModuleHotelOrderFeeInfo(const HotelOrderInfoQueryResponseBodyModuleHotelOrderFeeInfo &) = default ;
    HotelOrderInfoQueryResponseBodyModuleHotelOrderFeeInfo(HotelOrderInfoQueryResponseBodyModuleHotelOrderFeeInfo &&) = default ;
    HotelOrderInfoQueryResponseBodyModuleHotelOrderFeeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderInfoQueryResponseBodyModuleHotelOrderFeeInfo() = default ;
    HotelOrderInfoQueryResponseBodyModuleHotelOrderFeeInfo& operator=(const HotelOrderInfoQueryResponseBodyModuleHotelOrderFeeInfo &) = default ;
    HotelOrderInfoQueryResponseBodyModuleHotelOrderFeeInfo& operator=(HotelOrderInfoQueryResponseBodyModuleHotelOrderFeeInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orderAmount_ != nullptr
        && this->otherFee_ != nullptr && this->payAmount_ != nullptr && this->promotionAmount_ != nullptr && this->totalRoomAmount_ != nullptr; };
    // orderAmount Field Functions 
    bool hasOrderAmount() const { return this->orderAmount_ != nullptr;};
    void deleteOrderAmount() { this->orderAmount_ = nullptr;};
    inline int64_t orderAmount() const { DARABONBA_PTR_GET_DEFAULT(orderAmount_, 0L) };
    inline HotelOrderInfoQueryResponseBodyModuleHotelOrderFeeInfo& setOrderAmount(int64_t orderAmount) { DARABONBA_PTR_SET_VALUE(orderAmount_, orderAmount) };


    // otherFee Field Functions 
    bool hasOtherFee() const { return this->otherFee_ != nullptr;};
    void deleteOtherFee() { this->otherFee_ = nullptr;};
    inline int64_t otherFee() const { DARABONBA_PTR_GET_DEFAULT(otherFee_, 0L) };
    inline HotelOrderInfoQueryResponseBodyModuleHotelOrderFeeInfo& setOtherFee(int64_t otherFee) { DARABONBA_PTR_SET_VALUE(otherFee_, otherFee) };


    // payAmount Field Functions 
    bool hasPayAmount() const { return this->payAmount_ != nullptr;};
    void deletePayAmount() { this->payAmount_ = nullptr;};
    inline int64_t payAmount() const { DARABONBA_PTR_GET_DEFAULT(payAmount_, 0L) };
    inline HotelOrderInfoQueryResponseBodyModuleHotelOrderFeeInfo& setPayAmount(int64_t payAmount) { DARABONBA_PTR_SET_VALUE(payAmount_, payAmount) };


    // promotionAmount Field Functions 
    bool hasPromotionAmount() const { return this->promotionAmount_ != nullptr;};
    void deletePromotionAmount() { this->promotionAmount_ = nullptr;};
    inline int64_t promotionAmount() const { DARABONBA_PTR_GET_DEFAULT(promotionAmount_, 0L) };
    inline HotelOrderInfoQueryResponseBodyModuleHotelOrderFeeInfo& setPromotionAmount(int64_t promotionAmount) { DARABONBA_PTR_SET_VALUE(promotionAmount_, promotionAmount) };


    // totalRoomAmount Field Functions 
    bool hasTotalRoomAmount() const { return this->totalRoomAmount_ != nullptr;};
    void deleteTotalRoomAmount() { this->totalRoomAmount_ = nullptr;};
    inline int64_t totalRoomAmount() const { DARABONBA_PTR_GET_DEFAULT(totalRoomAmount_, 0L) };
    inline HotelOrderInfoQueryResponseBodyModuleHotelOrderFeeInfo& setTotalRoomAmount(int64_t totalRoomAmount) { DARABONBA_PTR_SET_VALUE(totalRoomAmount_, totalRoomAmount) };


  protected:
    std::shared_ptr<int64_t> orderAmount_ = nullptr;
    std::shared_ptr<int64_t> otherFee_ = nullptr;
    std::shared_ptr<int64_t> payAmount_ = nullptr;
    std::shared_ptr<int64_t> promotionAmount_ = nullptr;
    std::shared_ptr<int64_t> totalRoomAmount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
