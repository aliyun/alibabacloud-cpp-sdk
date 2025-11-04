// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DetachInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DecreaseDesiredCapacity, decreaseDesiredCapacity_);
      DARABONBA_PTR_TO_JSON(DetachOption, detachOption_);
      DARABONBA_PTR_TO_JSON(IgnoreInvalidInstance, ignoreInvalidInstance_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(LifecycleHook, lifecycleHook_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DecreaseDesiredCapacity, decreaseDesiredCapacity_);
      DARABONBA_PTR_FROM_JSON(DetachOption, detachOption_);
      DARABONBA_PTR_FROM_JSON(IgnoreInvalidInstance, ignoreInvalidInstance_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(LifecycleHook, lifecycleHook_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
    };
    DetachInstancesRequest() = default ;
    DetachInstancesRequest(const DetachInstancesRequest &) = default ;
    DetachInstancesRequest(DetachInstancesRequest &&) = default ;
    DetachInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachInstancesRequest() = default ;
    DetachInstancesRequest& operator=(const DetachInstancesRequest &) = default ;
    DetachInstancesRequest& operator=(DetachInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->decreaseDesiredCapacity_ == nullptr && return this->detachOption_ == nullptr && return this->ignoreInvalidInstance_ == nullptr && return this->instanceIds_ == nullptr && return this->lifecycleHook_ == nullptr
        && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->scalingGroupId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DetachInstancesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // decreaseDesiredCapacity Field Functions 
    bool hasDecreaseDesiredCapacity() const { return this->decreaseDesiredCapacity_ != nullptr;};
    void deleteDecreaseDesiredCapacity() { this->decreaseDesiredCapacity_ = nullptr;};
    inline bool decreaseDesiredCapacity() const { DARABONBA_PTR_GET_DEFAULT(decreaseDesiredCapacity_, false) };
    inline DetachInstancesRequest& setDecreaseDesiredCapacity(bool decreaseDesiredCapacity) { DARABONBA_PTR_SET_VALUE(decreaseDesiredCapacity_, decreaseDesiredCapacity) };


    // detachOption Field Functions 
    bool hasDetachOption() const { return this->detachOption_ != nullptr;};
    void deleteDetachOption() { this->detachOption_ = nullptr;};
    inline string detachOption() const { DARABONBA_PTR_GET_DEFAULT(detachOption_, "") };
    inline DetachInstancesRequest& setDetachOption(string detachOption) { DARABONBA_PTR_SET_VALUE(detachOption_, detachOption) };


    // ignoreInvalidInstance Field Functions 
    bool hasIgnoreInvalidInstance() const { return this->ignoreInvalidInstance_ != nullptr;};
    void deleteIgnoreInvalidInstance() { this->ignoreInvalidInstance_ = nullptr;};
    inline bool ignoreInvalidInstance() const { DARABONBA_PTR_GET_DEFAULT(ignoreInvalidInstance_, false) };
    inline DetachInstancesRequest& setIgnoreInvalidInstance(bool ignoreInvalidInstance) { DARABONBA_PTR_SET_VALUE(ignoreInvalidInstance_, ignoreInvalidInstance) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DetachInstancesRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DetachInstancesRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // lifecycleHook Field Functions 
    bool hasLifecycleHook() const { return this->lifecycleHook_ != nullptr;};
    void deleteLifecycleHook() { this->lifecycleHook_ = nullptr;};
    inline bool lifecycleHook() const { DARABONBA_PTR_GET_DEFAULT(lifecycleHook_, false) };
    inline DetachInstancesRequest& setLifecycleHook(bool lifecycleHook) { DARABONBA_PTR_SET_VALUE(lifecycleHook_, lifecycleHook) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DetachInstancesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DetachInstancesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DetachInstancesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DetachInstancesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline DetachInstancesRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [Ensure idempotence](https://help.aliyun.com/document_detail/25965.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to adjust the expected number of instances in the scaling group. Valid values:
    // 
    // *   true: After a specific number of instances are removed from the scaling group, the expected number of instances in the scaling group decreases.
    // *   false: After a specific number of instances are removed from the scaling group, the expected number of instances in the scaling group remains unchanged.
    // 
    // Default value: true.
    std::shared_ptr<bool> decreaseDesiredCapacity_ = nullptr;
    // Specifies whether to detach the ECS instances or elastic container instances that are marked for removal from the associated load balancers, and whether to remove the private IP addresses of these instances from the IP address whitelists of the associated ApsaraDB RDS instances.
    // 
    // Both: detaches the ECS instances or elastic container instances that are marked for removal from the associated load balancers and removes the private IP addresses of these instances from the IP address whitelists of the associated ApsaraDB RDS instances.
    // 
    // >  This parameter is not supported if you want to remove Alibaba Cloud-hosted third-party instances from a scaling group.
    std::shared_ptr<string> detachOption_ = nullptr;
    // Specifies whether to ignore invalid instances when you remove a batch of instances from the scaling group. Valid values:
    // 
    // *   true: ignores invalid instances. If invalid instances exist and valid instances are removed from the scaling group, the corresponding scaling activity enters the Warning state. You can check the scaling activity details to view the invalid instances that are ignored.
    // *   false: does not ignore invalid instances. If invalid instances exist in the batch of instances that you want to remove from the scaling group, an error is reported.
    // 
    // Default value: false.
    std::shared_ptr<bool> ignoreInvalidInstance_ = nullptr;
    // The IDs of the ECS instances, elastic container instances, or Aliababa Cloud-managed third-party instances that you want to remove from a scaling group.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    // Specifies whether to trigger a lifecycle hook for scale-in purposes when ECS instances or elastic container instances are removed from the scaling group. Valid values:
    // 
    // *   true
    // *   false
    // 
    // >  This parameter is not supported if you want to remove Alibaba Cloud-hosted third-party instances from a scaling group.
    // 
    // Default value: false.
    std::shared_ptr<bool> lifecycleHook_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the scaling group.
    // 
    // This parameter is required.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
