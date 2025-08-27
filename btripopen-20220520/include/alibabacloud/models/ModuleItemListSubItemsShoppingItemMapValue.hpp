// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODULEITEMLISTSUBITEMSSHOPPINGITEMMAPVALUE_HPP_
#define ALIBABACLOUD_MODELS_MODULEITEMLISTSUBITEMSSHOPPINGITEMMAPVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModuleItemListSubItemsShoppingItemMapValueCabinQuantityList.hpp>
#include <alibabacloud/models/ModuleItemListSubItemsShoppingItemMapValueSearchPrice.hpp>
#include <alibabacloud/models/ModuleItemListSubItemsShoppingItemMapValueSegmentPriceList.hpp>
#include <map>
#include <alibabacloud/models/ModuleItemListSubItemsShoppingItemMapValueCabinQuantityValue.hpp>
#include <alibabacloud/models/ModuleItemListSubItemsShoppingItemMapValueSegmentPriceValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ModuleItemListSubItemsShoppingItemMapValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModuleItemListSubItemsShoppingItemMapValue& obj) { 
      DARABONBA_PTR_TO_JSON(cabin_quantity_list, cabinQuantityList_);
      DARABONBA_PTR_TO_JSON(search_price, searchPrice_);
      DARABONBA_PTR_TO_JSON(segment_price_list, segmentPriceList_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(cabin_quantity, cabinQuantity_);
      DARABONBA_PTR_TO_JSON(segment_price, segmentPrice_);
    };
    friend void from_json(const Darabonba::Json& j, ModuleItemListSubItemsShoppingItemMapValue& obj) { 
      DARABONBA_PTR_FROM_JSON(cabin_quantity_list, cabinQuantityList_);
      DARABONBA_PTR_FROM_JSON(search_price, searchPrice_);
      DARABONBA_PTR_FROM_JSON(segment_price_list, segmentPriceList_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(cabin_quantity, cabinQuantity_);
      DARABONBA_PTR_FROM_JSON(segment_price, segmentPrice_);
    };
    ModuleItemListSubItemsShoppingItemMapValue() = default ;
    ModuleItemListSubItemsShoppingItemMapValue(const ModuleItemListSubItemsShoppingItemMapValue &) = default ;
    ModuleItemListSubItemsShoppingItemMapValue(ModuleItemListSubItemsShoppingItemMapValue &&) = default ;
    ModuleItemListSubItemsShoppingItemMapValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModuleItemListSubItemsShoppingItemMapValue() = default ;
    ModuleItemListSubItemsShoppingItemMapValue& operator=(const ModuleItemListSubItemsShoppingItemMapValue &) = default ;
    ModuleItemListSubItemsShoppingItemMapValue& operator=(ModuleItemListSubItemsShoppingItemMapValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cabinQuantityList_ != nullptr
        && this->searchPrice_ != nullptr && this->segmentPriceList_ != nullptr && this->id_ != nullptr && this->cabinQuantity_ != nullptr && this->segmentPrice_ != nullptr; };
    // cabinQuantityList Field Functions 
    bool hasCabinQuantityList() const { return this->cabinQuantityList_ != nullptr;};
    void deleteCabinQuantityList() { this->cabinQuantityList_ = nullptr;};
    inline const vector<ModuleItemListSubItemsShoppingItemMapValueCabinQuantityList> & cabinQuantityList() const { DARABONBA_PTR_GET_CONST(cabinQuantityList_, vector<ModuleItemListSubItemsShoppingItemMapValueCabinQuantityList>) };
    inline vector<ModuleItemListSubItemsShoppingItemMapValueCabinQuantityList> cabinQuantityList() { DARABONBA_PTR_GET(cabinQuantityList_, vector<ModuleItemListSubItemsShoppingItemMapValueCabinQuantityList>) };
    inline ModuleItemListSubItemsShoppingItemMapValue& setCabinQuantityList(const vector<ModuleItemListSubItemsShoppingItemMapValueCabinQuantityList> & cabinQuantityList) { DARABONBA_PTR_SET_VALUE(cabinQuantityList_, cabinQuantityList) };
    inline ModuleItemListSubItemsShoppingItemMapValue& setCabinQuantityList(vector<ModuleItemListSubItemsShoppingItemMapValueCabinQuantityList> && cabinQuantityList) { DARABONBA_PTR_SET_RVALUE(cabinQuantityList_, cabinQuantityList) };


    // searchPrice Field Functions 
    bool hasSearchPrice() const { return this->searchPrice_ != nullptr;};
    void deleteSearchPrice() { this->searchPrice_ = nullptr;};
    inline const ModuleItemListSubItemsShoppingItemMapValueSearchPrice & searchPrice() const { DARABONBA_PTR_GET_CONST(searchPrice_, ModuleItemListSubItemsShoppingItemMapValueSearchPrice) };
    inline ModuleItemListSubItemsShoppingItemMapValueSearchPrice searchPrice() { DARABONBA_PTR_GET(searchPrice_, ModuleItemListSubItemsShoppingItemMapValueSearchPrice) };
    inline ModuleItemListSubItemsShoppingItemMapValue& setSearchPrice(const ModuleItemListSubItemsShoppingItemMapValueSearchPrice & searchPrice) { DARABONBA_PTR_SET_VALUE(searchPrice_, searchPrice) };
    inline ModuleItemListSubItemsShoppingItemMapValue& setSearchPrice(ModuleItemListSubItemsShoppingItemMapValueSearchPrice && searchPrice) { DARABONBA_PTR_SET_RVALUE(searchPrice_, searchPrice) };


    // segmentPriceList Field Functions 
    bool hasSegmentPriceList() const { return this->segmentPriceList_ != nullptr;};
    void deleteSegmentPriceList() { this->segmentPriceList_ = nullptr;};
    inline const vector<ModuleItemListSubItemsShoppingItemMapValueSegmentPriceList> & segmentPriceList() const { DARABONBA_PTR_GET_CONST(segmentPriceList_, vector<ModuleItemListSubItemsShoppingItemMapValueSegmentPriceList>) };
    inline vector<ModuleItemListSubItemsShoppingItemMapValueSegmentPriceList> segmentPriceList() { DARABONBA_PTR_GET(segmentPriceList_, vector<ModuleItemListSubItemsShoppingItemMapValueSegmentPriceList>) };
    inline ModuleItemListSubItemsShoppingItemMapValue& setSegmentPriceList(const vector<ModuleItemListSubItemsShoppingItemMapValueSegmentPriceList> & segmentPriceList) { DARABONBA_PTR_SET_VALUE(segmentPriceList_, segmentPriceList) };
    inline ModuleItemListSubItemsShoppingItemMapValue& setSegmentPriceList(vector<ModuleItemListSubItemsShoppingItemMapValueSegmentPriceList> && segmentPriceList) { DARABONBA_PTR_SET_RVALUE(segmentPriceList_, segmentPriceList) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ModuleItemListSubItemsShoppingItemMapValue& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // cabinQuantity Field Functions 
    bool hasCabinQuantity() const { return this->cabinQuantity_ != nullptr;};
    void deleteCabinQuantity() { this->cabinQuantity_ = nullptr;};
    inline const map<string, ModuleItemListSubItemsShoppingItemMapValueCabinQuantityValue> & cabinQuantity() const { DARABONBA_PTR_GET_CONST(cabinQuantity_, map<string, ModuleItemListSubItemsShoppingItemMapValueCabinQuantityValue>) };
    inline map<string, ModuleItemListSubItemsShoppingItemMapValueCabinQuantityValue> cabinQuantity() { DARABONBA_PTR_GET(cabinQuantity_, map<string, ModuleItemListSubItemsShoppingItemMapValueCabinQuantityValue>) };
    inline ModuleItemListSubItemsShoppingItemMapValue& setCabinQuantity(const map<string, ModuleItemListSubItemsShoppingItemMapValueCabinQuantityValue> & cabinQuantity) { DARABONBA_PTR_SET_VALUE(cabinQuantity_, cabinQuantity) };
    inline ModuleItemListSubItemsShoppingItemMapValue& setCabinQuantity(map<string, ModuleItemListSubItemsShoppingItemMapValueCabinQuantityValue> && cabinQuantity) { DARABONBA_PTR_SET_RVALUE(cabinQuantity_, cabinQuantity) };


    // segmentPrice Field Functions 
    bool hasSegmentPrice() const { return this->segmentPrice_ != nullptr;};
    void deleteSegmentPrice() { this->segmentPrice_ = nullptr;};
    inline const map<string, ModuleItemListSubItemsShoppingItemMapValueSegmentPriceValue> & segmentPrice() const { DARABONBA_PTR_GET_CONST(segmentPrice_, map<string, ModuleItemListSubItemsShoppingItemMapValueSegmentPriceValue>) };
    inline map<string, ModuleItemListSubItemsShoppingItemMapValueSegmentPriceValue> segmentPrice() { DARABONBA_PTR_GET(segmentPrice_, map<string, ModuleItemListSubItemsShoppingItemMapValueSegmentPriceValue>) };
    inline ModuleItemListSubItemsShoppingItemMapValue& setSegmentPrice(const map<string, ModuleItemListSubItemsShoppingItemMapValueSegmentPriceValue> & segmentPrice) { DARABONBA_PTR_SET_VALUE(segmentPrice_, segmentPrice) };
    inline ModuleItemListSubItemsShoppingItemMapValue& setSegmentPrice(map<string, ModuleItemListSubItemsShoppingItemMapValueSegmentPriceValue> && segmentPrice) { DARABONBA_PTR_SET_RVALUE(segmentPrice_, segmentPrice) };


  protected:
    std::shared_ptr<vector<ModuleItemListSubItemsShoppingItemMapValueCabinQuantityList>> cabinQuantityList_ = nullptr;
    std::shared_ptr<ModuleItemListSubItemsShoppingItemMapValueSearchPrice> searchPrice_ = nullptr;
    std::shared_ptr<vector<ModuleItemListSubItemsShoppingItemMapValueSegmentPriceList>> segmentPriceList_ = nullptr;
    // id
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<map<string, ModuleItemListSubItemsShoppingItemMapValueCabinQuantityValue>> cabinQuantity_ = nullptr;
    std::shared_ptr<map<string, ModuleItemListSubItemsShoppingItemMapValueSegmentPriceValue>> segmentPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
