// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIPAMPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIPAMPOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class UpdateIpamPoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIpamPoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationDefaultCidrMask, allocationDefaultCidrMask_);
      DARABONBA_PTR_TO_JSON(AllocationMaxCidrMask, allocationMaxCidrMask_);
      DARABONBA_PTR_TO_JSON(AllocationMinCidrMask, allocationMinCidrMask_);
      DARABONBA_PTR_TO_JSON(AutoImport, autoImport_);
      DARABONBA_PTR_TO_JSON(ClearAllocationDefaultCidrMask, clearAllocationDefaultCidrMask_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(IpamPoolDescription, ipamPoolDescription_);
      DARABONBA_PTR_TO_JSON(IpamPoolId, ipamPoolId_);
      DARABONBA_PTR_TO_JSON(IpamPoolName, ipamPoolName_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIpamPoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationDefaultCidrMask, allocationDefaultCidrMask_);
      DARABONBA_PTR_FROM_JSON(AllocationMaxCidrMask, allocationMaxCidrMask_);
      DARABONBA_PTR_FROM_JSON(AllocationMinCidrMask, allocationMinCidrMask_);
      DARABONBA_PTR_FROM_JSON(AutoImport, autoImport_);
      DARABONBA_PTR_FROM_JSON(ClearAllocationDefaultCidrMask, clearAllocationDefaultCidrMask_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(IpamPoolDescription, ipamPoolDescription_);
      DARABONBA_PTR_FROM_JSON(IpamPoolId, ipamPoolId_);
      DARABONBA_PTR_FROM_JSON(IpamPoolName, ipamPoolName_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    UpdateIpamPoolRequest() = default ;
    UpdateIpamPoolRequest(const UpdateIpamPoolRequest &) = default ;
    UpdateIpamPoolRequest(UpdateIpamPoolRequest &&) = default ;
    UpdateIpamPoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIpamPoolRequest() = default ;
    UpdateIpamPoolRequest& operator=(const UpdateIpamPoolRequest &) = default ;
    UpdateIpamPoolRequest& operator=(UpdateIpamPoolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allocationDefaultCidrMask_ == nullptr
        && return this->allocationMaxCidrMask_ == nullptr && return this->allocationMinCidrMask_ == nullptr && return this->autoImport_ == nullptr && return this->clearAllocationDefaultCidrMask_ == nullptr && return this->clientToken_ == nullptr
        && return this->dryRun_ == nullptr && return this->ipamPoolDescription_ == nullptr && return this->ipamPoolId_ == nullptr && return this->ipamPoolName_ == nullptr && return this->ownerAccount_ == nullptr
        && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr; };
    // allocationDefaultCidrMask Field Functions 
    bool hasAllocationDefaultCidrMask() const { return this->allocationDefaultCidrMask_ != nullptr;};
    void deleteAllocationDefaultCidrMask() { this->allocationDefaultCidrMask_ = nullptr;};
    inline int32_t allocationDefaultCidrMask() const { DARABONBA_PTR_GET_DEFAULT(allocationDefaultCidrMask_, 0) };
    inline UpdateIpamPoolRequest& setAllocationDefaultCidrMask(int32_t allocationDefaultCidrMask) { DARABONBA_PTR_SET_VALUE(allocationDefaultCidrMask_, allocationDefaultCidrMask) };


    // allocationMaxCidrMask Field Functions 
    bool hasAllocationMaxCidrMask() const { return this->allocationMaxCidrMask_ != nullptr;};
    void deleteAllocationMaxCidrMask() { this->allocationMaxCidrMask_ = nullptr;};
    inline int32_t allocationMaxCidrMask() const { DARABONBA_PTR_GET_DEFAULT(allocationMaxCidrMask_, 0) };
    inline UpdateIpamPoolRequest& setAllocationMaxCidrMask(int32_t allocationMaxCidrMask) { DARABONBA_PTR_SET_VALUE(allocationMaxCidrMask_, allocationMaxCidrMask) };


    // allocationMinCidrMask Field Functions 
    bool hasAllocationMinCidrMask() const { return this->allocationMinCidrMask_ != nullptr;};
    void deleteAllocationMinCidrMask() { this->allocationMinCidrMask_ = nullptr;};
    inline int32_t allocationMinCidrMask() const { DARABONBA_PTR_GET_DEFAULT(allocationMinCidrMask_, 0) };
    inline UpdateIpamPoolRequest& setAllocationMinCidrMask(int32_t allocationMinCidrMask) { DARABONBA_PTR_SET_VALUE(allocationMinCidrMask_, allocationMinCidrMask) };


    // autoImport Field Functions 
    bool hasAutoImport() const { return this->autoImport_ != nullptr;};
    void deleteAutoImport() { this->autoImport_ = nullptr;};
    inline bool autoImport() const { DARABONBA_PTR_GET_DEFAULT(autoImport_, false) };
    inline UpdateIpamPoolRequest& setAutoImport(bool autoImport) { DARABONBA_PTR_SET_VALUE(autoImport_, autoImport) };


    // clearAllocationDefaultCidrMask Field Functions 
    bool hasClearAllocationDefaultCidrMask() const { return this->clearAllocationDefaultCidrMask_ != nullptr;};
    void deleteClearAllocationDefaultCidrMask() { this->clearAllocationDefaultCidrMask_ = nullptr;};
    inline bool clearAllocationDefaultCidrMask() const { DARABONBA_PTR_GET_DEFAULT(clearAllocationDefaultCidrMask_, false) };
    inline UpdateIpamPoolRequest& setClearAllocationDefaultCidrMask(bool clearAllocationDefaultCidrMask) { DARABONBA_PTR_SET_VALUE(clearAllocationDefaultCidrMask_, clearAllocationDefaultCidrMask) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateIpamPoolRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateIpamPoolRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ipamPoolDescription Field Functions 
    bool hasIpamPoolDescription() const { return this->ipamPoolDescription_ != nullptr;};
    void deleteIpamPoolDescription() { this->ipamPoolDescription_ = nullptr;};
    inline string ipamPoolDescription() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolDescription_, "") };
    inline UpdateIpamPoolRequest& setIpamPoolDescription(string ipamPoolDescription) { DARABONBA_PTR_SET_VALUE(ipamPoolDescription_, ipamPoolDescription) };


    // ipamPoolId Field Functions 
    bool hasIpamPoolId() const { return this->ipamPoolId_ != nullptr;};
    void deleteIpamPoolId() { this->ipamPoolId_ = nullptr;};
    inline string ipamPoolId() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolId_, "") };
    inline UpdateIpamPoolRequest& setIpamPoolId(string ipamPoolId) { DARABONBA_PTR_SET_VALUE(ipamPoolId_, ipamPoolId) };


    // ipamPoolName Field Functions 
    bool hasIpamPoolName() const { return this->ipamPoolName_ != nullptr;};
    void deleteIpamPoolName() { this->ipamPoolName_ = nullptr;};
    inline string ipamPoolName() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolName_, "") };
    inline UpdateIpamPoolRequest& setIpamPoolName(string ipamPoolName) { DARABONBA_PTR_SET_VALUE(ipamPoolName_, ipamPoolName) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UpdateIpamPoolRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateIpamPoolRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateIpamPoolRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateIpamPoolRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateIpamPoolRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The new default network mask for the IPAM pool.
    // 
    // The mask must be **0 to 32** bits in length.
    std::shared_ptr<int32_t> allocationDefaultCidrMask_ = nullptr;
    // The new maximum network mask for the IPAM pool.
    // 
    // The mask must be **0 to 32** bits in length.
    std::shared_ptr<int32_t> allocationMaxCidrMask_ = nullptr;
    // The new minimum network mask for the IPAM pool.
    // 
    // The mask must be **0 to 32** bits in length.
    std::shared_ptr<int32_t> allocationMinCidrMask_ = nullptr;
    // Whether the pool has the auto-import feature enabled.
    std::shared_ptr<bool> autoImport_ = nullptr;
    // Specifies whether to delete the default network mask for the IPAM pool. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> clearAllocationDefaultCidrMask_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the DryRunOperation error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The new description of the IPAM pool.
    // 
    // It must be 2 to 268 characters in length. It must start with a letter but cannot start with a `http://` or `https://`. This parameter is empty by default.
    std::shared_ptr<string> ipamPoolDescription_ = nullptr;
    // The ID of the IPAM pool.
    // 
    // This parameter is required.
    std::shared_ptr<string> ipamPoolId_ = nullptr;
    // The new name of the IPAM pool.
    // 
    // It must be 1 to 128 characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> ipamPoolName_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the region where the IPAM instance is hosted. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
