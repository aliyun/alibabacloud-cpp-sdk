// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHV2RESPONSEBODYMODULEFLIGHTITEMLISTBESTPRICEITEM_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHV2RESPONSEBODYMODULEFLIGHTITEMLISTBESTPRICEITEM_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ModuleFlightItemListBestPriceItemFlightRuleInfosValue.hpp>
#include <alibabacloud/models/ModuleFlightItemListBestPriceItemShoppingItemMapValue.hpp>
#include <vector>
#include <alibabacloud/models/ModuleFlightItemListBestPriceItemSubItemPositionMapValue.hpp>
#include <alibabacloud/models/FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItemSubItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItem& obj) { 
      DARABONBA_PTR_TO_JSON(flight_rule_infos, flightRuleInfos_);
      DARABONBA_PTR_TO_JSON(item_id, itemId_);
      DARABONBA_PTR_TO_JSON(shopping_item_map, shoppingItemMap_);
      DARABONBA_PTR_TO_JSON(sub_item_position_map, subItemPositionMap_);
      DARABONBA_PTR_TO_JSON(sub_items, subItems_);
    };
    friend void from_json(const Darabonba::Json& j, FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItem& obj) { 
      DARABONBA_PTR_FROM_JSON(flight_rule_infos, flightRuleInfos_);
      DARABONBA_PTR_FROM_JSON(item_id, itemId_);
      DARABONBA_PTR_FROM_JSON(shopping_item_map, shoppingItemMap_);
      DARABONBA_PTR_FROM_JSON(sub_item_position_map, subItemPositionMap_);
      DARABONBA_PTR_FROM_JSON(sub_items, subItems_);
    };
    FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItem() = default ;
    FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItem(const FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItem &) = default ;
    FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItem(FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItem &&) = default ;
    FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItem() = default ;
    FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItem& operator=(const FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItem &) = default ;
    FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItem& operator=(FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flightRuleInfos_ != nullptr
        && this->itemId_ != nullptr && this->shoppingItemMap_ != nullptr && this->subItemPositionMap_ != nullptr && this->subItems_ != nullptr; };
    // flightRuleInfos Field Functions 
    bool hasFlightRuleInfos() const { return this->flightRuleInfos_ != nullptr;};
    void deleteFlightRuleInfos() { this->flightRuleInfos_ = nullptr;};
    inline const map<string, Models::ModuleFlightItemListBestPriceItemFlightRuleInfosValue> & flightRuleInfos() const { DARABONBA_PTR_GET_CONST(flightRuleInfos_, map<string, Models::ModuleFlightItemListBestPriceItemFlightRuleInfosValue>) };
    inline map<string, Models::ModuleFlightItemListBestPriceItemFlightRuleInfosValue> flightRuleInfos() { DARABONBA_PTR_GET(flightRuleInfos_, map<string, Models::ModuleFlightItemListBestPriceItemFlightRuleInfosValue>) };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItem& setFlightRuleInfos(const map<string, Models::ModuleFlightItemListBestPriceItemFlightRuleInfosValue> & flightRuleInfos) { DARABONBA_PTR_SET_VALUE(flightRuleInfos_, flightRuleInfos) };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItem& setFlightRuleInfos(map<string, Models::ModuleFlightItemListBestPriceItemFlightRuleInfosValue> && flightRuleInfos) { DARABONBA_PTR_SET_RVALUE(flightRuleInfos_, flightRuleInfos) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline string itemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItem& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // shoppingItemMap Field Functions 
    bool hasShoppingItemMap() const { return this->shoppingItemMap_ != nullptr;};
    void deleteShoppingItemMap() { this->shoppingItemMap_ = nullptr;};
    inline const map<string, Models::ModuleFlightItemListBestPriceItemShoppingItemMapValue> & shoppingItemMap() const { DARABONBA_PTR_GET_CONST(shoppingItemMap_, map<string, Models::ModuleFlightItemListBestPriceItemShoppingItemMapValue>) };
    inline map<string, Models::ModuleFlightItemListBestPriceItemShoppingItemMapValue> shoppingItemMap() { DARABONBA_PTR_GET(shoppingItemMap_, map<string, Models::ModuleFlightItemListBestPriceItemShoppingItemMapValue>) };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItem& setShoppingItemMap(const map<string, Models::ModuleFlightItemListBestPriceItemShoppingItemMapValue> & shoppingItemMap) { DARABONBA_PTR_SET_VALUE(shoppingItemMap_, shoppingItemMap) };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItem& setShoppingItemMap(map<string, Models::ModuleFlightItemListBestPriceItemShoppingItemMapValue> && shoppingItemMap) { DARABONBA_PTR_SET_RVALUE(shoppingItemMap_, shoppingItemMap) };


    // subItemPositionMap Field Functions 
    bool hasSubItemPositionMap() const { return this->subItemPositionMap_ != nullptr;};
    void deleteSubItemPositionMap() { this->subItemPositionMap_ = nullptr;};
    inline const map<string, vector<Models::ModuleFlightItemListBestPriceItemSubItemPositionMapValue>> & subItemPositionMap() const { DARABONBA_PTR_GET_CONST(subItemPositionMap_, map<string, vector<Models::ModuleFlightItemListBestPriceItemSubItemPositionMapValue>>) };
    inline map<string, vector<Models::ModuleFlightItemListBestPriceItemSubItemPositionMapValue>> subItemPositionMap() { DARABONBA_PTR_GET(subItemPositionMap_, map<string, vector<Models::ModuleFlightItemListBestPriceItemSubItemPositionMapValue>>) };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItem& setSubItemPositionMap(const map<string, vector<Models::ModuleFlightItemListBestPriceItemSubItemPositionMapValue>> & subItemPositionMap) { DARABONBA_PTR_SET_VALUE(subItemPositionMap_, subItemPositionMap) };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItem& setSubItemPositionMap(map<string, vector<Models::ModuleFlightItemListBestPriceItemSubItemPositionMapValue>> && subItemPositionMap) { DARABONBA_PTR_SET_RVALUE(subItemPositionMap_, subItemPositionMap) };


    // subItems Field Functions 
    bool hasSubItems() const { return this->subItems_ != nullptr;};
    void deleteSubItems() { this->subItems_ = nullptr;};
    inline const vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItemSubItems> & subItems() const { DARABONBA_PTR_GET_CONST(subItems_, vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItemSubItems>) };
    inline vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItemSubItems> subItems() { DARABONBA_PTR_GET(subItems_, vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItemSubItems>) };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItem& setSubItems(const vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItemSubItems> & subItems) { DARABONBA_PTR_SET_VALUE(subItems_, subItems) };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItem& setSubItems(vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItemSubItems> && subItems) { DARABONBA_PTR_SET_RVALUE(subItems_, subItems) };


  protected:
    std::shared_ptr<map<string, Models::ModuleFlightItemListBestPriceItemFlightRuleInfosValue>> flightRuleInfos_ = nullptr;
    std::shared_ptr<string> itemId_ = nullptr;
    std::shared_ptr<map<string, Models::ModuleFlightItemListBestPriceItemShoppingItemMapValue>> shoppingItemMap_ = nullptr;
    std::shared_ptr<map<string, vector<Models::ModuleFlightItemListBestPriceItemSubItemPositionMapValue>>> subItemPositionMap_ = nullptr;
    std::shared_ptr<vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItemSubItems>> subItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
