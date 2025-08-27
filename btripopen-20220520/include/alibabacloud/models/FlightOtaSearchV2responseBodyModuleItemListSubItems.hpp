// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTOTASEARCHV2RESPONSEBODYMODULEITEMLISTSUBITEMS_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTOTASEARCHV2RESPONSEBODYMODULEITEMLISTSUBITEMS_HPP_
#include <darabonba/Core.hpp>
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
  class FlightOtaSearchV2ResponseBodyModuleItemListSubItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOtaSearchV2ResponseBodyModuleItemListSubItems& obj) { 
      DARABONBA_PTR_TO_JSON(shopping_item_map, shoppingItemMap_);
      DARABONBA_PTR_TO_JSON(tag, tag_);
      DARABONBA_PTR_TO_JSON(uniq_key, uniqKey_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOtaSearchV2ResponseBodyModuleItemListSubItems& obj) { 
      DARABONBA_PTR_FROM_JSON(shopping_item_map, shoppingItemMap_);
      DARABONBA_PTR_FROM_JSON(tag, tag_);
      DARABONBA_PTR_FROM_JSON(uniq_key, uniqKey_);
    };
    FlightOtaSearchV2ResponseBodyModuleItemListSubItems() = default ;
    FlightOtaSearchV2ResponseBodyModuleItemListSubItems(const FlightOtaSearchV2ResponseBodyModuleItemListSubItems &) = default ;
    FlightOtaSearchV2ResponseBodyModuleItemListSubItems(FlightOtaSearchV2ResponseBodyModuleItemListSubItems &&) = default ;
    FlightOtaSearchV2ResponseBodyModuleItemListSubItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOtaSearchV2ResponseBodyModuleItemListSubItems() = default ;
    FlightOtaSearchV2ResponseBodyModuleItemListSubItems& operator=(const FlightOtaSearchV2ResponseBodyModuleItemListSubItems &) = default ;
    FlightOtaSearchV2ResponseBodyModuleItemListSubItems& operator=(FlightOtaSearchV2ResponseBodyModuleItemListSubItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->shoppingItemMap_ != nullptr
        && this->tag_ != nullptr && this->uniqKey_ != nullptr; };
    // shoppingItemMap Field Functions 
    bool hasShoppingItemMap() const { return this->shoppingItemMap_ != nullptr;};
    void deleteShoppingItemMap() { this->shoppingItemMap_ = nullptr;};
    inline const map<string, Models::ModuleItemListSubItemsShoppingItemMapValue> & shoppingItemMap() const { DARABONBA_PTR_GET_CONST(shoppingItemMap_, map<string, Models::ModuleItemListSubItemsShoppingItemMapValue>) };
    inline map<string, Models::ModuleItemListSubItemsShoppingItemMapValue> shoppingItemMap() { DARABONBA_PTR_GET(shoppingItemMap_, map<string, Models::ModuleItemListSubItemsShoppingItemMapValue>) };
    inline FlightOtaSearchV2ResponseBodyModuleItemListSubItems& setShoppingItemMap(const map<string, Models::ModuleItemListSubItemsShoppingItemMapValue> & shoppingItemMap) { DARABONBA_PTR_SET_VALUE(shoppingItemMap_, shoppingItemMap) };
    inline FlightOtaSearchV2ResponseBodyModuleItemListSubItems& setShoppingItemMap(map<string, Models::ModuleItemListSubItemsShoppingItemMapValue> && shoppingItemMap) { DARABONBA_PTR_SET_RVALUE(shoppingItemMap_, shoppingItemMap) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline FlightOtaSearchV2ResponseBodyModuleItemListSubItems& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // uniqKey Field Functions 
    bool hasUniqKey() const { return this->uniqKey_ != nullptr;};
    void deleteUniqKey() { this->uniqKey_ = nullptr;};
    inline string uniqKey() const { DARABONBA_PTR_GET_DEFAULT(uniqKey_, "") };
    inline FlightOtaSearchV2ResponseBodyModuleItemListSubItems& setUniqKey(string uniqKey) { DARABONBA_PTR_SET_VALUE(uniqKey_, uniqKey) };


  protected:
    std::shared_ptr<map<string, Models::ModuleItemListSubItemsShoppingItemMapValue>> shoppingItemMap_ = nullptr;
    std::shared_ptr<string> tag_ = nullptr;
    std::shared_ptr<string> uniqKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
