// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHLOADBALANCERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHLOADBALANCERSREQUEST_HPP_
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
    class LoadBalancerConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LoadBalancerConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
        DARABONBA_PTR_TO_JSON(Weight, weight_);
      };
      friend void from_json(const Darabonba::Json& j, LoadBalancerConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
        DARABONBA_PTR_FROM_JSON(Weight, weight_);
      };
      LoadBalancerConfigs() = default ;
      LoadBalancerConfigs(const LoadBalancerConfigs &) = default ;
      LoadBalancerConfigs(LoadBalancerConfigs &&) = default ;
      LoadBalancerConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LoadBalancerConfigs() = default ;
      LoadBalancerConfigs& operator=(const LoadBalancerConfigs &) = default ;
      LoadBalancerConfigs& operator=(LoadBalancerConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->loadBalancerId_ == nullptr
        && this->weight_ == nullptr; };
      // loadBalancerId Field Functions 
      bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
      void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
      inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
      inline LoadBalancerConfigs& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
      inline LoadBalancerConfigs& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    protected:
      // The ID of the CLB instance.
      shared_ptr<string> loadBalancerId_ {};
      // The weight of an Elastic Compute Service (ECS) instance or elastic container instance as a backend sever of the CLB instance. If an instance has a higher weight, more access traffic is routed to the instance. If an instance has zero weight, no access traffic is routed to the instance.
      // 
      // Valid values: 0 to 100.
      shared_ptr<int32_t> weight_ {};
    };

    virtual bool empty() const override { return this->async_ == nullptr
        && this->clientToken_ == nullptr && this->forceAttach_ == nullptr && this->loadBalancerConfigs_ == nullptr && this->loadBalancers_ == nullptr && this->ownerId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->scalingGroupId_ == nullptr; };
    // async Field Functions 
    bool hasAsync() const { return this->async_ != nullptr;};
    void deleteAsync() { this->async_ = nullptr;};
    inline bool getAsync() const { DARABONBA_PTR_GET_DEFAULT(async_, false) };
    inline AttachLoadBalancersRequest& setAsync(bool async) { DARABONBA_PTR_SET_VALUE(async_, async) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AttachLoadBalancersRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // forceAttach Field Functions 
    bool hasForceAttach() const { return this->forceAttach_ != nullptr;};
    void deleteForceAttach() { this->forceAttach_ = nullptr;};
    inline bool getForceAttach() const { DARABONBA_PTR_GET_DEFAULT(forceAttach_, false) };
    inline AttachLoadBalancersRequest& setForceAttach(bool forceAttach) { DARABONBA_PTR_SET_VALUE(forceAttach_, forceAttach) };


    // loadBalancerConfigs Field Functions 
    bool hasLoadBalancerConfigs() const { return this->loadBalancerConfigs_ != nullptr;};
    void deleteLoadBalancerConfigs() { this->loadBalancerConfigs_ = nullptr;};
    inline const vector<AttachLoadBalancersRequest::LoadBalancerConfigs> & getLoadBalancerConfigs() const { DARABONBA_PTR_GET_CONST(loadBalancerConfigs_, vector<AttachLoadBalancersRequest::LoadBalancerConfigs>) };
    inline vector<AttachLoadBalancersRequest::LoadBalancerConfigs> getLoadBalancerConfigs() { DARABONBA_PTR_GET(loadBalancerConfigs_, vector<AttachLoadBalancersRequest::LoadBalancerConfigs>) };
    inline AttachLoadBalancersRequest& setLoadBalancerConfigs(const vector<AttachLoadBalancersRequest::LoadBalancerConfigs> & loadBalancerConfigs) { DARABONBA_PTR_SET_VALUE(loadBalancerConfigs_, loadBalancerConfigs) };
    inline AttachLoadBalancersRequest& setLoadBalancerConfigs(vector<AttachLoadBalancersRequest::LoadBalancerConfigs> && loadBalancerConfigs) { DARABONBA_PTR_SET_RVALUE(loadBalancerConfigs_, loadBalancerConfigs) };


    // loadBalancers Field Functions 
    bool hasLoadBalancers() const { return this->loadBalancers_ != nullptr;};
    void deleteLoadBalancers() { this->loadBalancers_ = nullptr;};
    inline const vector<string> & getLoadBalancers() const { DARABONBA_PTR_GET_CONST(loadBalancers_, vector<string>) };
    inline vector<string> getLoadBalancers() { DARABONBA_PTR_GET(loadBalancers_, vector<string>) };
    inline AttachLoadBalancersRequest& setLoadBalancers(const vector<string> & loadBalancers) { DARABONBA_PTR_SET_VALUE(loadBalancers_, loadBalancers) };
    inline AttachLoadBalancersRequest& setLoadBalancers(vector<string> && loadBalancers) { DARABONBA_PTR_SET_RVALUE(loadBalancers_, loadBalancers) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AttachLoadBalancersRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AttachLoadBalancersRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline AttachLoadBalancersRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


  protected:
    // Specifies whether to attach the CLB instance to the scaling group in an asynchronous manner. If you attach the CLB instance from the scaling group in an asynchronous manner, the call is successful only after all operations are successful. If a specific operation fails, the call fails. We recommend that you set this parameter to true. Valid values:
    // 
    // *   true: attaches the CLB instance to the scaling group in an asynchronous manner. In this case, the ID of the scaling activity is returned.
    // *   false: does not attach the CLB instance to the scaling group in an asynchronous manner.
    // 
    // Default value: false.
    shared_ptr<bool> async_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [Ensure idempotence](https://help.aliyun.com/document_detail/25965.html).
    shared_ptr<string> clientToken_ {};
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
    shared_ptr<bool> forceAttach_ {};
    // The configurations of the classic load balancer (CLB, formerly known as SLB) instance.
    shared_ptr<vector<AttachLoadBalancersRequest::LoadBalancerConfigs>> loadBalancerConfigs_ {};
    // The IDs of the load balancers that you want to attach to the scaling group.
    shared_ptr<vector<string>> loadBalancers_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    // The ID of the scaling group.
    // 
    // This parameter is required.
    shared_ptr<string> scalingGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
