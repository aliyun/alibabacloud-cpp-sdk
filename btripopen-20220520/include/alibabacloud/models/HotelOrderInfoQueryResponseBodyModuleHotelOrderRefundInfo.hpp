// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERINFOQUERYRESPONSEBODYMODULEHOTELORDERREFUNDINFO_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERINFOQUERYRESPONSEBODYMODULEHOTELORDERREFUNDINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderInfoQueryResponseBodyModuleHotelOrderRefundInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderInfoQueryResponseBodyModuleHotelOrderRefundInfo& obj) { 
      DARABONBA_PTR_TO_JSON(cancel_fine, cancelFine_);
      DARABONBA_PTR_TO_JSON(refund_apply_id, refundApplyId_);
      DARABONBA_PTR_TO_JSON(refund_end_time, refundEndTime_);
      DARABONBA_PTR_TO_JSON(refund_price, refundPrice_);
      DARABONBA_PTR_TO_JSON(refund_reason, refundReason_);
      DARABONBA_PTR_TO_JSON(refund_start_time, refundStartTime_);
      DARABONBA_PTR_TO_JSON(refund_type, refundType_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderInfoQueryResponseBodyModuleHotelOrderRefundInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(cancel_fine, cancelFine_);
      DARABONBA_PTR_FROM_JSON(refund_apply_id, refundApplyId_);
      DARABONBA_PTR_FROM_JSON(refund_end_time, refundEndTime_);
      DARABONBA_PTR_FROM_JSON(refund_price, refundPrice_);
      DARABONBA_PTR_FROM_JSON(refund_reason, refundReason_);
      DARABONBA_PTR_FROM_JSON(refund_start_time, refundStartTime_);
      DARABONBA_PTR_FROM_JSON(refund_type, refundType_);
    };
    HotelOrderInfoQueryResponseBodyModuleHotelOrderRefundInfo() = default ;
    HotelOrderInfoQueryResponseBodyModuleHotelOrderRefundInfo(const HotelOrderInfoQueryResponseBodyModuleHotelOrderRefundInfo &) = default ;
    HotelOrderInfoQueryResponseBodyModuleHotelOrderRefundInfo(HotelOrderInfoQueryResponseBodyModuleHotelOrderRefundInfo &&) = default ;
    HotelOrderInfoQueryResponseBodyModuleHotelOrderRefundInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderInfoQueryResponseBodyModuleHotelOrderRefundInfo() = default ;
    HotelOrderInfoQueryResponseBodyModuleHotelOrderRefundInfo& operator=(const HotelOrderInfoQueryResponseBodyModuleHotelOrderRefundInfo &) = default ;
    HotelOrderInfoQueryResponseBodyModuleHotelOrderRefundInfo& operator=(HotelOrderInfoQueryResponseBodyModuleHotelOrderRefundInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cancelFine_ != nullptr
        && this->refundApplyId_ != nullptr && this->refundEndTime_ != nullptr && this->refundPrice_ != nullptr && this->refundReason_ != nullptr && this->refundStartTime_ != nullptr
        && this->refundType_ != nullptr; };
    // cancelFine Field Functions 
    bool hasCancelFine() const { return this->cancelFine_ != nullptr;};
    void deleteCancelFine() { this->cancelFine_ = nullptr;};
    inline int64_t cancelFine() const { DARABONBA_PTR_GET_DEFAULT(cancelFine_, 0L) };
    inline HotelOrderInfoQueryResponseBodyModuleHotelOrderRefundInfo& setCancelFine(int64_t cancelFine) { DARABONBA_PTR_SET_VALUE(cancelFine_, cancelFine) };


    // refundApplyId Field Functions 
    bool hasRefundApplyId() const { return this->refundApplyId_ != nullptr;};
    void deleteRefundApplyId() { this->refundApplyId_ = nullptr;};
    inline int64_t refundApplyId() const { DARABONBA_PTR_GET_DEFAULT(refundApplyId_, 0L) };
    inline HotelOrderInfoQueryResponseBodyModuleHotelOrderRefundInfo& setRefundApplyId(int64_t refundApplyId) { DARABONBA_PTR_SET_VALUE(refundApplyId_, refundApplyId) };


    // refundEndTime Field Functions 
    bool hasRefundEndTime() const { return this->refundEndTime_ != nullptr;};
    void deleteRefundEndTime() { this->refundEndTime_ = nullptr;};
    inline int64_t refundEndTime() const { DARABONBA_PTR_GET_DEFAULT(refundEndTime_, 0L) };
    inline HotelOrderInfoQueryResponseBodyModuleHotelOrderRefundInfo& setRefundEndTime(int64_t refundEndTime) { DARABONBA_PTR_SET_VALUE(refundEndTime_, refundEndTime) };


    // refundPrice Field Functions 
    bool hasRefundPrice() const { return this->refundPrice_ != nullptr;};
    void deleteRefundPrice() { this->refundPrice_ = nullptr;};
    inline int64_t refundPrice() const { DARABONBA_PTR_GET_DEFAULT(refundPrice_, 0L) };
    inline HotelOrderInfoQueryResponseBodyModuleHotelOrderRefundInfo& setRefundPrice(int64_t refundPrice) { DARABONBA_PTR_SET_VALUE(refundPrice_, refundPrice) };


    // refundReason Field Functions 
    bool hasRefundReason() const { return this->refundReason_ != nullptr;};
    void deleteRefundReason() { this->refundReason_ = nullptr;};
    inline string refundReason() const { DARABONBA_PTR_GET_DEFAULT(refundReason_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleHotelOrderRefundInfo& setRefundReason(string refundReason) { DARABONBA_PTR_SET_VALUE(refundReason_, refundReason) };


    // refundStartTime Field Functions 
    bool hasRefundStartTime() const { return this->refundStartTime_ != nullptr;};
    void deleteRefundStartTime() { this->refundStartTime_ = nullptr;};
    inline int64_t refundStartTime() const { DARABONBA_PTR_GET_DEFAULT(refundStartTime_, 0L) };
    inline HotelOrderInfoQueryResponseBodyModuleHotelOrderRefundInfo& setRefundStartTime(int64_t refundStartTime) { DARABONBA_PTR_SET_VALUE(refundStartTime_, refundStartTime) };


    // refundType Field Functions 
    bool hasRefundType() const { return this->refundType_ != nullptr;};
    void deleteRefundType() { this->refundType_ = nullptr;};
    inline int32_t refundType() const { DARABONBA_PTR_GET_DEFAULT(refundType_, 0) };
    inline HotelOrderInfoQueryResponseBodyModuleHotelOrderRefundInfo& setRefundType(int32_t refundType) { DARABONBA_PTR_SET_VALUE(refundType_, refundType) };


  protected:
    std::shared_ptr<int64_t> cancelFine_ = nullptr;
    std::shared_ptr<int64_t> refundApplyId_ = nullptr;
    std::shared_ptr<int64_t> refundEndTime_ = nullptr;
    std::shared_ptr<int64_t> refundPrice_ = nullptr;
    std::shared_ptr<string> refundReason_ = nullptr;
    std::shared_ptr<int64_t> refundStartTime_ = nullptr;
    std::shared_ptr<int32_t> refundType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
