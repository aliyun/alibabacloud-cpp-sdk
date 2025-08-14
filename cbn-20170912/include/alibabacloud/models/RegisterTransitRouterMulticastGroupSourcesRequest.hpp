// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERTRANSITROUTERMULTICASTGROUPSOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REGISTERTRANSITROUTERMULTICASTGROUPSOURCESREQUEST_HPP_
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
  class RegisterTransitRouterMulticastGroupSourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterTransitRouterMulticastGroupSourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(GroupIpAddress, groupIpAddress_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceIds, networkInterfaceIds_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TransitRouterMulticastDomainId, transitRouterMulticastDomainId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterTransitRouterMulticastGroupSourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(GroupIpAddress, groupIpAddress_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceIds, networkInterfaceIds_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterMulticastDomainId, transitRouterMulticastDomainId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    RegisterTransitRouterMulticastGroupSourcesRequest() = default ;
    RegisterTransitRouterMulticastGroupSourcesRequest(const RegisterTransitRouterMulticastGroupSourcesRequest &) = default ;
    RegisterTransitRouterMulticastGroupSourcesRequest(RegisterTransitRouterMulticastGroupSourcesRequest &&) = default ;
    RegisterTransitRouterMulticastGroupSourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterTransitRouterMulticastGroupSourcesRequest() = default ;
    RegisterTransitRouterMulticastGroupSourcesRequest& operator=(const RegisterTransitRouterMulticastGroupSourcesRequest &) = default ;
    RegisterTransitRouterMulticastGroupSourcesRequest& operator=(RegisterTransitRouterMulticastGroupSourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->dryRun_ != nullptr && this->groupIpAddress_ != nullptr && this->networkInterfaceIds_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->transitRouterMulticastDomainId_ != nullptr && this->vpcId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RegisterTransitRouterMulticastGroupSourcesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline RegisterTransitRouterMulticastGroupSourcesRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // groupIpAddress Field Functions 
    bool hasGroupIpAddress() const { return this->groupIpAddress_ != nullptr;};
    void deleteGroupIpAddress() { this->groupIpAddress_ = nullptr;};
    inline string groupIpAddress() const { DARABONBA_PTR_GET_DEFAULT(groupIpAddress_, "") };
    inline RegisterTransitRouterMulticastGroupSourcesRequest& setGroupIpAddress(string groupIpAddress) { DARABONBA_PTR_SET_VALUE(groupIpAddress_, groupIpAddress) };


    // networkInterfaceIds Field Functions 
    bool hasNetworkInterfaceIds() const { return this->networkInterfaceIds_ != nullptr;};
    void deleteNetworkInterfaceIds() { this->networkInterfaceIds_ = nullptr;};
    inline const vector<string> & networkInterfaceIds() const { DARABONBA_PTR_GET_CONST(networkInterfaceIds_, vector<string>) };
    inline vector<string> networkInterfaceIds() { DARABONBA_PTR_GET(networkInterfaceIds_, vector<string>) };
    inline RegisterTransitRouterMulticastGroupSourcesRequest& setNetworkInterfaceIds(const vector<string> & networkInterfaceIds) { DARABONBA_PTR_SET_VALUE(networkInterfaceIds_, networkInterfaceIds) };
    inline RegisterTransitRouterMulticastGroupSourcesRequest& setNetworkInterfaceIds(vector<string> && networkInterfaceIds) { DARABONBA_PTR_SET_RVALUE(networkInterfaceIds_, networkInterfaceIds) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline RegisterTransitRouterMulticastGroupSourcesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RegisterTransitRouterMulticastGroupSourcesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline RegisterTransitRouterMulticastGroupSourcesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline RegisterTransitRouterMulticastGroupSourcesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // transitRouterMulticastDomainId Field Functions 
    bool hasTransitRouterMulticastDomainId() const { return this->transitRouterMulticastDomainId_ != nullptr;};
    void deleteTransitRouterMulticastDomainId() { this->transitRouterMulticastDomainId_ = nullptr;};
    inline string transitRouterMulticastDomainId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterMulticastDomainId_, "") };
    inline RegisterTransitRouterMulticastGroupSourcesRequest& setTransitRouterMulticastDomainId(string transitRouterMulticastDomainId) { DARABONBA_PTR_SET_VALUE(transitRouterMulticastDomainId_, transitRouterMulticastDomainId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline RegisterTransitRouterMulticastGroupSourcesRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID is different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform a dry run, without sending the actual request. Default values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error code is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The IP address of the multicast group to which the multicast source belongs. Valid values: **224.0.1.0** to **239.255.255.254**.
    // 
    // > 224.0.0.0 to 224.0.0.255 are reserved by the system and cannot be used by multicast groups.
    // 
    // If the multicast group does not exist in the multicast domain, the system automatically creates the multicast group in the multicast domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupIpAddress_ = nullptr;
    // The IDs of the ENIs.
    std::shared_ptr<vector<string>> networkInterfaceIds_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the multicast domain to which the multicast source belongs.
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
