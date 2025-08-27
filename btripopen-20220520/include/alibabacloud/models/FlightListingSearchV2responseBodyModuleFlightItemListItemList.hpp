// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHV2RESPONSEBODYMODULEFLIGHTITEMLISTITEMLIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHV2RESPONSEBODYMODULEFLIGHTITEMLISTITEMLIST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ModuleFlightItemListItemListFlightRuleInfosValue.hpp>
#include <alibabacloud/models/ModuleFlightItemListItemListShoppingItemMapValue.hpp>
#include <vector>
#include <alibabacloud/models/ModuleFlightItemListItemListSubItemPositionMapValue.hpp>
#include <alibabacloud/models/FlightListingSearchV2ResponseBodyModuleFlightItemListItemListSubItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightListingSearchV2ResponseBodyModuleFlightItemListItemList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightListingSearchV2ResponseBodyModuleFlightItemListItemList& obj) { 
      DARABONBA_PTR_TO_JSON(flight_rule_infos, flightRuleInfos_);
      DARABONBA_PTR_TO_JSON(item_id, itemId_);
      DARABONBA_PTR_TO_JSON(shopping_item_map, shoppingItemMap_);
      DARABONBA_PTR_TO_JSON(sub_item_position_map, subItemPositionMap_);
      DARABONBA_PTR_TO_JSON(sub_items, subItems_);
    };
    friend void from_json(const Darabonba::Json& j, FlightListingSearchV2ResponseBodyModuleFlightItemListItemList& obj) { 
      DARABONBA_PTR_FROM_JSON(flight_rule_infos, flightRuleInfos_);
      DARABONBA_PTR_FROM_JSON(item_id, itemId_);
      DARABONBA_PTR_FROM_JSON(shopping_item_map, shoppingItemMap_);
      DARABONBA_PTR_FROM_JSON(sub_item_position_map, subItemPositionMap_);
      DARABONBA_PTR_FROM_JSON(sub_items, subItems_);
    };
    FlightListingSearchV2ResponseBodyModuleFlightItemListItemList() = default ;
    FlightListingSearchV2ResponseBodyModuleFlightItemListItemList(const FlightListingSearchV2ResponseBodyModuleFlightItemListItemList &) = default ;
    FlightListingSearchV2ResponseBodyModuleFlightItemListItemList(FlightListingSearchV2ResponseBodyModuleFlightItemListItemList &&) = default ;
    FlightListingSearchV2ResponseBodyModuleFlightItemListItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightListingSearchV2ResponseBodyModuleFlightItemListItemList() = default ;
    FlightListingSearchV2ResponseBodyModuleFlightItemListItemList& operator=(const FlightListingSearchV2ResponseBodyModuleFlightItemListItemList &) = default ;
    FlightListingSearchV2ResponseBodyModuleFlightItemListItemList& operator=(FlightListingSearchV2ResponseBodyModuleFlightItemListItemList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flightRuleInfos_ != nullptr
        && this->itemId_ != nullptr && this->shoppingItemMap_ != nullptr && this->subItemPositionMap_ != nullptr && this->subItems_ != nullptr; };
    // flightRuleInfos Field Functions 
    bool hasFlightRuleInfos() const { return this->flightRuleInfos_ != nullptr;};
    void deleteFlightRuleInfos() { this->flightRuleInfos_ = nullptr;};
    inline const map<string, Models::ModuleFlightItemListItemListFlightRuleInfosValue> & flightRuleInfos() const { DARABONBA_PTR_GET_CONST(flightRuleInfos_, map<string, Models::ModuleFlightItemListItemListFlightRuleInfosValue>) };
    inline map<string, Models::ModuleFlightItemListItemListFlightRuleInfosValue> flightRuleInfos() { DARABONBA_PTR_GET(flightRuleInfos_, map<string, Models::ModuleFlightItemListItemListFlightRuleInfosValue>) };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListItemList& setFlightRuleInfos(const map<string, Models::ModuleFlightItemListItemListFlightRuleInfosValue> & flightRuleInfos) { DARABONBA_PTR_SET_VALUE(flightRuleInfos_, flightRuleInfos) };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListItemList& setFlightRuleInfos(map<string, Models::ModuleFlightItemListItemListFlightRuleInfosValue> && flightRuleInfos) { DARABONBA_PTR_SET_RVALUE(flightRuleInfos_, flightRuleInfos) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline string itemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListItemList& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // shoppingItemMap Field Functions 
    bool hasShoppingItemMap() const { return this->shoppingItemMap_ != nullptr;};
    void deleteShoppingItemMap() { this->shoppingItemMap_ = nullptr;};
    inline const map<string, Models::ModuleFlightItemListItemListShoppingItemMapValue> & shoppingItemMap() const { DARABONBA_PTR_GET_CONST(shoppingItemMap_, map<string, Models::ModuleFlightItemListItemListShoppingItemMapValue>) };
    inline map<string, Models::ModuleFlightItemListItemListShoppingItemMapValue> shoppingItemMap() { DARABONBA_PTR_GET(shoppingItemMap_, map<string, Models::ModuleFlightItemListItemListShoppingItemMapValue>) };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListItemList& setShoppingItemMap(const map<string, Models::ModuleFlightItemListItemListShoppingItemMapValue> & shoppingItemMap) { DARABONBA_PTR_SET_VALUE(shoppingItemMap_, shoppingItemMap) };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListItemList& setShoppingItemMap(map<string, Models::ModuleFlightItemListItemListShoppingItemMapValue> && shoppingItemMap) { DARABONBA_PTR_SET_RVALUE(shoppingItemMap_, shoppingItemMap) };


    // subItemPositionMap Field Functions 
    bool hasSubItemPositionMap() const { return this->subItemPositionMap_ != nullptr;};
    void deleteSubItemPositionMap() { this->subItemPositionMap_ = nullptr;};
    inline const map<string, vector<Models::ModuleFlightItemListItemListSubItemPositionMapValue>> & subItemPositionMap() const { DARABONBA_PTR_GET_CONST(subItemPositionMap_, map<string, vector<Models::ModuleFlightItemListItemListSubItemPositionMapValue>>) };
    inline map<string, vector<Models::ModuleFlightItemListItemListSubItemPositionMapValue>> subItemPositionMap() { DARABONBA_PTR_GET(subItemPositionMap_, map<string, vector<Models::ModuleFlightItemListItemListSubItemPositionMapValue>>) };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListItemList& setSubItemPositionMap(const map<string, vector<Models::ModuleFlightItemListItemListSubItemPositionMapValue>> & subItemPositionMap) { DARABONBA_PTR_SET_VALUE(subItemPositionMap_, subItemPositionMap) };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListItemList& setSubItemPositionMap(map<string, vector<Models::ModuleFlightItemListItemListSubItemPositionMapValue>> && subItemPositionMap) { DARABONBA_PTR_SET_RVALUE(subItemPositionMap_, subItemPositionMap) };


    // subItems Field Functions 
    bool hasSubItems() const { return this->subItems_ != nullptr;};
    void deleteSubItems() { this->subItems_ = nullptr;};
    inline const vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemListItemListSubItems> & subItems() const { DARABONBA_PTR_GET_CONST(subItems_, vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemListItemListSubItems>) };
    inline vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemListItemListSubItems> subItems() { DARABONBA_PTR_GET(subItems_, vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemListItemListSubItems>) };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListItemList& setSubItems(const vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemListItemListSubItems> & subItems) { DARABONBA_PTR_SET_VALUE(subItems_, subItems) };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListItemList& setSubItems(vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemListItemListSubItems> && subItems) { DARABONBA_PTR_SET_RVALUE(subItems_, subItems) };


  protected:
    std::shared_ptr<map<string, Models::ModuleFlightItemListItemListFlightRuleInfosValue>> flightRuleInfos_ = nullptr;
    std::shared_ptr<string> itemId_ = nullptr;
    std::shared_ptr<map<string, Models::ModuleFlightItemListItemListShoppingItemMapValue>> shoppingItemMap_ = nullptr;
    std::shared_ptr<map<string, vector<Models::ModuleFlightItemListItemListSubItemPositionMapValue>>> subItemPositionMap_ = nullptr;
    std::shared_ptr<vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemListItemListSubItems>> subItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
