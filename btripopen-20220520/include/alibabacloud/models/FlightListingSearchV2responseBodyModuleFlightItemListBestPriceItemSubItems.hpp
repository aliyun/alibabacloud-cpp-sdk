// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHV2RESPONSEBODYMODULEFLIGHTITEMLISTBESTPRICEITEMSUBITEMS_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHV2RESPONSEBODYMODULEFLIGHTITEMLISTBESTPRICEITEMSUBITEMS_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItemSubItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItemSubItems& obj) { 
      DARABONBA_PTR_TO_JSON(shopping_item_map, shoppingItemMap_);
      DARABONBA_PTR_TO_JSON(uniq_key, uniqKey_);
    };
    friend void from_json(const Darabonba::Json& j, FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItemSubItems& obj) { 
      DARABONBA_PTR_FROM_JSON(shopping_item_map, shoppingItemMap_);
      DARABONBA_PTR_FROM_JSON(uniq_key, uniqKey_);
    };
    FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItemSubItems() = default ;
    FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItemSubItems(const FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItemSubItems &) = default ;
    FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItemSubItems(FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItemSubItems &&) = default ;
    FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItemSubItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItemSubItems() = default ;
    FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItemSubItems& operator=(const FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItemSubItems &) = default ;
    FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItemSubItems& operator=(FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItemSubItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->shoppingItemMap_ != nullptr
        && this->uniqKey_ != nullptr; };
    // shoppingItemMap Field Functions 
    bool hasShoppingItemMap() const { return this->shoppingItemMap_ != nullptr;};
    void deleteShoppingItemMap() { this->shoppingItemMap_ = nullptr;};
    inline const map<string, Models::ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValue> & shoppingItemMap() const { DARABONBA_PTR_GET_CONST(shoppingItemMap_, map<string, Models::ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValue>) };
    inline map<string, Models::ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValue> shoppingItemMap() { DARABONBA_PTR_GET(shoppingItemMap_, map<string, Models::ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValue>) };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItemSubItems& setShoppingItemMap(const map<string, Models::ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValue> & shoppingItemMap) { DARABONBA_PTR_SET_VALUE(shoppingItemMap_, shoppingItemMap) };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItemSubItems& setShoppingItemMap(map<string, Models::ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValue> && shoppingItemMap) { DARABONBA_PTR_SET_RVALUE(shoppingItemMap_, shoppingItemMap) };


    // uniqKey Field Functions 
    bool hasUniqKey() const { return this->uniqKey_ != nullptr;};
    void deleteUniqKey() { this->uniqKey_ = nullptr;};
    inline string uniqKey() const { DARABONBA_PTR_GET_DEFAULT(uniqKey_, "") };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItemSubItems& setUniqKey(string uniqKey) { DARABONBA_PTR_SET_VALUE(uniqKey_, uniqKey) };


  protected:
    std::shared_ptr<map<string, Models::ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValue>> shoppingItemMap_ = nullptr;
    std::shared_ptr<string> uniqKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
