// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEREGISTERTRANSITROUTERMULTICASTGROUPMEMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEREGISTERTRANSITROUTERMULTICASTGROUPMEMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DeregisterTransitRouterMulticastGroupMembersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeregisterTransitRouterMulticastGroupMembersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(GroupIpAddress, groupIpAddress_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceIds, networkInterfaceIds_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PeerTransitRouterMulticastDomains, peerTransitRouterMulticastDomains_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TransitRouterMulticastDomainId, transitRouterMulticastDomainId_);
    };
    friend void from_json(const Darabonba::Json& j, DeregisterTransitRouterMulticastGroupMembersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(GroupIpAddress, groupIpAddress_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceIds, networkInterfaceIds_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PeerTransitRouterMulticastDomains, peerTransitRouterMulticastDomains_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterMulticastDomainId, transitRouterMulticastDomainId_);
    };
    DeregisterTransitRouterMulticastGroupMembersRequest() = default ;
    DeregisterTransitRouterMulticastGroupMembersRequest(const DeregisterTransitRouterMulticastGroupMembersRequest &) = default ;
    DeregisterTransitRouterMulticastGroupMembersRequest(DeregisterTransitRouterMulticastGroupMembersRequest &&) = default ;
    DeregisterTransitRouterMulticastGroupMembersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeregisterTransitRouterMulticastGroupMembersRequest() = default ;
    DeregisterTransitRouterMulticastGroupMembersRequest& operator=(const DeregisterTransitRouterMulticastGroupMembersRequest &) = default ;
    DeregisterTransitRouterMulticastGroupMembersRequest& operator=(DeregisterTransitRouterMulticastGroupMembersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->dryRun_ != nullptr && this->groupIpAddress_ != nullptr && this->networkInterfaceIds_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr
        && this->peerTransitRouterMulticastDomains_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->transitRouterMulticastDomainId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeregisterTransitRouterMulticastGroupMembersRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DeregisterTransitRouterMulticastGroupMembersRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // groupIpAddress Field Functions 
    bool hasGroupIpAddress() const { return this->groupIpAddress_ != nullptr;};
    void deleteGroupIpAddress() { this->groupIpAddress_ = nullptr;};
    inline string groupIpAddress() const { DARABONBA_PTR_GET_DEFAULT(groupIpAddress_, "") };
    inline DeregisterTransitRouterMulticastGroupMembersRequest& setGroupIpAddress(string groupIpAddress) { DARABONBA_PTR_SET_VALUE(groupIpAddress_, groupIpAddress) };


    // networkInterfaceIds Field Functions 
    bool hasNetworkInterfaceIds() const { return this->networkInterfaceIds_ != nullptr;};
    void deleteNetworkInterfaceIds() { this->networkInterfaceIds_ = nullptr;};
    inline const vector<string> & networkInterfaceIds() const { DARABONBA_PTR_GET_CONST(networkInterfaceIds_, vector<string>) };
    inline vector<string> networkInterfaceIds() { DARABONBA_PTR_GET(networkInterfaceIds_, vector<string>) };
    inline DeregisterTransitRouterMulticastGroupMembersRequest& setNetworkInterfaceIds(const vector<string> & networkInterfaceIds) { DARABONBA_PTR_SET_VALUE(networkInterfaceIds_, networkInterfaceIds) };
    inline DeregisterTransitRouterMulticastGroupMembersRequest& setNetworkInterfaceIds(vector<string> && networkInterfaceIds) { DARABONBA_PTR_SET_RVALUE(networkInterfaceIds_, networkInterfaceIds) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DeregisterTransitRouterMulticastGroupMembersRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeregisterTransitRouterMulticastGroupMembersRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // peerTransitRouterMulticastDomains Field Functions 
    bool hasPeerTransitRouterMulticastDomains() const { return this->peerTransitRouterMulticastDomains_ != nullptr;};
    void deletePeerTransitRouterMulticastDomains() { this->peerTransitRouterMulticastDomains_ = nullptr;};
    inline const vector<string> & peerTransitRouterMulticastDomains() const { DARABONBA_PTR_GET_CONST(peerTransitRouterMulticastDomains_, vector<string>) };
    inline vector<string> peerTransitRouterMulticastDomains() { DARABONBA_PTR_GET(peerTransitRouterMulticastDomains_, vector<string>) };
    inline DeregisterTransitRouterMulticastGroupMembersRequest& setPeerTransitRouterMulticastDomains(const vector<string> & peerTransitRouterMulticastDomains) { DARABONBA_PTR_SET_VALUE(peerTransitRouterMulticastDomains_, peerTransitRouterMulticastDomains) };
    inline DeregisterTransitRouterMulticastGroupMembersRequest& setPeerTransitRouterMulticastDomains(vector<string> && peerTransitRouterMulticastDomains) { DARABONBA_PTR_SET_RVALUE(peerTransitRouterMulticastDomains_, peerTransitRouterMulticastDomains) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DeregisterTransitRouterMulticastGroupMembersRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DeregisterTransitRouterMulticastGroupMembersRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // transitRouterMulticastDomainId Field Functions 
    bool hasTransitRouterMulticastDomainId() const { return this->transitRouterMulticastDomainId_ != nullptr;};
    void deleteTransitRouterMulticastDomainId() { this->transitRouterMulticastDomainId_ = nullptr;};
    inline string transitRouterMulticastDomainId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterMulticastDomainId_, "") };
    inline DeregisterTransitRouterMulticastGroupMembersRequest& setTransitRouterMulticastDomainId(string transitRouterMulticastDomainId) { DARABONBA_PTR_SET_VALUE(transitRouterMulticastDomainId_, transitRouterMulticastDomainId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must make sure that it is unique among all requests. The token can contain only ASCII characters.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error code is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The IP address of the multicast group to which the multicast members belong.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupIpAddress_ = nullptr;
    // The IDs of elastic network interfaces (ENIs).
    std::shared_ptr<vector<string>> networkInterfaceIds_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the multicast domain that is in a different region.
    std::shared_ptr<vector<string>> peerTransitRouterMulticastDomains_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the multicast domain to which the multicast members belong.
    // 
    // This parameter is required.
    std::shared_ptr<string> transitRouterMulticastDomainId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
