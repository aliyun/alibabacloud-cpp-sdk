// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDHCPOPTIONSSETATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDHCPOPTIONSSETATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class UpdateDhcpOptionsSetAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDhcpOptionsSetAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DhcpOptionsSetDescription, dhcpOptionsSetDescription_);
      DARABONBA_PTR_TO_JSON(DhcpOptionsSetId, dhcpOptionsSetId_);
      DARABONBA_PTR_TO_JSON(DhcpOptionsSetName, dhcpOptionsSetName_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainNameServers, domainNameServers_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Ipv6LeaseTime, ipv6LeaseTime_);
      DARABONBA_PTR_TO_JSON(LeaseTime, leaseTime_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDhcpOptionsSetAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DhcpOptionsSetDescription, dhcpOptionsSetDescription_);
      DARABONBA_PTR_FROM_JSON(DhcpOptionsSetId, dhcpOptionsSetId_);
      DARABONBA_PTR_FROM_JSON(DhcpOptionsSetName, dhcpOptionsSetName_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainNameServers, domainNameServers_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Ipv6LeaseTime, ipv6LeaseTime_);
      DARABONBA_PTR_FROM_JSON(LeaseTime, leaseTime_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    UpdateDhcpOptionsSetAttributeRequest() = default ;
    UpdateDhcpOptionsSetAttributeRequest(const UpdateDhcpOptionsSetAttributeRequest &) = default ;
    UpdateDhcpOptionsSetAttributeRequest(UpdateDhcpOptionsSetAttributeRequest &&) = default ;
    UpdateDhcpOptionsSetAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDhcpOptionsSetAttributeRequest() = default ;
    UpdateDhcpOptionsSetAttributeRequest& operator=(const UpdateDhcpOptionsSetAttributeRequest &) = default ;
    UpdateDhcpOptionsSetAttributeRequest& operator=(UpdateDhcpOptionsSetAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dhcpOptionsSetDescription_ == nullptr && this->dhcpOptionsSetId_ == nullptr && this->dhcpOptionsSetName_ == nullptr && this->domainName_ == nullptr && this->domainNameServers_ == nullptr
        && this->dryRun_ == nullptr && this->ipv6LeaseTime_ == nullptr && this->leaseTime_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateDhcpOptionsSetAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dhcpOptionsSetDescription Field Functions 
    bool hasDhcpOptionsSetDescription() const { return this->dhcpOptionsSetDescription_ != nullptr;};
    void deleteDhcpOptionsSetDescription() { this->dhcpOptionsSetDescription_ = nullptr;};
    inline string getDhcpOptionsSetDescription() const { DARABONBA_PTR_GET_DEFAULT(dhcpOptionsSetDescription_, "") };
    inline UpdateDhcpOptionsSetAttributeRequest& setDhcpOptionsSetDescription(string dhcpOptionsSetDescription) { DARABONBA_PTR_SET_VALUE(dhcpOptionsSetDescription_, dhcpOptionsSetDescription) };


    // dhcpOptionsSetId Field Functions 
    bool hasDhcpOptionsSetId() const { return this->dhcpOptionsSetId_ != nullptr;};
    void deleteDhcpOptionsSetId() { this->dhcpOptionsSetId_ = nullptr;};
    inline string getDhcpOptionsSetId() const { DARABONBA_PTR_GET_DEFAULT(dhcpOptionsSetId_, "") };
    inline UpdateDhcpOptionsSetAttributeRequest& setDhcpOptionsSetId(string dhcpOptionsSetId) { DARABONBA_PTR_SET_VALUE(dhcpOptionsSetId_, dhcpOptionsSetId) };


    // dhcpOptionsSetName Field Functions 
    bool hasDhcpOptionsSetName() const { return this->dhcpOptionsSetName_ != nullptr;};
    void deleteDhcpOptionsSetName() { this->dhcpOptionsSetName_ = nullptr;};
    inline string getDhcpOptionsSetName() const { DARABONBA_PTR_GET_DEFAULT(dhcpOptionsSetName_, "") };
    inline UpdateDhcpOptionsSetAttributeRequest& setDhcpOptionsSetName(string dhcpOptionsSetName) { DARABONBA_PTR_SET_VALUE(dhcpOptionsSetName_, dhcpOptionsSetName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline UpdateDhcpOptionsSetAttributeRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainNameServers Field Functions 
    bool hasDomainNameServers() const { return this->domainNameServers_ != nullptr;};
    void deleteDomainNameServers() { this->domainNameServers_ = nullptr;};
    inline string getDomainNameServers() const { DARABONBA_PTR_GET_DEFAULT(domainNameServers_, "") };
    inline UpdateDhcpOptionsSetAttributeRequest& setDomainNameServers(string domainNameServers) { DARABONBA_PTR_SET_VALUE(domainNameServers_, domainNameServers) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateDhcpOptionsSetAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ipv6LeaseTime Field Functions 
    bool hasIpv6LeaseTime() const { return this->ipv6LeaseTime_ != nullptr;};
    void deleteIpv6LeaseTime() { this->ipv6LeaseTime_ = nullptr;};
    inline string getIpv6LeaseTime() const { DARABONBA_PTR_GET_DEFAULT(ipv6LeaseTime_, "") };
    inline UpdateDhcpOptionsSetAttributeRequest& setIpv6LeaseTime(string ipv6LeaseTime) { DARABONBA_PTR_SET_VALUE(ipv6LeaseTime_, ipv6LeaseTime) };


    // leaseTime Field Functions 
    bool hasLeaseTime() const { return this->leaseTime_ != nullptr;};
    void deleteLeaseTime() { this->leaseTime_ = nullptr;};
    inline string getLeaseTime() const { DARABONBA_PTR_GET_DEFAULT(leaseTime_, "") };
    inline UpdateDhcpOptionsSetAttributeRequest& setLeaseTime(string leaseTime) { DARABONBA_PTR_SET_VALUE(leaseTime_, leaseTime) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UpdateDhcpOptionsSetAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateDhcpOptionsSetAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateDhcpOptionsSetAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateDhcpOptionsSetAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateDhcpOptionsSetAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not set this parameter, **ClientToken** is set to the value of **RequestId**. The value of **RequestId** for each API request may be different.
    shared_ptr<string> clientToken_ {};
    // Enter a description for the DHCP options set.
    // 
    // The description must be 2 to 256 characters in length. It must start with a letter and cannot start with `http://` or `https://`. You can also leave the description empty.
    shared_ptr<string> dhcpOptionsSetDescription_ {};
    // The ID of the DHCP options set.
    // 
    // This parameter is required.
    shared_ptr<string> dhcpOptionsSetId_ {};
    // The name of the DHCP options set.
    // 
    // The name must be 2 to 128 characters in length, and can contain letters, digits, underscores (_), and hyphens (-). The name must start with a letter.
    shared_ptr<string> dhcpOptionsSetName_ {};
    // The root domain. For example, you can set the value to example.com.
    // 
    // After a DHCP options set is associated with a virtual private cloud (VPC), the root domain in the DHCP options set is automatically synchronized with the ECS instances in the VPC.
    shared_ptr<string> domainName_ {};
    // The IP address of the DNS server. You can enter at most four DNS server IP addresses. Separate IP addresses with commas (,).
    // 
    // >  If you do not specify a DNS server IP address, Elastic Compute Service (ECS) instances use the IP addresses of the Alibaba Cloud DNS servers, which are 100.100.2.136 and 100.100.2.138.
    shared_ptr<string> domainNameServers_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // **true**: performs a dry run. The system checks the required parameters, request format, and limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // 
    // **false** (default): performs a dry run and sends the request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The lease time of the IPv6 addresses for the DHCP options set.
    // 
    // *   If you use hours as the unit, valid values are **24h to 1176h** and **87600h to 175200h**. Default value: **87600h**.
    // *   If you use days as the unit, valid values are **1d to 49d** and **3650d to 7300d**. Default value: **3650d**.
    // 
    // >  If you specify a value, you must also specify the unit.
    shared_ptr<string> ipv6LeaseTime_ {};
    // The lease time of the IPv4 addresses for the DHCP options set.
    // 
    // *   If you use hours as the unit, valid values are **24h to 1176h** and **87600h to 175200h**. Default value: **87600h**.
    // *   If you use days as the unit, valid values are **1d to 49d** and **3650d to 7300d**. Default value: **3650d**.
    // 
    // >  If you specify a value, you must also specify the unit.
    shared_ptr<string> leaseTime_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region where the DHCP options set is deployed. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
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
