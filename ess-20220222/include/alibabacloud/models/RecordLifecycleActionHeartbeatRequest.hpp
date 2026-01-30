// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECORDLIFECYCLEACTIONHEARTBEATREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECORDLIFECYCLEACTIONHEARTBEATREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class RecordLifecycleActionHeartbeatRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecordLifecycleActionHeartbeatRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(heartbeatTimeout, heartbeatTimeout_);
      DARABONBA_PTR_TO_JSON(lifecycleActionToken, lifecycleActionToken_);
      DARABONBA_PTR_TO_JSON(lifecycleHookId, lifecycleHookId_);
    };
    friend void from_json(const Darabonba::Json& j, RecordLifecycleActionHeartbeatRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(heartbeatTimeout, heartbeatTimeout_);
      DARABONBA_PTR_FROM_JSON(lifecycleActionToken, lifecycleActionToken_);
      DARABONBA_PTR_FROM_JSON(lifecycleHookId, lifecycleHookId_);
    };
    RecordLifecycleActionHeartbeatRequest() = default ;
    RecordLifecycleActionHeartbeatRequest(const RecordLifecycleActionHeartbeatRequest &) = default ;
    RecordLifecycleActionHeartbeatRequest(RecordLifecycleActionHeartbeatRequest &&) = default ;
    RecordLifecycleActionHeartbeatRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecordLifecycleActionHeartbeatRequest() = default ;
    RecordLifecycleActionHeartbeatRequest& operator=(const RecordLifecycleActionHeartbeatRequest &) = default ;
    RecordLifecycleActionHeartbeatRequest& operator=(RecordLifecycleActionHeartbeatRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->heartbeatTimeout_ == nullptr && this->lifecycleActionToken_ == nullptr
        && this->lifecycleHookId_ == nullptr; };
    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline RecordLifecycleActionHeartbeatRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RecordLifecycleActionHeartbeatRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RecordLifecycleActionHeartbeatRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline RecordLifecycleActionHeartbeatRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // heartbeatTimeout Field Functions 
    bool hasHeartbeatTimeout() const { return this->heartbeatTimeout_ != nullptr;};
    void deleteHeartbeatTimeout() { this->heartbeatTimeout_ = nullptr;};
    inline int32_t getHeartbeatTimeout() const { DARABONBA_PTR_GET_DEFAULT(heartbeatTimeout_, 0) };
    inline RecordLifecycleActionHeartbeatRequest& setHeartbeatTimeout(int32_t heartbeatTimeout) { DARABONBA_PTR_SET_VALUE(heartbeatTimeout_, heartbeatTimeout) };


    // lifecycleActionToken Field Functions 
    bool hasLifecycleActionToken() const { return this->lifecycleActionToken_ != nullptr;};
    void deleteLifecycleActionToken() { this->lifecycleActionToken_ = nullptr;};
    inline string getLifecycleActionToken() const { DARABONBA_PTR_GET_DEFAULT(lifecycleActionToken_, "") };
    inline RecordLifecycleActionHeartbeatRequest& setLifecycleActionToken(string lifecycleActionToken) { DARABONBA_PTR_SET_VALUE(lifecycleActionToken_, lifecycleActionToken) };


    // lifecycleHookId Field Functions 
    bool hasLifecycleHookId() const { return this->lifecycleHookId_ != nullptr;};
    void deleteLifecycleHookId() { this->lifecycleHookId_ = nullptr;};
    inline string getLifecycleHookId() const { DARABONBA_PTR_GET_DEFAULT(lifecycleHookId_, "") };
    inline RecordLifecycleActionHeartbeatRequest& setLifecycleHookId(string lifecycleHookId) { DARABONBA_PTR_SET_VALUE(lifecycleHookId_, lifecycleHookId) };


  protected:
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the scaling group.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    // The time window during which the ECS instance stays in a Pending state. When the time window ends, Auto Scaling executes the default action. Valid values: 30 to 21600. Unit: seconds.
    // 
    // After you create a lifecycle hook, you can call this operation to extend the time window during which the ECS instance stays in a Pending state. You can also call the [CompleteLifecycleAction](https://help.aliyun.com/document_detail/459335.html) operation to remove the ECS instance from the Pending state ahead of schedule.
    // 
    // Default value: 600.
    shared_ptr<int32_t> heartbeatTimeout_ {};
    // The action token of the lifecycle hook. You can obtain the token from the details page of the Simple Message Queue (SMQ, formerly MNS) queue specified for the lifecycle hook.
    // 
    // You can also call the [DescribeLifecycleActions](https://help.aliyun.com/document_detail/459333.html) operation to obtain the action token of the lifecycle hook.
    // 
    // If you specified an SMQ topic for the lifecycle hook, you can obtain the token from the MNS topic.
    // 
    // This parameter is required.
    shared_ptr<string> lifecycleActionToken_ {};
    // The ID of the lifecycle hook.
    // 
    // This parameter is required.
    shared_ptr<string> lifecycleHookId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
