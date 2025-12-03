// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVELISTENERWHITELISTITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVELISTENERWHITELISTITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class RemoveListenerWhiteListItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveListenerWhiteListItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_TO_JSON(ListenerProtocol, listenerProtocol_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SourceItems, sourceItems_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveListenerWhiteListItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_FROM_JSON(ListenerProtocol, listenerProtocol_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SourceItems, sourceItems_);
    };
    RemoveListenerWhiteListItemRequest() = default ;
    RemoveListenerWhiteListItemRequest(const RemoveListenerWhiteListItemRequest &) = default ;
    RemoveListenerWhiteListItemRequest(RemoveListenerWhiteListItemRequest &&) = default ;
    RemoveListenerWhiteListItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveListenerWhiteListItemRequest() = default ;
    RemoveListenerWhiteListItemRequest& operator=(const RemoveListenerWhiteListItemRequest &) = default ;
    RemoveListenerWhiteListItemRequest& operator=(RemoveListenerWhiteListItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listenerPort_ == nullptr
        && return this->listenerProtocol_ == nullptr && return this->loadBalancerId_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->sourceItems_ == nullptr; };
    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline int32_t listenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
    inline RemoveListenerWhiteListItemRequest& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // listenerProtocol Field Functions 
    bool hasListenerProtocol() const { return this->listenerProtocol_ != nullptr;};
    void deleteListenerProtocol() { this->listenerProtocol_ = nullptr;};
    inline string listenerProtocol() const { DARABONBA_PTR_GET_DEFAULT(listenerProtocol_, "") };
    inline RemoveListenerWhiteListItemRequest& setListenerProtocol(string listenerProtocol) { DARABONBA_PTR_SET_VALUE(listenerProtocol_, listenerProtocol) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline RemoveListenerWhiteListItemRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline RemoveListenerWhiteListItemRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RemoveListenerWhiteListItemRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RemoveListenerWhiteListItemRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline RemoveListenerWhiteListItemRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline RemoveListenerWhiteListItemRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sourceItems Field Functions 
    bool hasSourceItems() const { return this->sourceItems_ != nullptr;};
    void deleteSourceItems() { this->sourceItems_ = nullptr;};
    inline string sourceItems() const { DARABONBA_PTR_GET_DEFAULT(sourceItems_, "") };
    inline RemoveListenerWhiteListItemRequest& setSourceItems(string sourceItems) { DARABONBA_PTR_SET_VALUE(sourceItems_, sourceItems) };


  protected:
    // The listening port.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> listenerPort_ = nullptr;
    // The frontend protocol that is used by the CLB instance.
    // 
    // >  This parameter is required when listeners that use different protocols listen on the same port.
    std::shared_ptr<string> listenerProtocol_ = nullptr;
    // The ID of the CLB instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region where the Classic Load Balancer (CLB) instance is created.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/27584.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The list of IP addresses or CIDR blocks that you want to remove from the whitelist. Separate multiple IP addresses or CIDR blocks with commas (,).
    // 
    // >  If all IP addresses are removed from the whitelist, the listener does not forward requests.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
