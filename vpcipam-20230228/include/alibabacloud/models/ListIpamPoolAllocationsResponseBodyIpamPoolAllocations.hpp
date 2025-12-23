// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPAMPOOLALLOCATIONSRESPONSEBODYIPAMPOOLALLOCATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTIPAMPOOLALLOCATIONSRESPONSEBODYIPAMPOOLALLOCATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class ListIpamPoolAllocationsResponseBodyIpamPoolAllocations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpamPoolAllocationsResponseBodyIpamPoolAllocations& obj) { 
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(IpamPoolAllocationDescription, ipamPoolAllocationDescription_);
      DARABONBA_PTR_TO_JSON(IpamPoolAllocationId, ipamPoolAllocationId_);
      DARABONBA_PTR_TO_JSON(IpamPoolAllocationName, ipamPoolAllocationName_);
      DARABONBA_PTR_TO_JSON(IpamPoolId, ipamPoolId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(SourceCidr, sourceCidr_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpamPoolAllocationsResponseBodyIpamPoolAllocations& obj) { 
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(IpamPoolAllocationDescription, ipamPoolAllocationDescription_);
      DARABONBA_PTR_FROM_JSON(IpamPoolAllocationId, ipamPoolAllocationId_);
      DARABONBA_PTR_FROM_JSON(IpamPoolAllocationName, ipamPoolAllocationName_);
      DARABONBA_PTR_FROM_JSON(IpamPoolId, ipamPoolId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(SourceCidr, sourceCidr_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListIpamPoolAllocationsResponseBodyIpamPoolAllocations() = default ;
    ListIpamPoolAllocationsResponseBodyIpamPoolAllocations(const ListIpamPoolAllocationsResponseBodyIpamPoolAllocations &) = default ;
    ListIpamPoolAllocationsResponseBodyIpamPoolAllocations(ListIpamPoolAllocationsResponseBodyIpamPoolAllocations &&) = default ;
    ListIpamPoolAllocationsResponseBodyIpamPoolAllocations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpamPoolAllocationsResponseBodyIpamPoolAllocations() = default ;
    ListIpamPoolAllocationsResponseBodyIpamPoolAllocations& operator=(const ListIpamPoolAllocationsResponseBodyIpamPoolAllocations &) = default ;
    ListIpamPoolAllocationsResponseBodyIpamPoolAllocations& operator=(ListIpamPoolAllocationsResponseBodyIpamPoolAllocations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidr_ == nullptr
        && return this->creationTime_ == nullptr && return this->ipamPoolAllocationDescription_ == nullptr && return this->ipamPoolAllocationId_ == nullptr && return this->ipamPoolAllocationName_ == nullptr && return this->ipamPoolId_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceId_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->resourceRegionId_ == nullptr && return this->resourceType_ == nullptr
        && return this->sourceCidr_ == nullptr && return this->status_ == nullptr; };
    // cidr Field Functions 
    bool hasCidr() const { return this->cidr_ != nullptr;};
    void deleteCidr() { this->cidr_ = nullptr;};
    inline string cidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
    inline ListIpamPoolAllocationsResponseBodyIpamPoolAllocations& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListIpamPoolAllocationsResponseBodyIpamPoolAllocations& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // ipamPoolAllocationDescription Field Functions 
    bool hasIpamPoolAllocationDescription() const { return this->ipamPoolAllocationDescription_ != nullptr;};
    void deleteIpamPoolAllocationDescription() { this->ipamPoolAllocationDescription_ = nullptr;};
    inline string ipamPoolAllocationDescription() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolAllocationDescription_, "") };
    inline ListIpamPoolAllocationsResponseBodyIpamPoolAllocations& setIpamPoolAllocationDescription(string ipamPoolAllocationDescription) { DARABONBA_PTR_SET_VALUE(ipamPoolAllocationDescription_, ipamPoolAllocationDescription) };


    // ipamPoolAllocationId Field Functions 
    bool hasIpamPoolAllocationId() const { return this->ipamPoolAllocationId_ != nullptr;};
    void deleteIpamPoolAllocationId() { this->ipamPoolAllocationId_ = nullptr;};
    inline string ipamPoolAllocationId() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolAllocationId_, "") };
    inline ListIpamPoolAllocationsResponseBodyIpamPoolAllocations& setIpamPoolAllocationId(string ipamPoolAllocationId) { DARABONBA_PTR_SET_VALUE(ipamPoolAllocationId_, ipamPoolAllocationId) };


    // ipamPoolAllocationName Field Functions 
    bool hasIpamPoolAllocationName() const { return this->ipamPoolAllocationName_ != nullptr;};
    void deleteIpamPoolAllocationName() { this->ipamPoolAllocationName_ = nullptr;};
    inline string ipamPoolAllocationName() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolAllocationName_, "") };
    inline ListIpamPoolAllocationsResponseBodyIpamPoolAllocations& setIpamPoolAllocationName(string ipamPoolAllocationName) { DARABONBA_PTR_SET_VALUE(ipamPoolAllocationName_, ipamPoolAllocationName) };


    // ipamPoolId Field Functions 
    bool hasIpamPoolId() const { return this->ipamPoolId_ != nullptr;};
    void deleteIpamPoolId() { this->ipamPoolId_ = nullptr;};
    inline string ipamPoolId() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolId_, "") };
    inline ListIpamPoolAllocationsResponseBodyIpamPoolAllocations& setIpamPoolId(string ipamPoolId) { DARABONBA_PTR_SET_VALUE(ipamPoolId_, ipamPoolId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListIpamPoolAllocationsResponseBodyIpamPoolAllocations& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListIpamPoolAllocationsResponseBodyIpamPoolAllocations& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListIpamPoolAllocationsResponseBodyIpamPoolAllocations& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // resourceRegionId Field Functions 
    bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
    void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
    inline string resourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
    inline ListIpamPoolAllocationsResponseBodyIpamPoolAllocations& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListIpamPoolAllocationsResponseBodyIpamPoolAllocations& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // sourceCidr Field Functions 
    bool hasSourceCidr() const { return this->sourceCidr_ != nullptr;};
    void deleteSourceCidr() { this->sourceCidr_ = nullptr;};
    inline string sourceCidr() const { DARABONBA_PTR_GET_DEFAULT(sourceCidr_, "") };
    inline ListIpamPoolAllocationsResponseBodyIpamPoolAllocations& setSourceCidr(string sourceCidr) { DARABONBA_PTR_SET_VALUE(sourceCidr_, sourceCidr) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListIpamPoolAllocationsResponseBodyIpamPoolAllocations& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The allocated CIDR block.
    std::shared_ptr<string> cidr_ = nullptr;
    // The time when the instance was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the allocation.
    std::shared_ptr<string> ipamPoolAllocationDescription_ = nullptr;
    // The ID of the instance to which CIDR blocks are allocated from the IPAM pool.
    std::shared_ptr<string> ipamPoolAllocationId_ = nullptr;
    // The name of the allocation.
    std::shared_ptr<string> ipamPoolAllocationName_ = nullptr;
    // The ID of the IPAM pool.
    std::shared_ptr<string> ipamPoolId_ = nullptr;
    // The region ID of the resource.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource to which the CIDR block is allocated.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The ID of the Alibaba Cloud account to which the resource belongs.
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The effective region ID of the resource.
    std::shared_ptr<string> resourceRegionId_ = nullptr;
    // The type of the resource to which the CIDR block is allocated. Valid values:
    // 
    // *   **VPC**
    // *   **IpamPool**
    // *   **Custom**
    std::shared_ptr<string> resourceType_ = nullptr;
    // The source CIDR block.
    std::shared_ptr<string> sourceCidr_ = nullptr;
    // The status of the instance. Valid values:
    // 
    // *   **Created**
    // *   **Deleted**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
