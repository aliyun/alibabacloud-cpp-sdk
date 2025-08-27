// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTOTAITEMDETAILRESPONSEBODYMODULEGROUPITEMFLIGHTRULEINFOLISTFLIGHTRULEINFO_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTOTAITEMDETAILRESPONSEBODYMODULEGROUPITEMFLIGHTRULEINFOLISTFLIGHTRULEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoListFlightRuleInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoListFlightRuleInfo& obj) { 
      DARABONBA_PTR_TO_JSON(baggage_desc, baggageDesc_);
      DARABONBA_PTR_TO_JSON(refund_change_rule_desc, refundChangeRuleDesc_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoListFlightRuleInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(baggage_desc, baggageDesc_);
      DARABONBA_PTR_FROM_JSON(refund_change_rule_desc, refundChangeRuleDesc_);
    };
    IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoListFlightRuleInfo() = default ;
    IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoListFlightRuleInfo(const IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoListFlightRuleInfo &) = default ;
    IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoListFlightRuleInfo(IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoListFlightRuleInfo &&) = default ;
    IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoListFlightRuleInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoListFlightRuleInfo() = default ;
    IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoListFlightRuleInfo& operator=(const IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoListFlightRuleInfo &) = default ;
    IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoListFlightRuleInfo& operator=(IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoListFlightRuleInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baggageDesc_ != nullptr
        && this->refundChangeRuleDesc_ != nullptr; };
    // baggageDesc Field Functions 
    bool hasBaggageDesc() const { return this->baggageDesc_ != nullptr;};
    void deleteBaggageDesc() { this->baggageDesc_ = nullptr;};
    inline string baggageDesc() const { DARABONBA_PTR_GET_DEFAULT(baggageDesc_, "") };
    inline IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoListFlightRuleInfo& setBaggageDesc(string baggageDesc) { DARABONBA_PTR_SET_VALUE(baggageDesc_, baggageDesc) };


    // refundChangeRuleDesc Field Functions 
    bool hasRefundChangeRuleDesc() const { return this->refundChangeRuleDesc_ != nullptr;};
    void deleteRefundChangeRuleDesc() { this->refundChangeRuleDesc_ = nullptr;};
    inline string refundChangeRuleDesc() const { DARABONBA_PTR_GET_DEFAULT(refundChangeRuleDesc_, "") };
    inline IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoListFlightRuleInfo& setRefundChangeRuleDesc(string refundChangeRuleDesc) { DARABONBA_PTR_SET_VALUE(refundChangeRuleDesc_, refundChangeRuleDesc) };


  protected:
    std::shared_ptr<string> baggageDesc_ = nullptr;
    std::shared_ptr<string> refundChangeRuleDesc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
