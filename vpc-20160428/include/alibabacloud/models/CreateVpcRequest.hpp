// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPCREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateVpcRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVpcRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EnableDnsHostname, enableDnsHostname_);
      DARABONBA_PTR_TO_JSON(EnableIpv6, enableIpv6_);
      DARABONBA_PTR_TO_JSON(Ipv4CidrMask, ipv4CidrMask_);
      DARABONBA_PTR_TO_JSON(Ipv4IpamPoolId, ipv4IpamPoolId_);
      DARABONBA_PTR_TO_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
      DARABONBA_PTR_TO_JSON(Ipv6CidrMask, ipv6CidrMask_);
      DARABONBA_PTR_TO_JSON(Ipv6IpamPoolId, ipv6IpamPoolId_);
      DARABONBA_PTR_TO_JSON(Ipv6Isp, ipv6Isp_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(UserCidr, userCidr_);
      DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVpcRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EnableDnsHostname, enableDnsHostname_);
      DARABONBA_PTR_FROM_JSON(EnableIpv6, enableIpv6_);
      DARABONBA_PTR_FROM_JSON(Ipv4CidrMask, ipv4CidrMask_);
      DARABONBA_PTR_FROM_JSON(Ipv4IpamPoolId, ipv4IpamPoolId_);
      DARABONBA_PTR_FROM_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
      DARABONBA_PTR_FROM_JSON(Ipv6CidrMask, ipv6CidrMask_);
      DARABONBA_PTR_FROM_JSON(Ipv6IpamPoolId, ipv6IpamPoolId_);
      DARABONBA_PTR_FROM_JSON(Ipv6Isp, ipv6Isp_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(UserCidr, userCidr_);
      DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
    };
    CreateVpcRequest() = default ;
    CreateVpcRequest(const CreateVpcRequest &) = default ;
    CreateVpcRequest(CreateVpcRequest &&) = default ;
    CreateVpcRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVpcRequest() = default ;
    CreateVpcRequest& operator=(const CreateVpcRequest &) = default ;
    CreateVpcRequest& operator=(CreateVpcRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of tag N to add to the resource. You can specify at most 20 tag keys. The tag key cannot be an empty string.
      // 
      // The tag key can be at most 128 characters in length. It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The value of tag N to add to the resource. You can specify at most 20 tag values. The tag value can be an empty string.
      // 
      // The tag value can be up to 128 characters in length, but cannot contain `http://` or `https://`. The tag value cannot start with `aliyun` or `acs:`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && this->clientToken_ == nullptr && this->description_ == nullptr && this->dryRun_ == nullptr && this->enableDnsHostname_ == nullptr && this->enableIpv6_ == nullptr
        && this->ipv4CidrMask_ == nullptr && this->ipv4IpamPoolId_ == nullptr && this->ipv6CidrBlock_ == nullptr && this->ipv6CidrMask_ == nullptr && this->ipv6IpamPoolId_ == nullptr
        && this->ipv6Isp_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->tag_ == nullptr && this->userCidr_ == nullptr && this->vpcName_ == nullptr; };
    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline CreateVpcRequest& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateVpcRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateVpcRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateVpcRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // enableDnsHostname Field Functions 
    bool hasEnableDnsHostname() const { return this->enableDnsHostname_ != nullptr;};
    void deleteEnableDnsHostname() { this->enableDnsHostname_ = nullptr;};
    inline bool getEnableDnsHostname() const { DARABONBA_PTR_GET_DEFAULT(enableDnsHostname_, false) };
    inline CreateVpcRequest& setEnableDnsHostname(bool enableDnsHostname) { DARABONBA_PTR_SET_VALUE(enableDnsHostname_, enableDnsHostname) };


    // enableIpv6 Field Functions 
    bool hasEnableIpv6() const { return this->enableIpv6_ != nullptr;};
    void deleteEnableIpv6() { this->enableIpv6_ = nullptr;};
    inline bool getEnableIpv6() const { DARABONBA_PTR_GET_DEFAULT(enableIpv6_, false) };
    inline CreateVpcRequest& setEnableIpv6(bool enableIpv6) { DARABONBA_PTR_SET_VALUE(enableIpv6_, enableIpv6) };


    // ipv4CidrMask Field Functions 
    bool hasIpv4CidrMask() const { return this->ipv4CidrMask_ != nullptr;};
    void deleteIpv4CidrMask() { this->ipv4CidrMask_ = nullptr;};
    inline int32_t getIpv4CidrMask() const { DARABONBA_PTR_GET_DEFAULT(ipv4CidrMask_, 0) };
    inline CreateVpcRequest& setIpv4CidrMask(int32_t ipv4CidrMask) { DARABONBA_PTR_SET_VALUE(ipv4CidrMask_, ipv4CidrMask) };


    // ipv4IpamPoolId Field Functions 
    bool hasIpv4IpamPoolId() const { return this->ipv4IpamPoolId_ != nullptr;};
    void deleteIpv4IpamPoolId() { this->ipv4IpamPoolId_ = nullptr;};
    inline string getIpv4IpamPoolId() const { DARABONBA_PTR_GET_DEFAULT(ipv4IpamPoolId_, "") };
    inline CreateVpcRequest& setIpv4IpamPoolId(string ipv4IpamPoolId) { DARABONBA_PTR_SET_VALUE(ipv4IpamPoolId_, ipv4IpamPoolId) };


    // ipv6CidrBlock Field Functions 
    bool hasIpv6CidrBlock() const { return this->ipv6CidrBlock_ != nullptr;};
    void deleteIpv6CidrBlock() { this->ipv6CidrBlock_ = nullptr;};
    inline string getIpv6CidrBlock() const { DARABONBA_PTR_GET_DEFAULT(ipv6CidrBlock_, "") };
    inline CreateVpcRequest& setIpv6CidrBlock(string ipv6CidrBlock) { DARABONBA_PTR_SET_VALUE(ipv6CidrBlock_, ipv6CidrBlock) };


    // ipv6CidrMask Field Functions 
    bool hasIpv6CidrMask() const { return this->ipv6CidrMask_ != nullptr;};
    void deleteIpv6CidrMask() { this->ipv6CidrMask_ = nullptr;};
    inline int32_t getIpv6CidrMask() const { DARABONBA_PTR_GET_DEFAULT(ipv6CidrMask_, 0) };
    inline CreateVpcRequest& setIpv6CidrMask(int32_t ipv6CidrMask) { DARABONBA_PTR_SET_VALUE(ipv6CidrMask_, ipv6CidrMask) };


    // ipv6IpamPoolId Field Functions 
    bool hasIpv6IpamPoolId() const { return this->ipv6IpamPoolId_ != nullptr;};
    void deleteIpv6IpamPoolId() { this->ipv6IpamPoolId_ = nullptr;};
    inline string getIpv6IpamPoolId() const { DARABONBA_PTR_GET_DEFAULT(ipv6IpamPoolId_, "") };
    inline CreateVpcRequest& setIpv6IpamPoolId(string ipv6IpamPoolId) { DARABONBA_PTR_SET_VALUE(ipv6IpamPoolId_, ipv6IpamPoolId) };


    // ipv6Isp Field Functions 
    bool hasIpv6Isp() const { return this->ipv6Isp_ != nullptr;};
    void deleteIpv6Isp() { this->ipv6Isp_ = nullptr;};
    inline string getIpv6Isp() const { DARABONBA_PTR_GET_DEFAULT(ipv6Isp_, "") };
    inline CreateVpcRequest& setIpv6Isp(string ipv6Isp) { DARABONBA_PTR_SET_VALUE(ipv6Isp_, ipv6Isp) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateVpcRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateVpcRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateVpcRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateVpcRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateVpcRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateVpcRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateVpcRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateVpcRequest::Tag>) };
    inline vector<CreateVpcRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateVpcRequest::Tag>) };
    inline CreateVpcRequest& setTag(const vector<CreateVpcRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateVpcRequest& setTag(vector<CreateVpcRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // userCidr Field Functions 
    bool hasUserCidr() const { return this->userCidr_ != nullptr;};
    void deleteUserCidr() { this->userCidr_ = nullptr;};
    inline string getUserCidr() const { DARABONBA_PTR_GET_DEFAULT(userCidr_, "") };
    inline CreateVpcRequest& setUserCidr(string userCidr) { DARABONBA_PTR_SET_VALUE(userCidr_, userCidr) };


    // vpcName Field Functions 
    bool hasVpcName() const { return this->vpcName_ != nullptr;};
    void deleteVpcName() { this->vpcName_ = nullptr;};
    inline string getVpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
    inline CreateVpcRequest& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


  protected:
    // The CIDR block of the VPC.
    // 
    // *   We recommend using the private IPv4 address specified in RFC 1918 as the primary IPv4 CIDR block of the VPC with a recommended mask length of 16 to 28 bits. For example, 10.0.0.0/16, 172.16.0.0/16, and 192.168.0.0/16.
    // *   You can also use a custom CIDR block other than 100.64.0.0/10, 224.0.0.0/4, 127.0.0.0/8, 169.254.0.0/16, or their subnets as the primary IPv4 CIDR block.
    shared_ptr<string> cidrBlock_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // The description of the VPC.
    // 
    // The description must be 1 to 256 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // Specifies whether to perform a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error code is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // Whether to enable the DNS hostname feature. Values:
    // - **false** (default): Not enabled. 
    // - **true**: Enabled.
    shared_ptr<bool> enableDnsHostname_ {};
    // Indicates whether IPv6 is enabled. Valid values:
    // 
    // *   **false** (default): disabled.
    // *   **true**: enabled.
    shared_ptr<bool> enableIpv6_ {};
    // Allocate VPC from the IPAM address pool by inputting a mask.
    // > When creating a VPC with a specified IPAM address pool, at least one of the parameters CidrBlock or Ipv4CidrMask must be provided.
    shared_ptr<int32_t> ipv4CidrMask_ {};
    // The ID of the IP Address Manager (IPAM) pool of the IPv4 type.
    shared_ptr<string> ipv4IpamPoolId_ {};
    // The IPv6 CIDR block of the VPC. If you enable IPv6 for a VPC, the system allocates an IPv6 CIDR block. To specify an IPv6 CIDR block, you must call the [AllocateVpcIpv6Cidr](https://help.aliyun.com/document_detail/448916.html) operation to reserve the specified IPv6 CIDR block.
    shared_ptr<string> ipv6CidrBlock_ {};
    // Add an IPv6 CIDR block from the IPAM pool to the VPC by entering a mask.
    shared_ptr<int32_t> ipv6CidrMask_ {};
    // The ID of the IP Address Manager (IPAM) pool of the IPv6 type.
    shared_ptr<string> ipv6IpamPoolId_ {};
    // The type of the IPv6 CIDR block of the VPC. Valid values:
    // 
    // *   **BGP** (default)
    // *   **ChinaMobile**
    // *   **ChinaUnicom**
    // *   **ChinaTelecom**
    // 
    // >  If you are allowed to use single-ISP bandwidth, you can set the value to **ChinaTelecom**, **ChinaUnicom**, or **ChinaMobile**.
    shared_ptr<string> ipv6Isp_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region to which the VPC belongs.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    // 
    // For more information about resource groups, see [What is a resource group?](https://help.aliyun.com/document_detail/94475.html)
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The tag of the resource.
    shared_ptr<vector<CreateVpcRequest::Tag>> tag_ {};
    // The user CIDR block. Separate user CIDR blocks with commas (,). You can specify up to three user CIDR blocks.
    // 
    // For more information about user CIDR blocks, see the `What is a user CIDR block?` section in [VPC FAQ](https://help.aliyun.com/document_detail/185311.html).
    shared_ptr<string> userCidr_ {};
    // The name of the VPC.
    // 
    // The name must be 1 to 128 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> vpcName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
