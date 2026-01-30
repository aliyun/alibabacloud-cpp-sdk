// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPLETELIFECYCLEACTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COMPLETELIFECYCLEACTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CompleteLifecycleActionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompleteLifecycleActionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(LifecycleActionResult, lifecycleActionResult_);
      DARABONBA_PTR_TO_JSON(LifecycleActionToken, lifecycleActionToken_);
      DARABONBA_PTR_TO_JSON(LifecycleHookId, lifecycleHookId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
    };
    friend void from_json(const Darabonba::Json& j, CompleteLifecycleActionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(LifecycleActionResult, lifecycleActionResult_);
      DARABONBA_PTR_FROM_JSON(LifecycleActionToken, lifecycleActionToken_);
      DARABONBA_PTR_FROM_JSON(LifecycleHookId, lifecycleHookId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
    };
    CompleteLifecycleActionRequest() = default ;
    CompleteLifecycleActionRequest(const CompleteLifecycleActionRequest &) = default ;
    CompleteLifecycleActionRequest(CompleteLifecycleActionRequest &&) = default ;
    CompleteLifecycleActionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompleteLifecycleActionRequest() = default ;
    CompleteLifecycleActionRequest& operator=(const CompleteLifecycleActionRequest &) = default ;
    CompleteLifecycleActionRequest& operator=(CompleteLifecycleActionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->lifecycleActionResult_ == nullptr && this->lifecycleActionToken_ == nullptr && this->lifecycleHookId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CompleteLifecycleActionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // lifecycleActionResult Field Functions 
    bool hasLifecycleActionResult() const { return this->lifecycleActionResult_ != nullptr;};
    void deleteLifecycleActionResult() { this->lifecycleActionResult_ = nullptr;};
    inline string getLifecycleActionResult() const { DARABONBA_PTR_GET_DEFAULT(lifecycleActionResult_, "") };
    inline CompleteLifecycleActionRequest& setLifecycleActionResult(string lifecycleActionResult) { DARABONBA_PTR_SET_VALUE(lifecycleActionResult_, lifecycleActionResult) };


    // lifecycleActionToken Field Functions 
    bool hasLifecycleActionToken() const { return this->lifecycleActionToken_ != nullptr;};
    void deleteLifecycleActionToken() { this->lifecycleActionToken_ = nullptr;};
    inline string getLifecycleActionToken() const { DARABONBA_PTR_GET_DEFAULT(lifecycleActionToken_, "") };
    inline CompleteLifecycleActionRequest& setLifecycleActionToken(string lifecycleActionToken) { DARABONBA_PTR_SET_VALUE(lifecycleActionToken_, lifecycleActionToken) };


    // lifecycleHookId Field Functions 
    bool hasLifecycleHookId() const { return this->lifecycleHookId_ != nullptr;};
    void deleteLifecycleHookId() { this->lifecycleHookId_ = nullptr;};
    inline string getLifecycleHookId() const { DARABONBA_PTR_GET_DEFAULT(lifecycleHookId_, "") };
    inline CompleteLifecycleActionRequest& setLifecycleHookId(string lifecycleHookId) { DARABONBA_PTR_SET_VALUE(lifecycleHookId_, lifecycleHookId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CompleteLifecycleActionRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CompleteLifecycleActionRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CompleteLifecycleActionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CompleteLifecycleActionRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [Ensure idempotence](https://help.aliyun.com/document_detail/25965.html).
    shared_ptr<string> clientToken_ {};
    // The action that you want Auto Scaling to perform after the lifecycle hook times out. Valid values:
    // 
    // *   CONTINUE: Auto Scaling continues to respond to a scale-in or scale-out request.
    // *   ABANDON: Auto Scaling releases Elastic Compute Service (ECS) instances that are created during scale-out activities or removes ECS instances from the scaling group during scale-in activities.
    // *   ROLLBACK: For scale-in activities, Auto Scaling rejects the requests to release ECS instances but rolls back ECS instances. For scale-out activities, the ROLLBACK setting has the same effect as the ABANDON setting.
    // 
    // If you do not specify this parameter, Auto Scaling performs the action that is specified by the `DefaultResult` parameter after the lifecycle hook times out.
    // 
    // If multiple lifecycle hooks exist in a scaling group and the lifecycle hooks are triggered at the same time, the following rules apply:
    // 
    // *   For scale-in activities, when lifecycle hooks whose LifecycleActionResult parameter is set to ABANDON or ROLLBACK time out, other lifecycle hooks time out ahead of schedule.
    // *   For scale-in and scale-out activities, if you set the LifecycleActionResult parameter for all lifecycle hooks to CONTINUE, Auto Scaling performs the next action only after the last lifecycle hook times out. The action that Auto Scaling performs varies based on the value that you specify for the LifecycleActionResult parameter of the lifecycle hook that last times out.
    shared_ptr<string> lifecycleActionResult_ {};
    // The token of the lifecycle action. You can obtain the token from the Simple Message Queue (SMQ, formerly MNS) queue or topic that is specified for the lifecycle hook.
    // 
    // This parameter is required.
    shared_ptr<string> lifecycleActionToken_ {};
    // The ID of the lifecycle hook.
    // 
    // This parameter is required.
    shared_ptr<string> lifecycleHookId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the scaling group.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
