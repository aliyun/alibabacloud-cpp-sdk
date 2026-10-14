// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYACTIVEOPERATIONTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYACTIVEOPERATIONTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyActiveOperationTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyActiveOperationTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImmediateStart, immediateStart_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_TO_JSON(TaskIds, taskIds_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyActiveOperationTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImmediateStart, immediateStart_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_FROM_JSON(TaskIds, taskIds_);
    };
    ModifyActiveOperationTasksRequest() = default ;
    ModifyActiveOperationTasksRequest(const ModifyActiveOperationTasksRequest &) = default ;
    ModifyActiveOperationTasksRequest(ModifyActiveOperationTasksRequest &&) = default ;
    ModifyActiveOperationTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyActiveOperationTasksRequest() = default ;
    ModifyActiveOperationTasksRequest& operator=(const ModifyActiveOperationTasksRequest &) = default ;
    ModifyActiveOperationTasksRequest& operator=(ModifyActiveOperationTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->immediateStart_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->securityToken_ == nullptr && this->switchTime_ == nullptr && this->taskIds_ == nullptr; };
    // immediateStart Field Functions 
    bool hasImmediateStart() const { return this->immediateStart_ != nullptr;};
    void deleteImmediateStart() { this->immediateStart_ = nullptr;};
    inline int32_t getImmediateStart() const { DARABONBA_PTR_GET_DEFAULT(immediateStart_, 0) };
    inline ModifyActiveOperationTasksRequest& setImmediateStart(int32_t immediateStart) { DARABONBA_PTR_SET_VALUE(immediateStart_, immediateStart) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyActiveOperationTasksRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyActiveOperationTasksRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyActiveOperationTasksRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyActiveOperationTasksRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyActiveOperationTasksRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ModifyActiveOperationTasksRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // switchTime Field Functions 
    bool hasSwitchTime() const { return this->switchTime_ != nullptr;};
    void deleteSwitchTime() { this->switchTime_ = nullptr;};
    inline string getSwitchTime() const { DARABONBA_PTR_GET_DEFAULT(switchTime_, "") };
    inline ModifyActiveOperationTasksRequest& setSwitchTime(string switchTime) { DARABONBA_PTR_SET_VALUE(switchTime_, switchTime) };


    // taskIds Field Functions 
    bool hasTaskIds() const { return this->taskIds_ != nullptr;};
    void deleteTaskIds() { this->taskIds_ = nullptr;};
    inline string getTaskIds() const { DARABONBA_PTR_GET_DEFAULT(taskIds_, "") };
    inline ModifyActiveOperationTasksRequest& setTaskIds(string taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };


  protected:
    // Specifies whether to immediately start execution scheduling.
    // 
    // - 0: No (default).
    // - 1: Yes.
    // 
    // >- If the value is 0, the SwitchTime parameter is required.
    // >- If the value is 1, the SwitchTime parameter does not take effect. The event start time is set to the current time, and the switchover time is automatically calculated based on the new start time. The event immediately enters execution scheduling (not an immediate switchover) and begins pre-switchover preparations. The switchover is performed after the preparations are complete. You can call the DescribeActiveOperationTasks operation and obtain the preparation time from the PrepareInterval response parameter.
    shared_ptr<int32_t> immediateStart_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID.
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/98041.html) operation to query the region information of all clusters under the target account.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<string> securityToken_ {};
    // The planned switchover time to set. Specify the time in the yyyy-MM-ddTHH:mm:ssZ format (UTC).
    // 
    // > 
    // > - The time cannot be later than the deadline.
    // > - You can call the DescribeActiveOperationTasks operation and obtain the deadline from the Deadline response parameter.
    shared_ptr<string> switchTime_ {};
    // The list of task IDs.
    // 
    // This parameter is required.
    shared_ptr<string> taskIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
