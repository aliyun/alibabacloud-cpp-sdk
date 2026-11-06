// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTORAGEPLANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTORAGEPLANRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeStoragePlanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStoragePlanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStoragePlanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeStoragePlanResponseBody() = default ;
    DescribeStoragePlanResponseBody(const DescribeStoragePlanResponseBody &) = default ;
    DescribeStoragePlanResponseBody(DescribeStoragePlanResponseBody &&) = default ;
    DescribeStoragePlanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStoragePlanResponseBody() = default ;
    DescribeStoragePlanResponseBody& operator=(const DescribeStoragePlanResponseBody &) = default ;
    DescribeStoragePlanResponseBody& operator=(DescribeStoragePlanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(EndTimes, endTimes_);
        DARABONBA_PTR_TO_JSON(InitCapaCityViewUnit, initCapaCityViewUnit_);
        DARABONBA_PTR_TO_JSON(InitCapacityViewValue, initCapacityViewValue_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(PeriodCapaCityViewUnit, periodCapaCityViewUnit_);
        DARABONBA_PTR_TO_JSON(PeriodCapacityViewValue, periodCapacityViewValue_);
        DARABONBA_PTR_TO_JSON(PeriodTime, periodTime_);
        DARABONBA_PTR_TO_JSON(ProdCode, prodCode_);
        DARABONBA_PTR_TO_JSON(PurchaseTimes, purchaseTimes_);
        DARABONBA_PTR_TO_JSON(StartTimes, startTimes_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StorageType, storageType_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(EndTimes, endTimes_);
        DARABONBA_PTR_FROM_JSON(InitCapaCityViewUnit, initCapaCityViewUnit_);
        DARABONBA_PTR_FROM_JSON(InitCapacityViewValue, initCapacityViewValue_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(PeriodCapaCityViewUnit, periodCapaCityViewUnit_);
        DARABONBA_PTR_FROM_JSON(PeriodCapacityViewValue, periodCapacityViewValue_);
        DARABONBA_PTR_FROM_JSON(PeriodTime, periodTime_);
        DARABONBA_PTR_FROM_JSON(ProdCode, prodCode_);
        DARABONBA_PTR_FROM_JSON(PurchaseTimes, purchaseTimes_);
        DARABONBA_PTR_FROM_JSON(StartTimes, startTimes_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->commodityCode_ == nullptr && this->endTimes_ == nullptr && this->initCapaCityViewUnit_ == nullptr && this->initCapacityViewValue_ == nullptr && this->instanceId_ == nullptr
        && this->periodCapaCityViewUnit_ == nullptr && this->periodCapacityViewValue_ == nullptr && this->periodTime_ == nullptr && this->prodCode_ == nullptr && this->purchaseTimes_ == nullptr
        && this->startTimes_ == nullptr && this->status_ == nullptr && this->storageType_ == nullptr && this->templateName_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline string getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
      inline Items& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline Items& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // endTimes Field Functions 
      bool hasEndTimes() const { return this->endTimes_ != nullptr;};
      void deleteEndTimes() { this->endTimes_ = nullptr;};
      inline string getEndTimes() const { DARABONBA_PTR_GET_DEFAULT(endTimes_, "") };
      inline Items& setEndTimes(string endTimes) { DARABONBA_PTR_SET_VALUE(endTimes_, endTimes) };


      // initCapaCityViewUnit Field Functions 
      bool hasInitCapaCityViewUnit() const { return this->initCapaCityViewUnit_ != nullptr;};
      void deleteInitCapaCityViewUnit() { this->initCapaCityViewUnit_ = nullptr;};
      inline string getInitCapaCityViewUnit() const { DARABONBA_PTR_GET_DEFAULT(initCapaCityViewUnit_, "") };
      inline Items& setInitCapaCityViewUnit(string initCapaCityViewUnit) { DARABONBA_PTR_SET_VALUE(initCapaCityViewUnit_, initCapaCityViewUnit) };


      // initCapacityViewValue Field Functions 
      bool hasInitCapacityViewValue() const { return this->initCapacityViewValue_ != nullptr;};
      void deleteInitCapacityViewValue() { this->initCapacityViewValue_ = nullptr;};
      inline string getInitCapacityViewValue() const { DARABONBA_PTR_GET_DEFAULT(initCapacityViewValue_, "") };
      inline Items& setInitCapacityViewValue(string initCapacityViewValue) { DARABONBA_PTR_SET_VALUE(initCapacityViewValue_, initCapacityViewValue) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Items& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // periodCapaCityViewUnit Field Functions 
      bool hasPeriodCapaCityViewUnit() const { return this->periodCapaCityViewUnit_ != nullptr;};
      void deletePeriodCapaCityViewUnit() { this->periodCapaCityViewUnit_ = nullptr;};
      inline string getPeriodCapaCityViewUnit() const { DARABONBA_PTR_GET_DEFAULT(periodCapaCityViewUnit_, "") };
      inline Items& setPeriodCapaCityViewUnit(string periodCapaCityViewUnit) { DARABONBA_PTR_SET_VALUE(periodCapaCityViewUnit_, periodCapaCityViewUnit) };


      // periodCapacityViewValue Field Functions 
      bool hasPeriodCapacityViewValue() const { return this->periodCapacityViewValue_ != nullptr;};
      void deletePeriodCapacityViewValue() { this->periodCapacityViewValue_ = nullptr;};
      inline string getPeriodCapacityViewValue() const { DARABONBA_PTR_GET_DEFAULT(periodCapacityViewValue_, "") };
      inline Items& setPeriodCapacityViewValue(string periodCapacityViewValue) { DARABONBA_PTR_SET_VALUE(periodCapacityViewValue_, periodCapacityViewValue) };


      // periodTime Field Functions 
      bool hasPeriodTime() const { return this->periodTime_ != nullptr;};
      void deletePeriodTime() { this->periodTime_ = nullptr;};
      inline string getPeriodTime() const { DARABONBA_PTR_GET_DEFAULT(periodTime_, "") };
      inline Items& setPeriodTime(string periodTime) { DARABONBA_PTR_SET_VALUE(periodTime_, periodTime) };


      // prodCode Field Functions 
      bool hasProdCode() const { return this->prodCode_ != nullptr;};
      void deleteProdCode() { this->prodCode_ = nullptr;};
      inline string getProdCode() const { DARABONBA_PTR_GET_DEFAULT(prodCode_, "") };
      inline Items& setProdCode(string prodCode) { DARABONBA_PTR_SET_VALUE(prodCode_, prodCode) };


      // purchaseTimes Field Functions 
      bool hasPurchaseTimes() const { return this->purchaseTimes_ != nullptr;};
      void deletePurchaseTimes() { this->purchaseTimes_ = nullptr;};
      inline string getPurchaseTimes() const { DARABONBA_PTR_GET_DEFAULT(purchaseTimes_, "") };
      inline Items& setPurchaseTimes(string purchaseTimes) { DARABONBA_PTR_SET_VALUE(purchaseTimes_, purchaseTimes) };


      // startTimes Field Functions 
      bool hasStartTimes() const { return this->startTimes_ != nullptr;};
      void deleteStartTimes() { this->startTimes_ = nullptr;};
      inline string getStartTimes() const { DARABONBA_PTR_GET_DEFAULT(startTimes_, "") };
      inline Items& setStartTimes(string startTimes) { DARABONBA_PTR_SET_VALUE(startTimes_, startTimes) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline Items& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline Items& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    protected:
      // The Alibaba Cloud account ID.
      shared_ptr<string> aliUid_ {};
      // The commodity code.
      shared_ptr<string> commodityCode_ {};
      // The expiration time of the storage plan.
      shared_ptr<string> endTimes_ {};
      // The capacity unit of the storage plan.
      shared_ptr<string> initCapaCityViewUnit_ {};
      // The total capacity of the storage plan.
      shared_ptr<string> initCapacityViewValue_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The periodic capacity unit of the storage plan.
      shared_ptr<string> periodCapaCityViewUnit_ {};
      // The periodic capacity of the storage plan. The periodic capacity gradually decreases as the storage plan is used.
      shared_ptr<string> periodCapacityViewValue_ {};
      // The period duration, which indicates that the capacity of the storage plan is measured and consumed on an hourly basis.
      shared_ptr<string> periodTime_ {};
      // The product name.
      shared_ptr<string> prodCode_ {};
      // The purchase time of the storage plan.
      shared_ptr<string> purchaseTimes_ {};
      // The effective period of the storage plan.
      shared_ptr<string> startTimes_ {};
      // The status of the storage plan. Valid values:
      // 
      // - **Valid**: The storage plan is valid.
      // 
      // - **Invalid**: The storage plan is invalid.
      shared_ptr<string> status_ {};
      // The type of the storage plan. Valid values:
      // 
      // - **Overseas**: Hong Kong (China) and regions outside the Chinese mainland.
      // 
      // - **Mainland**: The Chinese mainland.
      // 
      // - **Financial**: Alibaba Finance Cloud.
      shared_ptr<string> storageType_ {};
      // The type of the resource plan. Valid values:
      // 
      //  - **FPT_polardb_package_absolute_1540888383**: The Chinese mainland.
      // 
      // - **FPT_polardb_package_absolute_1540890081**: Hong Kong (China) and regions outside the Chinese mainland.
      // 
      // - **FPT_polardb_package_absolute_1567151499**: Alibaba Finance Cloud.
      shared_ptr<string> templateName_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeStoragePlanResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeStoragePlanResponseBody::Items>) };
    inline vector<DescribeStoragePlanResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeStoragePlanResponseBody::Items>) };
    inline DescribeStoragePlanResponseBody& setItems(const vector<DescribeStoragePlanResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeStoragePlanResponseBody& setItems(vector<DescribeStoragePlanResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeStoragePlanResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeStoragePlanResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeStoragePlanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int64_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0L) };
    inline DescribeStoragePlanResponseBody& setTotalRecordCount(int64_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The list of storage plans.
    shared_ptr<vector<DescribeStoragePlanResponseBody::Items>> items_ {};
    // The page number. The value must be a positive integer that does not exceed the maximum value of the Integer data type.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page. Valid values:
    // 
    // - **30**
    // 
    // - **50**
    // 
    // - **100**
    shared_ptr<int64_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int64_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
