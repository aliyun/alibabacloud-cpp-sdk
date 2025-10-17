// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESFULLSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESFULLSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstancesFullStatusRequestEventPublishTime.hpp>
#include <alibabacloud/models/DescribeInstancesFullStatusRequestNotBefore.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstancesFullStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesFullStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventPublishTime, eventPublishTime_);
      DARABONBA_PTR_TO_JSON(NotBefore, notBefore_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_TO_JSON(InstanceEventType, instanceEventType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesFullStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventPublishTime, eventPublishTime_);
      DARABONBA_PTR_FROM_JSON(NotBefore, notBefore_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceEventType, instanceEventType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeInstancesFullStatusRequest() = default ;
    DescribeInstancesFullStatusRequest(const DescribeInstancesFullStatusRequest &) = default ;
    DescribeInstancesFullStatusRequest(DescribeInstancesFullStatusRequest &&) = default ;
    DescribeInstancesFullStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesFullStatusRequest() = default ;
    DescribeInstancesFullStatusRequest& operator=(const DescribeInstancesFullStatusRequest &) = default ;
    DescribeInstancesFullStatusRequest& operator=(DescribeInstancesFullStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventPublishTime_ == nullptr
        && return this->notBefore_ == nullptr && return this->eventId_ == nullptr && return this->eventType_ == nullptr && return this->healthStatus_ == nullptr && return this->instanceEventType_ == nullptr
        && return this->instanceId_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->status_ == nullptr; };
    // eventPublishTime Field Functions 
    bool hasEventPublishTime() const { return this->eventPublishTime_ != nullptr;};
    void deleteEventPublishTime() { this->eventPublishTime_ = nullptr;};
    inline const DescribeInstancesFullStatusRequestEventPublishTime & eventPublishTime() const { DARABONBA_PTR_GET_CONST(eventPublishTime_, DescribeInstancesFullStatusRequestEventPublishTime) };
    inline DescribeInstancesFullStatusRequestEventPublishTime eventPublishTime() { DARABONBA_PTR_GET(eventPublishTime_, DescribeInstancesFullStatusRequestEventPublishTime) };
    inline DescribeInstancesFullStatusRequest& setEventPublishTime(const DescribeInstancesFullStatusRequestEventPublishTime & eventPublishTime) { DARABONBA_PTR_SET_VALUE(eventPublishTime_, eventPublishTime) };
    inline DescribeInstancesFullStatusRequest& setEventPublishTime(DescribeInstancesFullStatusRequestEventPublishTime && eventPublishTime) { DARABONBA_PTR_SET_RVALUE(eventPublishTime_, eventPublishTime) };


    // notBefore Field Functions 
    bool hasNotBefore() const { return this->notBefore_ != nullptr;};
    void deleteNotBefore() { this->notBefore_ = nullptr;};
    inline const DescribeInstancesFullStatusRequestNotBefore & notBefore() const { DARABONBA_PTR_GET_CONST(notBefore_, DescribeInstancesFullStatusRequestNotBefore) };
    inline DescribeInstancesFullStatusRequestNotBefore notBefore() { DARABONBA_PTR_GET(notBefore_, DescribeInstancesFullStatusRequestNotBefore) };
    inline DescribeInstancesFullStatusRequest& setNotBefore(const DescribeInstancesFullStatusRequestNotBefore & notBefore) { DARABONBA_PTR_SET_VALUE(notBefore_, notBefore) };
    inline DescribeInstancesFullStatusRequest& setNotBefore(DescribeInstancesFullStatusRequestNotBefore && notBefore) { DARABONBA_PTR_SET_RVALUE(notBefore_, notBefore) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline const vector<string> & eventId() const { DARABONBA_PTR_GET_CONST(eventId_, vector<string>) };
    inline vector<string> eventId() { DARABONBA_PTR_GET(eventId_, vector<string>) };
    inline DescribeInstancesFullStatusRequest& setEventId(const vector<string> & eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };
    inline DescribeInstancesFullStatusRequest& setEventId(vector<string> && eventId) { DARABONBA_PTR_SET_RVALUE(eventId_, eventId) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeInstancesFullStatusRequest& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // healthStatus Field Functions 
    bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
    void deleteHealthStatus() { this->healthStatus_ = nullptr;};
    inline string healthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
    inline DescribeInstancesFullStatusRequest& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


    // instanceEventType Field Functions 
    bool hasInstanceEventType() const { return this->instanceEventType_ != nullptr;};
    void deleteInstanceEventType() { this->instanceEventType_ = nullptr;};
    inline const vector<string> & instanceEventType() const { DARABONBA_PTR_GET_CONST(instanceEventType_, vector<string>) };
    inline vector<string> instanceEventType() { DARABONBA_PTR_GET(instanceEventType_, vector<string>) };
    inline DescribeInstancesFullStatusRequest& setInstanceEventType(const vector<string> & instanceEventType) { DARABONBA_PTR_SET_VALUE(instanceEventType_, instanceEventType) };
    inline DescribeInstancesFullStatusRequest& setInstanceEventType(vector<string> && instanceEventType) { DARABONBA_PTR_SET_RVALUE(instanceEventType_, instanceEventType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline const vector<string> & instanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, vector<string>) };
    inline vector<string> instanceId() { DARABONBA_PTR_GET(instanceId_, vector<string>) };
    inline DescribeInstancesFullStatusRequest& setInstanceId(const vector<string> & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
    inline DescribeInstancesFullStatusRequest& setInstanceId(vector<string> && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeInstancesFullStatusRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeInstancesFullStatusRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeInstancesFullStatusRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInstancesFullStatusRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeInstancesFullStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeInstancesFullStatusRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeInstancesFullStatusRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeInstancesFullStatusRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<DescribeInstancesFullStatusRequestEventPublishTime> eventPublishTime_ = nullptr;
    std::shared_ptr<DescribeInstancesFullStatusRequestNotBefore> notBefore_ = nullptr;
    // The IDs of the system events. You can specify up to 100 event IDs in a single request.
    std::shared_ptr<vector<string>> eventId_ = nullptr;
    // The type of the system event. This parameter is valid only when InstanceEventType.N is not specified. Valid values:
    // 
    // *   SystemMaintenance.Reboot: The instance is restarted due to system maintenance.
    // *   SystemFailure.Reboot: The instance is restarted due to a system failure.
    // *   InstanceFailure.Reboot: The instance is restarted due to an instance failure.
    // *   InstanceExpiration.Stop: The subscription instance is stopped due to expiration.
    // *   InstanceExpiration.Delete: The subscription instance is released due to expiration.
    // *   AccountUnbalanced.Stop: The pay-as-you-go instance is stopped due to an overdue payment.
    // *   AccountUnbalanced.Delete: The pay-as-you-go instance is released due to an overdue payment.
    std::shared_ptr<string> eventType_ = nullptr;
    // The health status of the instance. Valid values:
    // 
    // *   OK
    // *   Impaired
    // *   Initializing
    // *   InsufficientData
    // *   NotApplicable
    // 
    // All the values are case-sensitive.
    std::shared_ptr<string> healthStatus_ = nullptr;
    // The types of system events. You can specify up to 30 event types in a single request.
    std::shared_ptr<vector<string>> instanceEventType_ = nullptr;
    // The IDs of the instances. You can specify up to 100 instance IDs in a single request.
    std::shared_ptr<vector<string>> instanceId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The page number. The value must be a positive integer.
    // 
    // Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: 1 to 100.
    // 
    // Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The region ID of the instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The lifecycle status of the instance. Valid values:
    // 
    // *   Starting
    // *   Running
    // *   Stopped
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
