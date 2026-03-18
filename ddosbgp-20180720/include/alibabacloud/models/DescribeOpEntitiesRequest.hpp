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
    // The page number.
    // 
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    // The end time. Operation logs that were generated before this time are queried.**** The value is a UNIX timestamp. Unit: milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The ID of the instance to query.
    // 
    // > You can call the [DescribeInstanceList](https://help.aliyun.com/document_detail/118698.html) operation to query the IDs of all instances.
    shared_ptr<string> instanceId_ {};
    // The type of the operation. Valid values:
    // 
    // *   **3**: Add an IP address to the instance.
    // *   **4**: Remove an IP address from the instance.
    // *   **5**: Downgrade the instance.
    // *   **6**: Deactivate blackhole filtering.
    // *   **7**: Reset the number of times that you can deactivate blackhole filtering.
    // *   **8**: Restore the mitigation capability.
    // *   **9**: Add an asset group.
    // *   **10**: Remove an asset group.
    // *   **11**: Enable the metering method of daily 95th percentile for the burstable clean bandwidth feature.
    // *   **12**: Enable the metering method of monthly 95th percentile for the burstable clean bandwidth feature.
    // *   **13**: Periodically switch between the metering methods of daily 95th percentile and monthly 95th percentile for the burstable clean bandwidth feature.
    // *   **14**: Disable the metering method of daily 95th percentile for the burstable clean bandwidth feature.
    // *   **15**: Disable the metering method of monthly 95th percentile for the burstable clean bandwidth feature.
    // *   **16**: Disable burstable clean bandwidth due to overdue payments.
    // *   **17**: Disable burstable clean bandwidth due to instance expiration.
    shared_ptr<int32_t> opAction_ {};
    // The sorting method of operation logs. Set the value to **opdate**, which indicates sorting based on the operation time.
    shared_ptr<string> orderBy_ {};
    // The sort order of operation logs. Valid values:
    // 
    // *   **ASC**: the ascending order.
    // *   **DESC**: the descending order.
    // 
    // Default value: **DESC**.
    shared_ptr<string> orderDir_ {};
    // The number of entries per page. Maximum value: 50.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the region where the instance resides.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/118703.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the instance belongs in Resource Management.
    // 
    // If you do not specify this parameter, the instance belongs to the default resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The start time. Operation logs that were generated after this time are queried.**** The value is a UNIX timestamp. Unit: milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif
