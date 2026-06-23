// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATEVPCCIDRBLOCKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATEVPCCIDRBLOCKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class AssociateVpcCidrBlockRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateVpcCidrBlockRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IPv6CidrBlock, IPv6CidrBlock_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(IpamPoolId, ipamPoolId_);
      DARABONBA_PTR_TO_JSON(Ipv6CidrMask, ipv6CidrMask_);
      DARABONBA_PTR_TO_JSON(Ipv6Isp, ipv6Isp_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecondaryCidrBlock, secondaryCidrBlock_);
      DARABONBA_PTR_TO_JSON(SecondaryCidrMask, secondaryCidrMask_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateVpcCidrBlockRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IPv6CidrBlock, IPv6CidrBlock_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(IpamPoolId, ipamPoolId_);
      DARABONBA_PTR_FROM_JSON(Ipv6CidrMask, ipv6CidrMask_);
      DARABONBA_PTR_FROM_JSON(Ipv6Isp, ipv6Isp_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecondaryCidrBlock, secondaryCidrBlock_);
      DARABONBA_PTR_FROM_JSON(SecondaryCidrMask, secondaryCidrMask_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    AssociateVpcCidrBlockRequest() = default ;
    AssociateVpcCidrBlockRequest(const AssociateVpcCidrBlockRequest &) = default ;
    AssociateVpcCidrBlockRequest(AssociateVpcCidrBlockRequest &&) = default ;
    AssociateVpcCidrBlockRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateVpcCidrBlockRequest() = default ;
    AssociateVpcCidrBlockRequest& operator=(const AssociateVpcCidrBlockRequest &) = default ;
    AssociateVpcCidrBlockRequest& operator=(AssociateVpcCidrBlockRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->IPv6CidrBlock_ == nullptr
        && this->ipVersion_ == nullptr && this->ipamPoolId_ == nullptr && this->ipv6CidrMask_ == nullptr && this->ipv6Isp_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->secondaryCidrBlock_ == nullptr
        && this->secondaryCidrMask_ == nullptr && this->vpcId_ == nullptr; };
    // IPv6CidrBlock Field Functions 
    bool hasIPv6CidrBlock() const { return this->IPv6CidrBlock_ != nullptr;};
    void deleteIPv6CidrBlock() { this->IPv6CidrBlock_ = nullptr;};
    inline string getIPv6CidrBlock() const { DARABONBA_PTR_GET_DEFAULT(IPv6CidrBlock_, "") };
    inline AssociateVpcCidrBlockRequest& setIPv6CidrBlock(string IPv6CidrBlock) { DARABONBA_PTR_SET_VALUE(IPv6CidrBlock_, IPv6CidrBlock) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline AssociateVpcCidrBlockRequest& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // ipamPoolId Field Functions 
    bool hasIpamPoolId() const { return this->ipamPoolId_ != nullptr;};
    void deleteIpamPoolId() { this->ipamPoolId_ = nullptr;};
    inline string getIpamPoolId() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolId_, "") };
    inline AssociateVpcCidrBlockRequest& setIpamPoolId(string ipamPoolId) { DARABONBA_PTR_SET_VALUE(ipamPoolId_, ipamPoolId) };


    // ipv6CidrMask Field Functions 
    bool hasIpv6CidrMask() const { return this->ipv6CidrMask_ != nullptr;};
    void deleteIpv6CidrMask() { this->ipv6CidrMask_ = nullptr;};
    inline int32_t getIpv6CidrMask() const { DARABONBA_PTR_GET_DEFAULT(ipv6CidrMask_, 0) };
    inline AssociateVpcCidrBlockRequest& setIpv6CidrMask(int32_t ipv6CidrMask) { DARABONBA_PTR_SET_VALUE(ipv6CidrMask_, ipv6CidrMask) };


    // ipv6Isp Field Functions 
    bool hasIpv6Isp() const { return this->ipv6Isp_ != nullptr;};
    void deleteIpv6Isp() { this->ipv6Isp_ = nullptr;};
    inline string getIpv6Isp() const { DARABONBA_PTR_GET_DEFAULT(ipv6Isp_, "") };
    inline AssociateVpcCidrBlockRequest& setIpv6Isp(string ipv6Isp) { DARABONBA_PTR_SET_VALUE(ipv6Isp_, ipv6Isp) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline AssociateVpcCidrBlockRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AssociateVpcCidrBlockRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AssociateVpcCidrBlockRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AssociateVpcCidrBlockRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AssociateVpcCidrBlockRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // secondaryCidrBlock Field Functions 
    bool hasSecondaryCidrBlock() const { return this->secondaryCidrBlock_ != nullptr;};
    void deleteSecondaryCidrBlock() { this->secondaryCidrBlock_ = nullptr;};
    inline string getSecondaryCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(secondaryCidrBlock_, "") };
    inline AssociateVpcCidrBlockRequest& setSecondaryCidrBlock(string secondaryCidrBlock) { DARABONBA_PTR_SET_VALUE(secondaryCidrBlock_, secondaryCidrBlock) };


    // secondaryCidrMask Field Functions 
    bool hasSecondaryCidrMask() const { return this->secondaryCidrMask_ != nullptr;};
    void deleteSecondaryCidrMask() { this->secondaryCidrMask_ = nullptr;};
    inline int32_t getSecondaryCidrMask() const { DARABONBA_PTR_GET_DEFAULT(secondaryCidrMask_, 0) };
    inline AssociateVpcCidrBlockRequest& setSecondaryCidrMask(int32_t secondaryCidrMask) { DARABONBA_PTR_SET_VALUE(secondaryCidrMask_, secondaryCidrMask) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline AssociateVpcCidrBlockRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The specified IPv6 CIDR block of the VPC.
    // 
    // > You cannot specify both **SecondaryCidrBlock** and **Ipv6CidrBlock**.
    shared_ptr<string> IPv6CidrBlock_ {};
    // The version of the IP address. Valid values:
    // 
    // - **IPV4**: IPv4 address.
    // - **IPV6**: IPv6 address. When **IpVersion** is set to **IPV6** and **SecondaryCidrBlock** is not specified, a secondary IPv6 CIDR block is added to the VPC.
    shared_ptr<string> ipVersion_ {};
    // The instance ID of the IPAM pool.
    shared_ptr<string> ipamPoolId_ {};
    // The subnet mask used to add an IPv6 CIDR block from an IPAM pool to the VPC.
    // 
    // > When you use an IPAM pool to add a secondary IPv6 CIDR block to the VPC, you must specify at least one of IPv6CidrBlock and Ipv6CidrMask.
    shared_ptr<int32_t> ipv6CidrMask_ {};
    // The type of the IPv6 CIDR block of the VPC. Valid values:
    // 
    // - **BGP** (default): Alibaba Cloud BGP IPv6.
    // - **ChinaMobile**: China Mobile (single ISP).
    // - **ChinaUnicom**: China Unicom (single ISP).
    // - **ChinaTelecom**: China Telecom (single ISP).
    // 
    // > If your account is included in the China single-ISP bandwidth whitelist, you can set this parameter to **ChinaTelecom** (China Telecom), **ChinaUnicom** (China Unicom), or **ChinaMobile** (China Mobile).
    shared_ptr<string> ipv6Isp_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the VPC to which you want to add a secondary CIDR block. 
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The secondary IPv4 CIDR block to add. The CIDR block must meet the following requirements:
    // 
    // - Use a private IPv4 address specified in RFC 1918 as the secondary IPv4 CIDR block of the VPC. The subnet mask is recommended to be 16 to 28 bits in length. Examples: 10.0.0.0/16, 172.16.0.0/16, and 192.168.0.0/16.
    // - You can use a custom CIDR block other than 100.64.0.0/10, 224.0.0.0/4, 127.0.0.0/8, 169.254.0.0/16, or their subnets as the secondary IPv4 CIDR block of the virtual private cloud (VPC).
    // 
    // Configuration limits:
    // 
    // - The CIDR block cannot start with 0. The subnet mask is recommended to be 16 to 28 bits in length.
    // 
    // - The secondary CIDR block cannot overlap with the primary CIDR block or existing secondary CIDR blocks of the VPC.
    // 
    // > If you do not use an IPAM pool to add a secondary CIDR block to the VPC, you must specify either the **SecondaryCidrBlock** parameter or the **Ipv6CidrBlock** parameter, but not both.
    shared_ptr<string> secondaryCidrBlock_ {};
    // The subnet mask used to add a secondary IPv4 CIDR block from an IPAM pool to the VPC.
    // 
    // > When you use an IPAM pool to add a secondary IPv4 CIDR block to the VPC, you must specify at least one of SecondaryCidrBlock and SecondaryCidrMask.
    shared_ptr<int32_t> secondaryCidrMask_ {};
    // The ID of the VPC to which you want to add a secondary CIDR block.
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
