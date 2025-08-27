// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTORDERDETAILRESPONSEBODYMODULEORDERITEMLISTBAGGAGERULE_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTORDERDETAILRESPONSEBODYMODULEORDERITEMLISTBAGGAGERULE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/ModuleOrderItemListBaggageRuleOfferBaggageInfoMapValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightOrderDetailResponseBodyModuleOrderItemListBaggageRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightOrderDetailResponseBodyModuleOrderItemListBaggageRule& obj) { 
      DARABONBA_PTR_TO_JSON(baggage_digest, baggageDigest_);
      DARABONBA_PTR_TO_JSON(offer_baggage_info_map, offerBaggageInfoMap_);
      DARABONBA_PTR_TO_JSON(structured_baggage, structuredBaggage_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightOrderDetailResponseBodyModuleOrderItemListBaggageRule& obj) { 
      DARABONBA_PTR_FROM_JSON(baggage_digest, baggageDigest_);
      DARABONBA_PTR_FROM_JSON(offer_baggage_info_map, offerBaggageInfoMap_);
      DARABONBA_PTR_FROM_JSON(structured_baggage, structuredBaggage_);
    };
    IntlFlightOrderDetailResponseBodyModuleOrderItemListBaggageRule() = default ;
    IntlFlightOrderDetailResponseBodyModuleOrderItemListBaggageRule(const IntlFlightOrderDetailResponseBodyModuleOrderItemListBaggageRule &) = default ;
    IntlFlightOrderDetailResponseBodyModuleOrderItemListBaggageRule(IntlFlightOrderDetailResponseBodyModuleOrderItemListBaggageRule &&) = default ;
    IntlFlightOrderDetailResponseBodyModuleOrderItemListBaggageRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightOrderDetailResponseBodyModuleOrderItemListBaggageRule() = default ;
    IntlFlightOrderDetailResponseBodyModuleOrderItemListBaggageRule& operator=(const IntlFlightOrderDetailResponseBodyModuleOrderItemListBaggageRule &) = default ;
    IntlFlightOrderDetailResponseBodyModuleOrderItemListBaggageRule& operator=(IntlFlightOrderDetailResponseBodyModuleOrderItemListBaggageRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baggageDigest_ != nullptr
        && this->offerBaggageInfoMap_ != nullptr && this->structuredBaggage_ != nullptr; };
    // baggageDigest Field Functions 
    bool hasBaggageDigest() const { return this->baggageDigest_ != nullptr;};
    void deleteBaggageDigest() { this->baggageDigest_ = nullptr;};
    inline string baggageDigest() const { DARABONBA_PTR_GET_DEFAULT(baggageDigest_, "") };
    inline IntlFlightOrderDetailResponseBodyModuleOrderItemListBaggageRule& setBaggageDigest(string baggageDigest) { DARABONBA_PTR_SET_VALUE(baggageDigest_, baggageDigest) };


    // offerBaggageInfoMap Field Functions 
    bool hasOfferBaggageInfoMap() const { return this->offerBaggageInfoMap_ != nullptr;};
    void deleteOfferBaggageInfoMap() { this->offerBaggageInfoMap_ = nullptr;};
    inline const map<string, vector<Models::ModuleOrderItemListBaggageRuleOfferBaggageInfoMapValue>> & offerBaggageInfoMap() const { DARABONBA_PTR_GET_CONST(offerBaggageInfoMap_, map<string, vector<Models::ModuleOrderItemListBaggageRuleOfferBaggageInfoMapValue>>) };
    inline map<string, vector<Models::ModuleOrderItemListBaggageRuleOfferBaggageInfoMapValue>> offerBaggageInfoMap() { DARABONBA_PTR_GET(offerBaggageInfoMap_, map<string, vector<Models::ModuleOrderItemListBaggageRuleOfferBaggageInfoMapValue>>) };
    inline IntlFlightOrderDetailResponseBodyModuleOrderItemListBaggageRule& setOfferBaggageInfoMap(const map<string, vector<Models::ModuleOrderItemListBaggageRuleOfferBaggageInfoMapValue>> & offerBaggageInfoMap) { DARABONBA_PTR_SET_VALUE(offerBaggageInfoMap_, offerBaggageInfoMap) };
    inline IntlFlightOrderDetailResponseBodyModuleOrderItemListBaggageRule& setOfferBaggageInfoMap(map<string, vector<Models::ModuleOrderItemListBaggageRuleOfferBaggageInfoMapValue>> && offerBaggageInfoMap) { DARABONBA_PTR_SET_RVALUE(offerBaggageInfoMap_, offerBaggageInfoMap) };


    // structuredBaggage Field Functions 
    bool hasStructuredBaggage() const { return this->structuredBaggage_ != nullptr;};
    void deleteStructuredBaggage() { this->structuredBaggage_ = nullptr;};
    inline bool structuredBaggage() const { DARABONBA_PTR_GET_DEFAULT(structuredBaggage_, false) };
    inline IntlFlightOrderDetailResponseBodyModuleOrderItemListBaggageRule& setStructuredBaggage(bool structuredBaggage) { DARABONBA_PTR_SET_VALUE(structuredBaggage_, structuredBaggage) };


  protected:
    std::shared_ptr<string> baggageDigest_ = nullptr;
    std::shared_ptr<map<string, vector<Models::ModuleOrderItemListBaggageRuleOfferBaggageInfoMapValue>>> offerBaggageInfoMap_ = nullptr;
    std::shared_ptr<bool> structuredBaggage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
