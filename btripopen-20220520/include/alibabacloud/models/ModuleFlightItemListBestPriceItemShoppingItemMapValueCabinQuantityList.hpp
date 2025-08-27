// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODULEFLIGHTITEMLISTBESTPRICEITEMSHOPPINGITEMMAPVALUECABINQUANTITYLIST_HPP_
#define ALIBABACLOUD_MODELS_MODULEFLIGHTITEMLISTBESTPRICEITEMSHOPPINGITEMMAPVALUECABINQUANTITYLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityListSegmentPosition.hpp>
#include <alibabacloud/models/ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityListCabinInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityList& obj) { 
      DARABONBA_PTR_TO_JSON(segment_position, segmentPosition_);
      DARABONBA_PTR_TO_JSON(cabin_info, cabinInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityList& obj) { 
      DARABONBA_PTR_FROM_JSON(segment_position, segmentPosition_);
      DARABONBA_PTR_FROM_JSON(cabin_info, cabinInfo_);
    };
    ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityList() = default ;
    ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityList(const ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityList &) = default ;
    ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityList(ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityList &&) = default ;
    ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityList() = default ;
    ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityList& operator=(const ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityList &) = default ;
    ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityList& operator=(ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->segmentPosition_ != nullptr
        && this->cabinInfo_ != nullptr; };
    // segmentPosition Field Functions 
    bool hasSegmentPosition() const { return this->segmentPosition_ != nullptr;};
    void deleteSegmentPosition() { this->segmentPosition_ = nullptr;};
    inline const Models::ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityListSegmentPosition & segmentPosition() const { DARABONBA_PTR_GET_CONST(segmentPosition_, Models::ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityListSegmentPosition) };
    inline Models::ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityListSegmentPosition segmentPosition() { DARABONBA_PTR_GET(segmentPosition_, Models::ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityListSegmentPosition) };
    inline ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityList& setSegmentPosition(const Models::ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityListSegmentPosition & segmentPosition) { DARABONBA_PTR_SET_VALUE(segmentPosition_, segmentPosition) };
    inline ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityList& setSegmentPosition(Models::ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityListSegmentPosition && segmentPosition) { DARABONBA_PTR_SET_RVALUE(segmentPosition_, segmentPosition) };


    // cabinInfo Field Functions 
    bool hasCabinInfo() const { return this->cabinInfo_ != nullptr;};
    void deleteCabinInfo() { this->cabinInfo_ = nullptr;};
    inline const Models::ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityListCabinInfo & cabinInfo() const { DARABONBA_PTR_GET_CONST(cabinInfo_, Models::ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityListCabinInfo) };
    inline Models::ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityListCabinInfo cabinInfo() { DARABONBA_PTR_GET(cabinInfo_, Models::ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityListCabinInfo) };
    inline ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityList& setCabinInfo(const Models::ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityListCabinInfo & cabinInfo) { DARABONBA_PTR_SET_VALUE(cabinInfo_, cabinInfo) };
    inline ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityList& setCabinInfo(Models::ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityListCabinInfo && cabinInfo) { DARABONBA_PTR_SET_RVALUE(cabinInfo_, cabinInfo) };


  protected:
    std::shared_ptr<Models::ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityListSegmentPosition> segmentPosition_ = nullptr;
    std::shared_ptr<Models::ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityListCabinInfo> cabinInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
