// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTOTASEARCHV2RESPONSEBODYMODULEITEMLIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTOTASEARCHV2RESPONSEBODYMODULEITEMLIST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ModuleItemListFlightRuleInfosValue.hpp>
#include <alibabacloud/models/ModuleItemListShoppingItemMapValue.hpp>
#include <vector>
#include <alibabacloud/models/ModuleItemListSubItemPositionMapValue.hpp>
#include <alibabacloud/models/FlightOtaSearchV2ResponseBodyModuleItemListSubItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOtaSearchV2ResponseBodyModuleItemList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOtaSearchV2ResponseBodyModuleItemList& obj) { 
      DARABONBA_PTR_TO_JSON(flight_rule_infos, flightRuleInfos_);
      DARABONBA_PTR_TO_JSON(item_id, itemId_);
      DARABONBA_PTR_TO_JSON(shopping_item_map, shoppingItemMap_);
      DARABONBA_PTR_TO_JSON(sub_item_position_map, subItemPositionMap_);
      DARABONBA_PTR_TO_JSON(sub_items, subItems_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOtaSearchV2ResponseBodyModuleItemList& obj) { 
      DARABONBA_PTR_FROM_JSON(flight_rule_infos, flightRuleInfos_);
      DARABONBA_PTR_FROM_JSON(item_id, itemId_);
      DARABONBA_PTR_FROM_JSON(shopping_item_map, shoppingItemMap_);
      DARABONBA_PTR_FROM_JSON(sub_item_position_map, subItemPositionMap_);
      DARABONBA_PTR_FROM_JSON(sub_items, subItems_);
    };
    FlightOtaSearchV2ResponseBodyModuleItemList() = default ;
    FlightOtaSearchV2ResponseBodyModuleItemList(const FlightOtaSearchV2ResponseBodyModuleItemList &) = default ;
    FlightOtaSearchV2ResponseBodyModuleItemList(FlightOtaSearchV2ResponseBodyModuleItemList &&) = default ;
    FlightOtaSearchV2ResponseBodyModuleItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOtaSearchV2ResponseBodyModuleItemList() = default ;
    FlightOtaSearchV2ResponseBodyModuleItemList& operator=(const FlightOtaSearchV2ResponseBodyModuleItemList &) = default ;
    FlightOtaSearchV2ResponseBodyModuleItemList& operator=(FlightOtaSearchV2ResponseBodyModuleItemList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flightRuleInfos_ != nullptr
        && this->itemId_ != nullptr && this->shoppingItemMap_ != nullptr && this->subItemPositionMap_ != nullptr && this->subItems_ != nullptr; };
    // flightRuleInfos Field Functions 
    bool hasFlightRuleInfos() const { return this->flightRuleInfos_ != nullptr;};
    void deleteFlightRuleInfos() { this->flightRuleInfos_ = nullptr;};
    inline const map<string, Models::ModuleItemListFlightRuleInfosValue> & flightRuleInfos() const { DARABONBA_PTR_GET_CONST(flightRuleInfos_, map<string, Models::ModuleItemListFlightRuleInfosValue>) };
    inline map<string, Models::ModuleItemListFlightRuleInfosValue> flightRuleInfos() { DARABONBA_PTR_GET(flightRuleInfos_, map<string, Models::ModuleItemListFlightRuleInfosValue>) };
    inline FlightOtaSearchV2ResponseBodyModuleItemList& setFlightRuleInfos(const map<string, Models::ModuleItemListFlightRuleInfosValue> & flightRuleInfos) { DARABONBA_PTR_SET_VALUE(flightRuleInfos_, flightRuleInfos) };
    inline FlightOtaSearchV2ResponseBodyModuleItemList& setFlightRuleInfos(map<string, Models::ModuleItemListFlightRuleInfosValue> && flightRuleInfos) { DARABONBA_PTR_SET_RVALUE(flightRuleInfos_, flightRuleInfos) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline string itemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
    inline FlightOtaSearchV2ResponseBodyModuleItemList& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // shoppingItemMap Field Functions 
    bool hasShoppingItemMap() const { return this->shoppingItemMap_ != nullptr;};
    void deleteShoppingItemMap() { this->shoppingItemMap_ = nullptr;};
    inline const map<string, Models::ModuleItemListShoppingItemMapValue> & shoppingItemMap() const { DARABONBA_PTR_GET_CONST(shoppingItemMap_, map<string, Models::ModuleItemListShoppingItemMapValue>) };
    inline map<string, Models::ModuleItemListShoppingItemMapValue> shoppingItemMap() { DARABONBA_PTR_GET(shoppingItemMap_, map<string, Models::ModuleItemListShoppingItemMapValue>) };
    inline FlightOtaSearchV2ResponseBodyModuleItemList& setShoppingItemMap(const map<string, Models::ModuleItemListShoppingItemMapValue> & shoppingItemMap) { DARABONBA_PTR_SET_VALUE(shoppingItemMap_, shoppingItemMap) };
    inline FlightOtaSearchV2ResponseBodyModuleItemList& setShoppingItemMap(map<string, Models::ModuleItemListShoppingItemMapValue> && shoppingItemMap) { DARABONBA_PTR_SET_RVALUE(shoppingItemMap_, shoppingItemMap) };


    // subItemPositionMap Field Functions 
    bool hasSubItemPositionMap() const { return this->subItemPositionMap_ != nullptr;};
    void deleteSubItemPositionMap() { this->subItemPositionMap_ = nullptr;};
    inline const map<string, vector<Models::ModuleItemListSubItemPositionMapValue>> & subItemPositionMap() const { DARABONBA_PTR_GET_CONST(subItemPositionMap_, map<string, vector<Models::ModuleItemListSubItemPositionMapValue>>) };
    inline map<string, vector<Models::ModuleItemListSubItemPositionMapValue>> subItemPositionMap() { DARABONBA_PTR_GET(subItemPositionMap_, map<string, vector<Models::ModuleItemListSubItemPositionMapValue>>) };
    inline FlightOtaSearchV2ResponseBodyModuleItemList& setSubItemPositionMap(const map<string, vector<Models::ModuleItemListSubItemPositionMapValue>> & subItemPositionMap) { DARABONBA_PTR_SET_VALUE(subItemPositionMap_, subItemPositionMap) };
    inline FlightOtaSearchV2ResponseBodyModuleItemList& setSubItemPositionMap(map<string, vector<Models::ModuleItemListSubItemPositionMapValue>> && subItemPositionMap) { DARABONBA_PTR_SET_RVALUE(subItemPositionMap_, subItemPositionMap) };


    // subItems Field Functions 
    bool hasSubItems() const { return this->subItems_ != nullptr;};
    void deleteSubItems() { this->subItems_ = nullptr;};
    inline const vector<Models::FlightOtaSearchV2ResponseBodyModuleItemListSubItems> & subItems() const { DARABONBA_PTR_GET_CONST(subItems_, vector<Models::FlightOtaSearchV2ResponseBodyModuleItemListSubItems>) };
    inline vector<Models::FlightOtaSearchV2ResponseBodyModuleItemListSubItems> subItems() { DARABONBA_PTR_GET(subItems_, vector<Models::FlightOtaSearchV2ResponseBodyModuleItemListSubItems>) };
    inline FlightOtaSearchV2ResponseBodyModuleItemList& setSubItems(const vector<Models::FlightOtaSearchV2ResponseBodyModuleItemListSubItems> & subItems) { DARABONBA_PTR_SET_VALUE(subItems_, subItems) };
    inline FlightOtaSearchV2ResponseBodyModuleItemList& setSubItems(vector<Models::FlightOtaSearchV2ResponseBodyModuleItemListSubItems> && subItems) { DARABONBA_PTR_SET_RVALUE(subItems_, subItems) };


  protected:
    std::shared_ptr<map<string, Models::ModuleItemListFlightRuleInfosValue>> flightRuleInfos_ = nullptr;
    std::shared_ptr<string> itemId_ = nullptr;
    std::shared_ptr<map<string, Models::ModuleItemListShoppingItemMapValue>> shoppingItemMap_ = nullptr;
    std::shared_ptr<map<string, vector<Models::ModuleItemListSubItemPositionMapValue>>> subItemPositionMap_ = nullptr;
    std::shared_ptr<vector<Models::FlightOtaSearchV2ResponseBodyModuleItemListSubItems>> subItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
