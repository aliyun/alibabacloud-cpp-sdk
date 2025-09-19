// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIPAMPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIPAMPOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateIpamPoolRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class CreateIpamPoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIpamPoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationDefaultCidrMask, allocationDefaultCidrMask_);
      DARABONBA_PTR_TO_JSON(AllocationMaxCidrMask, allocationMaxCidrMask_);
      DARABONBA_PTR_TO_JSON(AllocationMinCidrMask, allocationMinCidrMask_);
      DARABONBA_PTR_TO_JSON(AutoImport, autoImport_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(IpamPoolDescription, ipamPoolDescription_);
      DARABONBA_PTR_TO_JSON(IpamPoolName, ipamPoolName_);
      DARABONBA_PTR_TO_JSON(IpamScopeId, ipamScopeId_);
      DARABONBA_PTR_TO_JSON(Ipv6Isp, ipv6Isp_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PoolRegionId, poolRegionId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SourceIpamPoolId, sourceIpamPoolId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIpamPoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationDefaultCidrMask, allocationDefaultCidrMask_);
      DARABONBA_PTR_FROM_JSON(AllocationMaxCidrMask, allocationMaxCidrMask_);
      DARABONBA_PTR_FROM_JSON(AllocationMinCidrMask, allocationMinCidrMask_);
      DARABONBA_PTR_FROM_JSON(AutoImport, autoImport_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(IpamPoolDescription, ipamPoolDescription_);
      DARABONBA_PTR_FROM_JSON(IpamPoolName, ipamPoolName_);
      DARABONBA_PTR_FROM_JSON(IpamScopeId, ipamScopeId_);
      DARABONBA_PTR_FROM_JSON(Ipv6Isp, ipv6Isp_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PoolRegionId, poolRegionId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SourceIpamPoolId, sourceIpamPoolId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateIpamPoolRequest() = default ;
    CreateIpamPoolRequest(const CreateIpamPoolRequest &) = default ;
    CreateIpamPoolRequest(CreateIpamPoolRequest &&) = default ;
    CreateIpamPoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIpamPoolRequest() = default ;
    CreateIpamPoolRequest& operator=(const CreateIpamPoolRequest &) = default ;
    CreateIpamPoolRequest& operator=(CreateIpamPoolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allocationDefaultCidrMask_ != nullptr
        && this->allocationMaxCidrMask_ != nullptr && this->allocationMinCidrMask_ != nullptr && this->autoImport_ != nullptr && this->clientToken_ != nullptr && this->dryRun_ != nullptr
        && this->ipVersion_ != nullptr && this->ipamPoolDescription_ != nullptr && this->ipamPoolName_ != nullptr && this->ipamScopeId_ != nullptr && this->ipv6Isp_ != nullptr
        && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->poolRegionId_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->sourceIpamPoolId_ != nullptr && this->tag_ != nullptr; };
    // allocationDefaultCidrMask Field Functions 
    bool hasAllocationDefaultCidrMask() const { return this->allocationDefaultCidrMask_ != nullptr;};
    void deleteAllocationDefaultCidrMask() { this->allocationDefaultCidrMask_ = nullptr;};
    inline int32_t allocationDefaultCidrMask() const { DARABONBA_PTR_GET_DEFAULT(allocationDefaultCidrMask_, 0) };
    inline CreateIpamPoolRequest& setAllocationDefaultCidrMask(int32_t allocationDefaultCidrMask) { DARABONBA_PTR_SET_VALUE(allocationDefaultCidrMask_, allocationDefaultCidrMask) };


    // allocationMaxCidrMask Field Functions 
    bool hasAllocationMaxCidrMask() const { return this->allocationMaxCidrMask_ != nullptr;};
    void deleteAllocationMaxCidrMask() { this->allocationMaxCidrMask_ = nullptr;};
    inline int32_t allocationMaxCidrMask() const { DARABONBA_PTR_GET_DEFAULT(allocationMaxCidrMask_, 0) };
    inline CreateIpamPoolRequest& setAllocationMaxCidrMask(int32_t allocationMaxCidrMask) { DARABONBA_PTR_SET_VALUE(allocationMaxCidrMask_, allocationMaxCidrMask) };


    // allocationMinCidrMask Field Functions 
    bool hasAllocationMinCidrMask() const { return this->allocationMinCidrMask_ != nullptr;};
    void deleteAllocationMinCidrMask() { this->allocationMinCidrMask_ = nullptr;};
    inline int32_t allocationMinCidrMask() const { DARABONBA_PTR_GET_DEFAULT(allocationMinCidrMask_, 0) };
    inline CreateIpamPoolRequest& setAllocationMinCidrMask(int32_t allocationMinCidrMask) { DARABONBA_PTR_SET_VALUE(allocationMinCidrMask_, allocationMinCidrMask) };


    // autoImport Field Functions 
    bool hasAutoImport() const { return this->autoImport_ != nullptr;};
    void deleteAutoImport() { this->autoImport_ = nullptr;};
    inline bool autoImport() const { DARABONBA_PTR_GET_DEFAULT(autoImport_, false) };
    inline CreateIpamPoolRequest& setAutoImport(bool autoImport) { DARABONBA_PTR_SET_VALUE(autoImport_, autoImport) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateIpamPoolRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateIpamPoolRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline CreateIpamPoolRequest& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // ipamPoolDescription Field Functions 
    bool hasIpamPoolDescription() const { return this->ipamPoolDescription_ != nullptr;};
    void deleteIpamPoolDescription() { this->ipamPoolDescription_ = nullptr;};
    inline string ipamPoolDescription() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolDescription_, "") };
    inline CreateIpamPoolRequest& setIpamPoolDescription(string ipamPoolDescription) { DARABONBA_PTR_SET_VALUE(ipamPoolDescription_, ipamPoolDescription) };


    // ipamPoolName Field Functions 
    bool hasIpamPoolName() const { return this->ipamPoolName_ != nullptr;};
    void deleteIpamPoolName() { this->ipamPoolName_ = nullptr;};
    inline string ipamPoolName() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolName_, "") };
    inline CreateIpamPoolRequest& setIpamPoolName(string ipamPoolName) { DARABONBA_PTR_SET_VALUE(ipamPoolName_, ipamPoolName) };


    // ipamScopeId Field Functions 
    bool hasIpamScopeId() const { return this->ipamScopeId_ != nullptr;};
    void deleteIpamScopeId() { this->ipamScopeId_ = nullptr;};
    inline string ipamScopeId() const { DARABONBA_PTR_GET_DEFAULT(ipamScopeId_, "") };
    inline CreateIpamPoolRequest& setIpamScopeId(string ipamScopeId) { DARABONBA_PTR_SET_VALUE(ipamScopeId_, ipamScopeId) };


    // ipv6Isp Field Functions 
    bool hasIpv6Isp() const { return this->ipv6Isp_ != nullptr;};
    void deleteIpv6Isp() { this->ipv6Isp_ = nullptr;};
    inline string ipv6Isp() const { DARABONBA_PTR_GET_DEFAULT(ipv6Isp_, "") };
    inline CreateIpamPoolRequest& setIpv6Isp(string ipv6Isp) { DARABONBA_PTR_SET_VALUE(ipv6Isp_, ipv6Isp) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateIpamPoolRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateIpamPoolRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // poolRegionId Field Functions 
    bool hasPoolRegionId() const { return this->poolRegionId_ != nullptr;};
    void deletePoolRegionId() { this->poolRegionId_ = nullptr;};
    inline string poolRegionId() const { DARABONBA_PTR_GET_DEFAULT(poolRegionId_, "") };
    inline CreateIpamPoolRequest& setPoolRegionId(string poolRegionId) { DARABONBA_PTR_SET_VALUE(poolRegionId_, poolRegionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateIpamPoolRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateIpamPoolRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateIpamPoolRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateIpamPoolRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sourceIpamPoolId Field Functions 
    bool hasSourceIpamPoolId() const { return this->sourceIpamPoolId_ != nullptr;};
    void deleteSourceIpamPoolId() { this->sourceIpamPoolId_ = nullptr;};
    inline string sourceIpamPoolId() const { DARABONBA_PTR_GET_DEFAULT(sourceIpamPoolId_, "") };
    inline CreateIpamPoolRequest& setSourceIpamPoolId(string sourceIpamPoolId) { DARABONBA_PTR_SET_VALUE(sourceIpamPoolId_, sourceIpamPoolId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateIpamPoolRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateIpamPoolRequestTag>) };
    inline vector<CreateIpamPoolRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateIpamPoolRequestTag>) };
    inline CreateIpamPoolRequest& setTag(const vector<CreateIpamPoolRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateIpamPoolRequest& setTag(vector<CreateIpamPoolRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The default network mask assigned by the IPAM address pool.  
    // 
    // > The IPv4 network mask value range is 0 to 32 bits, and the IPv6 network mask value range is 0 to 128 bits.
    std::shared_ptr<int32_t> allocationDefaultCidrMask_ = nullptr;
    // The maximum network mask assigned by the IPAM address pool.  
    // > The IPv4 network mask value range is **0 to 32** bits, and the IPv6 network mask value range is **0 to 128** bits.
    std::shared_ptr<int32_t> allocationMaxCidrMask_ = nullptr;
    // The minimum network mask assigned by the IPAM address pool.  
    // > The IPv4 network mask value range is **0 to 32** bits, and the IPv6 network mask value range is **0 to 128** bits.
    std::shared_ptr<int32_t> allocationMinCidrMask_ = nullptr;
    // Whether the pool has the auto-import feature enabled.
    std::shared_ptr<bool> autoImport_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the DryRunOperation error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // IP address protocol version. Values:
    // - **IPv4**: IPv4 protocol.
    // - **IPv6**: IPv6 protocol.
    std::shared_ptr<string> ipVersion_ = nullptr;
    // Description of the IPAM address pool. 
    // The length should be between 1 to 256 characters, and it must start with an uppercase or lowercase English letter or a Chinese character, but cannot begin with `http://` or `https://`. If left blank, the default value is empty.
    std::shared_ptr<string> ipamPoolDescription_ = nullptr;
    // The name of the IPAM pool.
    // 
    // It must be 1 to 128 characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> ipamPoolName_ = nullptr;
    // The ID of the IPAM scope.
    // 
    // This parameter is required.
    std::shared_ptr<string> ipamScopeId_ = nullptr;
    // The type of the IPv6 CIDR block of the VPC. Valid values:
    // 
    // *   **BGP** (default)
    // *   **ChinaMobile**
    // *   **ChinaUnicom**
    // *   **ChinaTelecom**
    // 
    // >  If you are allowed to use single-ISP bandwidth, you can set the value to **ChinaTelecom**, **ChinaUnicom**, or **ChinaMobile**.
    std::shared_ptr<string> ipv6Isp_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The effective region of the IPAM pool.
    std::shared_ptr<string> poolRegionId_ = nullptr;
    // The ID of the region where the IPAM instance is hosted. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the source IPAM pool.
    // 
    // >  If you do not specify this parameter, the pool is a parent pool.
    std::shared_ptr<string> sourceIpamPoolId_ = nullptr;
    // The tag list.
    std::shared_ptr<vector<CreateIpamPoolRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
