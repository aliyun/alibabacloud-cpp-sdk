// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTOTAITEMDETAILRESPONSEBODYMODULEGROUPITEMSUBITEMS_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTOTAITEMDETAILRESPONSEBODYMODULEGROUPITEMSUBITEMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsBaggageRule.hpp>
#include <alibabacloud/models/IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsRefundChangeRule.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/ModuleGroupItemSubItemsShoppingItemMapValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItems& obj) { 
      DARABONBA_PTR_TO_JSON(baggage_rule, baggageRule_);
      DARABONBA_PTR_TO_JSON(refund_change_rule, refundChangeRule_);
      DARABONBA_PTR_TO_JSON(segment_keys, segmentKeys_);
      DARABONBA_PTR_TO_JSON(shopping_item_map, shoppingItemMap_);
      DARABONBA_PTR_TO_JSON(uniq_key, uniqKey_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItems& obj) { 
      DARABONBA_PTR_FROM_JSON(baggage_rule, baggageRule_);
      DARABONBA_PTR_FROM_JSON(refund_change_rule, refundChangeRule_);
      DARABONBA_PTR_FROM_JSON(segment_keys, segmentKeys_);
      DARABONBA_PTR_FROM_JSON(shopping_item_map, shoppingItemMap_);
      DARABONBA_PTR_FROM_JSON(uniq_key, uniqKey_);
    };
    IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItems() = default ;
    IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItems(const IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItems &) = default ;
    IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItems(IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItems &&) = default ;
    IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItems() = default ;
    IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItems& operator=(const IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItems &) = default ;
    IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItems& operator=(IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baggageRule_ != nullptr
        && this->refundChangeRule_ != nullptr && this->segmentKeys_ != nullptr && this->shoppingItemMap_ != nullptr && this->uniqKey_ != nullptr; };
    // baggageRule Field Functions 
    bool hasBaggageRule() const { return this->baggageRule_ != nullptr;};
    void deleteBaggageRule() { this->baggageRule_ = nullptr;};
    inline const Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsBaggageRule & baggageRule() const { DARABONBA_PTR_GET_CONST(baggageRule_, Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsBaggageRule) };
    inline Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsBaggageRule baggageRule() { DARABONBA_PTR_GET(baggageRule_, Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsBaggageRule) };
    inline IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItems& setBaggageRule(const Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsBaggageRule & baggageRule) { DARABONBA_PTR_SET_VALUE(baggageRule_, baggageRule) };
    inline IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItems& setBaggageRule(Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsBaggageRule && baggageRule) { DARABONBA_PTR_SET_RVALUE(baggageRule_, baggageRule) };


    // refundChangeRule Field Functions 
    bool hasRefundChangeRule() const { return this->refundChangeRule_ != nullptr;};
    void deleteRefundChangeRule() { this->refundChangeRule_ = nullptr;};
    inline const Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsRefundChangeRule & refundChangeRule() const { DARABONBA_PTR_GET_CONST(refundChangeRule_, Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsRefundChangeRule) };
    inline Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsRefundChangeRule refundChangeRule() { DARABONBA_PTR_GET(refundChangeRule_, Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsRefundChangeRule) };
    inline IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItems& setRefundChangeRule(const Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsRefundChangeRule & refundChangeRule) { DARABONBA_PTR_SET_VALUE(refundChangeRule_, refundChangeRule) };
    inline IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItems& setRefundChangeRule(Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsRefundChangeRule && refundChangeRule) { DARABONBA_PTR_SET_RVALUE(refundChangeRule_, refundChangeRule) };


    // segmentKeys Field Functions 
    bool hasSegmentKeys() const { return this->segmentKeys_ != nullptr;};
    void deleteSegmentKeys() { this->segmentKeys_ = nullptr;};
    inline const vector<string> & segmentKeys() const { DARABONBA_PTR_GET_CONST(segmentKeys_, vector<string>) };
    inline vector<string> segmentKeys() { DARABONBA_PTR_GET(segmentKeys_, vector<string>) };
    inline IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItems& setSegmentKeys(const vector<string> & segmentKeys) { DARABONBA_PTR_SET_VALUE(segmentKeys_, segmentKeys) };
    inline IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItems& setSegmentKeys(vector<string> && segmentKeys) { DARABONBA_PTR_SET_RVALUE(segmentKeys_, segmentKeys) };


    // shoppingItemMap Field Functions 
    bool hasShoppingItemMap() const { return this->shoppingItemMap_ != nullptr;};
    void deleteShoppingItemMap() { this->shoppingItemMap_ = nullptr;};
    inline const map<string, Models::ModuleGroupItemSubItemsShoppingItemMapValue> & shoppingItemMap() const { DARABONBA_PTR_GET_CONST(shoppingItemMap_, map<string, Models::ModuleGroupItemSubItemsShoppingItemMapValue>) };
    inline map<string, Models::ModuleGroupItemSubItemsShoppingItemMapValue> shoppingItemMap() { DARABONBA_PTR_GET(shoppingItemMap_, map<string, Models::ModuleGroupItemSubItemsShoppingItemMapValue>) };
    inline IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItems& setShoppingItemMap(const map<string, Models::ModuleGroupItemSubItemsShoppingItemMapValue> & shoppingItemMap) { DARABONBA_PTR_SET_VALUE(shoppingItemMap_, shoppingItemMap) };
    inline IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItems& setShoppingItemMap(map<string, Models::ModuleGroupItemSubItemsShoppingItemMapValue> && shoppingItemMap) { DARABONBA_PTR_SET_RVALUE(shoppingItemMap_, shoppingItemMap) };


    // uniqKey Field Functions 
    bool hasUniqKey() const { return this->uniqKey_ != nullptr;};
    void deleteUniqKey() { this->uniqKey_ = nullptr;};
    inline string uniqKey() const { DARABONBA_PTR_GET_DEFAULT(uniqKey_, "") };
    inline IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItems& setUniqKey(string uniqKey) { DARABONBA_PTR_SET_VALUE(uniqKey_, uniqKey) };


  protected:
    std::shared_ptr<Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsBaggageRule> baggageRule_ = nullptr;
    std::shared_ptr<Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsRefundChangeRule> refundChangeRule_ = nullptr;
    std::shared_ptr<vector<string>> segmentKeys_ = nullptr;
    std::shared_ptr<map<string, Models::ModuleGroupItemSubItemsShoppingItemMapValue>> shoppingItemMap_ = nullptr;
    std::shared_ptr<string> uniqKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
