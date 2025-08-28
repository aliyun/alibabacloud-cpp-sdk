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
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->dryRun_ != nullptr && this->eipAffinity_ != nullptr && this->networkInterfaceId_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr
        && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->snatEntryName_ != nullptr && this->snatIp_ != nullptr
        && this->snatTableId_ != nullptr && this->sourceCIDR_ != nullptr && this->sourceVSwitchId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateSnatEntryRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateSnatEntryRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // eipAffinity Field Functions 
    bool hasEipAffinity() const { return this->eipAffinity_ != nullptr;};
    void deleteEipAffinity() { this->eipAffinity_ = nullptr;};
    inline int32_t eipAffinity() const { DARABONBA_PTR_GET_DEFAULT(eipAffinity_, 0) };
    inline CreateSnatEntryRequest& setEipAffinity(int32_t eipAffinity) { DARABONBA_PTR_SET_VALUE(eipAffinity_, eipAffinity) };


    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string networkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline CreateSnatEntryRequest& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateSnatEntryRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateSnatEntryRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSnatEntryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateSnatEntryRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateSnatEntryRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // snatEntryName Field Functions 
    bool hasSnatEntryName() const { return this->snatEntryName_ != nullptr;};
    void deleteSnatEntryName() { this->snatEntryName_ = nullptr;};
    inline string snatEntryName() const { DARABONBA_PTR_GET_DEFAULT(snatEntryName_, "") };
    inline CreateSnatEntryRequest& setSnatEntryName(string snatEntryName) { DARABONBA_PTR_SET_VALUE(snatEntryName_, snatEntryName) };


    // snatIp Field Functions 
    bool hasSnatIp() const { return this->snatIp_ != nullptr;};
    void deleteSnatIp() { this->snatIp_ = nullptr;};
    inline string snatIp() const { DARABONBA_PTR_GET_DEFAULT(snatIp_, "") };
    inline CreateSnatEntryRequest& setSnatIp(string snatIp) { DARABONBA_PTR_SET_VALUE(snatIp_, snatIp) };


    // snatTableId Field Functions 
    bool hasSnatTableId() const { return this->snatTableId_ != nullptr;};
    void deleteSnatTableId() { this->snatTableId_ = nullptr;};
    inline string snatTableId() const { DARABONBA_PTR_GET_DEFAULT(snatTableId_, "") };
    inline CreateSnatEntryRequest& setSnatTableId(string snatTableId) { DARABONBA_PTR_SET_VALUE(snatTableId_, snatTableId) };


    // sourceCIDR Field Functions 
    bool hasSourceCIDR() const { return this->sourceCIDR_ != nullptr;};
    void deleteSourceCIDR() { this->sourceCIDR_ = nullptr;};
    inline string sourceCIDR() const { DARABONBA_PTR_GET_DEFAULT(sourceCIDR_, "") };
    inline CreateSnatEntryRequest& setSourceCIDR(string sourceCIDR) { DARABONBA_PTR_SET_VALUE(sourceCIDR_, sourceCIDR) };


    // sourceVSwitchId Field Functions 
    bool hasSourceVSwitchId() const { return this->sourceVSwitchId_ != nullptr;};
    void deleteSourceVSwitchId() { this->sourceVSwitchId_ = nullptr;};
    inline string sourceVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(sourceVSwitchId_, "") };
    inline CreateSnatEntryRequest& setSourceVSwitchId(string sourceVSwitchId) { DARABONBA_PTR_SET_VALUE(sourceVSwitchId_, sourceVSwitchId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The `client token` can contain only ASCII characters.
    // 
    // **
    // 
    // **Description** If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<bool> dryRun_ = nullptr;
    // Specifies whether to enable EIP affinity. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    // 
    // **
    // 
    // **Description** After you enable EIP affinity, if multiple EIPs are associated with an SNAT entry, each client uses one EIP to access the Internet. If EIP affinity is disabled, each client uses a random EIP to access the Internet.
    std::shared_ptr<int32_t> eipAffinity_ = nullptr;
    std::shared_ptr<string> networkInterfaceId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the NAT gateway.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // Valid values:
    // 
    // *   ap-northeast-2-pop
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     ap-northeast-2-pop
    // 
    //     <!-- -->
    // 
    //     .
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The name of the SNAT entry.
    // 
    // The name must be 2 to 128 characters in length. It must start with a letter but cannot start with `http://` or `https://`.
    std::shared_ptr<string> snatEntryName_ = nullptr;
    // *   The EIPs in the SNAT entry when you add an SNAT entry to an Internet NAT gateway. Separate EIPs with commas (,).
    // 
    // >  If you specify multiple EIPs in the SNAT IP address pool, the service connection is allocated to multiple EIPs by using the hashing algorithm. The traffic of each EIP may be different. Therefore, we recommend that you associate the EIPs with an Internet Shared Bandwidth instance to prevent service interruptions caused by bandwidth exhaustion.
    // 
    // *   When you add SNAT entries for a VPC NAT gateway, this parameter specifies the NAT IP addresses in the SNAT entry. Separate multiple NAT IP addresses with commas (,).
    std::shared_ptr<string> snatIp_ = nullptr;
    // The ID of the SNAT table.
    // 
    // This parameter is required.
    std::shared_ptr<string> snatTableId_ = nullptr;
    // You can specify the CIDR block of a VPC, a vSwitch, or an ECS instance or enter a custom CIDR block.
    // 
    // You can specify an SNAT entry in the following ways:
    // 
    // *   You can specify the CIDR block of the VPC where the NAT gateway is deployed. Then, all ECS instances in the VPC can access the Internet or external networks by using SNAT.
    // *   You can specify the CIDR block of a vSwitch, for example, 192.168.1.0/24. Then, the ECS instances in the vSwitch can access the Internet or external networks by using SNAT.
    // *   You can specify the IP address of an ECS instance, for example, 192.168.1.1/32. Then, the ECS instance can access the Internet or external networks by using SNAT.
    // *   You can specify a custom CIDR block. Then, all ECS instances within the specified CIDR block can access the Internet or external networks by using SNAT.
    // 
    // When you add an SNAT entry to an Internet NAT gateway, if **SnatIp** is set to an EIP, the ECS instance uses the specified EIP to access the Internet.
    // 
    // If **SnatIp** is set to multiple EIPs, the ECS instance randomly selects an EIP specified in the **SnatIp** parameter to access the Internet.
    // 
    // You cannot specify this parameter and **SourceVSwtichId** at the same time. If **SourceVSwitchId** is specified, you cannot specify **SourceCIDR**. If **SourceCIDR** is specified, you cannot specify **SourceVSwitchId**.
    std::shared_ptr<string> sourceCIDR_ = nullptr;
    // The ID of the vSwitch.
    // 
    // *   When you add an SNAT entry to an Internet NAT gateway, this parameter specifies that ECS instances in the vSwitch can use the SNAT entry to access the Internet. If you select multiple elastic IP addresses (EIPs) to create an SNAT address pool, connections are hashed to these EIPs. Network traffic may not be evenly distributed to the EIPs because the amount of traffic that passes through each connection varies. We recommend that you associate these EIPs with the same EIP bandwidth plan to prevent service interruptions due to the bandwidth limits on individual EIPs.
    // *   When you add an SNAT entry to a VPC NAT gateway, this parameter specifies that ECS instances in the vSwitch can use the SNAT entry to access external networks.
    std::shared_ptr<string> sourceVSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
