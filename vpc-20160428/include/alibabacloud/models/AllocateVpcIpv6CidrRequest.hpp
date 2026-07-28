// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLOCATEVPCIPV6CIDRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ALLOCATEVPCIPV6CIDRREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class AllocateVpcIpv6CidrRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AllocateVpcIpv6CidrRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressPoolType, addressPoolType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
      DARABONBA_PTR_TO_JSON(Ipv6Isp, ipv6Isp_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, AllocateVpcIpv6CidrRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressPoolType, addressPoolType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
      DARABONBA_PTR_FROM_JSON(Ipv6Isp, ipv6Isp_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    AllocateVpcIpv6CidrRequest() = default ;
    AllocateVpcIpv6CidrRequest(const AllocateVpcIpv6CidrRequest &) = default ;
    AllocateVpcIpv6CidrRequest(AllocateVpcIpv6CidrRequest &&) = default ;
    AllocateVpcIpv6CidrRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AllocateVpcIpv6CidrRequest() = default ;
    AllocateVpcIpv6CidrRequest& operator=(const AllocateVpcIpv6CidrRequest &) = default ;
    AllocateVpcIpv6CidrRequest& operator=(AllocateVpcIpv6CidrRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressPoolType_ == nullptr
        && this->clientToken_ == nullptr && this->ipv6CidrBlock_ == nullptr && this->ipv6Isp_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // addressPoolType Field Functions 
    bool hasAddressPoolType() const { return this->addressPoolType_ != nullptr;};
    void deleteAddressPoolType() { this->addressPoolType_ = nullptr;};
    inline string getAddressPoolType() const { DARABONBA_PTR_GET_DEFAULT(addressPoolType_, "") };
    inline AllocateVpcIpv6CidrRequest& setAddressPoolType(string addressPoolType) { DARABONBA_PTR_SET_VALUE(addressPoolType_, addressPoolType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AllocateVpcIpv6CidrRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // ipv6CidrBlock Field Functions 
    bool hasIpv6CidrBlock() const { return this->ipv6CidrBlock_ != nullptr;};
    void deleteIpv6CidrBlock() { this->ipv6CidrBlock_ = nullptr;};
    inline string getIpv6CidrBlock() const { DARABONBA_PTR_GET_DEFAULT(ipv6CidrBlock_, "") };
    inline AllocateVpcIpv6CidrRequest& setIpv6CidrBlock(string ipv6CidrBlock) { DARABONBA_PTR_SET_VALUE(ipv6CidrBlock_, ipv6CidrBlock) };


    // ipv6Isp Field Functions 
    bool hasIpv6Isp() const { return this->ipv6Isp_ != nullptr;};
    void deleteIpv6Isp() { this->ipv6Isp_ = nullptr;};
    inline string getIpv6Isp() const { DARABONBA_PTR_GET_DEFAULT(ipv6Isp_, "") };
    inline AllocateVpcIpv6CidrRequest& setIpv6Isp(string ipv6Isp) { DARABONBA_PTR_SET_VALUE(ipv6Isp_, ipv6Isp) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline AllocateVpcIpv6CidrRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AllocateVpcIpv6CidrRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AllocateVpcIpv6CidrRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AllocateVpcIpv6CidrRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AllocateVpcIpv6CidrRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The type of the IPv6 address pool. Valid values:
    // - **aliyun** (default): The system assigns an IPv6 CIDR block.
    // - **custom**: A user-defined IPv6 CIDR block.
    shared_ptr<string> addressPoolType_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The ClientToken value can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request may be different.
    shared_ptr<string> clientToken_ {};
    // The IPv6 CIDR block to reserve.
    shared_ptr<string> ipv6CidrBlock_ {};
    // The type of the IPv6 CIDR block of the VPC. Valid values:
    // 
    // - **BGP** (default): BGP (multi-ISP).
    // - **BGP_International**: BGP (multi-ISP)_International.
    // - **ChinaMobile**: China Mobile (single-ISP).
    // - **ChinaUnicom**: China Unicom (single-ISP).
    // - **ChinaTelecom**: China Telecom (single-ISP).
    // - **ChinaMobile_L2**: China Mobile (single-ISP)_L2.
    // - **ChinaUnicom_L2**: China Unicom (single-ISP)_L2.
    // - **ChinaTelecom_L2**: China Telecom (single-ISP)_L2.
    // 
    // > - If you are a user whose whitelist is activated, you can set this parameter to **ChinaTelecom** (China Telecom), **ChinaUnicom** (China Unicom), **ChinaMobile** (China Mobile), **ChinaTelecom_L2** (China L2 Telecom), **ChinaUnicom_L2** (China L2 Unicom), **ChinaMobile_L2** (China L2 Mobile), or **BGP_International** (BGP multi-ISP International).
    // > - You can reserve only one IPv6 CIDR block of each type. You can reserve the next one only after the current one is assigned to a VPC.
    shared_ptr<string> ipv6Isp_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the VPC.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the region ID.
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
