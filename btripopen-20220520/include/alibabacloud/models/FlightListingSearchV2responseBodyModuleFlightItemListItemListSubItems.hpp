// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHV2RESPONSEBODYMODULEFLIGHTITEMLISTITEMLISTSUBITEMS_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHV2RESPONSEBODYMODULEFLIGHTITEMLISTITEMLISTSUBITEMS_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ModuleFlightItemListItemListSubItemsShoppingItemMapValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightListingSearchV2ResponseBodyModuleFlightItemListItemListSubItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightListingSearchV2ResponseBodyModuleFlightItemListItemListSubItems& obj) { 
      DARABONBA_PTR_TO_JSON(shopping_item_map, shoppingItemMap_);
      DARABONBA_PTR_TO_JSON(tag, tag_);
      DARABONBA_PTR_TO_JSON(uniq_key, uniqKey_);
    };
    friend void from_json(const Darabonba::Json& j, FlightListingSearchV2ResponseBodyModuleFlightItemListItemListSubItems& obj) { 
      DARABONBA_PTR_FROM_JSON(shopping_item_map, shoppingItemMap_);
      DARABONBA_PTR_FROM_JSON(tag, tag_);
      DARABONBA_PTR_FROM_JSON(uniq_key, uniqKey_);
    };
    FlightListingSearchV2ResponseBodyModuleFlightItemListItemListSubItems() = default ;
    FlightListingSearchV2ResponseBodyModuleFlightItemListItemListSubItems(const FlightListingSearchV2ResponseBodyModuleFlightItemListItemListSubItems &) = default ;
    FlightListingSearchV2ResponseBodyModuleFlightItemListItemListSubItems(FlightListingSearchV2ResponseBodyModuleFlightItemListItemListSubItems &&) = default ;
    FlightListingSearchV2ResponseBodyModuleFlightItemListItemListSubItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightListingSearchV2ResponseBodyModuleFlightItemListItemListSubItems() = default ;
    FlightListingSearchV2ResponseBodyModuleFlightItemListItemListSubItems& operator=(const FlightListingSearchV2ResponseBodyModuleFlightItemListItemListSubItems &) = default ;
    FlightListingSearchV2ResponseBodyModuleFlightItemListItemListSubItems& operator=(FlightListingSearchV2ResponseBodyModuleFlightItemListItemListSubItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->shoppingItemMap_ != nullptr
        && this->tag_ != nullptr && this->uniqKey_ != nullptr; };
    // shoppingItemMap Field Functions 
    bool hasShoppingItemMap() const { return this->shoppingItemMap_ != nullptr;};
    void deleteShoppingItemMap() { this->shoppingItemMap_ = nullptr;};
    inline const map<string, Models::ModuleFlightItemListItemListSubItemsShoppingItemMapValue> & shoppingItemMap() const { DARABONBA_PTR_GET_CONST(shoppingItemMap_, map<string, Models::ModuleFlightItemListItemListSubItemsShoppingItemMapValue>) };
    inline map<string, Models::ModuleFlightItemListItemListSubItemsShoppingItemMapValue> shoppingItemMap() { DARABONBA_PTR_GET(shoppingItemMap_, map<string, Models::ModuleFlightItemListItemListSubItemsShoppingItemMapValue>) };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListItemListSubItems& setShoppingItemMap(const map<string, Models::ModuleFlightItemListItemListSubItemsShoppingItemMapValue> & shoppingItemMap) { DARABONBA_PTR_SET_VALUE(shoppingItemMap_, shoppingItemMap) };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListItemListSubItems& setShoppingItemMap(map<string, Models::ModuleFlightItemListItemListSubItemsShoppingItemMapValue> && shoppingItemMap) { DARABONBA_PTR_SET_RVALUE(shoppingItemMap_, shoppingItemMap) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListItemListSubItems& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // uniqKey Field Functions 
    bool hasUniqKey() const { return this->uniqKey_ != nullptr;};
    void deleteUniqKey() { this->uniqKey_ = nullptr;};
    inline string uniqKey() const { DARABONBA_PTR_GET_DEFAULT(uniqKey_, "") };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListItemListSubItems& setUniqKey(string uniqKey) { DARABONBA_PTR_SET_VALUE(uniqKey_, uniqKey) };


  protected:
    std::shared_ptr<map<string, Models::ModuleFlightItemListItemListSubItemsShoppingItemMapValue>> shoppingItemMap_ = nullptr;
    std::shared_ptr<string> tag_ = nullptr;
    std::shared_ptr<string> uniqKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
