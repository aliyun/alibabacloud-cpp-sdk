// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLOCATEIPV6ADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ALLOCATEIPV6ADDRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AllocateIpv6AddressRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class AllocateIpv6AddressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AllocateIpv6AddressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Ipv6Address, ipv6Address_);
      DARABONBA_PTR_TO_JSON(Ipv6AddressDescription, ipv6AddressDescription_);
      DARABONBA_PTR_TO_JSON(Ipv6AddressName, ipv6AddressName_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, AllocateIpv6AddressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Ipv6Address, ipv6Address_);
      DARABONBA_PTR_FROM_JSON(Ipv6AddressDescription, ipv6AddressDescription_);
      DARABONBA_PTR_FROM_JSON(Ipv6AddressName, ipv6AddressName_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    AllocateIpv6AddressRequest() = default ;
    AllocateIpv6AddressRequest(const AllocateIpv6AddressRequest &) = default ;
    AllocateIpv6AddressRequest(AllocateIpv6AddressRequest &&) = default ;
    AllocateIpv6AddressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AllocateIpv6AddressRequest() = default ;
    AllocateIpv6AddressRequest& operator=(const AllocateIpv6AddressRequest &) = default ;
    AllocateIpv6AddressRequest& operator=(AllocateIpv6AddressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addressType_ != nullptr
        && this->clientToken_ != nullptr && this->dryRun_ != nullptr && this->ipv6Address_ != nullptr && this->ipv6AddressDescription_ != nullptr && this->ipv6AddressName_ != nullptr
        && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr && this->tag_ != nullptr && this->vSwitchId_ != nullptr; };
    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string addressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline AllocateIpv6AddressRequest& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AllocateIpv6AddressRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline AllocateIpv6AddressRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ipv6Address Field Functions 
    bool hasIpv6Address() const { return this->ipv6Address_ != nullptr;};
    void deleteIpv6Address() { this->ipv6Address_ = nullptr;};
    inline string ipv6Address() const { DARABONBA_PTR_GET_DEFAULT(ipv6Address_, "") };
    inline AllocateIpv6AddressRequest& setIpv6Address(string ipv6Address) { DARABONBA_PTR_SET_VALUE(ipv6Address_, ipv6Address) };


    // ipv6AddressDescription Field Functions 
    bool hasIpv6AddressDescription() const { return this->ipv6AddressDescription_ != nullptr;};
    void deleteIpv6AddressDescription() { this->ipv6AddressDescription_ = nullptr;};
    inline string ipv6AddressDescription() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressDescription_, "") };
    inline AllocateIpv6AddressRequest& setIpv6AddressDescription(string ipv6AddressDescription) { DARABONBA_PTR_SET_VALUE(ipv6AddressDescription_, ipv6AddressDescription) };


    // ipv6AddressName Field Functions 
    bool hasIpv6AddressName() const { return this->ipv6AddressName_ != nullptr;};
    void deleteIpv6AddressName() { this->ipv6AddressName_ = nullptr;};
    inline string ipv6AddressName() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressName_, "") };
    inline AllocateIpv6AddressRequest& setIpv6AddressName(string ipv6AddressName) { DARABONBA_PTR_SET_VALUE(ipv6AddressName_, ipv6AddressName) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline AllocateIpv6AddressRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AllocateIpv6AddressRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AllocateIpv6AddressRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline AllocateIpv6AddressRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AllocateIpv6AddressRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AllocateIpv6AddressRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<AllocateIpv6AddressRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<AllocateIpv6AddressRequestTag>) };
    inline vector<AllocateIpv6AddressRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<AllocateIpv6AddressRequestTag>) };
    inline AllocateIpv6AddressRequest& setTag(const vector<AllocateIpv6AddressRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline AllocateIpv6AddressRequest& setTag(vector<AllocateIpv6AddressRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline AllocateIpv6AddressRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The type of the IPv6 address. Valid values:
    // 
    // *   IPv6Address (default): an IPv6 address.
    // *   IPv6Prefix: an IPv6 CIDR block.
    std::shared_ptr<string> addressType_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   true: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the DryRunOperation error code is returned.
    // *   false (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The IPv6 address. The IPv6 address must be an idle one that falls within the vSwitch CIDR block.
    std::shared_ptr<string> ipv6Address_ = nullptr;
    // The description of the IPv6 address.
    std::shared_ptr<string> ipv6AddressDescription_ = nullptr;
    // The name of the IPv6 address.
    std::shared_ptr<string> ipv6AddressName_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID. For more information about resource groups, see related documentation.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The tag list.
    std::shared_ptr<vector<AllocateIpv6AddressRequestTag>> tag_ = nullptr;
    // The ID of the vSwitch to which the IPv6 address belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
