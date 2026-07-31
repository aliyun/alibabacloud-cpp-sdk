// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERRESOURCEPACKAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERRESOURCEPACKAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeUserResourcePackageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserResourcePackageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourcePackageInfos, resourcePackageInfos_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserResourcePackageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourcePackageInfos, resourcePackageInfos_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeUserResourcePackageResponseBody() = default ;
    DescribeUserResourcePackageResponseBody(const DescribeUserResourcePackageResponseBody &) = default ;
    DescribeUserResourcePackageResponseBody(DescribeUserResourcePackageResponseBody &&) = default ;
    DescribeUserResourcePackageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserResourcePackageResponseBody() = default ;
    DescribeUserResourcePackageResponseBody& operator=(const DescribeUserResourcePackageResponseBody &) = default ;
    DescribeUserResourcePackageResponseBody& operator=(DescribeUserResourcePackageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourcePackageInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourcePackageInfos& obj) { 
        DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(CurrCapacity, currCapacity_);
        DARABONBA_PTR_TO_JSON(CurrCapacityBaseUnit, currCapacityBaseUnit_);
        DARABONBA_PTR_TO_JSON(CurrCapacityShowUnit, currCapacityShowUnit_);
        DARABONBA_PTR_TO_JSON(CurrCapacityShowValue, currCapacityShowValue_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(InitCapacity, initCapacity_);
        DARABONBA_PTR_TO_JSON(InitCapacityBaseUnit, initCapacityBaseUnit_);
        DARABONBA_PTR_TO_JSON(InitCapacityShowUnit, initCapacityShowUnit_);
        DARABONBA_PTR_TO_JSON(InitCapacityShowValue, initCapacityShowValue_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      };
      friend void from_json(const Darabonba::Json& j, ResourcePackageInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(CurrCapacity, currCapacity_);
        DARABONBA_PTR_FROM_JSON(CurrCapacityBaseUnit, currCapacityBaseUnit_);
        DARABONBA_PTR_FROM_JSON(CurrCapacityShowUnit, currCapacityShowUnit_);
        DARABONBA_PTR_FROM_JSON(CurrCapacityShowValue, currCapacityShowValue_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(InitCapacity, initCapacity_);
        DARABONBA_PTR_FROM_JSON(InitCapacityBaseUnit, initCapacityBaseUnit_);
        DARABONBA_PTR_FROM_JSON(InitCapacityShowUnit, initCapacityShowUnit_);
        DARABONBA_PTR_FROM_JSON(InitCapacityShowValue, initCapacityShowValue_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      };
      ResourcePackageInfos() = default ;
      ResourcePackageInfos(const ResourcePackageInfos &) = default ;
      ResourcePackageInfos(ResourcePackageInfos &&) = default ;
      ResourcePackageInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourcePackageInfos() = default ;
      ResourcePackageInfos& operator=(const ResourcePackageInfos &) = default ;
      ResourcePackageInfos& operator=(ResourcePackageInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->commodityCode_ == nullptr
        && this->currCapacity_ == nullptr && this->currCapacityBaseUnit_ == nullptr && this->currCapacityShowUnit_ == nullptr && this->currCapacityShowValue_ == nullptr && this->displayName_ == nullptr
        && this->endTime_ == nullptr && this->initCapacity_ == nullptr && this->initCapacityBaseUnit_ == nullptr && this->initCapacityShowUnit_ == nullptr && this->initCapacityShowValue_ == nullptr
        && this->instanceId_ == nullptr && this->region_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->templateName_ == nullptr; };
      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline ResourcePackageInfos& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // currCapacity Field Functions 
      bool hasCurrCapacity() const { return this->currCapacity_ != nullptr;};
      void deleteCurrCapacity() { this->currCapacity_ = nullptr;};
      inline string getCurrCapacity() const { DARABONBA_PTR_GET_DEFAULT(currCapacity_, "") };
      inline ResourcePackageInfos& setCurrCapacity(string currCapacity) { DARABONBA_PTR_SET_VALUE(currCapacity_, currCapacity) };


      // currCapacityBaseUnit Field Functions 
      bool hasCurrCapacityBaseUnit() const { return this->currCapacityBaseUnit_ != nullptr;};
      void deleteCurrCapacityBaseUnit() { this->currCapacityBaseUnit_ = nullptr;};
      inline string getCurrCapacityBaseUnit() const { DARABONBA_PTR_GET_DEFAULT(currCapacityBaseUnit_, "") };
      inline ResourcePackageInfos& setCurrCapacityBaseUnit(string currCapacityBaseUnit) { DARABONBA_PTR_SET_VALUE(currCapacityBaseUnit_, currCapacityBaseUnit) };


      // currCapacityShowUnit Field Functions 
      bool hasCurrCapacityShowUnit() const { return this->currCapacityShowUnit_ != nullptr;};
      void deleteCurrCapacityShowUnit() { this->currCapacityShowUnit_ = nullptr;};
      inline string getCurrCapacityShowUnit() const { DARABONBA_PTR_GET_DEFAULT(currCapacityShowUnit_, "") };
      inline ResourcePackageInfos& setCurrCapacityShowUnit(string currCapacityShowUnit) { DARABONBA_PTR_SET_VALUE(currCapacityShowUnit_, currCapacityShowUnit) };


      // currCapacityShowValue Field Functions 
      bool hasCurrCapacityShowValue() const { return this->currCapacityShowValue_ != nullptr;};
      void deleteCurrCapacityShowValue() { this->currCapacityShowValue_ = nullptr;};
      inline string getCurrCapacityShowValue() const { DARABONBA_PTR_GET_DEFAULT(currCapacityShowValue_, "") };
      inline ResourcePackageInfos& setCurrCapacityShowValue(string currCapacityShowValue) { DARABONBA_PTR_SET_VALUE(currCapacityShowValue_, currCapacityShowValue) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline ResourcePackageInfos& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline ResourcePackageInfos& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // initCapacity Field Functions 
      bool hasInitCapacity() const { return this->initCapacity_ != nullptr;};
      void deleteInitCapacity() { this->initCapacity_ = nullptr;};
      inline string getInitCapacity() const { DARABONBA_PTR_GET_DEFAULT(initCapacity_, "") };
      inline ResourcePackageInfos& setInitCapacity(string initCapacity) { DARABONBA_PTR_SET_VALUE(initCapacity_, initCapacity) };


      // initCapacityBaseUnit Field Functions 
      bool hasInitCapacityBaseUnit() const { return this->initCapacityBaseUnit_ != nullptr;};
      void deleteInitCapacityBaseUnit() { this->initCapacityBaseUnit_ = nullptr;};
      inline string getInitCapacityBaseUnit() const { DARABONBA_PTR_GET_DEFAULT(initCapacityBaseUnit_, "") };
      inline ResourcePackageInfos& setInitCapacityBaseUnit(string initCapacityBaseUnit) { DARABONBA_PTR_SET_VALUE(initCapacityBaseUnit_, initCapacityBaseUnit) };


      // initCapacityShowUnit Field Functions 
      bool hasInitCapacityShowUnit() const { return this->initCapacityShowUnit_ != nullptr;};
      void deleteInitCapacityShowUnit() { this->initCapacityShowUnit_ = nullptr;};
      inline string getInitCapacityShowUnit() const { DARABONBA_PTR_GET_DEFAULT(initCapacityShowUnit_, "") };
      inline ResourcePackageInfos& setInitCapacityShowUnit(string initCapacityShowUnit) { DARABONBA_PTR_SET_VALUE(initCapacityShowUnit_, initCapacityShowUnit) };


      // initCapacityShowValue Field Functions 
      bool hasInitCapacityShowValue() const { return this->initCapacityShowValue_ != nullptr;};
      void deleteInitCapacityShowValue() { this->initCapacityShowValue_ = nullptr;};
      inline string getInitCapacityShowValue() const { DARABONBA_PTR_GET_DEFAULT(initCapacityShowValue_, "") };
      inline ResourcePackageInfos& setInitCapacityShowValue(string initCapacityShowValue) { DARABONBA_PTR_SET_VALUE(initCapacityShowValue_, initCapacityShowValue) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ResourcePackageInfos& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline ResourcePackageInfos& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline ResourcePackageInfos& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ResourcePackageInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline ResourcePackageInfos& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    protected:
      // The commodity code of the resource plan.
      shared_ptr<string> commodityCode_ {};
      // The current remaining capacity of the instance.
      // - Unit for traffic plans: bytes.
      // 
      // - Unit for request plans: count.
      shared_ptr<string> currCapacity_ {};
      // The base unit of the current remaining capacity of the instance.
      shared_ptr<string> currCapacityBaseUnit_ {};
      // The display unit of the current remaining capacity of the instance.
      shared_ptr<string> currCapacityShowUnit_ {};
      // The display value of the current remaining capacity of the instance.
      shared_ptr<string> currCapacityShowValue_ {};
      // The name of the resource plan.
      shared_ptr<string> displayName_ {};
      // The expiration time.
      shared_ptr<string> endTime_ {};
      // The total capacity of the resource plan.
      // - Unit for traffic plans: bytes.
      // 
      // - Unit for request plans: count.
      shared_ptr<string> initCapacity_ {};
      // The base unit of the total capacity of the resource plan.
      shared_ptr<string> initCapacityBaseUnit_ {};
      // The display unit of the total capacity of the resource plan.
      shared_ptr<string> initCapacityShowUnit_ {};
      // The display value of the total capacity of the resource plan.
      shared_ptr<string> initCapacityShowValue_ {};
      // The resource plan instance ID.
      shared_ptr<string> instanceId_ {};
      // The region.
      shared_ptr<string> region_ {};
      // The effective period.
      shared_ptr<string> startTime_ {};
      // The status of the resource plan.
      shared_ptr<string> status_ {};
      // The template name.
      shared_ptr<string> templateName_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->resourcePackageInfos_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeUserResourcePackageResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeUserResourcePackageResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserResourcePackageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourcePackageInfos Field Functions 
    bool hasResourcePackageInfos() const { return this->resourcePackageInfos_ != nullptr;};
    void deleteResourcePackageInfos() { this->resourcePackageInfos_ = nullptr;};
    inline const vector<DescribeUserResourcePackageResponseBody::ResourcePackageInfos> & getResourcePackageInfos() const { DARABONBA_PTR_GET_CONST(resourcePackageInfos_, vector<DescribeUserResourcePackageResponseBody::ResourcePackageInfos>) };
    inline vector<DescribeUserResourcePackageResponseBody::ResourcePackageInfos> getResourcePackageInfos() { DARABONBA_PTR_GET(resourcePackageInfos_, vector<DescribeUserResourcePackageResponseBody::ResourcePackageInfos>) };
    inline DescribeUserResourcePackageResponseBody& setResourcePackageInfos(const vector<DescribeUserResourcePackageResponseBody::ResourcePackageInfos> & resourcePackageInfos) { DARABONBA_PTR_SET_VALUE(resourcePackageInfos_, resourcePackageInfos) };
    inline DescribeUserResourcePackageResponseBody& setResourcePackageInfos(vector<DescribeUserResourcePackageResponseBody::ResourcePackageInfos> && resourcePackageInfos) { DARABONBA_PTR_SET_RVALUE(resourcePackageInfos_, resourcePackageInfos) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeUserResourcePackageResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The current page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The array of ResourcePackageInfo objects.
    shared_ptr<vector<DescribeUserResourcePackageResponseBody::ResourcePackageInfos>> resourcePackageInfos_ {};
    // The total number of records.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
