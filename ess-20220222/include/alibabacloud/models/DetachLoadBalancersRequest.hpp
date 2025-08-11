// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHLOADBALANCERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHLOADBALANCERSREQUEST_HPP_
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
  class DetachLoadBalancersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachLoadBalancersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Async, async_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ForceDetach, forceDetach_);
      DARABONBA_PTR_TO_JSON(LoadBalancers, loadBalancers_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachLoadBalancersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Async, async_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ForceDetach, forceDetach_);
      DARABONBA_PTR_FROM_JSON(LoadBalancers, loadBalancers_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
    };
    DetachLoadBalancersRequest() = default ;
    DetachLoadBalancersRequest(const DetachLoadBalancersRequest &) = default ;
    DetachLoadBalancersRequest(DetachLoadBalancersRequest &&) = default ;
    DetachLoadBalancersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachLoadBalancersRequest() = default ;
    DetachLoadBalancersRequest& operator=(const DetachLoadBalancersRequest &) = default ;
    DetachLoadBalancersRequest& operator=(DetachLoadBalancersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->async_ != nullptr
        && this->clientToken_ != nullptr && this->forceDetach_ != nullptr && this->loadBalancers_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->scalingGroupId_ != nullptr; };
    // async Field Functions 
    bool hasAsync() const { return this->async_ != nullptr;};
    void deleteAsync() { this->async_ = nullptr;};
    inline bool async() const { DARABONBA_PTR_GET_DEFAULT(async_, false) };
    inline DetachLoadBalancersRequest& setAsync(bool async) { DARABONBA_PTR_SET_VALUE(async_, async) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DetachLoadBalancersRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // forceDetach Field Functions 
    bool hasForceDetach() const { return this->forceDetach_ != nullptr;};
    void deleteForceDetach() { this->forceDetach_ = nullptr;};
    inline bool forceDetach() const { DARABONBA_PTR_GET_DEFAULT(forceDetach_, false) };
    inline DetachLoadBalancersRequest& setForceDetach(bool forceDetach) { DARABONBA_PTR_SET_VALUE(forceDetach_, forceDetach) };


    // loadBalancers Field Functions 
    bool hasLoadBalancers() const { return this->loadBalancers_ != nullptr;};
    void deleteLoadBalancers() { this->loadBalancers_ = nullptr;};
    inline const vector<string> & loadBalancers() const { DARABONBA_PTR_GET_CONST(loadBalancers_, vector<string>) };
    inline vector<string> loadBalancers() { DARABONBA_PTR_GET(loadBalancers_, vector<string>) };
    inline DetachLoadBalancersRequest& setLoadBalancers(const vector<string> & loadBalancers) { DARABONBA_PTR_SET_VALUE(loadBalancers_, loadBalancers) };
    inline DetachLoadBalancersRequest& setLoadBalancers(vector<string> && loadBalancers) { DARABONBA_PTR_SET_RVALUE(loadBalancers_, loadBalancers) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DetachLoadBalancersRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DetachLoadBalancersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DetachLoadBalancersRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline DetachLoadBalancersRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


  protected:
    // Specifies whether to detach the CLB instance from the scaling group in an asynchronous manner. If you detach the CLB instance from the scaling group in an asynchronous manner, the call is successful only after all operations are successful. If a specific operation fails, the call fails. We recommend that you set this parameter to true.
    // 
    // Valid values:
    // 
    // *   true: detaches the CLB instance from the scaling group in an asynchronous manner. In this case, the ID of the scaling activity is returned.
    // *   false: does not detach the CLB instance from the scaling group in an asynchronous manner.
    // 
    // Default value: false.
    std::shared_ptr<bool> async_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must ensure that the value is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25965.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to remove Elastic Compute Service (ECS) instances in the scaling group from the backend server groups of the load balancer. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    std::shared_ptr<bool> forceDetach_ = nullptr;
    // The IDs of the CLB instances. You can specify up to five instance IDs.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> loadBalancers_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the scaling group.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The ID of the scaling group.
    // 
    // This parameter is required.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
