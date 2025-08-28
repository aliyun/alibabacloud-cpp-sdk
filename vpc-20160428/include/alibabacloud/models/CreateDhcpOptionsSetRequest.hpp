// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDHCPOPTIONSSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDHCPOPTIONSSETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDhcpOptionsSetRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateDhcpOptionsSetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDhcpOptionsSetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DhcpOptionsSetDescription, dhcpOptionsSetDescription_);
      DARABONBA_PTR_TO_JSON(DhcpOptionsSetName, dhcpOptionsSetName_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainNameServers, domainNameServers_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Ipv6LeaseTime, ipv6LeaseTime_);
      DARABONBA_PTR_TO_JSON(LeaseTime, leaseTime_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDhcpOptionsSetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DhcpOptionsSetDescription, dhcpOptionsSetDescription_);
      DARABONBA_PTR_FROM_JSON(DhcpOptionsSetName, dhcpOptionsSetName_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainNameServers, domainNameServers_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Ipv6LeaseTime, ipv6LeaseTime_);
      DARABONBA_PTR_FROM_JSON(LeaseTime, leaseTime_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateDhcpOptionsSetRequest() = default ;
    CreateDhcpOptionsSetRequest(const CreateDhcpOptionsSetRequest &) = default ;
    CreateDhcpOptionsSetRequest(CreateDhcpOptionsSetRequest &&) = default ;
    CreateDhcpOptionsSetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDhcpOptionsSetRequest() = default ;
    CreateDhcpOptionsSetRequest& operator=(const CreateDhcpOptionsSetRequest &) = default ;
    CreateDhcpOptionsSetRequest& operator=(CreateDhcpOptionsSetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->dhcpOptionsSetDescription_ != nullptr && this->dhcpOptionsSetName_ != nullptr && this->domainName_ != nullptr && this->domainNameServers_ != nullptr && this->dryRun_ != nullptr
        && this->ipv6LeaseTime_ != nullptr && this->leaseTime_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr
        && this->resourceGroupId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->tag_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDhcpOptionsSetRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dhcpOptionsSetDescription Field Functions 
    bool hasDhcpOptionsSetDescription() const { return this->dhcpOptionsSetDescription_ != nullptr;};
    void deleteDhcpOptionsSetDescription() { this->dhcpOptionsSetDescription_ = nullptr;};
    inline string dhcpOptionsSetDescription() const { DARABONBA_PTR_GET_DEFAULT(dhcpOptionsSetDescription_, "") };
    inline CreateDhcpOptionsSetRequest& setDhcpOptionsSetDescription(string dhcpOptionsSetDescription) { DARABONBA_PTR_SET_VALUE(dhcpOptionsSetDescription_, dhcpOptionsSetDescription) };


    // dhcpOptionsSetName Field Functions 
    bool hasDhcpOptionsSetName() const { return this->dhcpOptionsSetName_ != nullptr;};
    void deleteDhcpOptionsSetName() { this->dhcpOptionsSetName_ = nullptr;};
    inline string dhcpOptionsSetName() const { DARABONBA_PTR_GET_DEFAULT(dhcpOptionsSetName_, "") };
    inline CreateDhcpOptionsSetRequest& setDhcpOptionsSetName(string dhcpOptionsSetName) { DARABONBA_PTR_SET_VALUE(dhcpOptionsSetName_, dhcpOptionsSetName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline CreateDhcpOptionsSetRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainNameServers Field Functions 
    bool hasDomainNameServers() const { return this->domainNameServers_ != nullptr;};
    void deleteDomainNameServers() { this->domainNameServers_ = nullptr;};
    inline string domainNameServers() const { DARABONBA_PTR_GET_DEFAULT(domainNameServers_, "") };
    inline CreateDhcpOptionsSetRequest& setDomainNameServers(string domainNameServers) { DARABONBA_PTR_SET_VALUE(domainNameServers_, domainNameServers) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateDhcpOptionsSetRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ipv6LeaseTime Field Functions 
    bool hasIpv6LeaseTime() const { return this->ipv6LeaseTime_ != nullptr;};
    void deleteIpv6LeaseTime() { this->ipv6LeaseTime_ = nullptr;};
    inline string ipv6LeaseTime() const { DARABONBA_PTR_GET_DEFAULT(ipv6LeaseTime_, "") };
    inline CreateDhcpOptionsSetRequest& setIpv6LeaseTime(string ipv6LeaseTime) { DARABONBA_PTR_SET_VALUE(ipv6LeaseTime_, ipv6LeaseTime) };


    // leaseTime Field Functions 
    bool hasLeaseTime() const { return this->leaseTime_ != nullptr;};
    void deleteLeaseTime() { this->leaseTime_ = nullptr;};
    inline string leaseTime() const { DARABONBA_PTR_GET_DEFAULT(leaseTime_, "") };
    inline CreateDhcpOptionsSetRequest& setLeaseTime(string leaseTime) { DARABONBA_PTR_SET_VALUE(leaseTime_, leaseTime) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateDhcpOptionsSetRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateDhcpOptionsSetRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDhcpOptionsSetRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDhcpOptionsSetRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateDhcpOptionsSetRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateDhcpOptionsSetRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateDhcpOptionsSetRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateDhcpOptionsSetRequestTag>) };
    inline vector<CreateDhcpOptionsSetRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateDhcpOptionsSetRequestTag>) };
    inline CreateDhcpOptionsSetRequest& setTag(const vector<CreateDhcpOptionsSetRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateDhcpOptionsSetRequest& setTag(vector<CreateDhcpOptionsSetRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The description of the DHCP options set.
    // 
    // The description must be 1 to 256 characters in length. It must start with a letter and cannot start with `http://` or `https://`.
    std::shared_ptr<string> dhcpOptionsSetDescription_ = nullptr;
    // The name of the DHCP options set.
    // 
    // The name must be 1 to 128 characters in length and can contain letters, digits, underscores (_), and hyphens (-). It must start with a letter.
    std::shared_ptr<string> dhcpOptionsSetName_ = nullptr;
    // The root domain. For example, you can set the value to example.com.
    // 
    // After a DHCP options set is associated with a virtual private cloud (VPC), the root domain in the DHCP options set is automatically synchronized with the ECS instances in the VPC.
    std::shared_ptr<string> domainName_ = nullptr;
    // The IP address of the DNS server. You can enter at most four DNS server IP addresses. Separate IP addresses with commas (,).
    // 
    // >  If no IP address is specified, the Elastic Compute Service (ECS) instance uses the IP addresses 100.100.2.136 and 100.100.2.138, which are provided by Alibaba Cloud by default.
    std::shared_ptr<string> domainNameServers_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request.
    // 
    // **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // 
    // **false** (default): performs a dry run and sends the request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The lease time of the IPv6 addresses for the DHCP options set.
    // 
    // *   If you use hours as the unit, valid values are **24h to 1176h** and **87600h to 175200h**. Default value: **87600h**.
    // *   If you use days as the unit, valid values are **1d to 49d** and **3650d to 7300d**. Default value: **3650d**.
    // 
    // >  When you enter a value, you must also specify the unit.
    std::shared_ptr<string> ipv6LeaseTime_ = nullptr;
    // The lease time of the IPv4 addresses for the DHCP options set.
    // 
    // *   If you use hours as the unit, valid values are **24h to 1176h** and **87600h to 175200h**. Default value: **87600h**.
    // *   If you use days as the unit, valid values are **1d to 49d** and **3650d to 7300d**. Default value: **3650d**.
    // 
    // >  When you enter a value, you must also specify the unit.
    std::shared_ptr<string> leaseTime_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region to which the DHCP options set belongs.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the DHCP options set belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The tag of the resource.
    std::shared_ptr<vector<CreateDhcpOptionsSetRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
