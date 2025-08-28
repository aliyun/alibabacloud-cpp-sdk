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
    virtual bool empty() const override { this->IPv6CidrBlock_ != nullptr
        && this->ipVersion_ != nullptr && this->ipamPoolId_ != nullptr && this->ipv6CidrMask_ != nullptr && this->ipv6Isp_ != nullptr && this->ownerAccount_ != nullptr
        && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->secondaryCidrBlock_ != nullptr
        && this->secondaryCidrMask_ != nullptr && this->vpcId_ != nullptr; };
    // IPv6CidrBlock Field Functions 
    bool hasIPv6CidrBlock() const { return this->IPv6CidrBlock_ != nullptr;};
    void deleteIPv6CidrBlock() { this->IPv6CidrBlock_ = nullptr;};
    inline string IPv6CidrBlock() const { DARABONBA_PTR_GET_DEFAULT(IPv6CidrBlock_, "") };
    inline AssociateVpcCidrBlockRequest& setIPv6CidrBlock(string IPv6CidrBlock) { DARABONBA_PTR_SET_VALUE(IPv6CidrBlock_, IPv6CidrBlock) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline AssociateVpcCidrBlockRequest& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // ipamPoolId Field Functions 
    bool hasIpamPoolId() const { return this->ipamPoolId_ != nullptr;};
    void deleteIpamPoolId() { this->ipamPoolId_ = nullptr;};
    inline string ipamPoolId() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolId_, "") };
    inline AssociateVpcCidrBlockRequest& setIpamPoolId(string ipamPoolId) { DARABONBA_PTR_SET_VALUE(ipamPoolId_, ipamPoolId) };


    // ipv6CidrMask Field Functions 
    bool hasIpv6CidrMask() const { return this->ipv6CidrMask_ != nullptr;};
    void deleteIpv6CidrMask() { this->ipv6CidrMask_ = nullptr;};
    inline int32_t ipv6CidrMask() const { DARABONBA_PTR_GET_DEFAULT(ipv6CidrMask_, 0) };
    inline AssociateVpcCidrBlockRequest& setIpv6CidrMask(int32_t ipv6CidrMask) { DARABONBA_PTR_SET_VALUE(ipv6CidrMask_, ipv6CidrMask) };


    // ipv6Isp Field Functions 
    bool hasIpv6Isp() const { return this->ipv6Isp_ != nullptr;};
    void deleteIpv6Isp() { this->ipv6Isp_ = nullptr;};
    inline string ipv6Isp() const { DARABONBA_PTR_GET_DEFAULT(ipv6Isp_, "") };
    inline AssociateVpcCidrBlockRequest& setIpv6Isp(string ipv6Isp) { DARABONBA_PTR_SET_VALUE(ipv6Isp_, ipv6Isp) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline AssociateVpcCidrBlockRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AssociateVpcCidrBlockRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AssociateVpcCidrBlockRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AssociateVpcCidrBlockRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AssociateVpcCidrBlockRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // secondaryCidrBlock Field Functions 
    bool hasSecondaryCidrBlock() const { return this->secondaryCidrBlock_ != nullptr;};
    void deleteSecondaryCidrBlock() { this->secondaryCidrBlock_ = nullptr;};
    inline string secondaryCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(secondaryCidrBlock_, "") };
    inline AssociateVpcCidrBlockRequest& setSecondaryCidrBlock(string secondaryCidrBlock) { DARABONBA_PTR_SET_VALUE(secondaryCidrBlock_, secondaryCidrBlock) };


    // secondaryCidrMask Field Functions 
    bool hasSecondaryCidrMask() const { return this->secondaryCidrMask_ != nullptr;};
    void deleteSecondaryCidrMask() { this->secondaryCidrMask_ = nullptr;};
    inline int32_t secondaryCidrMask() const { DARABONBA_PTR_GET_DEFAULT(secondaryCidrMask_, 0) };
    inline AssociateVpcCidrBlockRequest& setSecondaryCidrMask(int32_t secondaryCidrMask) { DARABONBA_PTR_SET_VALUE(secondaryCidrMask_, secondaryCidrMask) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline AssociateVpcCidrBlockRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The IPv6 CIDR block that you want to add to the VPC.
    // 
    // >  You can specify only one of **SecondaryCidrBlock** and **Ipv6CidrBlock**.
    std::shared_ptr<string> IPv6CidrBlock_ = nullptr;
    // The version of the IP address. Valid values:
    // 
    // *   **IPV4**: the IPv4 address.
    // *   **IPV6**: the IPv6 address. If you set **IpVersion** to **IPV6** and do not specify **SecondaryCidrBlock**, you can add a secondary IPv6 CIDR block to the VPC.
    std::shared_ptr<string> ipVersion_ = nullptr;
    // The ID of the IPAM pool.
    std::shared_ptr<string> ipamPoolId_ = nullptr;
    // Add an IPv6 CIDR block from the IPAM pool to the VPC by entering a mask.
    // 
    // >  To add an IPv6 CIDR block to a VPC, specify at least one of the IPv6CidrBlock and Ipv6CidrMask parameters.
    std::shared_ptr<int32_t> ipv6CidrMask_ = nullptr;
    // The type of the IPv6 CIDR block. Valid values:
    // 
    // *   **BGP** (default)
    // *   **ChinaMobile**
    // *   **ChinaUnicom**
    // *   **ChinaTelecom**
    // 
    // >  If your Alibaba Cloud account is allowed to activate single-ISP bandwidth, you can set this parameter to **ChinaTelecom**, **ChinaUnicom**, or **ChinaMobile**.
    std::shared_ptr<string> ipv6Isp_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the VPC to which you want to add a secondary CIDR block.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The IPv4 CIDR block to be added. Take note of the following requirements:
    // 
    // *   You can specify one of the following standard IPv4 CIDR blocks or their subnets as the secondary IPv4 CIDR block of the VPC: 192.168.0.0/16, 172.16.0.0/12, and 10.0.0.0/8.
    // *   You can also use a custom CIDR block other than 100.64.0.0/10, 224.0.0.0/4, 127.0.0.0/8, 169.254.0.0/16, or their subnets as the secondary IPv4 CIDR block of the VPC.
    // 
    // The CIDR block must meet the following requirements:
    // 
    // *   The CIDR block cannot start with 0. The subnet mask must be 8 to 28 bits in length.
    // *   The CIDR block cannot overlap with the primary CIDR block or an existing secondary CIDR block of the VPC.
    // 
    // >  You must and can specify only one of **SecondaryCidrBlock** and **Ipv6CidrBlock**.
    std::shared_ptr<string> secondaryCidrBlock_ = nullptr;
    // Add an IPv4 CIDR block from the IPAM pool to the VPC by specifying a mask.
    // 
    // >  If you use an IPAM pool, you must specify at least one of SecondaryCidrBlock and SecondaryCidrMask.
    std::shared_ptr<int32_t> secondaryCidrMask_ = nullptr;
    // The ID of the VPC to which you want to add a secondary CIDR block.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
