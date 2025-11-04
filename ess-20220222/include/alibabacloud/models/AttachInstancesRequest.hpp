// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHINSTANCESREQUEST_HPP_
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
  class AttachInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Entrusted, entrusted_);
      DARABONBA_PTR_TO_JSON(IgnoreInvalidInstance, ignoreInvalidInstance_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(LifecycleHook, lifecycleHook_);
      DARABONBA_PTR_TO_JSON(LoadBalancerWeights, loadBalancerWeights_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Entrusted, entrusted_);
      DARABONBA_PTR_FROM_JSON(IgnoreInvalidInstance, ignoreInvalidInstance_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(LifecycleHook, lifecycleHook_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerWeights, loadBalancerWeights_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
    };
    AttachInstancesRequest() = default ;
    AttachInstancesRequest(const AttachInstancesRequest &) = default ;
    AttachInstancesRequest(AttachInstancesRequest &&) = default ;
    AttachInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachInstancesRequest() = default ;
    AttachInstancesRequest& operator=(const AttachInstancesRequest &) = default ;
    AttachInstancesRequest& operator=(AttachInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->entrusted_ == nullptr && return this->ignoreInvalidInstance_ == nullptr && return this->instanceIds_ == nullptr && return this->lifecycleHook_ == nullptr && return this->loadBalancerWeights_ == nullptr
        && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr
        && return this->scalingGroupId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AttachInstancesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // entrusted Field Functions 
    bool hasEntrusted() const { return this->entrusted_ != nullptr;};
    void deleteEntrusted() { this->entrusted_ = nullptr;};
    inline bool entrusted() const { DARABONBA_PTR_GET_DEFAULT(entrusted_, false) };
    inline AttachInstancesRequest& setEntrusted(bool entrusted) { DARABONBA_PTR_SET_VALUE(entrusted_, entrusted) };


    // ignoreInvalidInstance Field Functions 
    bool hasIgnoreInvalidInstance() const { return this->ignoreInvalidInstance_ != nullptr;};
    void deleteIgnoreInvalidInstance() { this->ignoreInvalidInstance_ = nullptr;};
    inline bool ignoreInvalidInstance() const { DARABONBA_PTR_GET_DEFAULT(ignoreInvalidInstance_, false) };
    inline AttachInstancesRequest& setIgnoreInvalidInstance(bool ignoreInvalidInstance) { DARABONBA_PTR_SET_VALUE(ignoreInvalidInstance_, ignoreInvalidInstance) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline AttachInstancesRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline AttachInstancesRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // lifecycleHook Field Functions 
    bool hasLifecycleHook() const { return this->lifecycleHook_ != nullptr;};
    void deleteLifecycleHook() { this->lifecycleHook_ = nullptr;};
    inline bool lifecycleHook() const { DARABONBA_PTR_GET_DEFAULT(lifecycleHook_, false) };
    inline AttachInstancesRequest& setLifecycleHook(bool lifecycleHook) { DARABONBA_PTR_SET_VALUE(lifecycleHook_, lifecycleHook) };


    // loadBalancerWeights Field Functions 
    bool hasLoadBalancerWeights() const { return this->loadBalancerWeights_ != nullptr;};
    void deleteLoadBalancerWeights() { this->loadBalancerWeights_ = nullptr;};
    inline const vector<int32_t> & loadBalancerWeights() const { DARABONBA_PTR_GET_CONST(loadBalancerWeights_, vector<int32_t>) };
    inline vector<int32_t> loadBalancerWeights() { DARABONBA_PTR_GET(loadBalancerWeights_, vector<int32_t>) };
    inline AttachInstancesRequest& setLoadBalancerWeights(const vector<int32_t> & loadBalancerWeights) { DARABONBA_PTR_SET_VALUE(loadBalancerWeights_, loadBalancerWeights) };
    inline AttachInstancesRequest& setLoadBalancerWeights(vector<int32_t> && loadBalancerWeights) { DARABONBA_PTR_SET_RVALUE(loadBalancerWeights_, loadBalancerWeights) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline AttachInstancesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AttachInstancesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AttachInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AttachInstancesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AttachInstancesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline AttachInstancesRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [Ensure idempotence](https://help.aliyun.com/document_detail/25965.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to use the scaling group to manage the lifecycles of manually added instances. Valid values:
    // 
    // *   true: The scaling group manages the lifecycles of manually added instances and automatically created instances in the same manner. In this case, Auto Scaling releases the instances when they are removed from the scaling group. This rule does not apply to instances that are removed by calling the DetachInstances operation.
    // *   false: The scaling group does not manage the lifecycles of manually added instances. In this case, Auto Scaling does not release the instances when they are removed from the scaling group.
    // 
    // >  You cannot specify this parameter for subscription instances, non-Alibaba Cloud instances, and instances in Economical Mode.
    // 
    // Default value: false.
    std::shared_ptr<bool> entrusted_ = nullptr;
    // Specifies whether to ignore invalid instances when a batch of instances is added to the scaling group. Valid values:
    // 
    // *   true: ignores invalid instances. If invalid instances exist and valid instances are added, the corresponding scaling activity enters the Warning state. You can check the scaling activity details to view the invalid instances that are ignored.
    // *   false: does not ignore invalid instances. If invalid instances exist in the batch of instances that you want to add to the scaling group, an error is reported.
    // 
    // Default value: false.
    std::shared_ptr<bool> ignoreInvalidInstance_ = nullptr;
    // The IDs of the ECS instances, elastic container instances, non-Alibaba Cloud instances, or instances in Economical Mode.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    // Specifies whether to trigger the lifecycle hook for scale-outs when you call this operation. Valid values:
    // 
    // *   true
    // *   false
    // 
    // >  You cannot specify this parameter for subscription instances and instances in Economical Mode.
    // 
    // Default value: false.
    std::shared_ptr<bool> lifecycleHook_ = nullptr;
    // The weight of an ECS instance or elastic container instance as a backend server. You can use this parameter to specify weights for multiple instances at the same time.
    std::shared_ptr<vector<int32_t>> loadBalancerWeights_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the scaling group.
    std::shared_ptr<string> regionId_ = nullptr;
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
