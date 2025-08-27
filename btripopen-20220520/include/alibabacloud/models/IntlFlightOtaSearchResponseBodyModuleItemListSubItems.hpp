// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTOTASEARCHRESPONSEBODYMODULEITEMLISTSUBITEMS_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTOTASEARCHRESPONSEBODYMODULEITEMLISTSUBITEMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/IntlFlightOtaSearchResponseBodyModuleItemListSubItemsBaggageRule.hpp>
#include <alibabacloud/models/IntlFlightOtaSearchResponseBodyModuleItemListSubItemsRefundChangeRule.hpp>
#include <vector>
#include <alibabacloud/models/IntlFlightOtaSearchResponseBodyModuleItemListSubItemsSegmentPositionList.hpp>
#include <map>
#include <alibabacloud/models/ModuleItemListSubItemsShoppingItemMapValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightOtaSearchResponseBodyModuleItemListSubItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightOtaSearchResponseBodyModuleItemListSubItems& obj) { 
      DARABONBA_PTR_TO_JSON(baggage_rule, baggageRule_);
      DARABONBA_PTR_TO_JSON(refund_change_rule, refundChangeRule_);
      DARABONBA_PTR_TO_JSON(segment_keys, segmentKeys_);
      DARABONBA_PTR_TO_JSON(segment_position_list, segmentPositionList_);
      DARABONBA_PTR_TO_JSON(shopping_item_map, shoppingItemMap_);
      DARABONBA_PTR_TO_JSON(uniq_key, uniqKey_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightOtaSearchResponseBodyModuleItemListSubItems& obj) { 
      DARABONBA_PTR_FROM_JSON(baggage_rule, baggageRule_);
      DARABONBA_PTR_FROM_JSON(refund_change_rule, refundChangeRule_);
      DARABONBA_PTR_FROM_JSON(segment_keys, segmentKeys_);
      DARABONBA_PTR_FROM_JSON(segment_position_list, segmentPositionList_);
      DARABONBA_PTR_FROM_JSON(shopping_item_map, shoppingItemMap_);
      DARABONBA_PTR_FROM_JSON(uniq_key, uniqKey_);
    };
    IntlFlightOtaSearchResponseBodyModuleItemListSubItems() = default ;
    IntlFlightOtaSearchResponseBodyModuleItemListSubItems(const IntlFlightOtaSearchResponseBodyModuleItemListSubItems &) = default ;
    IntlFlightOtaSearchResponseBodyModuleItemListSubItems(IntlFlightOtaSearchResponseBodyModuleItemListSubItems &&) = default ;
    IntlFlightOtaSearchResponseBodyModuleItemListSubItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightOtaSearchResponseBodyModuleItemListSubItems() = default ;
    IntlFlightOtaSearchResponseBodyModuleItemListSubItems& operator=(const IntlFlightOtaSearchResponseBodyModuleItemListSubItems &) = default ;
    IntlFlightOtaSearchResponseBodyModuleItemListSubItems& operator=(IntlFlightOtaSearchResponseBodyModuleItemListSubItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baggageRule_ != nullptr
        && this->refundChangeRule_ != nullptr && this->segmentKeys_ != nullptr && this->segmentPositionList_ != nullptr && this->shoppingItemMap_ != nullptr && this->uniqKey_ != nullptr; };
    // baggageRule Field Functions 
    bool hasBaggageRule() const { return this->baggageRule_ != nullptr;};
    void deleteBaggageRule() { this->baggageRule_ = nullptr;};
    inline const Models::IntlFlightOtaSearchResponseBodyModuleItemListSubItemsBaggageRule & baggageRule() const { DARABONBA_PTR_GET_CONST(baggageRule_, Models::IntlFlightOtaSearchResponseBodyModuleItemListSubItemsBaggageRule) };
    inline Models::IntlFlightOtaSearchResponseBodyModuleItemListSubItemsBaggageRule baggageRule() { DARABONBA_PTR_GET(baggageRule_, Models::IntlFlightOtaSearchResponseBodyModuleItemListSubItemsBaggageRule) };
    inline IntlFlightOtaSearchResponseBodyModuleItemListSubItems& setBaggageRule(const Models::IntlFlightOtaSearchResponseBodyModuleItemListSubItemsBaggageRule & baggageRule) { DARABONBA_PTR_SET_VALUE(baggageRule_, baggageRule) };
    inline IntlFlightOtaSearchResponseBodyModuleItemListSubItems& setBaggageRule(Models::IntlFlightOtaSearchResponseBodyModuleItemListSubItemsBaggageRule && baggageRule) { DARABONBA_PTR_SET_RVALUE(baggageRule_, baggageRule) };


    // refundChangeRule Field Functions 
    bool hasRefundChangeRule() const { return this->refundChangeRule_ != nullptr;};
    void deleteRefundChangeRule() { this->refundChangeRule_ = nullptr;};
    inline const Models::IntlFlightOtaSearchResponseBodyModuleItemListSubItemsRefundChangeRule & refundChangeRule() const { DARABONBA_PTR_GET_CONST(refundChangeRule_, Models::IntlFlightOtaSearchResponseBodyModuleItemListSubItemsRefundChangeRule) };
    inline Models::IntlFlightOtaSearchResponseBodyModuleItemListSubItemsRefundChangeRule refundChangeRule() { DARABONBA_PTR_GET(refundChangeRule_, Models::IntlFlightOtaSearchResponseBodyModuleItemListSubItemsRefundChangeRule) };
    inline IntlFlightOtaSearchResponseBodyModuleItemListSubItems& setRefundChangeRule(const Models::IntlFlightOtaSearchResponseBodyModuleItemListSubItemsRefundChangeRule & refundChangeRule) { DARABONBA_PTR_SET_VALUE(refundChangeRule_, refundChangeRule) };
    inline IntlFlightOtaSearchResponseBodyModuleItemListSubItems& setRefundChangeRule(Models::IntlFlightOtaSearchResponseBodyModuleItemListSubItemsRefundChangeRule && refundChangeRule) { DARABONBA_PTR_SET_RVALUE(refundChangeRule_, refundChangeRule) };


    // segmentKeys Field Functions 
    bool hasSegmentKeys() const { return this->segmentKeys_ != nullptr;};
    void deleteSegmentKeys() { this->segmentKeys_ = nullptr;};
    inline const vector<string> & segmentKeys() const { DARABONBA_PTR_GET_CONST(segmentKeys_, vector<string>) };
    inline vector<string> segmentKeys() { DARABONBA_PTR_GET(segmentKeys_, vector<string>) };
    inline IntlFlightOtaSearchResponseBodyModuleItemListSubItems& setSegmentKeys(const vector<string> & segmentKeys) { DARABONBA_PTR_SET_VALUE(segmentKeys_, segmentKeys) };
    inline IntlFlightOtaSearchResponseBodyModuleItemListSubItems& setSegmentKeys(vector<string> && segmentKeys) { DARABONBA_PTR_SET_RVALUE(segmentKeys_, segmentKeys) };


    // segmentPositionList Field Functions 
    bool hasSegmentPositionList() const { return this->segmentPositionList_ != nullptr;};
    void deleteSegmentPositionList() { this->segmentPositionList_ = nullptr;};
    inline const vector<Models::IntlFlightOtaSearchResponseBodyModuleItemListSubItemsSegmentPositionList> & segmentPositionList() const { DARABONBA_PTR_GET_CONST(segmentPositionList_, vector<Models::IntlFlightOtaSearchResponseBodyModuleItemListSubItemsSegmentPositionList>) };
    inline vector<Models::IntlFlightOtaSearchResponseBodyModuleItemListSubItemsSegmentPositionList> segmentPositionList() { DARABONBA_PTR_GET(segmentPositionList_, vector<Models::IntlFlightOtaSearchResponseBodyModuleItemListSubItemsSegmentPositionList>) };
    inline IntlFlightOtaSearchResponseBodyModuleItemListSubItems& setSegmentPositionList(const vector<Models::IntlFlightOtaSearchResponseBodyModuleItemListSubItemsSegmentPositionList> & segmentPositionList) { DARABONBA_PTR_SET_VALUE(segmentPositionList_, segmentPositionList) };
    inline IntlFlightOtaSearchResponseBodyModuleItemListSubItems& setSegmentPositionList(vector<Models::IntlFlightOtaSearchResponseBodyModuleItemListSubItemsSegmentPositionList> && segmentPositionList) { DARABONBA_PTR_SET_RVALUE(segmentPositionList_, segmentPositionList) };


    // shoppingItemMap Field Functions 
    bool hasShoppingItemMap() const { return this->shoppingItemMap_ != nullptr;};
    void deleteShoppingItemMap() { this->shoppingItemMap_ = nullptr;};
    inline const map<string, Models::ModuleItemListSubItemsShoppingItemMapValue> & shoppingItemMap() const { DARABONBA_PTR_GET_CONST(shoppingItemMap_, map<string, Models::ModuleItemListSubItemsShoppingItemMapValue>) };
    inline map<string, Models::ModuleItemListSubItemsShoppingItemMapValue> shoppingItemMap() { DARABONBA_PTR_GET(shoppingItemMap_, map<string, Models::ModuleItemListSubItemsShoppingItemMapValue>) };
    inline IntlFlightOtaSearchResponseBodyModuleItemListSubItems& setShoppingItemMap(const map<string, Models::ModuleItemListSubItemsShoppingItemMapValue> & shoppingItemMap) { DARABONBA_PTR_SET_VALUE(shoppingItemMap_, shoppingItemMap) };
    inline IntlFlightOtaSearchResponseBodyModuleItemListSubItems& setShoppingItemMap(map<string, Models::ModuleItemListSubItemsShoppingItemMapValue> && shoppingItemMap) { DARABONBA_PTR_SET_RVALUE(shoppingItemMap_, shoppingItemMap) };


    // uniqKey Field Functions 
    bool hasUniqKey() const { return this->uniqKey_ != nullptr;};
    void deleteUniqKey() { this->uniqKey_ = nullptr;};
    inline string uniqKey() const { DARABONBA_PTR_GET_DEFAULT(uniqKey_, "") };
    inline IntlFlightOtaSearchResponseBodyModuleItemListSubItems& setUniqKey(string uniqKey) { DARABONBA_PTR_SET_VALUE(uniqKey_, uniqKey) };


  protected:
    std::shared_ptr<Models::IntlFlightOtaSearchResponseBodyModuleItemListSubItemsBaggageRule> baggageRule_ = nullptr;
    std::shared_ptr<Models::IntlFlightOtaSearchResponseBodyModuleItemListSubItemsRefundChangeRule> refundChangeRule_ = nullptr;
    std::shared_ptr<vector<string>> segmentKeys_ = nullptr;
    std::shared_ptr<vector<Models::IntlFlightOtaSearchResponseBodyModuleItemListSubItemsSegmentPositionList>> segmentPositionList_ = nullptr;
    std::shared_ptr<map<string, Models::ModuleItemListSubItemsShoppingItemMapValue>> shoppingItemMap_ = nullptr;
    std::shared_ptr<string> uniqKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
