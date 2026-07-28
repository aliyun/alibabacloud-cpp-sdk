// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVPCATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVPCATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyVpcAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVpcAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableDnsHostname, enableDnsHostname_);
      DARABONBA_PTR_TO_JSON(EnableIPv6, enableIPv6_);
      DARABONBA_PTR_TO_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
      DARABONBA_PTR_TO_JSON(Ipv6Isp, ipv6Isp_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVpcAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableDnsHostname, enableDnsHostname_);
      DARABONBA_PTR_FROM_JSON(EnableIPv6, enableIPv6_);
      DARABONBA_PTR_FROM_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
      DARABONBA_PTR_FROM_JSON(Ipv6Isp, ipv6Isp_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
    };
    ModifyVpcAttributeRequest() = default ;
    ModifyVpcAttributeRequest(const ModifyVpcAttributeRequest &) = default ;
    ModifyVpcAttributeRequest(ModifyVpcAttributeRequest &&) = default ;
    ModifyVpcAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVpcAttributeRequest() = default ;
    ModifyVpcAttributeRequest& operator=(const ModifyVpcAttributeRequest &) = default ;
    ModifyVpcAttributeRequest& operator=(ModifyVpcAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && this->description_ == nullptr && this->enableDnsHostname_ == nullptr && this->enableIPv6_ == nullptr && this->ipv6CidrBlock_ == nullptr && this->ipv6Isp_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->vpcId_ == nullptr && this->vpcName_ == nullptr; };
    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline ModifyVpcAttributeRequest& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyVpcAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableDnsHostname Field Functions 
    bool hasEnableDnsHostname() const { return this->enableDnsHostname_ != nullptr;};
    void deleteEnableDnsHostname() { this->enableDnsHostname_ = nullptr;};
    inline bool getEnableDnsHostname() const { DARABONBA_PTR_GET_DEFAULT(enableDnsHostname_, false) };
    inline ModifyVpcAttributeRequest& setEnableDnsHostname(bool enableDnsHostname) { DARABONBA_PTR_SET_VALUE(enableDnsHostname_, enableDnsHostname) };


    // enableIPv6 Field Functions 
    bool hasEnableIPv6() const { return this->enableIPv6_ != nullptr;};
    void deleteEnableIPv6() { this->enableIPv6_ = nullptr;};
    inline bool getEnableIPv6() const { DARABONBA_PTR_GET_DEFAULT(enableIPv6_, false) };
    inline ModifyVpcAttributeRequest& setEnableIPv6(bool enableIPv6) { DARABONBA_PTR_SET_VALUE(enableIPv6_, enableIPv6) };


    // ipv6CidrBlock Field Functions 
    bool hasIpv6CidrBlock() const { return this->ipv6CidrBlock_ != nullptr;};
    void deleteIpv6CidrBlock() { this->ipv6CidrBlock_ = nullptr;};
    inline string getIpv6CidrBlock() const { DARABONBA_PTR_GET_DEFAULT(ipv6CidrBlock_, "") };
    inline ModifyVpcAttributeRequest& setIpv6CidrBlock(string ipv6CidrBlock) { DARABONBA_PTR_SET_VALUE(ipv6CidrBlock_, ipv6CidrBlock) };


    // ipv6Isp Field Functions 
    bool hasIpv6Isp() const { return this->ipv6Isp_ != nullptr;};
    void deleteIpv6Isp() { this->ipv6Isp_ = nullptr;};
    inline string getIpv6Isp() const { DARABONBA_PTR_GET_DEFAULT(ipv6Isp_, "") };
    inline ModifyVpcAttributeRequest& setIpv6Isp(string ipv6Isp) { DARABONBA_PTR_SET_VALUE(ipv6Isp_, ipv6Isp) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyVpcAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyVpcAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyVpcAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyVpcAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyVpcAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ModifyVpcAttributeRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcName Field Functions 
    bool hasVpcName() const { return this->vpcName_ != nullptr;};
    void deleteVpcName() { this->vpcName_ = nullptr;};
    inline string getVpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
    inline ModifyVpcAttributeRequest& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


  protected:
    // The new IPv4 CIDR block of the VPC.
    // 
    // You can expand or shrink the CIDR block within the original IPv4 CIDR block of the VPC. The recommended subnet mask is 16 to 28 bits. If you shrink the IPv4 CIDR block of the VPC and IP addresses that are already in use fall outside the target CIDR block, the modification fails.
    // 
    // > Modifying the IPv4 CIDR block of a VPC does not affect existing services.
    shared_ptr<string> cidrBlock_ {};
    // The new description of the VPC.
    // 
    // The description must be 1 to 256 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // Specifies whether to enable the DNS hostname feature. Valid values:
    // 
    // - **false** (default): Disabled.
    // - **true**: Enabled.
    shared_ptr<bool> enableDnsHostname_ {};
    // Specifies whether to enable IPv6. Valid values:
    // - **false** (default): Disabled.
    // - **true**: Enabled.
    shared_ptr<bool> enableIPv6_ {};
    // The IPv6 CIDR block of the VPC.
    // When you enable IPv6 for a VPC, the system will assign an IPv6 CIDR block. To specify an IPv6 CIDR block, invoke the [AllocateVpcIpv6Cidr](https://help.aliyun.com/document_detail/448916.html) operation to reserve a specific IPv6 CIDR block first, and then pass it in.
    // > For a VPC that already has IPv6 enabled, you cannot modify the IPv6 CIDR block by passing in this parameter.
    shared_ptr<string> ipv6CidrBlock_ {};
    // The type of the IPv6 CIDR block of the VPC. Valid values:
    // 
    // - **BGP** (default): Alibaba Cloud BGP IPv6.
    // - **ChinaMobile**: China Mobile (single ISP).
    // - **ChinaUnicom**: China Unicom (single ISP).
    // - **ChinaTelecom**: China Telecom (single ISP).
    // 
    // > If you are a user who has the single-ISP bandwidth whitelist enabled, you can set this parameter to **ChinaTelecom** (China Telecom), **ChinaUnicom** (China Unicom), or **ChinaMobile** (China Mobile).
    shared_ptr<string> ipv6Isp_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the VPC.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the VPC that you want to modify.
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
    // The new name of the VPC.
    // 
    // The name must be 1 to 128 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> vpcName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
