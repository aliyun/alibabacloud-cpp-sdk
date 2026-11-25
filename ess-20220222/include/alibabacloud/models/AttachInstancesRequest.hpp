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
        && this->entrusted_ == nullptr && this->ignoreInvalidInstance_ == nullptr && this->instanceIds_ == nullptr && this->lifecycleHook_ == nullptr && this->loadBalancerWeights_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->scalingGroupId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AttachInstancesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // entrusted Field Functions 
    bool hasEntrusted() const { return this->entrusted_ != nullptr;};
    void deleteEntrusted() { this->entrusted_ = nullptr;};
    inline bool getEntrusted() const { DARABONBA_PTR_GET_DEFAULT(entrusted_, false) };
    inline AttachInstancesRequest& setEntrusted(bool entrusted) { DARABONBA_PTR_SET_VALUE(entrusted_, entrusted) };


    // ignoreInvalidInstance Field Functions 
    bool hasIgnoreInvalidInstance() const { return this->ignoreInvalidInstance_ != nullptr;};
    void deleteIgnoreInvalidInstance() { this->ignoreInvalidInstance_ = nullptr;};
    inline bool getIgnoreInvalidInstance() const { DARABONBA_PTR_GET_DEFAULT(ignoreInvalidInstance_, false) };
    inline AttachInstancesRequest& setIgnoreInvalidInstance(bool ignoreInvalidInstance) { DARABONBA_PTR_SET_VALUE(ignoreInvalidInstance_, ignoreInvalidInstance) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline AttachInstancesRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline AttachInstancesRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // lifecycleHook Field Functions 
    bool hasLifecycleHook() const { return this->lifecycleHook_ != nullptr;};
    void deleteLifecycleHook() { this->lifecycleHook_ = nullptr;};
    inline bool getLifecycleHook() const { DARABONBA_PTR_GET_DEFAULT(lifecycleHook_, false) };
    inline AttachInstancesRequest& setLifecycleHook(bool lifecycleHook) { DARABONBA_PTR_SET_VALUE(lifecycleHook_, lifecycleHook) };


    // loadBalancerWeights Field Functions 
    bool hasLoadBalancerWeights() const { return this->loadBalancerWeights_ != nullptr;};
    void deleteLoadBalancerWeights() { this->loadBalancerWeights_ = nullptr;};
    inline const vector<int32_t> & getLoadBalancerWeights() const { DARABONBA_PTR_GET_CONST(loadBalancerWeights_, vector<int32_t>) };
    inline vector<int32_t> getLoadBalancerWeights() { DARABONBA_PTR_GET(loadBalancerWeights_, vector<int32_t>) };
    inline AttachInstancesRequest& setLoadBalancerWeights(const vector<int32_t> & loadBalancerWeights) { DARABONBA_PTR_SET_VALUE(loadBalancerWeights_, loadBalancerWeights) };
    inline AttachInstancesRequest& setLoadBalancerWeights(vector<int32_t> && loadBalancerWeights) { DARABONBA_PTR_SET_RVALUE(loadBalancerWeights_, loadBalancerWeights) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline AttachInstancesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AttachInstancesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AttachInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AttachInstancesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AttachInstancesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline AttachInstancesRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


  protected:
    // Ensures the idempotence of the request.
    // 
    // You can generate a parameter value from your client to ensure that the value is unique among different requests. The value can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25965.html).
    shared_ptr<string> clientToken_ {};
    // Specifies whether to entrust the lifecycle of an existing instance to the scaling group when the instance is manually added to the scaling group. Valid values:
    // 
    // - true: Entrusted. The lifecycle of the instance is managed by Auto Scaling, which is the same as that of instances automatically created by the scaling group. The instance is automatically released when it is removed from the scaling group (excluding instances removed when you invoke the DetachInstances operation).
    // - false: Not entrusted. The instance is not released when it is removed from the scaling group.
    // 
    // > This parameter is not supported for subscription instances, managed instances, and instances in the Economical Mode in the scaling group.
    // 
    // Default value: false.
    shared_ptr<bool> entrusted_ {};
    // Specifies whether to ignore invalid instances when a batch of instances is added to the scaling group. Valid values:
    // 
    // - true: Invalid instances are ignored when a batch of instances is added to the scaling group. If invalid instances exist and valid instances are successfully added, the execution status of the scaling activity is displayed as Warning. You can view the invalid instances in the scaling activity details.
    // 
    // - false: Invalid instances are not ignored when a batch of instances is added to the scaling group. If invalid instances exist in the batch, an error is reported.
    // 
    // Default value: false.
    shared_ptr<bool> ignoreInvalidInstance_ {};
    // The IDs of the ECS instances, ECI instances, managed instances, or instances in the Economical Mode in the scaling group to be added.
    shared_ptr<vector<string>> instanceIds_ {};
    // Specifies whether to trigger the scale-out lifecycle hook when instances are added to the scaling group. Valid values:
    // 
    // - true: Triggered.
    // - false: Not triggered.
    // > This parameter is not supported for managed instances and instances in the Economical Mode in the scaling group.
    // 
    // Default value: false.
    shared_ptr<bool> lifecycleHook_ {};
    // The weight of the ECS instance or ECI instance as a backend server of the load balancing instance.
    shared_ptr<vector<int32_t>> loadBalancerWeights_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the scaling group.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the scaling group.
    // 
    // This parameter is required.
    shared_ptr<string> scalingGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
