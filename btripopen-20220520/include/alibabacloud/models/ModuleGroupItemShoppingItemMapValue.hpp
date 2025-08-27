// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODULEGROUPITEMSHOPPINGITEMMAPVALUE_HPP_
#define ALIBABACLOUD_MODELS_MODULEGROUPITEMSHOPPINGITEMMAPVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModuleGroupItemShoppingItemMapValueCabinQuantityList.hpp>
#include <alibabacloud/models/ModuleGroupItemShoppingItemMapValueSearchPrice.hpp>
#include <alibabacloud/models/ModuleGroupItemShoppingItemMapValueSegmentPriceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ModuleGroupItemShoppingItemMapValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModuleGroupItemShoppingItemMapValue& obj) { 
      DARABONBA_PTR_TO_JSON(cabin_quantity_list, cabinQuantityList_);
      DARABONBA_PTR_TO_JSON(search_price, searchPrice_);
      DARABONBA_PTR_TO_JSON(segment_price_list, segmentPriceList_);
    };
    friend void from_json(const Darabonba::Json& j, ModuleGroupItemShoppingItemMapValue& obj) { 
      DARABONBA_PTR_FROM_JSON(cabin_quantity_list, cabinQuantityList_);
      DARABONBA_PTR_FROM_JSON(search_price, searchPrice_);
      DARABONBA_PTR_FROM_JSON(segment_price_list, segmentPriceList_);
    };
    ModuleGroupItemShoppingItemMapValue() = default ;
    ModuleGroupItemShoppingItemMapValue(const ModuleGroupItemShoppingItemMapValue &) = default ;
    ModuleGroupItemShoppingItemMapValue(ModuleGroupItemShoppingItemMapValue &&) = default ;
    ModuleGroupItemShoppingItemMapValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModuleGroupItemShoppingItemMapValue() = default ;
    ModuleGroupItemShoppingItemMapValue& operator=(const ModuleGroupItemShoppingItemMapValue &) = default ;
    ModuleGroupItemShoppingItemMapValue& operator=(ModuleGroupItemShoppingItemMapValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cabinQuantityList_ != nullptr
        && this->searchPrice_ != nullptr && this->segmentPriceList_ != nullptr; };
    // cabinQuantityList Field Functions 
    bool hasCabinQuantityList() const { return this->cabinQuantityList_ != nullptr;};
    void deleteCabinQuantityList() { this->cabinQuantityList_ = nullptr;};
    inline const vector<ModuleGroupItemShoppingItemMapValueCabinQuantityList> & cabinQuantityList() const { DARABONBA_PTR_GET_CONST(cabinQuantityList_, vector<ModuleGroupItemShoppingItemMapValueCabinQuantityList>) };
    inline vector<ModuleGroupItemShoppingItemMapValueCabinQuantityList> cabinQuantityList() { DARABONBA_PTR_GET(cabinQuantityList_, vector<ModuleGroupItemShoppingItemMapValueCabinQuantityList>) };
    inline ModuleGroupItemShoppingItemMapValue& setCabinQuantityList(const vector<ModuleGroupItemShoppingItemMapValueCabinQuantityList> & cabinQuantityList) { DARABONBA_PTR_SET_VALUE(cabinQuantityList_, cabinQuantityList) };
    inline ModuleGroupItemShoppingItemMapValue& setCabinQuantityList(vector<ModuleGroupItemShoppingItemMapValueCabinQuantityList> && cabinQuantityList) { DARABONBA_PTR_SET_RVALUE(cabinQuantityList_, cabinQuantityList) };


    // searchPrice Field Functions 
    bool hasSearchPrice() const { return this->searchPrice_ != nullptr;};
    void deleteSearchPrice() { this->searchPrice_ = nullptr;};
    inline const ModuleGroupItemShoppingItemMapValueSearchPrice & searchPrice() const { DARABONBA_PTR_GET_CONST(searchPrice_, ModuleGroupItemShoppingItemMapValueSearchPrice) };
    inline ModuleGroupItemShoppingItemMapValueSearchPrice searchPrice() { DARABONBA_PTR_GET(searchPrice_, ModuleGroupItemShoppingItemMapValueSearchPrice) };
    inline ModuleGroupItemShoppingItemMapValue& setSearchPrice(const ModuleGroupItemShoppingItemMapValueSearchPrice & searchPrice) { DARABONBA_PTR_SET_VALUE(searchPrice_, searchPrice) };
    inline ModuleGroupItemShoppingItemMapValue& setSearchPrice(ModuleGroupItemShoppingItemMapValueSearchPrice && searchPrice) { DARABONBA_PTR_SET_RVALUE(searchPrice_, searchPrice) };


    // segmentPriceList Field Functions 
    bool hasSegmentPriceList() const { return this->segmentPriceList_ != nullptr;};
    void deleteSegmentPriceList() { this->segmentPriceList_ = nullptr;};
    inline const vector<ModuleGroupItemShoppingItemMapValueSegmentPriceList> & segmentPriceList() const { DARABONBA_PTR_GET_CONST(segmentPriceList_, vector<ModuleGroupItemShoppingItemMapValueSegmentPriceList>) };
    inline vector<ModuleGroupItemShoppingItemMapValueSegmentPriceList> segmentPriceList() { DARABONBA_PTR_GET(segmentPriceList_, vector<ModuleGroupItemShoppingItemMapValueSegmentPriceList>) };
    inline ModuleGroupItemShoppingItemMapValue& setSegmentPriceList(const vector<ModuleGroupItemShoppingItemMapValueSegmentPriceList> & segmentPriceList) { DARABONBA_PTR_SET_VALUE(segmentPriceList_, segmentPriceList) };
    inline ModuleGroupItemShoppingItemMapValue& setSegmentPriceList(vector<ModuleGroupItemShoppingItemMapValueSegmentPriceList> && segmentPriceList) { DARABONBA_PTR_SET_RVALUE(segmentPriceList_, segmentPriceList) };


  protected:
    std::shared_ptr<vector<ModuleGroupItemShoppingItemMapValueCabinQuantityList>> cabinQuantityList_ = nullptr;
    std::shared_ptr<ModuleGroupItemShoppingItemMapValueSearchPrice> searchPrice_ = nullptr;
    std::shared_ptr<vector<ModuleGroupItemShoppingItemMapValueSegmentPriceList>> segmentPriceList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
