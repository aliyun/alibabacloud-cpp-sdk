// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTREFUNDDETAILRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTREFUNDDETAILRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightRefundDetailResponseBodyModuleRefundFeeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightRefundDetailResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightRefundDetailResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(btrip_order_id, btripOrderId_);
      DARABONBA_PTR_TO_JSON(btrip_sub_order_id, btripSubOrderId_);
      DARABONBA_PTR_TO_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_TO_JSON(dis_sub_order_id, disSubOrderId_);
      DARABONBA_PTR_TO_JSON(is_voluntary, isVoluntary_);
      DARABONBA_PTR_TO_JSON(reason, reason_);
      DARABONBA_PTR_TO_JSON(refund_fee, refundFee_);
      DARABONBA_PTR_TO_JSON(refund_fee_list, refundFeeList_);
      DARABONBA_PTR_TO_JSON(refund_price, refundPrice_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, FlightRefundDetailResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(btrip_order_id, btripOrderId_);
      DARABONBA_PTR_FROM_JSON(btrip_sub_order_id, btripSubOrderId_);
      DARABONBA_PTR_FROM_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_FROM_JSON(dis_sub_order_id, disSubOrderId_);
      DARABONBA_PTR_FROM_JSON(is_voluntary, isVoluntary_);
      DARABONBA_PTR_FROM_JSON(reason, reason_);
      DARABONBA_PTR_FROM_JSON(refund_fee, refundFee_);
      DARABONBA_PTR_FROM_JSON(refund_fee_list, refundFeeList_);
      DARABONBA_PTR_FROM_JSON(refund_price, refundPrice_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    FlightRefundDetailResponseBodyModule() = default ;
    FlightRefundDetailResponseBodyModule(const FlightRefundDetailResponseBodyModule &) = default ;
    FlightRefundDetailResponseBodyModule(FlightRefundDetailResponseBodyModule &&) = default ;
    FlightRefundDetailResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightRefundDetailResponseBodyModule() = default ;
    FlightRefundDetailResponseBodyModule& operator=(const FlightRefundDetailResponseBodyModule &) = default ;
    FlightRefundDetailResponseBodyModule& operator=(FlightRefundDetailResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->btripOrderId_ != nullptr
        && this->btripSubOrderId_ != nullptr && this->disOrderId_ != nullptr && this->disSubOrderId_ != nullptr && this->isVoluntary_ != nullptr && this->reason_ != nullptr
        && this->refundFee_ != nullptr && this->refundFeeList_ != nullptr && this->refundPrice_ != nullptr && this->status_ != nullptr; };
    // btripOrderId Field Functions 
    bool hasBtripOrderId() const { return this->btripOrderId_ != nullptr;};
    void deleteBtripOrderId() { this->btripOrderId_ = nullptr;};
    inline int64_t btripOrderId() const { DARABONBA_PTR_GET_DEFAULT(btripOrderId_, 0L) };
    inline FlightRefundDetailResponseBodyModule& setBtripOrderId(int64_t btripOrderId) { DARABONBA_PTR_SET_VALUE(btripOrderId_, btripOrderId) };


    // btripSubOrderId Field Functions 
    bool hasBtripSubOrderId() const { return this->btripSubOrderId_ != nullptr;};
    void deleteBtripSubOrderId() { this->btripSubOrderId_ = nullptr;};
    inline int64_t btripSubOrderId() const { DARABONBA_PTR_GET_DEFAULT(btripSubOrderId_, 0L) };
    inline FlightRefundDetailResponseBodyModule& setBtripSubOrderId(int64_t btripSubOrderId) { DARABONBA_PTR_SET_VALUE(btripSubOrderId_, btripSubOrderId) };


    // disOrderId Field Functions 
    bool hasDisOrderId() const { return this->disOrderId_ != nullptr;};
    void deleteDisOrderId() { this->disOrderId_ = nullptr;};
    inline string disOrderId() const { DARABONBA_PTR_GET_DEFAULT(disOrderId_, "") };
    inline FlightRefundDetailResponseBodyModule& setDisOrderId(string disOrderId) { DARABONBA_PTR_SET_VALUE(disOrderId_, disOrderId) };


    // disSubOrderId Field Functions 
    bool hasDisSubOrderId() const { return this->disSubOrderId_ != nullptr;};
    void deleteDisSubOrderId() { this->disSubOrderId_ = nullptr;};
    inline string disSubOrderId() const { DARABONBA_PTR_GET_DEFAULT(disSubOrderId_, "") };
    inline FlightRefundDetailResponseBodyModule& setDisSubOrderId(string disSubOrderId) { DARABONBA_PTR_SET_VALUE(disSubOrderId_, disSubOrderId) };


    // isVoluntary Field Functions 
    bool hasIsVoluntary() const { return this->isVoluntary_ != nullptr;};
    void deleteIsVoluntary() { this->isVoluntary_ = nullptr;};
    inline int32_t isVoluntary() const { DARABONBA_PTR_GET_DEFAULT(isVoluntary_, 0) };
    inline FlightRefundDetailResponseBodyModule& setIsVoluntary(int32_t isVoluntary) { DARABONBA_PTR_SET_VALUE(isVoluntary_, isVoluntary) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline FlightRefundDetailResponseBodyModule& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // refundFee Field Functions 
    bool hasRefundFee() const { return this->refundFee_ != nullptr;};
    void deleteRefundFee() { this->refundFee_ = nullptr;};
    inline int64_t refundFee() const { DARABONBA_PTR_GET_DEFAULT(refundFee_, 0L) };
    inline FlightRefundDetailResponseBodyModule& setRefundFee(int64_t refundFee) { DARABONBA_PTR_SET_VALUE(refundFee_, refundFee) };


    // refundFeeList Field Functions 
    bool hasRefundFeeList() const { return this->refundFeeList_ != nullptr;};
    void deleteRefundFeeList() { this->refundFeeList_ = nullptr;};
    inline const vector<Models::FlightRefundDetailResponseBodyModuleRefundFeeList> & refundFeeList() const { DARABONBA_PTR_GET_CONST(refundFeeList_, vector<Models::FlightRefundDetailResponseBodyModuleRefundFeeList>) };
    inline vector<Models::FlightRefundDetailResponseBodyModuleRefundFeeList> refundFeeList() { DARABONBA_PTR_GET(refundFeeList_, vector<Models::FlightRefundDetailResponseBodyModuleRefundFeeList>) };
    inline FlightRefundDetailResponseBodyModule& setRefundFeeList(const vector<Models::FlightRefundDetailResponseBodyModuleRefundFeeList> & refundFeeList) { DARABONBA_PTR_SET_VALUE(refundFeeList_, refundFeeList) };
    inline FlightRefundDetailResponseBodyModule& setRefundFeeList(vector<Models::FlightRefundDetailResponseBodyModuleRefundFeeList> && refundFeeList) { DARABONBA_PTR_SET_RVALUE(refundFeeList_, refundFeeList) };


    // refundPrice Field Functions 
    bool hasRefundPrice() const { return this->refundPrice_ != nullptr;};
    void deleteRefundPrice() { this->refundPrice_ = nullptr;};
    inline int64_t refundPrice() const { DARABONBA_PTR_GET_DEFAULT(refundPrice_, 0L) };
    inline FlightRefundDetailResponseBodyModule& setRefundPrice(int64_t refundPrice) { DARABONBA_PTR_SET_VALUE(refundPrice_, refundPrice) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline FlightRefundDetailResponseBodyModule& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<int64_t> btripOrderId_ = nullptr;
    std::shared_ptr<int64_t> btripSubOrderId_ = nullptr;
    std::shared_ptr<string> disOrderId_ = nullptr;
    std::shared_ptr<string> disSubOrderId_ = nullptr;
    std::shared_ptr<int32_t> isVoluntary_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    std::shared_ptr<int64_t> refundFee_ = nullptr;
    std::shared_ptr<vector<Models::FlightRefundDetailResponseBodyModuleRefundFeeList>> refundFeeList_ = nullptr;
    std::shared_ptr<int64_t> refundPrice_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
