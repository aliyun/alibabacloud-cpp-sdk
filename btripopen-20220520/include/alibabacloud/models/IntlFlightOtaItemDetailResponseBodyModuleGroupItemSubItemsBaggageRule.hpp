// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTOTAITEMDETAILRESPONSEBODYMODULEGROUPITEMSUBITEMSBAGGAGERULE_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTOTAITEMDETAILRESPONSEBODYMODULEGROUPITEMSUBITEMSBAGGAGERULE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsBaggageRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsBaggageRule& obj) { 
      DARABONBA_PTR_TO_JSON(baggage_digest, baggageDigest_);
      DARABONBA_PTR_TO_JSON(baggage_info_map, baggageInfoMap_);
      DARABONBA_PTR_TO_JSON(structured_baggage, structuredBaggage_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsBaggageRule& obj) { 
      DARABONBA_PTR_FROM_JSON(baggage_digest, baggageDigest_);
      DARABONBA_PTR_FROM_JSON(baggage_info_map, baggageInfoMap_);
      DARABONBA_PTR_FROM_JSON(structured_baggage, structuredBaggage_);
    };
    IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsBaggageRule() = default ;
    IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsBaggageRule(const IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsBaggageRule &) = default ;
    IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsBaggageRule(IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsBaggageRule &&) = default ;
    IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsBaggageRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsBaggageRule() = default ;
    IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsBaggageRule& operator=(const IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsBaggageRule &) = default ;
    IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsBaggageRule& operator=(IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsBaggageRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baggageDigest_ != nullptr
        && this->baggageInfoMap_ != nullptr && this->structuredBaggage_ != nullptr; };
    // baggageDigest Field Functions 
    bool hasBaggageDigest() const { return this->baggageDigest_ != nullptr;};
    void deleteBaggageDigest() { this->baggageDigest_ = nullptr;};
    inline string baggageDigest() const { DARABONBA_PTR_GET_DEFAULT(baggageDigest_, "") };
    inline IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsBaggageRule& setBaggageDigest(string baggageDigest) { DARABONBA_PTR_SET_VALUE(baggageDigest_, baggageDigest) };


    // baggageInfoMap Field Functions 
    bool hasBaggageInfoMap() const { return this->baggageInfoMap_ != nullptr;};
    void deleteBaggageInfoMap() { this->baggageInfoMap_ = nullptr;};
    inline const map<string, vector<Models::ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue>> & baggageInfoMap() const { DARABONBA_PTR_GET_CONST(baggageInfoMap_, map<string, vector<Models::ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue>>) };
    inline map<string, vector<Models::ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue>> baggageInfoMap() { DARABONBA_PTR_GET(baggageInfoMap_, map<string, vector<Models::ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue>>) };
    inline IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsBaggageRule& setBaggageInfoMap(const map<string, vector<Models::ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue>> & baggageInfoMap) { DARABONBA_PTR_SET_VALUE(baggageInfoMap_, baggageInfoMap) };
    inline IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsBaggageRule& setBaggageInfoMap(map<string, vector<Models::ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue>> && baggageInfoMap) { DARABONBA_PTR_SET_RVALUE(baggageInfoMap_, baggageInfoMap) };


    // structuredBaggage Field Functions 
    bool hasStructuredBaggage() const { return this->structuredBaggage_ != nullptr;};
    void deleteStructuredBaggage() { this->structuredBaggage_ = nullptr;};
    inline bool structuredBaggage() const { DARABONBA_PTR_GET_DEFAULT(structuredBaggage_, false) };
    inline IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsBaggageRule& setStructuredBaggage(bool structuredBaggage) { DARABONBA_PTR_SET_VALUE(structuredBaggage_, structuredBaggage) };


  protected:
    std::shared_ptr<string> baggageDigest_ = nullptr;
    std::shared_ptr<map<string, vector<Models::ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue>>> baggageInfoMap_ = nullptr;
    std::shared_ptr<bool> structuredBaggage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
