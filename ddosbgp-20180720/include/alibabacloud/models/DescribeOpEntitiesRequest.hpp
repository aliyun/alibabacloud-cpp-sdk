// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOPENTITIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOPENTITIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddosbgp20180720
{
namespace Models
{
  class DescribeOpEntitiesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOpEntitiesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OpAction, opAction_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(OrderDir, orderDir_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOpEntitiesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OpAction, opAction_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(OrderDir, orderDir_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeOpEntitiesRequest() = default ;
    DescribeOpEntitiesRequest(const DescribeOpEntitiesRequest &) = default ;
    DescribeOpEntitiesRequest(DescribeOpEntitiesRequest &&) = default ;
    DescribeOpEntitiesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOpEntitiesRequest() = default ;
    DescribeOpEntitiesRequest& operator=(const DescribeOpEntitiesRequest &) = default ;
    DescribeOpEntitiesRequest& operator=(DescribeOpEntitiesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->endTime_ == nullptr && this->instanceId_ == nullptr && this->opAction_ == nullptr && this->orderBy_ == nullptr && this->orderDir_ == nullptr
        && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->startTime_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeOpEntitiesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeOpEntitiesRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeOpEntitiesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // opAction Field Functions 
    bool hasOpAction() const { return this->opAction_ != nullptr;};
    void deleteOpAction() { this->opAction_ = nullptr;};
    inline int32_t getOpAction() const { DARABONBA_PTR_GET_DEFAULT(opAction_, 0) };
    inline DescribeOpEntitiesRequest& setOpAction(int32_t opAction) { DARABONBA_PTR_SET_VALUE(opAction_, opAction) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline DescribeOpEntitiesRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // orderDir Field Functions 
    bool hasOrderDir() const { return this->orderDir_ != nullptr;};
    void deleteOrderDir() { this->orderDir_ = nullptr;};
    inline string getOrderDir() const { DARABONBA_PTR_GET_DEFAULT(orderDir_, "") };
    inline DescribeOpEntitiesRequest& setOrderDir(string orderDir) { DARABONBA_PTR_SET_VALUE(orderDir_, orderDir) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeOpEntitiesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeOpEntitiesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeOpEntitiesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeOpEntitiesRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The paging Settings for the current page number in a paged query.
    // 
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    // The end of the time range to query. The value is a UNIX timestamp in milliseconds. Operation logs generated before this time are queried.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The ID of the Anti-DDoS Origin instance to query.
    // 
    // > You can call the [DescribeInstanceList](https://help.aliyun.com/document_detail/118698.html) operation to query the IDs of all Anti-DDoS Origin instances.
    shared_ptr<string> instanceId_ {};
    // The operation type. Valid values:
    // - **3**: attach an IP address
    // - **4**: unbind an IP address
    // - **5**: decrease the quota
    // - **6**: deactivate blackhole filtering
    // - **7**: Reset quota on blackhole filtering deactivation
    // - **8**: recover burstable protection
    // - **9**: add an Asset group
    // - **10**: delete an Asset group
    // - **11**: enable daily 95th percentile bandwidth
    // - **12**: enable monthly 95th percentile bandwidth
    // - **13**: periodically switch between daily and monthly 95th percentile bandwidth patterns
    // - **14**: shutdown daily 95th percentile bandwidth
    // - **15**: shutdown monthly 95th percentile bandwidth
    // - **16**: shutdown burstable clean bandwidth due to overdue payments
    // - **17**: shutdown burstable clean bandwidth when they expire
    shared_ptr<int32_t> opAction_ {};
    // The field by which to sort the operation logs. Set the value to **opdate**, which indicates that the operation logs are sorted by operation time.
    shared_ptr<string> orderBy_ {};
    // The sort order of the operation logs. Valid values:
    // 
    // - **ASC**: ascending order
    // - **DESC**: descending order
    // 
    // Default value: **DESC**.
    shared_ptr<string> orderDir_ {};
    // The paging Settings for the number of Operation logs per page in a paged query. Maximum value: 50.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID of the Anti-DDoS Origin instance.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/118703.html) operation to query the IDs of all regions supported by Anti-DDoS Origin.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the Anti-DDoS Origin instance belongs in Resource Management.
    // 
    // If you do not specify this parameter, the default resource group is used.
    shared_ptr<string> resourceGroupId_ {};
    // The beginning of the time range to query. The value is a UNIX timestamp in milliseconds. Operation logs generated after this time are queried.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif
