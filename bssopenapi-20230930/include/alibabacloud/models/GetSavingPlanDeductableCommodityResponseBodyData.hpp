// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSAVINGPLANDEDUCTABLECOMMODITYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSAVINGPLANDEDUCTABLECOMMODITYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSavingPlanDeductableCommodityResponseBodyDataCycleList.hpp>
#include <alibabacloud/models/GetSavingPlanDeductableCommodityResponseBodyDataFilterModules.hpp>
#include <alibabacloud/models/GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList.hpp>
#include <alibabacloud/models/GetSavingPlanDeductableCommodityResponseBodyDataPayModeList.hpp>
#include <alibabacloud/models/GetSavingPlanDeductableCommodityResponseBodyDataPricingModules.hpp>
#include <map>
#include <alibabacloud/models/DataStepPriceMapValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class GetSavingPlanDeductableCommodityResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSavingPlanDeductableCommodityResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(CommodityId, commodityId_);
      DARABONBA_PTR_TO_JSON(CommodityName, commodityName_);
      DARABONBA_PTR_TO_JSON(CycleList, cycleList_);
      DARABONBA_PTR_TO_JSON(FilterModules, filterModules_);
      DARABONBA_PTR_TO_JSON(ItemCode, itemCode_);
      DARABONBA_PTR_TO_JSON(ItemId, itemId_);
      DARABONBA_PTR_TO_JSON(ItemName, itemName_);
      DARABONBA_PTR_TO_JSON(ModuleMapList, moduleMapList_);
      DARABONBA_PTR_TO_JSON(PayModeList, payModeList_);
      DARABONBA_PTR_TO_JSON(PricingModules, pricingModules_);
      DARABONBA_PTR_TO_JSON(SpnCommodityCode, spnCommodityCode_);
      DARABONBA_PTR_TO_JSON(SpnCommodityName, spnCommodityName_);
      DARABONBA_PTR_TO_JSON(SpnDiscountConfigType, spnDiscountConfigType_);
      DARABONBA_PTR_TO_JSON(StepPriceMap, stepPriceMap_);
    };
    friend void from_json(const Darabonba::Json& j, GetSavingPlanDeductableCommodityResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(CommodityId, commodityId_);
      DARABONBA_PTR_FROM_JSON(CommodityName, commodityName_);
      DARABONBA_PTR_FROM_JSON(CycleList, cycleList_);
      DARABONBA_PTR_FROM_JSON(FilterModules, filterModules_);
      DARABONBA_PTR_FROM_JSON(ItemCode, itemCode_);
      DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
      DARABONBA_PTR_FROM_JSON(ItemName, itemName_);
      DARABONBA_PTR_FROM_JSON(ModuleMapList, moduleMapList_);
      DARABONBA_PTR_FROM_JSON(PayModeList, payModeList_);
      DARABONBA_PTR_FROM_JSON(PricingModules, pricingModules_);
      DARABONBA_PTR_FROM_JSON(SpnCommodityCode, spnCommodityCode_);
      DARABONBA_PTR_FROM_JSON(SpnCommodityName, spnCommodityName_);
      DARABONBA_PTR_FROM_JSON(SpnDiscountConfigType, spnDiscountConfigType_);
      DARABONBA_PTR_FROM_JSON(StepPriceMap, stepPriceMap_);
    };
    GetSavingPlanDeductableCommodityResponseBodyData() = default ;
    GetSavingPlanDeductableCommodityResponseBodyData(const GetSavingPlanDeductableCommodityResponseBodyData &) = default ;
    GetSavingPlanDeductableCommodityResponseBodyData(GetSavingPlanDeductableCommodityResponseBodyData &&) = default ;
    GetSavingPlanDeductableCommodityResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSavingPlanDeductableCommodityResponseBodyData() = default ;
    GetSavingPlanDeductableCommodityResponseBodyData& operator=(const GetSavingPlanDeductableCommodityResponseBodyData &) = default ;
    GetSavingPlanDeductableCommodityResponseBodyData& operator=(GetSavingPlanDeductableCommodityResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activityId_ != nullptr
        && this->commodityCode_ != nullptr && this->commodityId_ != nullptr && this->commodityName_ != nullptr && this->cycleList_ != nullptr && this->filterModules_ != nullptr
        && this->itemCode_ != nullptr && this->itemId_ != nullptr && this->itemName_ != nullptr && this->moduleMapList_ != nullptr && this->payModeList_ != nullptr
        && this->pricingModules_ != nullptr && this->spnCommodityCode_ != nullptr && this->spnCommodityName_ != nullptr && this->spnDiscountConfigType_ != nullptr && this->stepPriceMap_ != nullptr; };
    // activityId Field Functions 
    bool hasActivityId() const { return this->activityId_ != nullptr;};
    void deleteActivityId() { this->activityId_ = nullptr;};
    inline int64_t activityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, 0L) };
    inline GetSavingPlanDeductableCommodityResponseBodyData& setActivityId(int64_t activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline GetSavingPlanDeductableCommodityResponseBodyData& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // commodityId Field Functions 
    bool hasCommodityId() const { return this->commodityId_ != nullptr;};
    void deleteCommodityId() { this->commodityId_ = nullptr;};
    inline int64_t commodityId() const { DARABONBA_PTR_GET_DEFAULT(commodityId_, 0L) };
    inline GetSavingPlanDeductableCommodityResponseBodyData& setCommodityId(int64_t commodityId) { DARABONBA_PTR_SET_VALUE(commodityId_, commodityId) };


    // commodityName Field Functions 
    bool hasCommodityName() const { return this->commodityName_ != nullptr;};
    void deleteCommodityName() { this->commodityName_ = nullptr;};
    inline string commodityName() const { DARABONBA_PTR_GET_DEFAULT(commodityName_, "") };
    inline GetSavingPlanDeductableCommodityResponseBodyData& setCommodityName(string commodityName) { DARABONBA_PTR_SET_VALUE(commodityName_, commodityName) };


    // cycleList Field Functions 
    bool hasCycleList() const { return this->cycleList_ != nullptr;};
    void deleteCycleList() { this->cycleList_ = nullptr;};
    inline const vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataCycleList> & cycleList() const { DARABONBA_PTR_GET_CONST(cycleList_, vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataCycleList>) };
    inline vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataCycleList> cycleList() { DARABONBA_PTR_GET(cycleList_, vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataCycleList>) };
    inline GetSavingPlanDeductableCommodityResponseBodyData& setCycleList(const vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataCycleList> & cycleList) { DARABONBA_PTR_SET_VALUE(cycleList_, cycleList) };
    inline GetSavingPlanDeductableCommodityResponseBodyData& setCycleList(vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataCycleList> && cycleList) { DARABONBA_PTR_SET_RVALUE(cycleList_, cycleList) };


    // filterModules Field Functions 
    bool hasFilterModules() const { return this->filterModules_ != nullptr;};
    void deleteFilterModules() { this->filterModules_ = nullptr;};
    inline const vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataFilterModules> & filterModules() const { DARABONBA_PTR_GET_CONST(filterModules_, vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataFilterModules>) };
    inline vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataFilterModules> filterModules() { DARABONBA_PTR_GET(filterModules_, vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataFilterModules>) };
    inline GetSavingPlanDeductableCommodityResponseBodyData& setFilterModules(const vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataFilterModules> & filterModules) { DARABONBA_PTR_SET_VALUE(filterModules_, filterModules) };
    inline GetSavingPlanDeductableCommodityResponseBodyData& setFilterModules(vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataFilterModules> && filterModules) { DARABONBA_PTR_SET_RVALUE(filterModules_, filterModules) };


    // itemCode Field Functions 
    bool hasItemCode() const { return this->itemCode_ != nullptr;};
    void deleteItemCode() { this->itemCode_ = nullptr;};
    inline string itemCode() const { DARABONBA_PTR_GET_DEFAULT(itemCode_, "") };
    inline GetSavingPlanDeductableCommodityResponseBodyData& setItemCode(string itemCode) { DARABONBA_PTR_SET_VALUE(itemCode_, itemCode) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline int64_t itemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, 0L) };
    inline GetSavingPlanDeductableCommodityResponseBodyData& setItemId(int64_t itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // itemName Field Functions 
    bool hasItemName() const { return this->itemName_ != nullptr;};
    void deleteItemName() { this->itemName_ = nullptr;};
    inline string itemName() const { DARABONBA_PTR_GET_DEFAULT(itemName_, "") };
    inline GetSavingPlanDeductableCommodityResponseBodyData& setItemName(string itemName) { DARABONBA_PTR_SET_VALUE(itemName_, itemName) };


    // moduleMapList Field Functions 
    bool hasModuleMapList() const { return this->moduleMapList_ != nullptr;};
    void deleteModuleMapList() { this->moduleMapList_ = nullptr;};
    inline const vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList> & moduleMapList() const { DARABONBA_PTR_GET_CONST(moduleMapList_, vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList>) };
    inline vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList> moduleMapList() { DARABONBA_PTR_GET(moduleMapList_, vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList>) };
    inline GetSavingPlanDeductableCommodityResponseBodyData& setModuleMapList(const vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList> & moduleMapList) { DARABONBA_PTR_SET_VALUE(moduleMapList_, moduleMapList) };
    inline GetSavingPlanDeductableCommodityResponseBodyData& setModuleMapList(vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList> && moduleMapList) { DARABONBA_PTR_SET_RVALUE(moduleMapList_, moduleMapList) };


    // payModeList Field Functions 
    bool hasPayModeList() const { return this->payModeList_ != nullptr;};
    void deletePayModeList() { this->payModeList_ = nullptr;};
    inline const vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataPayModeList> & payModeList() const { DARABONBA_PTR_GET_CONST(payModeList_, vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataPayModeList>) };
    inline vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataPayModeList> payModeList() { DARABONBA_PTR_GET(payModeList_, vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataPayModeList>) };
    inline GetSavingPlanDeductableCommodityResponseBodyData& setPayModeList(const vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataPayModeList> & payModeList) { DARABONBA_PTR_SET_VALUE(payModeList_, payModeList) };
    inline GetSavingPlanDeductableCommodityResponseBodyData& setPayModeList(vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataPayModeList> && payModeList) { DARABONBA_PTR_SET_RVALUE(payModeList_, payModeList) };


    // pricingModules Field Functions 
    bool hasPricingModules() const { return this->pricingModules_ != nullptr;};
    void deletePricingModules() { this->pricingModules_ = nullptr;};
    inline const vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataPricingModules> & pricingModules() const { DARABONBA_PTR_GET_CONST(pricingModules_, vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataPricingModules>) };
    inline vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataPricingModules> pricingModules() { DARABONBA_PTR_GET(pricingModules_, vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataPricingModules>) };
    inline GetSavingPlanDeductableCommodityResponseBodyData& setPricingModules(const vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataPricingModules> & pricingModules) { DARABONBA_PTR_SET_VALUE(pricingModules_, pricingModules) };
    inline GetSavingPlanDeductableCommodityResponseBodyData& setPricingModules(vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataPricingModules> && pricingModules) { DARABONBA_PTR_SET_RVALUE(pricingModules_, pricingModules) };


    // spnCommodityCode Field Functions 
    bool hasSpnCommodityCode() const { return this->spnCommodityCode_ != nullptr;};
    void deleteSpnCommodityCode() { this->spnCommodityCode_ = nullptr;};
    inline string spnCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(spnCommodityCode_, "") };
    inline GetSavingPlanDeductableCommodityResponseBodyData& setSpnCommodityCode(string spnCommodityCode) { DARABONBA_PTR_SET_VALUE(spnCommodityCode_, spnCommodityCode) };


    // spnCommodityName Field Functions 
    bool hasSpnCommodityName() const { return this->spnCommodityName_ != nullptr;};
    void deleteSpnCommodityName() { this->spnCommodityName_ = nullptr;};
    inline string spnCommodityName() const { DARABONBA_PTR_GET_DEFAULT(spnCommodityName_, "") };
    inline GetSavingPlanDeductableCommodityResponseBodyData& setSpnCommodityName(string spnCommodityName) { DARABONBA_PTR_SET_VALUE(spnCommodityName_, spnCommodityName) };


    // spnDiscountConfigType Field Functions 
    bool hasSpnDiscountConfigType() const { return this->spnDiscountConfigType_ != nullptr;};
    void deleteSpnDiscountConfigType() { this->spnDiscountConfigType_ = nullptr;};
    inline string spnDiscountConfigType() const { DARABONBA_PTR_GET_DEFAULT(spnDiscountConfigType_, "") };
    inline GetSavingPlanDeductableCommodityResponseBodyData& setSpnDiscountConfigType(string spnDiscountConfigType) { DARABONBA_PTR_SET_VALUE(spnDiscountConfigType_, spnDiscountConfigType) };


    // stepPriceMap Field Functions 
    bool hasStepPriceMap() const { return this->stepPriceMap_ != nullptr;};
    void deleteStepPriceMap() { this->stepPriceMap_ = nullptr;};
    inline const map<string, vector<Models::DataStepPriceMapValue>> & stepPriceMap() const { DARABONBA_PTR_GET_CONST(stepPriceMap_, map<string, vector<Models::DataStepPriceMapValue>>) };
    inline map<string, vector<Models::DataStepPriceMapValue>> stepPriceMap() { DARABONBA_PTR_GET(stepPriceMap_, map<string, vector<Models::DataStepPriceMapValue>>) };
    inline GetSavingPlanDeductableCommodityResponseBodyData& setStepPriceMap(const map<string, vector<Models::DataStepPriceMapValue>> & stepPriceMap) { DARABONBA_PTR_SET_VALUE(stepPriceMap_, stepPriceMap) };
    inline GetSavingPlanDeductableCommodityResponseBodyData& setStepPriceMap(map<string, vector<Models::DataStepPriceMapValue>> && stepPriceMap) { DARABONBA_PTR_SET_RVALUE(stepPriceMap_, stepPriceMap) };


  protected:
    std::shared_ptr<int64_t> activityId_ = nullptr;
    std::shared_ptr<string> commodityCode_ = nullptr;
    std::shared_ptr<int64_t> commodityId_ = nullptr;
    std::shared_ptr<string> commodityName_ = nullptr;
    std::shared_ptr<vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataCycleList>> cycleList_ = nullptr;
    std::shared_ptr<vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataFilterModules>> filterModules_ = nullptr;
    std::shared_ptr<string> itemCode_ = nullptr;
    std::shared_ptr<int64_t> itemId_ = nullptr;
    std::shared_ptr<string> itemName_ = nullptr;
    std::shared_ptr<vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList>> moduleMapList_ = nullptr;
    std::shared_ptr<vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataPayModeList>> payModeList_ = nullptr;
    std::shared_ptr<vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataPricingModules>> pricingModules_ = nullptr;
    std::shared_ptr<string> spnCommodityCode_ = nullptr;
    std::shared_ptr<string> spnCommodityName_ = nullptr;
    std::shared_ptr<string> spnDiscountConfigType_ = nullptr;
    std::shared_ptr<map<string, vector<Models::DataStepPriceMapValue>>> stepPriceMap_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
