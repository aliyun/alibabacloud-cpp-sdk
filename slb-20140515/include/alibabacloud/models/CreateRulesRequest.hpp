// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class CreateRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_TO_JSON(ListenerProtocol, listenerProtocol_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_FROM_JSON(ListenerProtocol, listenerProtocol_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
    };
    CreateRulesRequest() = default ;
    CreateRulesRequest(const CreateRulesRequest &) = default ;
    CreateRulesRequest(CreateRulesRequest &&) = default ;
    CreateRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRulesRequest() = default ;
    CreateRulesRequest& operator=(const CreateRulesRequest &) = default ;
    CreateRulesRequest& operator=(CreateRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listenerPort_ == nullptr
        && return this->listenerProtocol_ == nullptr && return this->loadBalancerId_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->ruleList_ == nullptr; };
    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline int32_t listenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
    inline CreateRulesRequest& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // listenerProtocol Field Functions 
    bool hasListenerProtocol() const { return this->listenerProtocol_ != nullptr;};
    void deleteListenerProtocol() { this->listenerProtocol_ = nullptr;};
    inline string listenerProtocol() const { DARABONBA_PTR_GET_DEFAULT(listenerProtocol_, "") };
    inline CreateRulesRequest& setListenerProtocol(string listenerProtocol) { DARABONBA_PTR_SET_VALUE(listenerProtocol_, listenerProtocol) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline CreateRulesRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateRulesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateRulesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateRulesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateRulesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // ruleList Field Functions 
    bool hasRuleList() const { return this->ruleList_ != nullptr;};
    void deleteRuleList() { this->ruleList_ = nullptr;};
    inline string ruleList() const { DARABONBA_PTR_GET_DEFAULT(ruleList_, "") };
    inline CreateRulesRequest& setRuleList(string ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };


  protected:
    // The frontend listener port that is used by the SLB instance.
    // 
    // Valid values: **1 to 65535**.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> listenerPort_ = nullptr;
    // The frontend protocol that is used by the SLB instance.
    // 
    // > This parameter is required if the same port is used by listeners that use different protocols.
    std::shared_ptr<string> listenerProtocol_ = nullptr;
    // The ID of the SLB instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the region where the Server Load Balancer (SLB) instance is deployed.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/27584.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The forwarding rules that you want to create. You can create at most 10 forwarding rules in each call. Each forwarding rule contains the following parameters:
    // 
    // *   **RuleName**: Required. The value must be of the STRING type. The name of the forwarding rule. The name must be 1 to 40 characters in length, and can contain letters, digits, hyphens (-), forward slashes (/), periods (.), and underscores (_). Forwarding rule names must be unique within the same listener.
    // *   **Domain**: Optional. The value must be a string. The domain name that is associated with the forwarding rule. You must specify this parameter or the **URL** parameter.
    // *   **Url**: Optional. The value must be 1 to 80 characters in length, and can contain letters, digits, hyphens (-), forward slashes (/), periods (.), percent signs (%), question marks (?), number signs (#), and ampersands (&). The value must be a string. The URL cannot be only a forward slash (/). However, it must start with a forward slash (/). You must specify this parameter or the **Domain** parameter.
    // *   **VServerGroupId**: Required. The value must be a string. The ID of the vServer group to be specified in the forwarding rule.
    // 
    // >  You must specify at least one between the `Domain` and `URL` parameters. You can also specify both. The combination of `Domain` and `Url` must be unique within the same listener.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
