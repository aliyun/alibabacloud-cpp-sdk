// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODULEFLIGHTITEMLISTBESTPRICEITEMFLIGHTRULEINFOSVALUE_HPP_
#define ALIBABACLOUD_MODELS_MODULEFLIGHTITEMLISTBESTPRICEITEMFLIGHTRULEINFOSVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ModuleFlightItemListBestPriceItemFlightRuleInfosValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModuleFlightItemListBestPriceItemFlightRuleInfosValue& obj) { 
      DARABONBA_PTR_TO_JSON(refund_change_rule_desc, refundChangeRuleDesc_);
      DARABONBA_PTR_TO_JSON(baggage_desc, baggageDesc_);
    };
    friend void from_json(const Darabonba::Json& j, ModuleFlightItemListBestPriceItemFlightRuleInfosValue& obj) { 
      DARABONBA_PTR_FROM_JSON(refund_change_rule_desc, refundChangeRuleDesc_);
      DARABONBA_PTR_FROM_JSON(baggage_desc, baggageDesc_);
    };
    ModuleFlightItemListBestPriceItemFlightRuleInfosValue() = default ;
    ModuleFlightItemListBestPriceItemFlightRuleInfosValue(const ModuleFlightItemListBestPriceItemFlightRuleInfosValue &) = default ;
    ModuleFlightItemListBestPriceItemFlightRuleInfosValue(ModuleFlightItemListBestPriceItemFlightRuleInfosValue &&) = default ;
    ModuleFlightItemListBestPriceItemFlightRuleInfosValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModuleFlightItemListBestPriceItemFlightRuleInfosValue() = default ;
    ModuleFlightItemListBestPriceItemFlightRuleInfosValue& operator=(const ModuleFlightItemListBestPriceItemFlightRuleInfosValue &) = default ;
    ModuleFlightItemListBestPriceItemFlightRuleInfosValue& operator=(ModuleFlightItemListBestPriceItemFlightRuleInfosValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->refundChangeRuleDesc_ != nullptr
        && this->baggageDesc_ != nullptr; };
    // refundChangeRuleDesc Field Functions 
    bool hasRefundChangeRuleDesc() const { return this->refundChangeRuleDesc_ != nullptr;};
    void deleteRefundChangeRuleDesc() { this->refundChangeRuleDesc_ = nullptr;};
    inline string refundChangeRuleDesc() const { DARABONBA_PTR_GET_DEFAULT(refundChangeRuleDesc_, "") };
    inline ModuleFlightItemListBestPriceItemFlightRuleInfosValue& setRefundChangeRuleDesc(string refundChangeRuleDesc) { DARABONBA_PTR_SET_VALUE(refundChangeRuleDesc_, refundChangeRuleDesc) };


    // baggageDesc Field Functions 
    bool hasBaggageDesc() const { return this->baggageDesc_ != nullptr;};
    void deleteBaggageDesc() { this->baggageDesc_ = nullptr;};
    inline string baggageDesc() const { DARABONBA_PTR_GET_DEFAULT(baggageDesc_, "") };
    inline ModuleFlightItemListBestPriceItemFlightRuleInfosValue& setBaggageDesc(string baggageDesc) { DARABONBA_PTR_SET_VALUE(baggageDesc_, baggageDesc) };


  protected:
    std::shared_ptr<string> refundChangeRuleDesc_ = nullptr;
    std::shared_ptr<string> baggageDesc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
