// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODULEFLIGHTITEMLISTITEMLISTSHOPPINGITEMMAPVALUE_HPP_
#define ALIBABACLOUD_MODELS_MODULEFLIGHTITEMLISTITEMLISTSHOPPINGITEMMAPVALUE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ModuleFlightItemListItemListShoppingItemMapValueCabinQuantityValue.hpp>
#include <alibabacloud/models/ModuleFlightItemListItemListShoppingItemMapValueSearchPrice.hpp>
#include <alibabacloud/models/ModuleFlightItemListItemListShoppingItemMapValueSegmentPriceValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ModuleFlightItemListItemListShoppingItemMapValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModuleFlightItemListItemListShoppingItemMapValue& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(cabin_quantity, cabinQuantity_);
      DARABONBA_PTR_TO_JSON(search_price, searchPrice_);
      DARABONBA_PTR_TO_JSON(segment_price, segmentPrice_);
    };
    friend void from_json(const Darabonba::Json& j, ModuleFlightItemListItemListShoppingItemMapValue& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(cabin_quantity, cabinQuantity_);
      DARABONBA_PTR_FROM_JSON(search_price, searchPrice_);
      DARABONBA_PTR_FROM_JSON(segment_price, segmentPrice_);
    };
    ModuleFlightItemListItemListShoppingItemMapValue() = default ;
    ModuleFlightItemListItemListShoppingItemMapValue(const ModuleFlightItemListItemListShoppingItemMapValue &) = default ;
    ModuleFlightItemListItemListShoppingItemMapValue(ModuleFlightItemListItemListShoppingItemMapValue &&) = default ;
    ModuleFlightItemListItemListShoppingItemMapValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModuleFlightItemListItemListShoppingItemMapValue() = default ;
    ModuleFlightItemListItemListShoppingItemMapValue& operator=(const ModuleFlightItemListItemListShoppingItemMapValue &) = default ;
    ModuleFlightItemListItemListShoppingItemMapValue& operator=(ModuleFlightItemListItemListShoppingItemMapValue &&) = default ;
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
    inline ModuleFlightItemListItemListShoppingItemMapValue& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // cabinQuantity Field Functions 
    bool hasCabinQuantity() const { return this->cabinQuantity_ != nullptr;};
    void deleteCabinQuantity() { this->cabinQuantity_ = nullptr;};
    inline const map<string, ModuleFlightItemListItemListShoppingItemMapValueCabinQuantityValue> & cabinQuantity() const { DARABONBA_PTR_GET_CONST(cabinQuantity_, map<string, ModuleFlightItemListItemListShoppingItemMapValueCabinQuantityValue>) };
    inline map<string, ModuleFlightItemListItemListShoppingItemMapValueCabinQuantityValue> cabinQuantity() { DARABONBA_PTR_GET(cabinQuantity_, map<string, ModuleFlightItemListItemListShoppingItemMapValueCabinQuantityValue>) };
    inline ModuleFlightItemListItemListShoppingItemMapValue& setCabinQuantity(const map<string, ModuleFlightItemListItemListShoppingItemMapValueCabinQuantityValue> & cabinQuantity) { DARABONBA_PTR_SET_VALUE(cabinQuantity_, cabinQuantity) };
    inline ModuleFlightItemListItemListShoppingItemMapValue& setCabinQuantity(map<string, ModuleFlightItemListItemListShoppingItemMapValueCabinQuantityValue> && cabinQuantity) { DARABONBA_PTR_SET_RVALUE(cabinQuantity_, cabinQuantity) };


    // searchPrice Field Functions 
    bool hasSearchPrice() const { return this->searchPrice_ != nullptr;};
    void deleteSearchPrice() { this->searchPrice_ = nullptr;};
    inline const ModuleFlightItemListItemListShoppingItemMapValueSearchPrice & searchPrice() const { DARABONBA_PTR_GET_CONST(searchPrice_, ModuleFlightItemListItemListShoppingItemMapValueSearchPrice) };
    inline ModuleFlightItemListItemListShoppingItemMapValueSearchPrice searchPrice() { DARABONBA_PTR_GET(searchPrice_, ModuleFlightItemListItemListShoppingItemMapValueSearchPrice) };
    inline ModuleFlightItemListItemListShoppingItemMapValue& setSearchPrice(const ModuleFlightItemListItemListShoppingItemMapValueSearchPrice & searchPrice) { DARABONBA_PTR_SET_VALUE(searchPrice_, searchPrice) };
    inline ModuleFlightItemListItemListShoppingItemMapValue& setSearchPrice(ModuleFlightItemListItemListShoppingItemMapValueSearchPrice && searchPrice) { DARABONBA_PTR_SET_RVALUE(searchPrice_, searchPrice) };


    // segmentPrice Field Functions 
    bool hasSegmentPrice() const { return this->segmentPrice_ != nullptr;};
    void deleteSegmentPrice() { this->segmentPrice_ = nullptr;};
    inline const map<string, ModuleFlightItemListItemListShoppingItemMapValueSegmentPriceValue> & segmentPrice() const { DARABONBA_PTR_GET_CONST(segmentPrice_, map<string, ModuleFlightItemListItemListShoppingItemMapValueSegmentPriceValue>) };
    inline map<string, ModuleFlightItemListItemListShoppingItemMapValueSegmentPriceValue> segmentPrice() { DARABONBA_PTR_GET(segmentPrice_, map<string, ModuleFlightItemListItemListShoppingItemMapValueSegmentPriceValue>) };
    inline ModuleFlightItemListItemListShoppingItemMapValue& setSegmentPrice(const map<string, ModuleFlightItemListItemListShoppingItemMapValueSegmentPriceValue> & segmentPrice) { DARABONBA_PTR_SET_VALUE(segmentPrice_, segmentPrice) };
    inline ModuleFlightItemListItemListShoppingItemMapValue& setSegmentPrice(map<string, ModuleFlightItemListItemListShoppingItemMapValueSegmentPriceValue> && segmentPrice) { DARABONBA_PTR_SET_RVALUE(segmentPrice_, segmentPrice) };


  protected:
    // id
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<map<string, ModuleFlightItemListItemListShoppingItemMapValueCabinQuantityValue>> cabinQuantity_ = nullptr;
    std::shared_ptr<ModuleFlightItemListItemListShoppingItemMapValueSearchPrice> searchPrice_ = nullptr;
    std::shared_ptr<map<string, ModuleFlightItemListItemListShoppingItemMapValueSegmentPriceValue>> segmentPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
