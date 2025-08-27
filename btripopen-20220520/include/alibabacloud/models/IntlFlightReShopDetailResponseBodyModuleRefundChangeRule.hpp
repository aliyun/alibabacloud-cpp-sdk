// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPDETAILRESPONSEBODYMODULEREFUNDCHANGERULE_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPDETAILRESPONSEBODYMODULEREFUNDCHANGERULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightReShopDetailResponseBodyModuleRefundChangeRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightReShopDetailResponseBodyModuleRefundChangeRule& obj) { 
      DARABONBA_PTR_TO_JSON(refund_change_rule_desc, refundChangeRuleDesc_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightReShopDetailResponseBodyModuleRefundChangeRule& obj) { 
      DARABONBA_PTR_FROM_JSON(refund_change_rule_desc, refundChangeRuleDesc_);
    };
    IntlFlightReShopDetailResponseBodyModuleRefundChangeRule() = default ;
    IntlFlightReShopDetailResponseBodyModuleRefundChangeRule(const IntlFlightReShopDetailResponseBodyModuleRefundChangeRule &) = default ;
    IntlFlightReShopDetailResponseBodyModuleRefundChangeRule(IntlFlightReShopDetailResponseBodyModuleRefundChangeRule &&) = default ;
    IntlFlightReShopDetailResponseBodyModuleRefundChangeRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightReShopDetailResponseBodyModuleRefundChangeRule() = default ;
    IntlFlightReShopDetailResponseBodyModuleRefundChangeRule& operator=(const IntlFlightReShopDetailResponseBodyModuleRefundChangeRule &) = default ;
    IntlFlightReShopDetailResponseBodyModuleRefundChangeRule& operator=(IntlFlightReShopDetailResponseBodyModuleRefundChangeRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->refundChangeRuleDesc_ != nullptr; };
    // refundChangeRuleDesc Field Functions 
    bool hasRefundChangeRuleDesc() const { return this->refundChangeRuleDesc_ != nullptr;};
    void deleteRefundChangeRuleDesc() { this->refundChangeRuleDesc_ = nullptr;};
    inline string refundChangeRuleDesc() const { DARABONBA_PTR_GET_DEFAULT(refundChangeRuleDesc_, "") };
    inline IntlFlightReShopDetailResponseBodyModuleRefundChangeRule& setRefundChangeRuleDesc(string refundChangeRuleDesc) { DARABONBA_PTR_SET_VALUE(refundChangeRuleDesc_, refundChangeRuleDesc) };


  protected:
    std::shared_ptr<string> refundChangeRuleDesc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
