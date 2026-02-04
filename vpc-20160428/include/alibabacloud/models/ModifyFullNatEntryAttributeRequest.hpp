// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYFULLNATENTRYATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYFULLNATENTRYATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyFullNatEntryAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyFullNatEntryAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDomain, accessDomain_);
      DARABONBA_PTR_TO_JSON(AccessIp, accessIp_);
      DARABONBA_PTR_TO_JSON(AccessPort, accessPort_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(FullNatEntryDescription, fullNatEntryDescription_);
      DARABONBA_PTR_TO_JSON(FullNatEntryId, fullNatEntryId_);
      DARABONBA_PTR_TO_JSON(FullNatEntryName, fullNatEntryName_);
      DARABONBA_PTR_TO_JSON(FullNatTableId, fullNatTableId_);
      DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_TO_JSON(NatIp, natIp_);
      DARABONBA_PTR_TO_JSON(NatIpPort, natIpPort_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyFullNatEntryAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDomain, accessDomain_);
      DARABONBA_PTR_FROM_JSON(AccessIp, accessIp_);
      DARABONBA_PTR_FROM_JSON(AccessPort, accessPort_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(FullNatEntryDescription, fullNatEntryDescription_);
      DARABONBA_PTR_FROM_JSON(FullNatEntryId, fullNatEntryId_);
      DARABONBA_PTR_FROM_JSON(FullNatEntryName, fullNatEntryName_);
      DARABONBA_PTR_FROM_JSON(FullNatTableId, fullNatTableId_);
      DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_FROM_JSON(NatIp, natIp_);
      DARABONBA_PTR_FROM_JSON(NatIpPort, natIpPort_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyFullNatEntryAttributeRequest() = default ;
    ModifyFullNatEntryAttributeRequest(const ModifyFullNatEntryAttributeRequest &) = default ;
    ModifyFullNatEntryAttributeRequest(ModifyFullNatEntryAttributeRequest &&) = default ;
    ModifyFullNatEntryAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyFullNatEntryAttributeRequest() = default ;
    ModifyFullNatEntryAttributeRequest& operator=(const ModifyFullNatEntryAttributeRequest &) = default ;
    ModifyFullNatEntryAttributeRequest& operator=(ModifyFullNatEntryAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessDomain_ == nullptr
        && this->accessIp_ == nullptr && this->accessPort_ == nullptr && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->fullNatEntryDescription_ == nullptr
        && this->fullNatEntryId_ == nullptr && this->fullNatEntryName_ == nullptr && this->fullNatTableId_ == nullptr && this->ipProtocol_ == nullptr && this->natIp_ == nullptr
        && this->natIpPort_ == nullptr && this->networkInterfaceId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // accessDomain Field Functions 
    bool hasAccessDomain() const { return this->accessDomain_ != nullptr;};
    void deleteAccessDomain() { this->accessDomain_ = nullptr;};
    inline string getAccessDomain() const { DARABONBA_PTR_GET_DEFAULT(accessDomain_, "") };
    inline ModifyFullNatEntryAttributeRequest& setAccessDomain(string accessDomain) { DARABONBA_PTR_SET_VALUE(accessDomain_, accessDomain) };


    // accessIp Field Functions 
    bool hasAccessIp() const { return this->accessIp_ != nullptr;};
    void deleteAccessIp() { this->accessIp_ = nullptr;};
    inline string getAccessIp() const { DARABONBA_PTR_GET_DEFAULT(accessIp_, "") };
    inline ModifyFullNatEntryAttributeRequest& setAccessIp(string accessIp) { DARABONBA_PTR_SET_VALUE(accessIp_, accessIp) };


    // accessPort Field Functions 
    bool hasAccessPort() const { return this->accessPort_ != nullptr;};
    void deleteAccessPort() { this->accessPort_ = nullptr;};
    inline string getAccessPort() const { DARABONBA_PTR_GET_DEFAULT(accessPort_, "") };
    inline ModifyFullNatEntryAttributeRequest& setAccessPort(string accessPort) { DARABONBA_PTR_SET_VALUE(accessPort_, accessPort) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyFullNatEntryAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyFullNatEntryAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // fullNatEntryDescription Field Functions 
    bool hasFullNatEntryDescription() const { return this->fullNatEntryDescription_ != nullptr;};
    void deleteFullNatEntryDescription() { this->fullNatEntryDescription_ = nullptr;};
    inline string getFullNatEntryDescription() const { DARABONBA_PTR_GET_DEFAULT(fullNatEntryDescription_, "") };
    inline ModifyFullNatEntryAttributeRequest& setFullNatEntryDescription(string fullNatEntryDescription) { DARABONBA_PTR_SET_VALUE(fullNatEntryDescription_, fullNatEntryDescription) };


    // fullNatEntryId Field Functions 
    bool hasFullNatEntryId() const { return this->fullNatEntryId_ != nullptr;};
    void deleteFullNatEntryId() { this->fullNatEntryId_ = nullptr;};
    inline string getFullNatEntryId() const { DARABONBA_PTR_GET_DEFAULT(fullNatEntryId_, "") };
    inline ModifyFullNatEntryAttributeRequest& setFullNatEntryId(string fullNatEntryId) { DARABONBA_PTR_SET_VALUE(fullNatEntryId_, fullNatEntryId) };


    // fullNatEntryName Field Functions 
    bool hasFullNatEntryName() const { return this->fullNatEntryName_ != nullptr;};
    void deleteFullNatEntryName() { this->fullNatEntryName_ = nullptr;};
    inline string getFullNatEntryName() const { DARABONBA_PTR_GET_DEFAULT(fullNatEntryName_, "") };
    inline ModifyFullNatEntryAttributeRequest& setFullNatEntryName(string fullNatEntryName) { DARABONBA_PTR_SET_VALUE(fullNatEntryName_, fullNatEntryName) };


    // fullNatTableId Field Functions 
    bool hasFullNatTableId() const { return this->fullNatTableId_ != nullptr;};
    void deleteFullNatTableId() { this->fullNatTableId_ = nullptr;};
    inline string getFullNatTableId() const { DARABONBA_PTR_GET_DEFAULT(fullNatTableId_, "") };
    inline ModifyFullNatEntryAttributeRequest& setFullNatTableId(string fullNatTableId) { DARABONBA_PTR_SET_VALUE(fullNatTableId_, fullNatTableId) };


    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline ModifyFullNatEntryAttributeRequest& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


    // natIp Field Functions 
    bool hasNatIp() const { return this->natIp_ != nullptr;};
    void deleteNatIp() { this->natIp_ = nullptr;};
    inline string getNatIp() const { DARABONBA_PTR_GET_DEFAULT(natIp_, "") };
    inline ModifyFullNatEntryAttributeRequest& setNatIp(string natIp) { DARABONBA_PTR_SET_VALUE(natIp_, natIp) };


    // natIpPort Field Functions 
    bool hasNatIpPort() const { return this->natIpPort_ != nullptr;};
    void deleteNatIpPort() { this->natIpPort_ = nullptr;};
    inline string getNatIpPort() const { DARABONBA_PTR_GET_DEFAULT(natIpPort_, "") };
    inline ModifyFullNatEntryAttributeRequest& setNatIpPort(string natIpPort) { DARABONBA_PTR_SET_VALUE(natIpPort_, natIpPort) };


    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string getNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline ModifyFullNatEntryAttributeRequest& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyFullNatEntryAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyFullNatEntryAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyFullNatEntryAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyFullNatEntryAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyFullNatEntryAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    shared_ptr<string> accessDomain_ {};
    // The backend IP address to be modified in FULLNAT address translation.
    shared_ptr<string> accessIp_ {};
    // The backend port to be modified in FULLNAT port mapping. Valid values: **1** to **65535**.
    shared_ptr<string> accessPort_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false**: performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The new description of the FULLNAT entry.
    // 
    // You can leave this parameter empty or enter a description. If you enter a description, the description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> fullNatEntryDescription_ {};
    // The ID of the FULLNAT entry to be modified.
    // 
    // This parameter is required.
    shared_ptr<string> fullNatEntryId_ {};
    // The new name of the FULLNAT entry.
    // 
    // The name must be 2 to 128 characters in length. It must start with a letter but cannot start with `http://` or `https://`.
    shared_ptr<string> fullNatEntryName_ {};
    // The ID of the FULLNAT table to be modified.
    // 
    // This parameter is required.
    shared_ptr<string> fullNatTableId_ {};
    // The protocol of the packets that are forwarded by the port. Valid values:
    // 
    // *   **TCP**: TCP
    // *   **UDP**
    shared_ptr<string> ipProtocol_ {};
    // The NAT IP address to be modified.
    shared_ptr<string> natIp_ {};
    // The frontend port to be modified in FULLNAT port mapping. Valid values: **1** to **65535**.
    shared_ptr<string> natIpPort_ {};
    // The ID of the elastic network interface (ENI) to be modified.
    shared_ptr<string> networkInterfaceId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the Virtual Private Cloud (VPC) NAT gateway to which the FULLNAT entry to be modified belongs.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
