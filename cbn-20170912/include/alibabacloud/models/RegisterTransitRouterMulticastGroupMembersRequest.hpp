// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERTRANSITROUTERMULTICASTGROUPMEMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REGISTERTRANSITROUTERMULTICASTGROUPMEMBERSREQUEST_HPP_
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
  class RegisterTransitRouterMulticastGroupMembersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterTransitRouterMulticastGroupMembersRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterTransitRouterMulticastGroupMembersRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    RegisterTransitRouterMulticastGroupMembersRequest() = default ;
    RegisterTransitRouterMulticastGroupMembersRequest(const RegisterTransitRouterMulticastGroupMembersRequest &) = default ;
    RegisterTransitRouterMulticastGroupMembersRequest(RegisterTransitRouterMulticastGroupMembersRequest &&) = default ;
    RegisterTransitRouterMulticastGroupMembersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterTransitRouterMulticastGroupMembersRequest() = default ;
    RegisterTransitRouterMulticastGroupMembersRequest& operator=(const RegisterTransitRouterMulticastGroupMembersRequest &) = default ;
    RegisterTransitRouterMulticastGroupMembersRequest& operator=(RegisterTransitRouterMulticastGroupMembersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->dryRun_ != nullptr && this->groupIpAddress_ != nullptr && this->networkInterfaceIds_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr
        && this->peerTransitRouterMulticastDomains_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->transitRouterMulticastDomainId_ != nullptr && this->vpcId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RegisterTransitRouterMulticastGroupMembersRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline RegisterTransitRouterMulticastGroupMembersRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // groupIpAddress Field Functions 
    bool hasGroupIpAddress() const { return this->groupIpAddress_ != nullptr;};
    void deleteGroupIpAddress() { this->groupIpAddress_ = nullptr;};
    inline string groupIpAddress() const { DARABONBA_PTR_GET_DEFAULT(groupIpAddress_, "") };
    inline RegisterTransitRouterMulticastGroupMembersRequest& setGroupIpAddress(string groupIpAddress) { DARABONBA_PTR_SET_VALUE(groupIpAddress_, groupIpAddress) };


    // networkInterfaceIds Field Functions 
    bool hasNetworkInterfaceIds() const { return this->networkInterfaceIds_ != nullptr;};
    void deleteNetworkInterfaceIds() { this->networkInterfaceIds_ = nullptr;};
    inline const vector<string> & networkInterfaceIds() const { DARABONBA_PTR_GET_CONST(networkInterfaceIds_, vector<string>) };
    inline vector<string> networkInterfaceIds() { DARABONBA_PTR_GET(networkInterfaceIds_, vector<string>) };
    inline RegisterTransitRouterMulticastGroupMembersRequest& setNetworkInterfaceIds(const vector<string> & networkInterfaceIds) { DARABONBA_PTR_SET_VALUE(networkInterfaceIds_, networkInterfaceIds) };
    inline RegisterTransitRouterMulticastGroupMembersRequest& setNetworkInterfaceIds(vector<string> && networkInterfaceIds) { DARABONBA_PTR_SET_RVALUE(networkInterfaceIds_, networkInterfaceIds) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline RegisterTransitRouterMulticastGroupMembersRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RegisterTransitRouterMulticastGroupMembersRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // peerTransitRouterMulticastDomains Field Functions 
    bool hasPeerTransitRouterMulticastDomains() const { return this->peerTransitRouterMulticastDomains_ != nullptr;};
    void deletePeerTransitRouterMulticastDomains() { this->peerTransitRouterMulticastDomains_ = nullptr;};
    inline const vector<string> & peerTransitRouterMulticastDomains() const { DARABONBA_PTR_GET_CONST(peerTransitRouterMulticastDomains_, vector<string>) };
    inline vector<string> peerTransitRouterMulticastDomains() { DARABONBA_PTR_GET(peerTransitRouterMulticastDomains_, vector<string>) };
    inline RegisterTransitRouterMulticastGroupMembersRequest& setPeerTransitRouterMulticastDomains(const vector<string> & peerTransitRouterMulticastDomains) { DARABONBA_PTR_SET_VALUE(peerTransitRouterMulticastDomains_, peerTransitRouterMulticastDomains) };
    inline RegisterTransitRouterMulticastGroupMembersRequest& setPeerTransitRouterMulticastDomains(vector<string> && peerTransitRouterMulticastDomains) { DARABONBA_PTR_SET_RVALUE(peerTransitRouterMulticastDomains_, peerTransitRouterMulticastDomains) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline RegisterTransitRouterMulticastGroupMembersRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline RegisterTransitRouterMulticastGroupMembersRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // transitRouterMulticastDomainId Field Functions 
    bool hasTransitRouterMulticastDomainId() const { return this->transitRouterMulticastDomainId_ != nullptr;};
    void deleteTransitRouterMulticastDomainId() { this->transitRouterMulticastDomainId_ = nullptr;};
    inline string transitRouterMulticastDomainId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterMulticastDomainId_, "") };
    inline RegisterTransitRouterMulticastGroupMembersRequest& setTransitRouterMulticastDomainId(string transitRouterMulticastDomainId) { DARABONBA_PTR_SET_VALUE(transitRouterMulticastDomainId_, transitRouterMulticastDomainId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline RegisterTransitRouterMulticastGroupMembersRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error code is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the request.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The IP address of the multicast group to which the multicast members belong. Valid values: **224.0.0.1** to **239.255.255.254**.
    // 
    // If the multicast group does not exist in the specified multicast domain, the system automatically creates the multicast group in the multicast domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupIpAddress_ = nullptr;
    // The IDs of the ENIs.
    std::shared_ptr<vector<string>> networkInterfaceIds_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The IDs of inter-region multicast domains.
    std::shared_ptr<vector<string>> peerTransitRouterMulticastDomains_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the multicast domain to which the multicast members belong.
    // 
    // This parameter is required.
    std::shared_ptr<string> transitRouterMulticastDomainId_ = nullptr;
    // The ID of the VPC to which the ENI belongs.
    // 
    // *   If the ENI belongs to the current Alibaba Cloud account, ignore this parameter.
    // *   If the ENI belongs to a different Alibaba Cloud account, you must set this parameter.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
