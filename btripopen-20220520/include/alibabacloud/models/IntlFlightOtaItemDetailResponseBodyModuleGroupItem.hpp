// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTOTAITEMDETAILRESPONSEBODYMODULEGROUPITEM_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTOTAITEMDETAILRESPONSEBODYMODULEGROUPITEM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoList.hpp>
#include <map>
#include <alibabacloud/models/ModuleGroupItemShoppingItemMapValue.hpp>
#include <alibabacloud/models/ModuleGroupItemSubItemPositionMapValue.hpp>
#include <alibabacloud/models/IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightOtaItemDetailResponseBodyModuleGroupItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightOtaItemDetailResponseBodyModuleGroupItem& obj) { 
      DARABONBA_PTR_TO_JSON(agreement_price_codes, agreementPriceCodes_);
      DARABONBA_PTR_TO_JSON(flight_rule_info_list, flightRuleInfoList_);
      DARABONBA_PTR_TO_JSON(item_id, itemId_);
      DARABONBA_PTR_TO_JSON(item_type, itemType_);
      DARABONBA_PTR_TO_JSON(shopping_item_map, shoppingItemMap_);
      DARABONBA_PTR_TO_JSON(sub_item_position_map, subItemPositionMap_);
      DARABONBA_PTR_TO_JSON(sub_items, subItems_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightOtaItemDetailResponseBodyModuleGroupItem& obj) { 
      DARABONBA_PTR_FROM_JSON(agreement_price_codes, agreementPriceCodes_);
      DARABONBA_PTR_FROM_JSON(flight_rule_info_list, flightRuleInfoList_);
      DARABONBA_PTR_FROM_JSON(item_id, itemId_);
      DARABONBA_PTR_FROM_JSON(item_type, itemType_);
      DARABONBA_PTR_FROM_JSON(shopping_item_map, shoppingItemMap_);
      DARABONBA_PTR_FROM_JSON(sub_item_position_map, subItemPositionMap_);
      DARABONBA_PTR_FROM_JSON(sub_items, subItems_);
    };
    IntlFlightOtaItemDetailResponseBodyModuleGroupItem() = default ;
    IntlFlightOtaItemDetailResponseBodyModuleGroupItem(const IntlFlightOtaItemDetailResponseBodyModuleGroupItem &) = default ;
    IntlFlightOtaItemDetailResponseBodyModuleGroupItem(IntlFlightOtaItemDetailResponseBodyModuleGroupItem &&) = default ;
    IntlFlightOtaItemDetailResponseBodyModuleGroupItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightOtaItemDetailResponseBodyModuleGroupItem() = default ;
    IntlFlightOtaItemDetailResponseBodyModuleGroupItem& operator=(const IntlFlightOtaItemDetailResponseBodyModuleGroupItem &) = default ;
    IntlFlightOtaItemDetailResponseBodyModuleGroupItem& operator=(IntlFlightOtaItemDetailResponseBodyModuleGroupItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agreementPriceCodes_ != nullptr
        && this->flightRuleInfoList_ != nullptr && this->itemId_ != nullptr && this->itemType_ != nullptr && this->shoppingItemMap_ != nullptr && this->subItemPositionMap_ != nullptr
        && this->subItems_ != nullptr; };
    // agreementPriceCodes Field Functions 
    bool hasAgreementPriceCodes() const { return this->agreementPriceCodes_ != nullptr;};
    void deleteAgreementPriceCodes() { this->agreementPriceCodes_ = nullptr;};
    inline const vector<string> & agreementPriceCodes() const { DARABONBA_PTR_GET_CONST(agreementPriceCodes_, vector<string>) };
    inline vector<string> agreementPriceCodes() { DARABONBA_PTR_GET(agreementPriceCodes_, vector<string>) };
    inline IntlFlightOtaItemDetailResponseBodyModuleGroupItem& setAgreementPriceCodes(const vector<string> & agreementPriceCodes) { DARABONBA_PTR_SET_VALUE(agreementPriceCodes_, agreementPriceCodes) };
    inline IntlFlightOtaItemDetailResponseBodyModuleGroupItem& setAgreementPriceCodes(vector<string> && agreementPriceCodes) { DARABONBA_PTR_SET_RVALUE(agreementPriceCodes_, agreementPriceCodes) };


    // flightRuleInfoList Field Functions 
    bool hasFlightRuleInfoList() const { return this->flightRuleInfoList_ != nullptr;};
    void deleteFlightRuleInfoList() { this->flightRuleInfoList_ = nullptr;};
    inline const vector<Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoList> & flightRuleInfoList() const { DARABONBA_PTR_GET_CONST(flightRuleInfoList_, vector<Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoList>) };
    inline vector<Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoList> flightRuleInfoList() { DARABONBA_PTR_GET(flightRuleInfoList_, vector<Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoList>) };
    inline IntlFlightOtaItemDetailResponseBodyModuleGroupItem& setFlightRuleInfoList(const vector<Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoList> & flightRuleInfoList) { DARABONBA_PTR_SET_VALUE(flightRuleInfoList_, flightRuleInfoList) };
    inline IntlFlightOtaItemDetailResponseBodyModuleGroupItem& setFlightRuleInfoList(vector<Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoList> && flightRuleInfoList) { DARABONBA_PTR_SET_RVALUE(flightRuleInfoList_, flightRuleInfoList) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline string itemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
    inline IntlFlightOtaItemDetailResponseBodyModuleGroupItem& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // itemType Field Functions 
    bool hasItemType() const { return this->itemType_ != nullptr;};
    void deleteItemType() { this->itemType_ = nullptr;};
    inline string itemType() const { DARABONBA_PTR_GET_DEFAULT(itemType_, "") };
    inline IntlFlightOtaItemDetailResponseBodyModuleGroupItem& setItemType(string itemType) { DARABONBA_PTR_SET_VALUE(itemType_, itemType) };


    // shoppingItemMap Field Functions 
    bool hasShoppingItemMap() const { return this->shoppingItemMap_ != nullptr;};
    void deleteShoppingItemMap() { this->shoppingItemMap_ = nullptr;};
    inline const map<string, Models::ModuleGroupItemShoppingItemMapValue> & shoppingItemMap() const { DARABONBA_PTR_GET_CONST(shoppingItemMap_, map<string, Models::ModuleGroupItemShoppingItemMapValue>) };
    inline map<string, Models::ModuleGroupItemShoppingItemMapValue> shoppingItemMap() { DARABONBA_PTR_GET(shoppingItemMap_, map<string, Models::ModuleGroupItemShoppingItemMapValue>) };
    inline IntlFlightOtaItemDetailResponseBodyModuleGroupItem& setShoppingItemMap(const map<string, Models::ModuleGroupItemShoppingItemMapValue> & shoppingItemMap) { DARABONBA_PTR_SET_VALUE(shoppingItemMap_, shoppingItemMap) };
    inline IntlFlightOtaItemDetailResponseBodyModuleGroupItem& setShoppingItemMap(map<string, Models::ModuleGroupItemShoppingItemMapValue> && shoppingItemMap) { DARABONBA_PTR_SET_RVALUE(shoppingItemMap_, shoppingItemMap) };


    // subItemPositionMap Field Functions 
    bool hasSubItemPositionMap() const { return this->subItemPositionMap_ != nullptr;};
    void deleteSubItemPositionMap() { this->subItemPositionMap_ = nullptr;};
    inline const map<string, vector<Models::ModuleGroupItemSubItemPositionMapValue>> & subItemPositionMap() const { DARABONBA_PTR_GET_CONST(subItemPositionMap_, map<string, vector<Models::ModuleGroupItemSubItemPositionMapValue>>) };
    inline map<string, vector<Models::ModuleGroupItemSubItemPositionMapValue>> subItemPositionMap() { DARABONBA_PTR_GET(subItemPositionMap_, map<string, vector<Models::ModuleGroupItemSubItemPositionMapValue>>) };
    inline IntlFlightOtaItemDetailResponseBodyModuleGroupItem& setSubItemPositionMap(const map<string, vector<Models::ModuleGroupItemSubItemPositionMapValue>> & subItemPositionMap) { DARABONBA_PTR_SET_VALUE(subItemPositionMap_, subItemPositionMap) };
    inline IntlFlightOtaItemDetailResponseBodyModuleGroupItem& setSubItemPositionMap(map<string, vector<Models::ModuleGroupItemSubItemPositionMapValue>> && subItemPositionMap) { DARABONBA_PTR_SET_RVALUE(subItemPositionMap_, subItemPositionMap) };


    // subItems Field Functions 
    bool hasSubItems() const { return this->subItems_ != nullptr;};
    void deleteSubItems() { this->subItems_ = nullptr;};
    inline const vector<Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItems> & subItems() const { DARABONBA_PTR_GET_CONST(subItems_, vector<Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItems>) };
    inline vector<Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItems> subItems() { DARABONBA_PTR_GET(subItems_, vector<Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItems>) };
    inline IntlFlightOtaItemDetailResponseBodyModuleGroupItem& setSubItems(const vector<Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItems> & subItems) { DARABONBA_PTR_SET_VALUE(subItems_, subItems) };
    inline IntlFlightOtaItemDetailResponseBodyModuleGroupItem& setSubItems(vector<Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItems> && subItems) { DARABONBA_PTR_SET_RVALUE(subItems_, subItems) };


  protected:
    std::shared_ptr<vector<string>> agreementPriceCodes_ = nullptr;
    std::shared_ptr<vector<Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoList>> flightRuleInfoList_ = nullptr;
    std::shared_ptr<string> itemId_ = nullptr;
    std::shared_ptr<string> itemType_ = nullptr;
    std::shared_ptr<map<string, Models::ModuleGroupItemShoppingItemMapValue>> shoppingItemMap_ = nullptr;
    std::shared_ptr<map<string, vector<Models::ModuleGroupItemSubItemPositionMapValue>>> subItemPositionMap_ = nullptr;
    std::shared_ptr<vector<Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItems>> subItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
