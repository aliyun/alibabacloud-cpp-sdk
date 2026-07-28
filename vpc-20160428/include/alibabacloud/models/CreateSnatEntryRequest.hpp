// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESNATENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESNATENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateSnatEntryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSnatEntryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EipAffinity, eipAffinity_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SnatEntryName, snatEntryName_);
      DARABONBA_PTR_TO_JSON(SnatIp, snatIp_);
      DARABONBA_PTR_TO_JSON(SnatTableId, snatTableId_);
      DARABONBA_PTR_TO_JSON(SourceCIDR, sourceCIDR_);
      DARABONBA_PTR_TO_JSON(SourceVSwitchId, sourceVSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSnatEntryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EipAffinity, eipAffinity_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SnatEntryName, snatEntryName_);
      DARABONBA_PTR_FROM_JSON(SnatIp, snatIp_);
      DARABONBA_PTR_FROM_JSON(SnatTableId, snatTableId_);
      DARABONBA_PTR_FROM_JSON(SourceCIDR, sourceCIDR_);
      DARABONBA_PTR_FROM_JSON(SourceVSwitchId, sourceVSwitchId_);
    };
    CreateSnatEntryRequest() = default ;
    CreateSnatEntryRequest(const CreateSnatEntryRequest &) = default ;
    CreateSnatEntryRequest(CreateSnatEntryRequest &&) = default ;
    CreateSnatEntryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSnatEntryRequest() = default ;
    CreateSnatEntryRequest& operator=(const CreateSnatEntryRequest &) = default ;
    CreateSnatEntryRequest& operator=(CreateSnatEntryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->eipAffinity_ == nullptr && this->networkInterfaceId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->snatEntryName_ == nullptr && this->snatIp_ == nullptr
        && this->snatTableId_ == nullptr && this->sourceCIDR_ == nullptr && this->sourceVSwitchId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateSnatEntryRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateSnatEntryRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // eipAffinity Field Functions 
    bool hasEipAffinity() const { return this->eipAffinity_ != nullptr;};
    void deleteEipAffinity() { this->eipAffinity_ = nullptr;};
    inline int32_t getEipAffinity() const { DARABONBA_PTR_GET_DEFAULT(eipAffinity_, 0) };
    inline CreateSnatEntryRequest& setEipAffinity(int32_t eipAffinity) { DARABONBA_PTR_SET_VALUE(eipAffinity_, eipAffinity) };


    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string getNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline CreateSnatEntryRequest& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateSnatEntryRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateSnatEntryRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSnatEntryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateSnatEntryRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateSnatEntryRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // snatEntryName Field Functions 
    bool hasSnatEntryName() const { return this->snatEntryName_ != nullptr;};
    void deleteSnatEntryName() { this->snatEntryName_ = nullptr;};
    inline string getSnatEntryName() const { DARABONBA_PTR_GET_DEFAULT(snatEntryName_, "") };
    inline CreateSnatEntryRequest& setSnatEntryName(string snatEntryName) { DARABONBA_PTR_SET_VALUE(snatEntryName_, snatEntryName) };


    // snatIp Field Functions 
    bool hasSnatIp() const { return this->snatIp_ != nullptr;};
    void deleteSnatIp() { this->snatIp_ = nullptr;};
    inline string getSnatIp() const { DARABONBA_PTR_GET_DEFAULT(snatIp_, "") };
    inline CreateSnatEntryRequest& setSnatIp(string snatIp) { DARABONBA_PTR_SET_VALUE(snatIp_, snatIp) };


    // snatTableId Field Functions 
    bool hasSnatTableId() const { return this->snatTableId_ != nullptr;};
    void deleteSnatTableId() { this->snatTableId_ = nullptr;};
    inline string getSnatTableId() const { DARABONBA_PTR_GET_DEFAULT(snatTableId_, "") };
    inline CreateSnatEntryRequest& setSnatTableId(string snatTableId) { DARABONBA_PTR_SET_VALUE(snatTableId_, snatTableId) };


    // sourceCIDR Field Functions 
    bool hasSourceCIDR() const { return this->sourceCIDR_ != nullptr;};
    void deleteSourceCIDR() { this->sourceCIDR_ = nullptr;};
    inline string getSourceCIDR() const { DARABONBA_PTR_GET_DEFAULT(sourceCIDR_, "") };
    inline CreateSnatEntryRequest& setSourceCIDR(string sourceCIDR) { DARABONBA_PTR_SET_VALUE(sourceCIDR_, sourceCIDR) };


    // sourceVSwitchId Field Functions 
    bool hasSourceVSwitchId() const { return this->sourceVSwitchId_ != nullptr;};
    void deleteSourceVSwitchId() { this->sourceVSwitchId_ = nullptr;};
    inline string getSourceVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(sourceVSwitchId_, "") };
    inline CreateSnatEntryRequest& setSourceVSwitchId(string sourceVSwitchId) { DARABONBA_PTR_SET_VALUE(sourceVSwitchId_, sourceVSwitchId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The `ClientToken` value can contain only ASCII characters.
    // 
    // >If you do not specify this parameter, the system uses the **RequestId** as the **ClientToken**. The **RequestId** may be different for each API request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // - **true**: performs a dry run without creating the SNAT entry. The system checks the AccessKey pair, the authorization of the Resource Access Management (RAM) user, and the required parameters. If the check fails, the corresponding error is returned. If the check succeeds, the error code `DryRunOperation` is returned.
    // 
    // - **false** (default): sends a Normal request, and the SNAT entry is created after the check succeeds. A 2xx HTTP status code is returned.
    shared_ptr<bool> dryRun_ {};
    // Specifies whether to enable EIP affinity. Valid values:
    // 
    // - **0** (default): disables EIP affinity.
    // 
    // - **1**: enables EIP affinity.
    // 
    // > After EIP affinity is enabled, if the SNAT entry is bindded with multiple EIPs or NAT IP addresses, the same client uses the same EIP or NAT IP address to access the same destination IP address. Otherwise, the client randomly selects an EIP or NAT IP address from the bindded ones.
    shared_ptr<int32_t> eipAffinity_ {};
    // The ID of the elastic network interface (ENI).
    // 
    // > The IPv4 address set of the ENI is used as the SNAT address.
    shared_ptr<string> networkInterfaceId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the NAT gateway. 
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The name of the SNAT entry.
    // 
    // The name must be 2 to 128 characters in length and must start with a letter or Chinese character. It cannot start with `http://` or `https://`.
    shared_ptr<string> snatEntryName_ {};
    // When you add an SNAT entry for an Internet NAT gateway:
    // * The SnatIp parameter is required.
    // 
    // * This parameter specifies the EIPs in the SNAT entry. Separate multiple EIPs with commas (,).
    // 
    // * If SnatIp specifies only one public IP address, the ECS instance uses the specified public IP address to access the Internet.
    // 
    // * If SnatIp specifies multiple public IP addresses, the ECS instance randomly uses one of the public IP addresses in SnatIp to access the Internet.
    // 
    // >If you specify multiple EIPs to configure an SNAT IP IPAM pool, connections are allocated to multiple EIPs by using a hash algorithm. Because the traffic of each connection varies, service traffic may be unevenly distributed among the EIPs. Add each EIP to the same Internet Shared Bandwidth instance to prevent service interruptions caused by bandwidth exhaustion on a single EIP.
    // 
    // When you add an SNAT entry for a VPC NAT gateway:
    // 
    // * This parameter specifies the NAT IP addresses in the SNAT entry. Separate multiple NAT IP addresses with commas (,).
    // 
    // * You must specify one of the SnatIp and NetworkInterfaceId parameters, but you cannot specify both.
    shared_ptr<string> snatIp_ {};
    // The ID of the SNAT table.
    // 
    // This parameter is required.
    shared_ptr<string> snatTableId_ {};
    // The CIDR block of a VPC, vSwitch, or ECS instance. You can also specify a custom CIDR block.
    // 
    // SNAT entries support the following granularities: 
    // 
    // - VPC granularity: the CIDR block of the VPC to which the NAT gateway belongs. All ECS instances in the VPC can access the Internet or external networks by using the SNAT rule.
    // 
    // - vSwitch granularity: the CIDR block of a specified vSwitch (such as 192.168.1.0/24). ECS instances in the vSwitch can access the Internet or external networks by using the SNAT rule.
    // 
    // - ECS granularity: the IP address of a specified ECS instance (such as 192.168.1.1/32). The ECS instance can access the Internet or external networks by using the SNAT rule.
    // 
    // - Custom CIDR block: all ECS instances in the specified CIDR block can access the Internet or external networks by using the SNAT service.
    // 
    // > You must specify one of the **SourceCIDR** and **SourceVSwitchId** parameters, but you cannot specify both.
    shared_ptr<string> sourceCIDR_ {};
    // The ID of the vSwitch.
    // 
    // * When you add an SNAT entry for an Internet NAT gateway, this parameter specifies that ECS instances in the vSwitch can access the Internet by using the SNAT rule. If you specify multiple EIPs to configure an SNAT IP IPAM pool, connections are allocated to multiple EIPs by using a hash algorithm. Because the traffic of each connection varies, service traffic may be unevenly distributed among the EIPs. Add each EIP to the same Internet Shared Bandwidth instance to prevent service interruptions caused by bandwidth exhaustion on a single EIP.
    // 
    // * When you add an SNAT entry for a VPC NAT gateway, this parameter specifies that ECS instances in the vSwitch can access external networks by using the SNAT rule.
    // 
    // > You must specify one of the **SourceCIDR** and **SourceVSwitchId** parameters, but you cannot specify both.
    shared_ptr<string> sourceVSwitchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
