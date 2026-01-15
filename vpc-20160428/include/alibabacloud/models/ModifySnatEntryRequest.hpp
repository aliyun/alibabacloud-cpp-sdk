// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSNATENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSNATENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifySnatEntryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySnatEntryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EipAffinity, eipAffinity_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SnatEntryId, snatEntryId_);
      DARABONBA_PTR_TO_JSON(SnatEntryName, snatEntryName_);
      DARABONBA_PTR_TO_JSON(SnatIp, snatIp_);
      DARABONBA_PTR_TO_JSON(SnatTableId, snatTableId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySnatEntryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EipAffinity, eipAffinity_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SnatEntryId, snatEntryId_);
      DARABONBA_PTR_FROM_JSON(SnatEntryName, snatEntryName_);
      DARABONBA_PTR_FROM_JSON(SnatIp, snatIp_);
      DARABONBA_PTR_FROM_JSON(SnatTableId, snatTableId_);
    };
    ModifySnatEntryRequest() = default ;
    ModifySnatEntryRequest(const ModifySnatEntryRequest &) = default ;
    ModifySnatEntryRequest(ModifySnatEntryRequest &&) = default ;
    ModifySnatEntryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySnatEntryRequest() = default ;
    ModifySnatEntryRequest& operator=(const ModifySnatEntryRequest &) = default ;
    ModifySnatEntryRequest& operator=(ModifySnatEntryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->eipAffinity_ == nullptr && this->networkInterfaceId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->snatEntryId_ == nullptr && this->snatEntryName_ == nullptr
        && this->snatIp_ == nullptr && this->snatTableId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifySnatEntryRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifySnatEntryRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // eipAffinity Field Functions 
    bool hasEipAffinity() const { return this->eipAffinity_ != nullptr;};
    void deleteEipAffinity() { this->eipAffinity_ = nullptr;};
    inline int32_t getEipAffinity() const { DARABONBA_PTR_GET_DEFAULT(eipAffinity_, 0) };
    inline ModifySnatEntryRequest& setEipAffinity(int32_t eipAffinity) { DARABONBA_PTR_SET_VALUE(eipAffinity_, eipAffinity) };


    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string getNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline ModifySnatEntryRequest& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifySnatEntryRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifySnatEntryRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifySnatEntryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifySnatEntryRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifySnatEntryRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // snatEntryId Field Functions 
    bool hasSnatEntryId() const { return this->snatEntryId_ != nullptr;};
    void deleteSnatEntryId() { this->snatEntryId_ = nullptr;};
    inline string getSnatEntryId() const { DARABONBA_PTR_GET_DEFAULT(snatEntryId_, "") };
    inline ModifySnatEntryRequest& setSnatEntryId(string snatEntryId) { DARABONBA_PTR_SET_VALUE(snatEntryId_, snatEntryId) };


    // snatEntryName Field Functions 
    bool hasSnatEntryName() const { return this->snatEntryName_ != nullptr;};
    void deleteSnatEntryName() { this->snatEntryName_ = nullptr;};
    inline string getSnatEntryName() const { DARABONBA_PTR_GET_DEFAULT(snatEntryName_, "") };
    inline ModifySnatEntryRequest& setSnatEntryName(string snatEntryName) { DARABONBA_PTR_SET_VALUE(snatEntryName_, snatEntryName) };


    // snatIp Field Functions 
    bool hasSnatIp() const { return this->snatIp_ != nullptr;};
    void deleteSnatIp() { this->snatIp_ = nullptr;};
    inline string getSnatIp() const { DARABONBA_PTR_GET_DEFAULT(snatIp_, "") };
    inline ModifySnatEntryRequest& setSnatIp(string snatIp) { DARABONBA_PTR_SET_VALUE(snatIp_, snatIp) };


    // snatTableId Field Functions 
    bool hasSnatTableId() const { return this->snatTableId_ != nullptr;};
    void deleteSnatTableId() { this->snatTableId_ = nullptr;};
    inline string getSnatTableId() const { DARABONBA_PTR_GET_DEFAULT(snatTableId_, "") };
    inline ModifySnatEntryRequest& setSnatTableId(string snatTableId) { DARABONBA_PTR_SET_VALUE(snatTableId_, snatTableId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // Whether to perform a dry run of this request, with values:
    // - **true**: Sends a check request without modifying the SNAT entry. The checks include whether the required parameters are filled in, the request format, and business restrictions. If the check fails, the corresponding error is returned. If the check passes, an error code `DryRunOperation` is returned.
    // - **false** (default): Sends a normal request. After passing the check, it returns a 2xx HTTP status code and modifies the SNAT entry.
    shared_ptr<bool> dryRun_ {};
    // Whether to enable IP affinity. Values:
    // - **0**: Disable IP affinity.
    //  - **1**: Enable IP affinity.
    // > After enabling the IP affinity switch, if an SNAT entry is bound to multiple EIPs or NAT IPs, the same client will use the same EIP or NAT IP for access; otherwise, the client will randomly select from the bound EIPs or NAT IPs for access.
    shared_ptr<int32_t> eipAffinity_ {};
    // Elastic Network Interface ID. The IPv4 address set of the elastic network interface will be used as the SNAT address.
    shared_ptr<string> networkInterfaceId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the NAT gateway.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to obtain the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the SNAT entry that you want to modify.
    // 
    // This parameter is required.
    shared_ptr<string> snatEntryId_ {};
    // The name of the SNAT entry.
    // 
    // The name must be 2 to 128 characters in length. It must start with a letter but cannot start with `http://` or `https://`.
    shared_ptr<string> snatEntryName_ {};
    // *   The elastic IP addresses (EIPs) specified in the SNAT entry when you modify an SNAT entry of an Internet NAT gateway. Separate EIPs with commas (,).
    // 
    //     If you select multiple EIPs to create an SNAT address pool, connections are hashed to these EIPs. Network traffic may not be evenly distributed to the EIPs because the amount of traffic passes through each connection varies. We recommend that you associate these EIPs with the same EIP bandwidth plan to prevent service interruptions due to the bandwidth limit of an individual EIP.
    // 
    // *   When you modify an SNAT entry of a VPC NAT gateway, this parameter specifies the NAT IP address in the SNAT entry.
    shared_ptr<string> snatIp_ {};
    // The ID of the SNAT table to which the SNAT entry belongs.
    // 
    // This parameter is required.
    shared_ptr<string> snatTableId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
