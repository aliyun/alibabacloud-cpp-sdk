// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODULEFLIGHTITEMLISTITEMLISTSUBITEMSSHOPPINGITEMMAPVALUE_HPP_
#define ALIBABACLOUD_MODELS_MODULEFLIGHTITEMLISTITEMLISTSUBITEMSSHOPPINGITEMMAPVALUE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ModuleFlightItemListItemListSubItemsShoppingItemMapValueCabinQuantityValue.hpp>
#include <alibabacloud/models/ModuleFlightItemListItemListSubItemsShoppingItemMapValueSearchPrice.hpp>
#include <alibabacloud/models/ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ModuleFlightItemListItemListSubItemsShoppingItemMapValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModuleFlightItemListItemListSubItemsShoppingItemMapValue& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(cabin_quantity, cabinQuantity_);
      DARABONBA_PTR_TO_JSON(search_price, searchPrice_);
      DARABONBA_PTR_TO_JSON(segment_price, segmentPrice_);
    };
    friend void from_json(const Darabonba::Json& j, ModuleFlightItemListItemListSubItemsShoppingItemMapValue& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(cabin_quantity, cabinQuantity_);
      DARABONBA_PTR_FROM_JSON(search_price, searchPrice_);
      DARABONBA_PTR_FROM_JSON(segment_price, segmentPrice_);
    };
    ModuleFlightItemListItemListSubItemsShoppingItemMapValue() = default ;
    ModuleFlightItemListItemListSubItemsShoppingItemMapValue(const ModuleFlightItemListItemListSubItemsShoppingItemMapValue &) = default ;
    ModuleFlightItemListItemListSubItemsShoppingItemMapValue(ModuleFlightItemListItemListSubItemsShoppingItemMapValue &&) = default ;
    ModuleFlightItemListItemListSubItemsShoppingItemMapValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModuleFlightItemListItemListSubItemsShoppingItemMapValue() = default ;
    ModuleFlightItemListItemListSubItemsShoppingItemMapValue& operator=(const ModuleFlightItemListItemListSubItemsShoppingItemMapValue &) = default ;
    ModuleFlightItemListItemListSubItemsShoppingItemMapValue& operator=(ModuleFlightItemListItemListSubItemsShoppingItemMapValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->cabinQuantity_ != nullptr && this->searchPrice_ != nullptr && this->segmentPrice_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ModuleFlightItemListItemListSubItemsShoppingItemMapValue& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // cabinQuantity Field Functions 
    bool hasCabinQuantity() const { return this->cabinQuantity_ != nullptr;};
    void deleteCabinQuantity() { this->cabinQuantity_ = nullptr;};
    inline const map<string, ModuleFlightItemListItemListSubItemsShoppingItemMapValueCabinQuantityValue> & cabinQuantity() const { DARABONBA_PTR_GET_CONST(cabinQuantity_, map<string, ModuleFlightItemListItemListSubItemsShoppingItemMapValueCabinQuantityValue>) };
    inline map<string, ModuleFlightItemListItemListSubItemsShoppingItemMapValueCabinQuantityValue> cabinQuantity() { DARABONBA_PTR_GET(cabinQuantity_, map<string, ModuleFlightItemListItemListSubItemsShoppingItemMapValueCabinQuantityValue>) };
    inline ModuleFlightItemListItemListSubItemsShoppingItemMapValue& setCabinQuantity(const map<string, ModuleFlightItemListItemListSubItemsShoppingItemMapValueCabinQuantityValue> & cabinQuantity) { DARABONBA_PTR_SET_VALUE(cabinQuantity_, cabinQuantity) };
    inline ModuleFlightItemListItemListSubItemsShoppingItemMapValue& setCabinQuantity(map<string, ModuleFlightItemListItemListSubItemsShoppingItemMapValueCabinQuantityValue> && cabinQuantity) { DARABONBA_PTR_SET_RVALUE(cabinQuantity_, cabinQuantity) };


    // searchPrice Field Functions 
    bool hasSearchPrice() const { return this->searchPrice_ != nullptr;};
    void deleteSearchPrice() { this->searchPrice_ = nullptr;};
    inline const ModuleFlightItemListItemListSubItemsShoppingItemMapValueSearchPrice & searchPrice() const { DARABONBA_PTR_GET_CONST(searchPrice_, ModuleFlightItemListItemListSubItemsShoppingItemMapValueSearchPrice) };
    inline ModuleFlightItemListItemListSubItemsShoppingItemMapValueSearchPrice searchPrice() { DARABONBA_PTR_GET(searchPrice_, ModuleFlightItemListItemListSubItemsShoppingItemMapValueSearchPrice) };
    inline ModuleFlightItemListItemListSubItemsShoppingItemMapValue& setSearchPrice(const ModuleFlightItemListItemListSubItemsShoppingItemMapValueSearchPrice & searchPrice) { DARABONBA_PTR_SET_VALUE(searchPrice_, searchPrice) };
    inline ModuleFlightItemListItemListSubItemsShoppingItemMapValue& setSearchPrice(ModuleFlightItemListItemListSubItemsShoppingItemMapValueSearchPrice && searchPrice) { DARABONBA_PTR_SET_RVALUE(searchPrice_, searchPrice) };


    // segmentPrice Field Functions 
    bool hasSegmentPrice() const { return this->segmentPrice_ != nullptr;};
    void deleteSegmentPrice() { this->segmentPrice_ = nullptr;};
    inline const map<string, ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue> & segmentPrice() const { DARABONBA_PTR_GET_CONST(segmentPrice_, map<string, ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue>) };
    inline map<string, ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue> segmentPrice() { DARABONBA_PTR_GET(segmentPrice_, map<string, ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue>) };
    inline ModuleFlightItemListItemListSubItemsShoppingItemMapValue& setSegmentPrice(const map<string, ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue> & segmentPrice) { DARABONBA_PTR_SET_VALUE(segmentPrice_, segmentPrice) };
    inline ModuleFlightItemListItemListSubItemsShoppingItemMapValue& setSegmentPrice(map<string, ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue> && segmentPrice) { DARABONBA_PTR_SET_RVALUE(segmentPrice_, segmentPrice) };


  protected:
    // id
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<map<string, ModuleFlightItemListItemListSubItemsShoppingItemMapValueCabinQuantityValue>> cabinQuantity_ = nullptr;
    std::shared_ptr<ModuleFlightItemListItemListSubItemsShoppingItemMapValueSearchPrice> searchPrice_ = nullptr;
    std::shared_ptr<map<string, ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue>> segmentPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
