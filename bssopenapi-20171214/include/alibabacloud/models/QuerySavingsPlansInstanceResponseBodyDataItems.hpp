// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSAVINGSPLANSINSTANCERESPONSEBODYDATAITEMS_HPP_
#define ALIBABACLOUD_MODELS_QUERYSAVINGSPLANSINSTANCERESPONSEBODYDATAITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QuerySavingsPlansInstanceResponseBodyDataItemsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QuerySavingsPlansInstanceResponseBodyDataItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySavingsPlansInstanceResponseBodyDataItems& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationStatus, allocationStatus_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(CurrentPoolValue, currentPoolValue_);
      DARABONBA_PTR_TO_JSON(Cycle, cycle_);
      DARABONBA_PTR_TO_JSON(DeductCycleType, deductCycleType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_TO_JSON(InstanceFamily, instanceFamily_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LastBillTotalUsage, lastBillTotalUsage_);
      DARABONBA_PTR_TO_JSON(LastBillUtilization, lastBillUtilization_);
      DARABONBA_PTR_TO_JSON(PayMode, payMode_);
      DARABONBA_PTR_TO_JSON(PoolValue, poolValue_);
      DARABONBA_PTR_TO_JSON(PrepayFee, prepayFee_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RestPoolValue, restPoolValue_);
      DARABONBA_PTR_TO_JSON(SavingsType, savingsType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StartTimestamp, startTimestamp_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TotalSave, totalSave_);
      DARABONBA_PTR_TO_JSON(Utilization, utilization_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySavingsPlansInstanceResponseBodyDataItems& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationStatus, allocationStatus_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(CurrentPoolValue, currentPoolValue_);
      DARABONBA_PTR_FROM_JSON(Cycle, cycle_);
      DARABONBA_PTR_FROM_JSON(DeductCycleType, deductCycleType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_FROM_JSON(InstanceFamily, instanceFamily_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LastBillTotalUsage, lastBillTotalUsage_);
      DARABONBA_PTR_FROM_JSON(LastBillUtilization, lastBillUtilization_);
      DARABONBA_PTR_FROM_JSON(PayMode, payMode_);
      DARABONBA_PTR_FROM_JSON(PoolValue, poolValue_);
      DARABONBA_PTR_FROM_JSON(PrepayFee, prepayFee_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RestPoolValue, restPoolValue_);
      DARABONBA_PTR_FROM_JSON(SavingsType, savingsType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StartTimestamp, startTimestamp_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TotalSave, totalSave_);
      DARABONBA_PTR_FROM_JSON(Utilization, utilization_);
    };
    QuerySavingsPlansInstanceResponseBodyDataItems() = default ;
    QuerySavingsPlansInstanceResponseBodyDataItems(const QuerySavingsPlansInstanceResponseBodyDataItems &) = default ;
    QuerySavingsPlansInstanceResponseBodyDataItems(QuerySavingsPlansInstanceResponseBodyDataItems &&) = default ;
    QuerySavingsPlansInstanceResponseBodyDataItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySavingsPlansInstanceResponseBodyDataItems() = default ;
    QuerySavingsPlansInstanceResponseBodyDataItems& operator=(const QuerySavingsPlansInstanceResponseBodyDataItems &) = default ;
    QuerySavingsPlansInstanceResponseBodyDataItems& operator=(QuerySavingsPlansInstanceResponseBodyDataItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allocationStatus_ != nullptr
        && this->commodityCode_ != nullptr && this->currency_ != nullptr && this->currentPoolValue_ != nullptr && this->cycle_ != nullptr && this->deductCycleType_ != nullptr
        && this->endTime_ != nullptr && this->endTimestamp_ != nullptr && this->instanceFamily_ != nullptr && this->instanceId_ != nullptr && this->lastBillTotalUsage_ != nullptr
        && this->lastBillUtilization_ != nullptr && this->payMode_ != nullptr && this->poolValue_ != nullptr && this->prepayFee_ != nullptr && this->region_ != nullptr
        && this->restPoolValue_ != nullptr && this->savingsType_ != nullptr && this->startTime_ != nullptr && this->startTimestamp_ != nullptr && this->status_ != nullptr
        && this->tags_ != nullptr && this->totalSave_ != nullptr && this->utilization_ != nullptr; };
    // allocationStatus Field Functions 
    bool hasAllocationStatus() const { return this->allocationStatus_ != nullptr;};
    void deleteAllocationStatus() { this->allocationStatus_ = nullptr;};
    inline string allocationStatus() const { DARABONBA_PTR_GET_DEFAULT(allocationStatus_, "") };
    inline QuerySavingsPlansInstanceResponseBodyDataItems& setAllocationStatus(string allocationStatus) { DARABONBA_PTR_SET_VALUE(allocationStatus_, allocationStatus) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline QuerySavingsPlansInstanceResponseBodyDataItems& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline QuerySavingsPlansInstanceResponseBodyDataItems& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // currentPoolValue Field Functions 
    bool hasCurrentPoolValue() const { return this->currentPoolValue_ != nullptr;};
    void deleteCurrentPoolValue() { this->currentPoolValue_ = nullptr;};
    inline string currentPoolValue() const { DARABONBA_PTR_GET_DEFAULT(currentPoolValue_, "") };
    inline QuerySavingsPlansInstanceResponseBodyDataItems& setCurrentPoolValue(string currentPoolValue) { DARABONBA_PTR_SET_VALUE(currentPoolValue_, currentPoolValue) };


    // cycle Field Functions 
    bool hasCycle() const { return this->cycle_ != nullptr;};
    void deleteCycle() { this->cycle_ = nullptr;};
    inline string cycle() const { DARABONBA_PTR_GET_DEFAULT(cycle_, "") };
    inline QuerySavingsPlansInstanceResponseBodyDataItems& setCycle(string cycle) { DARABONBA_PTR_SET_VALUE(cycle_, cycle) };


    // deductCycleType Field Functions 
    bool hasDeductCycleType() const { return this->deductCycleType_ != nullptr;};
    void deleteDeductCycleType() { this->deductCycleType_ = nullptr;};
    inline string deductCycleType() const { DARABONBA_PTR_GET_DEFAULT(deductCycleType_, "") };
    inline QuerySavingsPlansInstanceResponseBodyDataItems& setDeductCycleType(string deductCycleType) { DARABONBA_PTR_SET_VALUE(deductCycleType_, deductCycleType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline QuerySavingsPlansInstanceResponseBodyDataItems& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // endTimestamp Field Functions 
    bool hasEndTimestamp() const { return this->endTimestamp_ != nullptr;};
    void deleteEndTimestamp() { this->endTimestamp_ = nullptr;};
    inline int64_t endTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endTimestamp_, 0L) };
    inline QuerySavingsPlansInstanceResponseBodyDataItems& setEndTimestamp(int64_t endTimestamp) { DARABONBA_PTR_SET_VALUE(endTimestamp_, endTimestamp) };


    // instanceFamily Field Functions 
    bool hasInstanceFamily() const { return this->instanceFamily_ != nullptr;};
    void deleteInstanceFamily() { this->instanceFamily_ = nullptr;};
    inline string instanceFamily() const { DARABONBA_PTR_GET_DEFAULT(instanceFamily_, "") };
    inline QuerySavingsPlansInstanceResponseBodyDataItems& setInstanceFamily(string instanceFamily) { DARABONBA_PTR_SET_VALUE(instanceFamily_, instanceFamily) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QuerySavingsPlansInstanceResponseBodyDataItems& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lastBillTotalUsage Field Functions 
    bool hasLastBillTotalUsage() const { return this->lastBillTotalUsage_ != nullptr;};
    void deleteLastBillTotalUsage() { this->lastBillTotalUsage_ = nullptr;};
    inline string lastBillTotalUsage() const { DARABONBA_PTR_GET_DEFAULT(lastBillTotalUsage_, "") };
    inline QuerySavingsPlansInstanceResponseBodyDataItems& setLastBillTotalUsage(string lastBillTotalUsage) { DARABONBA_PTR_SET_VALUE(lastBillTotalUsage_, lastBillTotalUsage) };


    // lastBillUtilization Field Functions 
    bool hasLastBillUtilization() const { return this->lastBillUtilization_ != nullptr;};
    void deleteLastBillUtilization() { this->lastBillUtilization_ = nullptr;};
    inline string lastBillUtilization() const { DARABONBA_PTR_GET_DEFAULT(lastBillUtilization_, "") };
    inline QuerySavingsPlansInstanceResponseBodyDataItems& setLastBillUtilization(string lastBillUtilization) { DARABONBA_PTR_SET_VALUE(lastBillUtilization_, lastBillUtilization) };


    // payMode Field Functions 
    bool hasPayMode() const { return this->payMode_ != nullptr;};
    void deletePayMode() { this->payMode_ = nullptr;};
    inline string payMode() const { DARABONBA_PTR_GET_DEFAULT(payMode_, "") };
    inline QuerySavingsPlansInstanceResponseBodyDataItems& setPayMode(string payMode) { DARABONBA_PTR_SET_VALUE(payMode_, payMode) };


    // poolValue Field Functions 
    bool hasPoolValue() const { return this->poolValue_ != nullptr;};
    void deletePoolValue() { this->poolValue_ = nullptr;};
    inline string poolValue() const { DARABONBA_PTR_GET_DEFAULT(poolValue_, "") };
    inline QuerySavingsPlansInstanceResponseBodyDataItems& setPoolValue(string poolValue) { DARABONBA_PTR_SET_VALUE(poolValue_, poolValue) };


    // prepayFee Field Functions 
    bool hasPrepayFee() const { return this->prepayFee_ != nullptr;};
    void deletePrepayFee() { this->prepayFee_ = nullptr;};
    inline string prepayFee() const { DARABONBA_PTR_GET_DEFAULT(prepayFee_, "") };
    inline QuerySavingsPlansInstanceResponseBodyDataItems& setPrepayFee(string prepayFee) { DARABONBA_PTR_SET_VALUE(prepayFee_, prepayFee) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline QuerySavingsPlansInstanceResponseBodyDataItems& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // restPoolValue Field Functions 
    bool hasRestPoolValue() const { return this->restPoolValue_ != nullptr;};
    void deleteRestPoolValue() { this->restPoolValue_ = nullptr;};
    inline string restPoolValue() const { DARABONBA_PTR_GET_DEFAULT(restPoolValue_, "") };
    inline QuerySavingsPlansInstanceResponseBodyDataItems& setRestPoolValue(string restPoolValue) { DARABONBA_PTR_SET_VALUE(restPoolValue_, restPoolValue) };


    // savingsType Field Functions 
    bool hasSavingsType() const { return this->savingsType_ != nullptr;};
    void deleteSavingsType() { this->savingsType_ = nullptr;};
    inline string savingsType() const { DARABONBA_PTR_GET_DEFAULT(savingsType_, "") };
    inline QuerySavingsPlansInstanceResponseBodyDataItems& setSavingsType(string savingsType) { DARABONBA_PTR_SET_VALUE(savingsType_, savingsType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline QuerySavingsPlansInstanceResponseBodyDataItems& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // startTimestamp Field Functions 
    bool hasStartTimestamp() const { return this->startTimestamp_ != nullptr;};
    void deleteStartTimestamp() { this->startTimestamp_ = nullptr;};
    inline int64_t startTimestamp() const { DARABONBA_PTR_GET_DEFAULT(startTimestamp_, 0L) };
    inline QuerySavingsPlansInstanceResponseBodyDataItems& setStartTimestamp(int64_t startTimestamp) { DARABONBA_PTR_SET_VALUE(startTimestamp_, startTimestamp) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QuerySavingsPlansInstanceResponseBodyDataItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::QuerySavingsPlansInstanceResponseBodyDataItemsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::QuerySavingsPlansInstanceResponseBodyDataItemsTags>) };
    inline vector<Models::QuerySavingsPlansInstanceResponseBodyDataItemsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::QuerySavingsPlansInstanceResponseBodyDataItemsTags>) };
    inline QuerySavingsPlansInstanceResponseBodyDataItems& setTags(const vector<Models::QuerySavingsPlansInstanceResponseBodyDataItemsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline QuerySavingsPlansInstanceResponseBodyDataItems& setTags(vector<Models::QuerySavingsPlansInstanceResponseBodyDataItemsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // totalSave Field Functions 
    bool hasTotalSave() const { return this->totalSave_ != nullptr;};
    void deleteTotalSave() { this->totalSave_ = nullptr;};
    inline string totalSave() const { DARABONBA_PTR_GET_DEFAULT(totalSave_, "") };
    inline QuerySavingsPlansInstanceResponseBodyDataItems& setTotalSave(string totalSave) { DARABONBA_PTR_SET_VALUE(totalSave_, totalSave) };


    // utilization Field Functions 
    bool hasUtilization() const { return this->utilization_ != nullptr;};
    void deleteUtilization() { this->utilization_ = nullptr;};
    inline string utilization() const { DARABONBA_PTR_GET_DEFAULT(utilization_, "") };
    inline QuerySavingsPlansInstanceResponseBodyDataItems& setUtilization(string utilization) { DARABONBA_PTR_SET_VALUE(utilization_, utilization) };


  protected:
    // The allocation status. Valid values:
    // 
    // *   unallocated
    // *   allocated
    // *   beAllocated
    std::shared_ptr<string> allocationStatus_ = nullptr;
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The currency. Valid values: CNY and USD.
    std::shared_ptr<string> currency_ = nullptr;
    std::shared_ptr<string> currentPoolValue_ = nullptr;
    std::shared_ptr<string> cycle_ = nullptr;
    std::shared_ptr<string> deductCycleType_ = nullptr;
    // The time when the instance expires. The time is in the format of yyyy-MM-dd HH:mm:ss.
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<int64_t> endTimestamp_ = nullptr;
    // The instance family information. For an instance of the Elastic Compute Service (ECS) compute type, the value indicates the ECS instance family or the ECS instance family package.
    std::shared_ptr<string> instanceFamily_ = nullptr;
    // The ID of the savings plan instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> lastBillTotalUsage_ = nullptr;
    std::shared_ptr<string> lastBillUtilization_ = nullptr;
    // The payment type. Valid values:
    // 
    // *   total: All Upfront
    // *   half: Partial Upfront
    // *   zero: No Upfront
    std::shared_ptr<string> payMode_ = nullptr;
    // The commitment.
    std::shared_ptr<string> poolValue_ = nullptr;
    // The prepaid amount.
    std::shared_ptr<string> prepayFee_ = nullptr;
    // The region.
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> restPoolValue_ = nullptr;
    // The type of the savings plan. Valid values:
    // 
    // *   universal: general-purpose
    // *   ecs: ECS compute
    std::shared_ptr<string> savingsType_ = nullptr;
    // The time when the instance takes effect. The time is in the format of yyyy-MM-dd HH:mm:ss.
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<int64_t> startTimestamp_ = nullptr;
    // The status of the instance. Valid values:
    // 
    // *   NORMAL: normal
    // *   LIMIT: stopped due to overdue payment
    // *   RELEASE: released
    std::shared_ptr<string> status_ = nullptr;
    // The details about the tags.
    std::shared_ptr<vector<Models::QuerySavingsPlansInstanceResponseBodyDataItemsTags>> tags_ = nullptr;
    // The total amount that is saved.
    std::shared_ptr<string> totalSave_ = nullptr;
    // The total usage.
    std::shared_ptr<string> utilization_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
