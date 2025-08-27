// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODULEFLIGHTITEMLISTBESTPRICEITEMSHOPPINGITEMMAPVALUE_HPP_
#define ALIBABACLOUD_MODELS_MODULEFLIGHTITEMLISTBESTPRICEITEMSHOPPINGITEMMAPVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityList.hpp>
#include <alibabacloud/models/ModuleFlightItemListBestPriceItemShoppingItemMapValueSearchPrice.hpp>
#include <alibabacloud/models/ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceList.hpp>
#include <map>
#include <alibabacloud/models/ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityValue.hpp>
#include <alibabacloud/models/ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ModuleFlightItemListBestPriceItemShoppingItemMapValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModuleFlightItemListBestPriceItemShoppingItemMapValue& obj) { 
      DARABONBA_PTR_TO_JSON(cabin_quantity_list, cabinQuantityList_);
      DARABONBA_PTR_TO_JSON(search_price, searchPrice_);
      DARABONBA_PTR_TO_JSON(segment_price_list, segmentPriceList_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(cabin_quantity, cabinQuantity_);
      DARABONBA_PTR_TO_JSON(segment_price, segmentPrice_);
    };
    friend void from_json(const Darabonba::Json& j, ModuleFlightItemListBestPriceItemShoppingItemMapValue& obj) { 
      DARABONBA_PTR_FROM_JSON(cabin_quantity_list, cabinQuantityList_);
      DARABONBA_PTR_FROM_JSON(search_price, searchPrice_);
      DARABONBA_PTR_FROM_JSON(segment_price_list, segmentPriceList_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(cabin_quantity, cabinQuantity_);
      DARABONBA_PTR_FROM_JSON(segment_price, segmentPrice_);
    };
    ModuleFlightItemListBestPriceItemShoppingItemMapValue() = default ;
    ModuleFlightItemListBestPriceItemShoppingItemMapValue(const ModuleFlightItemListBestPriceItemShoppingItemMapValue &) = default ;
    ModuleFlightItemListBestPriceItemShoppingItemMapValue(ModuleFlightItemListBestPriceItemShoppingItemMapValue &&) = default ;
    ModuleFlightItemListBestPriceItemShoppingItemMapValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModuleFlightItemListBestPriceItemShoppingItemMapValue() = default ;
    ModuleFlightItemListBestPriceItemShoppingItemMapValue& operator=(const ModuleFlightItemListBestPriceItemShoppingItemMapValue &) = default ;
    ModuleFlightItemListBestPriceItemShoppingItemMapValue& operator=(ModuleFlightItemListBestPriceItemShoppingItemMapValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cabinQuantityList_ != nullptr
        && this->searchPrice_ != nullptr && this->segmentPriceList_ != nullptr && this->id_ != nullptr && this->cabinQuantity_ != nullptr && this->segmentPrice_ != nullptr; };
    // cabinQuantityList Field Functions 
    bool hasCabinQuantityList() const { return this->cabinQuantityList_ != nullptr;};
    void deleteCabinQuantityList() { this->cabinQuantityList_ = nullptr;};
    inline const vector<ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityList> & cabinQuantityList() const { DARABONBA_PTR_GET_CONST(cabinQuantityList_, vector<ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityList>) };
    inline vector<ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityList> cabinQuantityList() { DARABONBA_PTR_GET(cabinQuantityList_, vector<ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityList>) };
    inline ModuleFlightItemListBestPriceItemShoppingItemMapValue& setCabinQuantityList(const vector<ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityList> & cabinQuantityList) { DARABONBA_PTR_SET_VALUE(cabinQuantityList_, cabinQuantityList) };
    inline ModuleFlightItemListBestPriceItemShoppingItemMapValue& setCabinQuantityList(vector<ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityList> && cabinQuantityList) { DARABONBA_PTR_SET_RVALUE(cabinQuantityList_, cabinQuantityList) };


    // searchPrice Field Functions 
    bool hasSearchPrice() const { return this->searchPrice_ != nullptr;};
    void deleteSearchPrice() { this->searchPrice_ = nullptr;};
    inline const ModuleFlightItemListBestPriceItemShoppingItemMapValueSearchPrice & searchPrice() const { DARABONBA_PTR_GET_CONST(searchPrice_, ModuleFlightItemListBestPriceItemShoppingItemMapValueSearchPrice) };
    inline ModuleFlightItemListBestPriceItemShoppingItemMapValueSearchPrice searchPrice() { DARABONBA_PTR_GET(searchPrice_, ModuleFlightItemListBestPriceItemShoppingItemMapValueSearchPrice) };
    inline ModuleFlightItemListBestPriceItemShoppingItemMapValue& setSearchPrice(const ModuleFlightItemListBestPriceItemShoppingItemMapValueSearchPrice & searchPrice) { DARABONBA_PTR_SET_VALUE(searchPrice_, searchPrice) };
    inline ModuleFlightItemListBestPriceItemShoppingItemMapValue& setSearchPrice(ModuleFlightItemListBestPriceItemShoppingItemMapValueSearchPrice && searchPrice) { DARABONBA_PTR_SET_RVALUE(searchPrice_, searchPrice) };


    // segmentPriceList Field Functions 
    bool hasSegmentPriceList() const { return this->segmentPriceList_ != nullptr;};
    void deleteSegmentPriceList() { this->segmentPriceList_ = nullptr;};
    inline const vector<ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceList> & segmentPriceList() const { DARABONBA_PTR_GET_CONST(segmentPriceList_, vector<ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceList>) };
    inline vector<ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceList> segmentPriceList() { DARABONBA_PTR_GET(segmentPriceList_, vector<ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceList>) };
    inline ModuleFlightItemListBestPriceItemShoppingItemMapValue& setSegmentPriceList(const vector<ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceList> & segmentPriceList) { DARABONBA_PTR_SET_VALUE(segmentPriceList_, segmentPriceList) };
    inline ModuleFlightItemListBestPriceItemShoppingItemMapValue& setSegmentPriceList(vector<ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceList> && segmentPriceList) { DARABONBA_PTR_SET_RVALUE(segmentPriceList_, segmentPriceList) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ModuleFlightItemListBestPriceItemShoppingItemMapValue& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // cabinQuantity Field Functions 
    bool hasCabinQuantity() const { return this->cabinQuantity_ != nullptr;};
    void deleteCabinQuantity() { this->cabinQuantity_ = nullptr;};
    inline const map<string, ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityValue> & cabinQuantity() const { DARABONBA_PTR_GET_CONST(cabinQuantity_, map<string, ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityValue>) };
    inline map<string, ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityValue> cabinQuantity() { DARABONBA_PTR_GET(cabinQuantity_, map<string, ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityValue>) };
    inline ModuleFlightItemListBestPriceItemShoppingItemMapValue& setCabinQuantity(const map<string, ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityValue> & cabinQuantity) { DARABONBA_PTR_SET_VALUE(cabinQuantity_, cabinQuantity) };
    inline ModuleFlightItemListBestPriceItemShoppingItemMapValue& setCabinQuantity(map<string, ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityValue> && cabinQuantity) { DARABONBA_PTR_SET_RVALUE(cabinQuantity_, cabinQuantity) };


    // segmentPrice Field Functions 
    bool hasSegmentPrice() const { return this->segmentPrice_ != nullptr;};
    void deleteSegmentPrice() { this->segmentPrice_ = nullptr;};
    inline const map<string, ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceValue> & segmentPrice() const { DARABONBA_PTR_GET_CONST(segmentPrice_, map<string, ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceValue>) };
    inline map<string, ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceValue> segmentPrice() { DARABONBA_PTR_GET(segmentPrice_, map<string, ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceValue>) };
    inline ModuleFlightItemListBestPriceItemShoppingItemMapValue& setSegmentPrice(const map<string, ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceValue> & segmentPrice) { DARABONBA_PTR_SET_VALUE(segmentPrice_, segmentPrice) };
    inline ModuleFlightItemListBestPriceItemShoppingItemMapValue& setSegmentPrice(map<string, ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceValue> && segmentPrice) { DARABONBA_PTR_SET_RVALUE(segmentPrice_, segmentPrice) };


  protected:
    std::shared_ptr<vector<ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityList>> cabinQuantityList_ = nullptr;
    std::shared_ptr<ModuleFlightItemListBestPriceItemShoppingItemMapValueSearchPrice> searchPrice_ = nullptr;
    std::shared_ptr<vector<ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceList>> segmentPriceList_ = nullptr;
    // id
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<map<string, ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityValue>> cabinQuantity_ = nullptr;
    std::shared_ptr<map<string, ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceValue>> segmentPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
