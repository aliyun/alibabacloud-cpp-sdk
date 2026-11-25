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
    // Ensures the idempotence of the request.
    // 
    // You can generate a parameter value from your client to ensure that the value is unique across different requests. The value can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25965.html).
    shared_ptr<string> clientToken_ {};
    // The next action to perform after the wait state of the lifecycle hook ends. Valid values:
    // - CONTINUE: Continues the scale-out activity and adds the ECS instance to the scaling group, or continues the scale-in activity and removes the ECS instance from the scaling group.
    // - ABANDON: Terminates the scale-out activity and releases the created ECS instance, or continues the scale-in activity and removes the ECS instance from the scaling group.
    // - ROLLBACK: Rejects the release of the ECS instance and performs a rollback for a scale-in activity. For a scale-out activity, the effect is the same as ABANDON.
    // 
    // If you do not specify this parameter, the next action after the wait state of the lifecycle hook ends remains the `DefaultResult` value configured for the lifecycle hook.
    // 
    // If multiple lifecycle hooks exist in the scaling group and are triggered simultaneously, the final next action is determined as follows:
    // - For a scale-in activity, when the wait state triggered by an ABANDON or ROLLBACK lifecycle hook ends, the wait states of subsequent lifecycle hooks are ended in advance.
    // - If the lifecycle hook that suspends the scale-in activity is of the CONTINUE type, or for a scale-out activity, subsequent lifecycle hooks continue to suspend the scaling activity until the wait state triggered by the last lifecycle hook ends. The final next action is determined by the type of the last lifecycle hook that ends the wait state.
    shared_ptr<string> lifecycleActionResult_ {};
    // The identifier of the wait state for the scaling activity. You can obtain this value from the Message Service (MNS) queue or MNS topic specified by the lifecycle hook.
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
