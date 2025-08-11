// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHLOADBALANCERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHLOADBALANCERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AttachLoadBalancersRequestLoadBalancerConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class AttachLoadBalancersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachLoadBalancersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Async, async_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ForceAttach, forceAttach_);
      DARABONBA_PTR_TO_JSON(LoadBalancerConfigs, loadBalancerConfigs_);
      DARABONBA_PTR_TO_JSON(LoadBalancers, loadBalancers_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachLoadBalancersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Async, async_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ForceAttach, forceAttach_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerConfigs, loadBalancerConfigs_);
      DARABONBA_PTR_FROM_JSON(LoadBalancers, loadBalancers_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
    };
    AttachLoadBalancersRequest() = default ;
    AttachLoadBalancersRequest(const AttachLoadBalancersRequest &) = default ;
    AttachLoadBalancersRequest(AttachLoadBalancersRequest &&) = default ;
    AttachLoadBalancersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachLoadBalancersRequest() = default ;
    AttachLoadBalancersRequest& operator=(const AttachLoadBalancersRequest &) = default ;
    AttachLoadBalancersRequest& operator=(AttachLoadBalancersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->async_ != nullptr
        && this->clientToken_ != nullptr && this->forceAttach_ != nullptr && this->loadBalancerConfigs_ != nullptr && this->loadBalancers_ != nullptr && this->ownerId_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->scalingGroupId_ != nullptr; };
    // async Field Functions 
    bool hasAsync() const { return this->async_ != nullptr;};
    void deleteAsync() { this->async_ = nullptr;};
    inline bool async() const { DARABONBA_PTR_GET_DEFAULT(async_, false) };
    inline AttachLoadBalancersRequest& setAsync(bool async) { DARABONBA_PTR_SET_VALUE(async_, async) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AttachLoadBalancersRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // forceAttach Field Functions 
    bool hasForceAttach() const { return this->forceAttach_ != nullptr;};
    void deleteForceAttach() { this->forceAttach_ = nullptr;};
    inline bool forceAttach() const { DARABONBA_PTR_GET_DEFAULT(forceAttach_, false) };
    inline AttachLoadBalancersRequest& setForceAttach(bool forceAttach) { DARABONBA_PTR_SET_VALUE(forceAttach_, forceAttach) };


    // loadBalancerConfigs Field Functions 
    bool hasLoadBalancerConfigs() const { return this->loadBalancerConfigs_ != nullptr;};
    void deleteLoadBalancerConfigs() { this->loadBalancerConfigs_ = nullptr;};
    inline const vector<AttachLoadBalancersRequestLoadBalancerConfigs> & loadBalancerConfigs() const { DARABONBA_PTR_GET_CONST(loadBalancerConfigs_, vector<AttachLoadBalancersRequestLoadBalancerConfigs>) };
    inline vector<AttachLoadBalancersRequestLoadBalancerConfigs> loadBalancerConfigs() { DARABONBA_PTR_GET(loadBalancerConfigs_, vector<AttachLoadBalancersRequestLoadBalancerConfigs>) };
    inline AttachLoadBalancersRequest& setLoadBalancerConfigs(const vector<AttachLoadBalancersRequestLoadBalancerConfigs> & loadBalancerConfigs) { DARABONBA_PTR_SET_VALUE(loadBalancerConfigs_, loadBalancerConfigs) };
    inline AttachLoadBalancersRequest& setLoadBalancerConfigs(vector<AttachLoadBalancersRequestLoadBalancerConfigs> && loadBalancerConfigs) { DARABONBA_PTR_SET_RVALUE(loadBalancerConfigs_, loadBalancerConfigs) };


    // loadBalancers Field Functions 
    bool hasLoadBalancers() const { return this->loadBalancers_ != nullptr;};
    void deleteLoadBalancers() { this->loadBalancers_ = nullptr;};
    inline const vector<string> & loadBalancers() const { DARABONBA_PTR_GET_CONST(loadBalancers_, vector<string>) };
    inline vector<string> loadBalancers() { DARABONBA_PTR_GET(loadBalancers_, vector<string>) };
    inline AttachLoadBalancersRequest& setLoadBalancers(const vector<string> & loadBalancers) { DARABONBA_PTR_SET_VALUE(loadBalancers_, loadBalancers) };
    inline AttachLoadBalancersRequest& setLoadBalancers(vector<string> && loadBalancers) { DARABONBA_PTR_SET_RVALUE(loadBalancers_, loadBalancers) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AttachLoadBalancersRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AttachLoadBalancersRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline AttachLoadBalancersRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


  protected:
    // Specifies whether to attach the CLB instance to the scaling group in an asynchronous manner. If you attach the CLB instance from the scaling group in an asynchronous manner, the call is successful only after all operations are successful. If a specific operation fails, the call fails. We recommend that you set this parameter to true. Valid values:
    // 
    // *   true: attaches the CLB instance to the scaling group in an asynchronous manner. In this case, the ID of the scaling activity is returned.
    // *   false: does not attach the CLB instance to the scaling group in an asynchronous manner.
    // 
    // Default value: false.
    std::shared_ptr<bool> async_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [Ensure idempotence](https://help.aliyun.com/document_detail/25965.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to add the existing instances in the scaling group as backend servers of the load balancer. Valid values:
    // 
    // *   true: If you set this parameter to `true`, the attachment of the load balancer entails the addition of the existing instances in the scaling group to the backend server groups of the load balancer.
    // 
    //     **
    // 
    //     **Note** If a load balancer is currently attached to your scaling group, and you only want to add the instances in your scaling group to the backend server groups of the load balancer, you can call this operation again and set ForceAttach request to true.
    // 
    // *   false: If you set this parameter to false, the attachment of the load balancer does not entail the addition of the existing instances in the scaling group to the backend server groups of the load balancer.
    // 
    // Default value: false.
    std::shared_ptr<bool> forceAttach_ = nullptr;
    // The configurations of the classic load balancer (CLB, formerly known as SLB) instance.
    std::shared_ptr<vector<AttachLoadBalancersRequestLoadBalancerConfigs>> loadBalancerConfigs_ = nullptr;
    // The IDs of the load balancers that you want to attach to the scaling group.
    std::shared_ptr<vector<string>> loadBalancers_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
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
