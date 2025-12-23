// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPAMPOOLSRESPONSEBODYIPAMPOOLS_HPP_
#define ALIBABACLOUD_MODELS_LISTIPAMPOOLSRESPONSEBODYIPAMPOOLS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIpamPoolsResponseBodyIpamPoolsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class ListIpamPoolsResponseBodyIpamPools : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpamPoolsResponseBodyIpamPools& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationDefaultCidrMask, allocationDefaultCidrMask_);
      DARABONBA_PTR_TO_JSON(AllocationMaxCidrMask, allocationMaxCidrMask_);
      DARABONBA_PTR_TO_JSON(AllocationMinCidrMask, allocationMinCidrMask_);
      DARABONBA_PTR_TO_JSON(AutoImport, autoImport_);
      DARABONBA_PTR_TO_JSON(Cidrs, cidrs_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(HasSubPool, hasSubPool_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(IpamId, ipamId_);
      DARABONBA_PTR_TO_JSON(IpamPoolDescription, ipamPoolDescription_);
      DARABONBA_PTR_TO_JSON(IpamPoolId, ipamPoolId_);
      DARABONBA_PTR_TO_JSON(IpamPoolName, ipamPoolName_);
      DARABONBA_PTR_TO_JSON(IpamRegionId, ipamRegionId_);
      DARABONBA_PTR_TO_JSON(IpamScopeId, ipamScopeId_);
      DARABONBA_PTR_TO_JSON(IpamScopeType, ipamScopeType_);
      DARABONBA_PTR_TO_JSON(Ipv6Isp, ipv6Isp_);
      DARABONBA_PTR_TO_JSON(IsShared, isShared_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PoolDepth, poolDepth_);
      DARABONBA_PTR_TO_JSON(PoolRegionId, poolRegionId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SourceIpamPoolId, sourceIpamPoolId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpamPoolsResponseBodyIpamPools& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationDefaultCidrMask, allocationDefaultCidrMask_);
      DARABONBA_PTR_FROM_JSON(AllocationMaxCidrMask, allocationMaxCidrMask_);
      DARABONBA_PTR_FROM_JSON(AllocationMinCidrMask, allocationMinCidrMask_);
      DARABONBA_PTR_FROM_JSON(AutoImport, autoImport_);
      DARABONBA_PTR_FROM_JSON(Cidrs, cidrs_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(HasSubPool, hasSubPool_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(IpamId, ipamId_);
      DARABONBA_PTR_FROM_JSON(IpamPoolDescription, ipamPoolDescription_);
      DARABONBA_PTR_FROM_JSON(IpamPoolId, ipamPoolId_);
      DARABONBA_PTR_FROM_JSON(IpamPoolName, ipamPoolName_);
      DARABONBA_PTR_FROM_JSON(IpamRegionId, ipamRegionId_);
      DARABONBA_PTR_FROM_JSON(IpamScopeId, ipamScopeId_);
      DARABONBA_PTR_FROM_JSON(IpamScopeType, ipamScopeType_);
      DARABONBA_PTR_FROM_JSON(Ipv6Isp, ipv6Isp_);
      DARABONBA_PTR_FROM_JSON(IsShared, isShared_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PoolDepth, poolDepth_);
      DARABONBA_PTR_FROM_JSON(PoolRegionId, poolRegionId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SourceIpamPoolId, sourceIpamPoolId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListIpamPoolsResponseBodyIpamPools() = default ;
    ListIpamPoolsResponseBodyIpamPools(const ListIpamPoolsResponseBodyIpamPools &) = default ;
    ListIpamPoolsResponseBodyIpamPools(ListIpamPoolsResponseBodyIpamPools &&) = default ;
    ListIpamPoolsResponseBodyIpamPools(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpamPoolsResponseBodyIpamPools() = default ;
    ListIpamPoolsResponseBodyIpamPools& operator=(const ListIpamPoolsResponseBodyIpamPools &) = default ;
    ListIpamPoolsResponseBodyIpamPools& operator=(ListIpamPoolsResponseBodyIpamPools &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allocationDefaultCidrMask_ == nullptr
        && return this->allocationMaxCidrMask_ == nullptr && return this->allocationMinCidrMask_ == nullptr && return this->autoImport_ == nullptr && return this->cidrs_ == nullptr && return this->createTime_ == nullptr
        && return this->hasSubPool_ == nullptr && return this->ipVersion_ == nullptr && return this->ipamId_ == nullptr && return this->ipamPoolDescription_ == nullptr && return this->ipamPoolId_ == nullptr
        && return this->ipamPoolName_ == nullptr && return this->ipamRegionId_ == nullptr && return this->ipamScopeId_ == nullptr && return this->ipamScopeType_ == nullptr && return this->ipv6Isp_ == nullptr
        && return this->isShared_ == nullptr && return this->ownerId_ == nullptr && return this->poolDepth_ == nullptr && return this->poolRegionId_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->sourceIpamPoolId_ == nullptr && return this->status_ == nullptr && return this->tags_ == nullptr; };
    // allocationDefaultCidrMask Field Functions 
    bool hasAllocationDefaultCidrMask() const { return this->allocationDefaultCidrMask_ != nullptr;};
    void deleteAllocationDefaultCidrMask() { this->allocationDefaultCidrMask_ = nullptr;};
    inline int32_t allocationDefaultCidrMask() const { DARABONBA_PTR_GET_DEFAULT(allocationDefaultCidrMask_, 0) };
    inline ListIpamPoolsResponseBodyIpamPools& setAllocationDefaultCidrMask(int32_t allocationDefaultCidrMask) { DARABONBA_PTR_SET_VALUE(allocationDefaultCidrMask_, allocationDefaultCidrMask) };


    // allocationMaxCidrMask Field Functions 
    bool hasAllocationMaxCidrMask() const { return this->allocationMaxCidrMask_ != nullptr;};
    void deleteAllocationMaxCidrMask() { this->allocationMaxCidrMask_ = nullptr;};
    inline int32_t allocationMaxCidrMask() const { DARABONBA_PTR_GET_DEFAULT(allocationMaxCidrMask_, 0) };
    inline ListIpamPoolsResponseBodyIpamPools& setAllocationMaxCidrMask(int32_t allocationMaxCidrMask) { DARABONBA_PTR_SET_VALUE(allocationMaxCidrMask_, allocationMaxCidrMask) };


    // allocationMinCidrMask Field Functions 
    bool hasAllocationMinCidrMask() const { return this->allocationMinCidrMask_ != nullptr;};
    void deleteAllocationMinCidrMask() { this->allocationMinCidrMask_ = nullptr;};
    inline int32_t allocationMinCidrMask() const { DARABONBA_PTR_GET_DEFAULT(allocationMinCidrMask_, 0) };
    inline ListIpamPoolsResponseBodyIpamPools& setAllocationMinCidrMask(int32_t allocationMinCidrMask) { DARABONBA_PTR_SET_VALUE(allocationMinCidrMask_, allocationMinCidrMask) };


    // autoImport Field Functions 
    bool hasAutoImport() const { return this->autoImport_ != nullptr;};
    void deleteAutoImport() { this->autoImport_ = nullptr;};
    inline bool autoImport() const { DARABONBA_PTR_GET_DEFAULT(autoImport_, false) };
    inline ListIpamPoolsResponseBodyIpamPools& setAutoImport(bool autoImport) { DARABONBA_PTR_SET_VALUE(autoImport_, autoImport) };


    // cidrs Field Functions 
    bool hasCidrs() const { return this->cidrs_ != nullptr;};
    void deleteCidrs() { this->cidrs_ = nullptr;};
    inline const vector<string> & cidrs() const { DARABONBA_PTR_GET_CONST(cidrs_, vector<string>) };
    inline vector<string> cidrs() { DARABONBA_PTR_GET(cidrs_, vector<string>) };
    inline ListIpamPoolsResponseBodyIpamPools& setCidrs(const vector<string> & cidrs) { DARABONBA_PTR_SET_VALUE(cidrs_, cidrs) };
    inline ListIpamPoolsResponseBodyIpamPools& setCidrs(vector<string> && cidrs) { DARABONBA_PTR_SET_RVALUE(cidrs_, cidrs) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListIpamPoolsResponseBodyIpamPools& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // hasSubPool Field Functions 
    bool hasHasSubPool() const { return this->hasSubPool_ != nullptr;};
    void deleteHasSubPool() { this->hasSubPool_ = nullptr;};
    inline bool hasSubPool() const { DARABONBA_PTR_GET_DEFAULT(hasSubPool_, false) };
    inline ListIpamPoolsResponseBodyIpamPools& setHasSubPool(bool hasSubPool) { DARABONBA_PTR_SET_VALUE(hasSubPool_, hasSubPool) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline ListIpamPoolsResponseBodyIpamPools& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // ipamId Field Functions 
    bool hasIpamId() const { return this->ipamId_ != nullptr;};
    void deleteIpamId() { this->ipamId_ = nullptr;};
    inline string ipamId() const { DARABONBA_PTR_GET_DEFAULT(ipamId_, "") };
    inline ListIpamPoolsResponseBodyIpamPools& setIpamId(string ipamId) { DARABONBA_PTR_SET_VALUE(ipamId_, ipamId) };


    // ipamPoolDescription Field Functions 
    bool hasIpamPoolDescription() const { return this->ipamPoolDescription_ != nullptr;};
    void deleteIpamPoolDescription() { this->ipamPoolDescription_ = nullptr;};
    inline string ipamPoolDescription() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolDescription_, "") };
    inline ListIpamPoolsResponseBodyIpamPools& setIpamPoolDescription(string ipamPoolDescription) { DARABONBA_PTR_SET_VALUE(ipamPoolDescription_, ipamPoolDescription) };


    // ipamPoolId Field Functions 
    bool hasIpamPoolId() const { return this->ipamPoolId_ != nullptr;};
    void deleteIpamPoolId() { this->ipamPoolId_ = nullptr;};
    inline string ipamPoolId() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolId_, "") };
    inline ListIpamPoolsResponseBodyIpamPools& setIpamPoolId(string ipamPoolId) { DARABONBA_PTR_SET_VALUE(ipamPoolId_, ipamPoolId) };


    // ipamPoolName Field Functions 
    bool hasIpamPoolName() const { return this->ipamPoolName_ != nullptr;};
    void deleteIpamPoolName() { this->ipamPoolName_ = nullptr;};
    inline string ipamPoolName() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolName_, "") };
    inline ListIpamPoolsResponseBodyIpamPools& setIpamPoolName(string ipamPoolName) { DARABONBA_PTR_SET_VALUE(ipamPoolName_, ipamPoolName) };


    // ipamRegionId Field Functions 
    bool hasIpamRegionId() const { return this->ipamRegionId_ != nullptr;};
    void deleteIpamRegionId() { this->ipamRegionId_ = nullptr;};
    inline string ipamRegionId() const { DARABONBA_PTR_GET_DEFAULT(ipamRegionId_, "") };
    inline ListIpamPoolsResponseBodyIpamPools& setIpamRegionId(string ipamRegionId) { DARABONBA_PTR_SET_VALUE(ipamRegionId_, ipamRegionId) };


    // ipamScopeId Field Functions 
    bool hasIpamScopeId() const { return this->ipamScopeId_ != nullptr;};
    void deleteIpamScopeId() { this->ipamScopeId_ = nullptr;};
    inline string ipamScopeId() const { DARABONBA_PTR_GET_DEFAULT(ipamScopeId_, "") };
    inline ListIpamPoolsResponseBodyIpamPools& setIpamScopeId(string ipamScopeId) { DARABONBA_PTR_SET_VALUE(ipamScopeId_, ipamScopeId) };


    // ipamScopeType Field Functions 
    bool hasIpamScopeType() const { return this->ipamScopeType_ != nullptr;};
    void deleteIpamScopeType() { this->ipamScopeType_ = nullptr;};
    inline string ipamScopeType() const { DARABONBA_PTR_GET_DEFAULT(ipamScopeType_, "") };
    inline ListIpamPoolsResponseBodyIpamPools& setIpamScopeType(string ipamScopeType) { DARABONBA_PTR_SET_VALUE(ipamScopeType_, ipamScopeType) };


    // ipv6Isp Field Functions 
    bool hasIpv6Isp() const { return this->ipv6Isp_ != nullptr;};
    void deleteIpv6Isp() { this->ipv6Isp_ = nullptr;};
    inline string ipv6Isp() const { DARABONBA_PTR_GET_DEFAULT(ipv6Isp_, "") };
    inline ListIpamPoolsResponseBodyIpamPools& setIpv6Isp(string ipv6Isp) { DARABONBA_PTR_SET_VALUE(ipv6Isp_, ipv6Isp) };


    // isShared Field Functions 
    bool hasIsShared() const { return this->isShared_ != nullptr;};
    void deleteIsShared() { this->isShared_ = nullptr;};
    inline bool isShared() const { DARABONBA_PTR_GET_DEFAULT(isShared_, false) };
    inline ListIpamPoolsResponseBodyIpamPools& setIsShared(bool isShared) { DARABONBA_PTR_SET_VALUE(isShared_, isShared) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListIpamPoolsResponseBodyIpamPools& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // poolDepth Field Functions 
    bool hasPoolDepth() const { return this->poolDepth_ != nullptr;};
    void deletePoolDepth() { this->poolDepth_ = nullptr;};
    inline int32_t poolDepth() const { DARABONBA_PTR_GET_DEFAULT(poolDepth_, 0) };
    inline ListIpamPoolsResponseBodyIpamPools& setPoolDepth(int32_t poolDepth) { DARABONBA_PTR_SET_VALUE(poolDepth_, poolDepth) };


    // poolRegionId Field Functions 
    bool hasPoolRegionId() const { return this->poolRegionId_ != nullptr;};
    void deletePoolRegionId() { this->poolRegionId_ = nullptr;};
    inline string poolRegionId() const { DARABONBA_PTR_GET_DEFAULT(poolRegionId_, "") };
    inline ListIpamPoolsResponseBodyIpamPools& setPoolRegionId(string poolRegionId) { DARABONBA_PTR_SET_VALUE(poolRegionId_, poolRegionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListIpamPoolsResponseBodyIpamPools& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListIpamPoolsResponseBodyIpamPools& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sourceIpamPoolId Field Functions 
    bool hasSourceIpamPoolId() const { return this->sourceIpamPoolId_ != nullptr;};
    void deleteSourceIpamPoolId() { this->sourceIpamPoolId_ = nullptr;};
    inline string sourceIpamPoolId() const { DARABONBA_PTR_GET_DEFAULT(sourceIpamPoolId_, "") };
    inline ListIpamPoolsResponseBodyIpamPools& setSourceIpamPoolId(string sourceIpamPoolId) { DARABONBA_PTR_SET_VALUE(sourceIpamPoolId_, sourceIpamPoolId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListIpamPoolsResponseBodyIpamPools& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListIpamPoolsResponseBodyIpamPoolsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListIpamPoolsResponseBodyIpamPoolsTags>) };
    inline vector<Models::ListIpamPoolsResponseBodyIpamPoolsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListIpamPoolsResponseBodyIpamPoolsTags>) };
    inline ListIpamPoolsResponseBodyIpamPools& setTags(const vector<Models::ListIpamPoolsResponseBodyIpamPoolsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListIpamPoolsResponseBodyIpamPools& setTags(vector<Models::ListIpamPoolsResponseBodyIpamPoolsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The default network mask assigned to the IPAM pool.
    // 
    // An IPv4 mask must be **0 to 32** bits in length.
    std::shared_ptr<int32_t> allocationDefaultCidrMask_ = nullptr;
    // The maximum network mask assigned to the IPAM pool.
    // 
    // An IPv4 mask must be **0 to 32** bits in length.
    std::shared_ptr<int32_t> allocationMaxCidrMask_ = nullptr;
    // The minimum network mask assigned to the IPAM pool.
    // 
    // An IPv4 mask must be **0 to 32** bits in length.
    std::shared_ptr<int32_t> allocationMinCidrMask_ = nullptr;
    // Whether the pool has the auto-import feature enabled.
    std::shared_ptr<bool> autoImport_ = nullptr;
    std::shared_ptr<vector<string>> cidrs_ = nullptr;
    // The time when the IPAM pool was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // Indicates whether the pool is a subpool. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> hasSubPool_ = nullptr;
    // The IP version. Only **IPv4** may be returned.
    std::shared_ptr<string> ipVersion_ = nullptr;
    // The ID of the IPAM.
    std::shared_ptr<string> ipamId_ = nullptr;
    // The description of the IPAM pool.
    std::shared_ptr<string> ipamPoolDescription_ = nullptr;
    // The ID of the IPAM pool.
    std::shared_ptr<string> ipamPoolId_ = nullptr;
    // The name of the IPAM pool.
    std::shared_ptr<string> ipamPoolName_ = nullptr;
    // The ID of the region where the IPAM to which the IPAM pool belongs is hosted.
    std::shared_ptr<string> ipamRegionId_ = nullptr;
    // The ID of the IPAM scope.
    std::shared_ptr<string> ipamScopeId_ = nullptr;
    // The type of the IPAM scope. Valid values:
    // 
    // *   **public**
    // *   **private**
    std::shared_ptr<string> ipamScopeType_ = nullptr;
    std::shared_ptr<string> ipv6Isp_ = nullptr;
    // Whether it is a shared pool.
    std::shared_ptr<bool> isShared_ = nullptr;
    // The Alibaba Cloud account of the owner for the IPAM pool.
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The depth of the IPAM pool. Valid values: **0 to 10**.
    std::shared_ptr<int32_t> poolDepth_ = nullptr;
    // The effective region of the IPAM pool. The ID of the effective region for the IPAM pool.
    std::shared_ptr<string> poolRegionId_ = nullptr;
    // The ID of the region where the operation is called.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the source IPAM pool.
    std::shared_ptr<string> sourceIpamPoolId_ = nullptr;
    // The status of the IPAM pool. Valid values:
    // 
    // *   **Creating**
    // *   **Created**: indicates that the creation is complete.
    // *   **Modifying**
    // *   **Deleting**
    // *   **Deleted**
    std::shared_ptr<string> status_ = nullptr;
    // The tag list.
    std::shared_ptr<vector<Models::ListIpamPoolsResponseBodyIpamPoolsTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
