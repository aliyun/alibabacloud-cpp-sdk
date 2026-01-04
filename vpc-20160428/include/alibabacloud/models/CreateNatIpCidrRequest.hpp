// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENATIPCIDRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENATIPCIDRREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateNatIpCidrRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNatIpCidrRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(NatIpCidr, natIpCidr_);
      DARABONBA_PTR_TO_JSON(NatIpCidrDescription, natIpCidrDescription_);
      DARABONBA_PTR_TO_JSON(NatIpCidrName, natIpCidrName_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNatIpCidrRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(NatIpCidr, natIpCidr_);
      DARABONBA_PTR_FROM_JSON(NatIpCidrDescription, natIpCidrDescription_);
      DARABONBA_PTR_FROM_JSON(NatIpCidrName, natIpCidrName_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    CreateNatIpCidrRequest() = default ;
    CreateNatIpCidrRequest(const CreateNatIpCidrRequest &) = default ;
    CreateNatIpCidrRequest(CreateNatIpCidrRequest &&) = default ;
    CreateNatIpCidrRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNatIpCidrRequest() = default ;
    CreateNatIpCidrRequest& operator=(const CreateNatIpCidrRequest &) = default ;
    CreateNatIpCidrRequest& operator=(CreateNatIpCidrRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->natGatewayId_ == nullptr && this->natIpCidr_ == nullptr && this->natIpCidrDescription_ == nullptr && this->natIpCidrName_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateNatIpCidrRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateNatIpCidrRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline CreateNatIpCidrRequest& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // natIpCidr Field Functions 
    bool hasNatIpCidr() const { return this->natIpCidr_ != nullptr;};
    void deleteNatIpCidr() { this->natIpCidr_ = nullptr;};
    inline string getNatIpCidr() const { DARABONBA_PTR_GET_DEFAULT(natIpCidr_, "") };
    inline CreateNatIpCidrRequest& setNatIpCidr(string natIpCidr) { DARABONBA_PTR_SET_VALUE(natIpCidr_, natIpCidr) };


    // natIpCidrDescription Field Functions 
    bool hasNatIpCidrDescription() const { return this->natIpCidrDescription_ != nullptr;};
    void deleteNatIpCidrDescription() { this->natIpCidrDescription_ = nullptr;};
    inline string getNatIpCidrDescription() const { DARABONBA_PTR_GET_DEFAULT(natIpCidrDescription_, "") };
    inline CreateNatIpCidrRequest& setNatIpCidrDescription(string natIpCidrDescription) { DARABONBA_PTR_SET_VALUE(natIpCidrDescription_, natIpCidrDescription) };


    // natIpCidrName Field Functions 
    bool hasNatIpCidrName() const { return this->natIpCidrName_ != nullptr;};
    void deleteNatIpCidrName() { this->natIpCidrName_ = nullptr;};
    inline string getNatIpCidrName() const { DARABONBA_PTR_GET_DEFAULT(natIpCidrName_, "") };
    inline CreateNatIpCidrRequest& setNatIpCidrName(string natIpCidrName) { DARABONBA_PTR_SET_VALUE(natIpCidrName_, natIpCidrName) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateNatIpCidrRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateNatIpCidrRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateNatIpCidrRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateNatIpCidrRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateNatIpCidrRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false**(default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The ID of the Virtual Private Cloud (VPC) NAT gateway with which you want to associate the CIDR block.
    // 
    // This parameter is required.
    shared_ptr<string> natGatewayId_ {};
    // The NAT CIDR block that you want to associate with the NAT gateway.
    // 
    // The new CIDR block must meet the following conditions:
    // 
    // *   The NAT CIDR block must fall within 10.0.0.0/8, 172.16.0.0/12, 192.168.0.0/16, or their subnets.
    // *   The subnet mask must be 16 to 32 bits in length.
    // *   The NAT CIDR block cannot overlap with the private CIDR block of the VPC to which the NAT gateway belongs. If you want to use other IP addresses from the private CIDR block of the VPC to provide NAT services, create a vSwitch and attach the vSwitch to another VPC NAT gateway.
    // *   If you want to use public IP addresses to provide NAT services, make sure that the public IP addresses fall within a customer CIDR block of the VPC to which the VPC NAT gateway belongs. For more information, see [What is customer CIDR block?](https://help.aliyun.com/document_detail/185311.html).
    // 
    // This parameter is required.
    shared_ptr<string> natIpCidr_ {};
    // The description of the NAT CIDR block.
    // 
    // The description must be 2 to 256 characters in length and start with a letter. The description cannot start with `http://` or `https://`.
    shared_ptr<string> natIpCidrDescription_ {};
    // The name of the CIDR block.
    // 
    // The name must be 2 to 128 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-). It must start with a letter. The name must start with a letter and cannot start with `http://` or `https://`.
    shared_ptr<string> natIpCidrName_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the NAT gateway with which you want to associate the CIDR block.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
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
