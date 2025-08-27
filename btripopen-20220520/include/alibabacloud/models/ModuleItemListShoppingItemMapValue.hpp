// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODULEITEMLISTSHOPPINGITEMMAPVALUE_HPP_
#define ALIBABACLOUD_MODELS_MODULEITEMLISTSHOPPINGITEMMAPVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModuleItemListShoppingItemMapValueCabinQuantityList.hpp>
#include <alibabacloud/models/ModuleItemListShoppingItemMapValueSearchPrice.hpp>
#include <alibabacloud/models/ModuleItemListShoppingItemMapValueSegmentPriceList.hpp>
#include <map>
#include <alibabacloud/models/ModuleItemListShoppingItemMapValueCabinQuantityValue.hpp>
#include <alibabacloud/models/ModuleItemListShoppingItemMapValueSegmentPriceValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ModuleItemListShoppingItemMapValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModuleItemListShoppingItemMapValue& obj) { 
      DARABONBA_PTR_TO_JSON(cabin_quantity_list, cabinQuantityList_);
      DARABONBA_PTR_TO_JSON(search_price, searchPrice_);
      DARABONBA_PTR_TO_JSON(segment_price_list, segmentPriceList_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(cabin_quantity, cabinQuantity_);
      DARABONBA_PTR_TO_JSON(segment_price, segmentPrice_);
    };
    friend void from_json(const Darabonba::Json& j, ModuleItemListShoppingItemMapValue& obj) { 
      DARABONBA_PTR_FROM_JSON(cabin_quantity_list, cabinQuantityList_);
      DARABONBA_PTR_FROM_JSON(search_price, searchPrice_);
      DARABONBA_PTR_FROM_JSON(segment_price_list, segmentPriceList_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(cabin_quantity, cabinQuantity_);
      DARABONBA_PTR_FROM_JSON(segment_price, segmentPrice_);
    };
    ModuleItemListShoppingItemMapValue() = default ;
    ModuleItemListShoppingItemMapValue(const ModuleItemListShoppingItemMapValue &) = default ;
    ModuleItemListShoppingItemMapValue(ModuleItemListShoppingItemMapValue &&) = default ;
    ModuleItemListShoppingItemMapValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModuleItemListShoppingItemMapValue() = default ;
    ModuleItemListShoppingItemMapValue& operator=(const ModuleItemListShoppingItemMapValue &) = default ;
    ModuleItemListShoppingItemMapValue& operator=(ModuleItemListShoppingItemMapValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cabinQuantityList_ != nullptr
        && this->searchPrice_ != nullptr && this->segmentPriceList_ != nullptr && this->id_ != nullptr && this->cabinQuantity_ != nullptr && this->segmentPrice_ != nullptr; };
    // cabinQuantityList Field Functions 
    bool hasCabinQuantityList() const { return this->cabinQuantityList_ != nullptr;};
    void deleteCabinQuantityList() { this->cabinQuantityList_ = nullptr;};
    inline const vector<ModuleItemListShoppingItemMapValueCabinQuantityList> & cabinQuantityList() const { DARABONBA_PTR_GET_CONST(cabinQuantityList_, vector<ModuleItemListShoppingItemMapValueCabinQuantityList>) };
    inline vector<ModuleItemListShoppingItemMapValueCabinQuantityList> cabinQuantityList() { DARABONBA_PTR_GET(cabinQuantityList_, vector<ModuleItemListShoppingItemMapValueCabinQuantityList>) };
    inline ModuleItemListShoppingItemMapValue& setCabinQuantityList(const vector<ModuleItemListShoppingItemMapValueCabinQuantityList> & cabinQuantityList) { DARABONBA_PTR_SET_VALUE(cabinQuantityList_, cabinQuantityList) };
    inline ModuleItemListShoppingItemMapValue& setCabinQuantityList(vector<ModuleItemListShoppingItemMapValueCabinQuantityList> && cabinQuantityList) { DARABONBA_PTR_SET_RVALUE(cabinQuantityList_, cabinQuantityList) };


    // searchPrice Field Functions 
    bool hasSearchPrice() const { return this->searchPrice_ != nullptr;};
    void deleteSearchPrice() { this->searchPrice_ = nullptr;};
    inline const ModuleItemListShoppingItemMapValueSearchPrice & searchPrice() const { DARABONBA_PTR_GET_CONST(searchPrice_, ModuleItemListShoppingItemMapValueSearchPrice) };
    inline ModuleItemListShoppingItemMapValueSearchPrice searchPrice() { DARABONBA_PTR_GET(searchPrice_, ModuleItemListShoppingItemMapValueSearchPrice) };
    inline ModuleItemListShoppingItemMapValue& setSearchPrice(const ModuleItemListShoppingItemMapValueSearchPrice & searchPrice) { DARABONBA_PTR_SET_VALUE(searchPrice_, searchPrice) };
    inline ModuleItemListShoppingItemMapValue& setSearchPrice(ModuleItemListShoppingItemMapValueSearchPrice && searchPrice) { DARABONBA_PTR_SET_RVALUE(searchPrice_, searchPrice) };


    // segmentPriceList Field Functions 
    bool hasSegmentPriceList() const { return this->segmentPriceList_ != nullptr;};
    void deleteSegmentPriceList() { this->segmentPriceList_ = nullptr;};
    inline const vector<ModuleItemListShoppingItemMapValueSegmentPriceList> & segmentPriceList() const { DARABONBA_PTR_GET_CONST(segmentPriceList_, vector<ModuleItemListShoppingItemMapValueSegmentPriceList>) };
    inline vector<ModuleItemListShoppingItemMapValueSegmentPriceList> segmentPriceList() { DARABONBA_PTR_GET(segmentPriceList_, vector<ModuleItemListShoppingItemMapValueSegmentPriceList>) };
    inline ModuleItemListShoppingItemMapValue& setSegmentPriceList(const vector<ModuleItemListShoppingItemMapValueSegmentPriceList> & segmentPriceList) { DARABONBA_PTR_SET_VALUE(segmentPriceList_, segmentPriceList) };
    inline ModuleItemListShoppingItemMapValue& setSegmentPriceList(vector<ModuleItemListShoppingItemMapValueSegmentPriceList> && segmentPriceList) { DARABONBA_PTR_SET_RVALUE(segmentPriceList_, segmentPriceList) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ModuleItemListShoppingItemMapValue& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // cabinQuantity Field Functions 
    bool hasCabinQuantity() const { return this->cabinQuantity_ != nullptr;};
    void deleteCabinQuantity() { this->cabinQuantity_ = nullptr;};
    inline const map<string, ModuleItemListShoppingItemMapValueCabinQuantityValue> & cabinQuantity() const { DARABONBA_PTR_GET_CONST(cabinQuantity_, map<string, ModuleItemListShoppingItemMapValueCabinQuantityValue>) };
    inline map<string, ModuleItemListShoppingItemMapValueCabinQuantityValue> cabinQuantity() { DARABONBA_PTR_GET(cabinQuantity_, map<string, ModuleItemListShoppingItemMapValueCabinQuantityValue>) };
    inline ModuleItemListShoppingItemMapValue& setCabinQuantity(const map<string, ModuleItemListShoppingItemMapValueCabinQuantityValue> & cabinQuantity) { DARABONBA_PTR_SET_VALUE(cabinQuantity_, cabinQuantity) };
    inline ModuleItemListShoppingItemMapValue& setCabinQuantity(map<string, ModuleItemListShoppingItemMapValueCabinQuantityValue> && cabinQuantity) { DARABONBA_PTR_SET_RVALUE(cabinQuantity_, cabinQuantity) };


    // segmentPrice Field Functions 
    bool hasSegmentPrice() const { return this->segmentPrice_ != nullptr;};
    void deleteSegmentPrice() { this->segmentPrice_ = nullptr;};
    inline const map<string, ModuleItemListShoppingItemMapValueSegmentPriceValue> & segmentPrice() const { DARABONBA_PTR_GET_CONST(segmentPrice_, map<string, ModuleItemListShoppingItemMapValueSegmentPriceValue>) };
    inline map<string, ModuleItemListShoppingItemMapValueSegmentPriceValue> segmentPrice() { DARABONBA_PTR_GET(segmentPrice_, map<string, ModuleItemListShoppingItemMapValueSegmentPriceValue>) };
    inline ModuleItemListShoppingItemMapValue& setSegmentPrice(const map<string, ModuleItemListShoppingItemMapValueSegmentPriceValue> & segmentPrice) { DARABONBA_PTR_SET_VALUE(segmentPrice_, segmentPrice) };
    inline ModuleItemListShoppingItemMapValue& setSegmentPrice(map<string, ModuleItemListShoppingItemMapValueSegmentPriceValue> && segmentPrice) { DARABONBA_PTR_SET_RVALUE(segmentPrice_, segmentPrice) };


  protected:
    std::shared_ptr<vector<ModuleItemListShoppingItemMapValueCabinQuantityList>> cabinQuantityList_ = nullptr;
    std::shared_ptr<ModuleItemListShoppingItemMapValueSearchPrice> searchPrice_ = nullptr;
    std::shared_ptr<vector<ModuleItemListShoppingItemMapValueSegmentPriceList>> segmentPriceList_ = nullptr;
    // id
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<map<string, ModuleItemListShoppingItemMapValueCabinQuantityValue>> cabinQuantity_ = nullptr;
    std::shared_ptr<map<string, ModuleItemListShoppingItemMapValueSegmentPriceValue>> segmentPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
