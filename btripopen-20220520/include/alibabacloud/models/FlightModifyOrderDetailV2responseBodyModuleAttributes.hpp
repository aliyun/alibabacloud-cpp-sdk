// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYORDERDETAILV2RESPONSEBODYMODULEATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYORDERDETAILV2RESPONSEBODYMODULEATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightModifyOrderDetailV2ResponseBodyModuleAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightModifyOrderDetailV2ResponseBodyModuleAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(baggage_rule, baggageRule_);
      DARABONBA_PTR_TO_JSON(change_rule, changeRule_);
      DARABONBA_ANY_TO_JSON(latest_pay_time, latestPayTime_);
      DARABONBA_PTR_TO_JSON(latest_pay_time_str, latestPayTimeStr_);
      DARABONBA_PTR_TO_JSON(refund_rule, refundRule_);
    };
    friend void from_json(const Darabonba::Json& j, FlightModifyOrderDetailV2ResponseBodyModuleAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(baggage_rule, baggageRule_);
      DARABONBA_PTR_FROM_JSON(change_rule, changeRule_);
      DARABONBA_ANY_FROM_JSON(latest_pay_time, latestPayTime_);
      DARABONBA_PTR_FROM_JSON(latest_pay_time_str, latestPayTimeStr_);
      DARABONBA_PTR_FROM_JSON(refund_rule, refundRule_);
    };
    FlightModifyOrderDetailV2ResponseBodyModuleAttributes() = default ;
    FlightModifyOrderDetailV2ResponseBodyModuleAttributes(const FlightModifyOrderDetailV2ResponseBodyModuleAttributes &) = default ;
    FlightModifyOrderDetailV2ResponseBodyModuleAttributes(FlightModifyOrderDetailV2ResponseBodyModuleAttributes &&) = default ;
    FlightModifyOrderDetailV2ResponseBodyModuleAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightModifyOrderDetailV2ResponseBodyModuleAttributes() = default ;
    FlightModifyOrderDetailV2ResponseBodyModuleAttributes& operator=(const FlightModifyOrderDetailV2ResponseBodyModuleAttributes &) = default ;
    FlightModifyOrderDetailV2ResponseBodyModuleAttributes& operator=(FlightModifyOrderDetailV2ResponseBodyModuleAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baggageRule_ != nullptr
        && this->changeRule_ != nullptr && this->latestPayTime_ != nullptr && this->latestPayTimeStr_ != nullptr && this->refundRule_ != nullptr; };
    // baggageRule Field Functions 
    bool hasBaggageRule() const { return this->baggageRule_ != nullptr;};
    void deleteBaggageRule() { this->baggageRule_ = nullptr;};
    inline string baggageRule() const { DARABONBA_PTR_GET_DEFAULT(baggageRule_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleAttributes& setBaggageRule(string baggageRule) { DARABONBA_PTR_SET_VALUE(baggageRule_, baggageRule) };


    // changeRule Field Functions 
    bool hasChangeRule() const { return this->changeRule_ != nullptr;};
    void deleteChangeRule() { this->changeRule_ = nullptr;};
    inline string changeRule() const { DARABONBA_PTR_GET_DEFAULT(changeRule_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleAttributes& setChangeRule(string changeRule) { DARABONBA_PTR_SET_VALUE(changeRule_, changeRule) };


    // latestPayTime Field Functions 
    bool hasLatestPayTime() const { return this->latestPayTime_ != nullptr;};
    void deleteLatestPayTime() { this->latestPayTime_ = nullptr;};
    inline     const Darabonba::Json & latestPayTime() const { DARABONBA_GET(latestPayTime_) };
    Darabonba::Json & latestPayTime() { DARABONBA_GET(latestPayTime_) };
    inline FlightModifyOrderDetailV2ResponseBodyModuleAttributes& setLatestPayTime(const Darabonba::Json & latestPayTime) { DARABONBA_SET_VALUE(latestPayTime_, latestPayTime) };
    inline FlightModifyOrderDetailV2ResponseBodyModuleAttributes& setLatestPayTime(Darabonba::Json & latestPayTime) { DARABONBA_SET_RVALUE(latestPayTime_, latestPayTime) };


    // latestPayTimeStr Field Functions 
    bool hasLatestPayTimeStr() const { return this->latestPayTimeStr_ != nullptr;};
    void deleteLatestPayTimeStr() { this->latestPayTimeStr_ = nullptr;};
    inline string latestPayTimeStr() const { DARABONBA_PTR_GET_DEFAULT(latestPayTimeStr_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleAttributes& setLatestPayTimeStr(string latestPayTimeStr) { DARABONBA_PTR_SET_VALUE(latestPayTimeStr_, latestPayTimeStr) };


    // refundRule Field Functions 
    bool hasRefundRule() const { return this->refundRule_ != nullptr;};
    void deleteRefundRule() { this->refundRule_ = nullptr;};
    inline string refundRule() const { DARABONBA_PTR_GET_DEFAULT(refundRule_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleAttributes& setRefundRule(string refundRule) { DARABONBA_PTR_SET_VALUE(refundRule_, refundRule) };


  protected:
    std::shared_ptr<string> baggageRule_ = nullptr;
    std::shared_ptr<string> changeRule_ = nullptr;
    Darabonba::Json latestPayTime_ = nullptr;
    std::shared_ptr<string> latestPayTimeStr_ = nullptr;
    std::shared_ptr<string> refundRule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
