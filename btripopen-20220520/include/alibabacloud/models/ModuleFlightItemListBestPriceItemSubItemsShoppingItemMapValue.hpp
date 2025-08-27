// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODULEFLIGHTITEMLISTBESTPRICEITEMSUBITEMSSHOPPINGITEMMAPVALUE_HPP_
#define ALIBABACLOUD_MODELS_MODULEFLIGHTITEMLISTBESTPRICEITEMSUBITEMSSHOPPINGITEMMAPVALUE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValueCabinQuantityValue.hpp>
#include <alibabacloud/models/ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValueSearchPrice.hpp>
#include <alibabacloud/models/ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValueSegmentPriceValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValue& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(cabin_quantity, cabinQuantity_);
      DARABONBA_PTR_TO_JSON(search_price, searchPrice_);
      DARABONBA_PTR_TO_JSON(segment_price, segmentPrice_);
    };
    friend void from_json(const Darabonba::Json& j, ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValue& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(cabin_quantity, cabinQuantity_);
      DARABONBA_PTR_FROM_JSON(search_price, searchPrice_);
      DARABONBA_PTR_FROM_JSON(segment_price, segmentPrice_);
    };
    ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValue() = default ;
    ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValue(const ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValue &) = default ;
    ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValue(ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValue &&) = default ;
    ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValue() = default ;
    ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValue& operator=(const ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValue &) = default ;
    ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValue& operator=(ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValue &&) = default ;
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
    inline ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValue& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // cabinQuantity Field Functions 
    bool hasCabinQuantity() const { return this->cabinQuantity_ != nullptr;};
    void deleteCabinQuantity() { this->cabinQuantity_ = nullptr;};
    inline const map<string, ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValueCabinQuantityValue> & cabinQuantity() const { DARABONBA_PTR_GET_CONST(cabinQuantity_, map<string, ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValueCabinQuantityValue>) };
    inline map<string, ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValueCabinQuantityValue> cabinQuantity() { DARABONBA_PTR_GET(cabinQuantity_, map<string, ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValueCabinQuantityValue>) };
    inline ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValue& setCabinQuantity(const map<string, ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValueCabinQuantityValue> & cabinQuantity) { DARABONBA_PTR_SET_VALUE(cabinQuantity_, cabinQuantity) };
    inline ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValue& setCabinQuantity(map<string, ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValueCabinQuantityValue> && cabinQuantity) { DARABONBA_PTR_SET_RVALUE(cabinQuantity_, cabinQuantity) };


    // searchPrice Field Functions 
    bool hasSearchPrice() const { return this->searchPrice_ != nullptr;};
    void deleteSearchPrice() { this->searchPrice_ = nullptr;};
    inline const ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValueSearchPrice & searchPrice() const { DARABONBA_PTR_GET_CONST(searchPrice_, ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValueSearchPrice) };
    inline ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValueSearchPrice searchPrice() { DARABONBA_PTR_GET(searchPrice_, ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValueSearchPrice) };
    inline ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValue& setSearchPrice(const ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValueSearchPrice & searchPrice) { DARABONBA_PTR_SET_VALUE(searchPrice_, searchPrice) };
    inline ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValue& setSearchPrice(ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValueSearchPrice && searchPrice) { DARABONBA_PTR_SET_RVALUE(searchPrice_, searchPrice) };


    // segmentPrice Field Functions 
    bool hasSegmentPrice() const { return this->segmentPrice_ != nullptr;};
    void deleteSegmentPrice() { this->segmentPrice_ = nullptr;};
    inline const map<string, ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValueSegmentPriceValue> & segmentPrice() const { DARABONBA_PTR_GET_CONST(segmentPrice_, map<string, ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValueSegmentPriceValue>) };
    inline map<string, ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValueSegmentPriceValue> segmentPrice() { DARABONBA_PTR_GET(segmentPrice_, map<string, ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValueSegmentPriceValue>) };
    inline ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValue& setSegmentPrice(const map<string, ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValueSegmentPriceValue> & segmentPrice) { DARABONBA_PTR_SET_VALUE(segmentPrice_, segmentPrice) };
    inline ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValue& setSegmentPrice(map<string, ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValueSegmentPriceValue> && segmentPrice) { DARABONBA_PTR_SET_RVALUE(segmentPrice_, segmentPrice) };


  protected:
    // id
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<map<string, ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValueCabinQuantityValue>> cabinQuantity_ = nullptr;
    std::shared_ptr<ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValueSearchPrice> searchPrice_ = nullptr;
    std::shared_ptr<map<string, ModuleFlightItemListBestPriceItemSubItemsShoppingItemMapValueSegmentPriceValue>> segmentPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
