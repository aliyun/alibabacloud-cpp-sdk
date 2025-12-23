// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIPAMPOOLALLOCATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIPAMPOOLALLOCATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class GetIpamPoolAllocationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIpamPoolAllocationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(IpamPoolAllocationDescription, ipamPoolAllocationDescription_);
      DARABONBA_PTR_TO_JSON(IpamPoolAllocationId, ipamPoolAllocationId_);
      DARABONBA_PTR_TO_JSON(IpamPoolAllocationName, ipamPoolAllocationName_);
      DARABONBA_PTR_TO_JSON(IpamPoolId, ipamPoolId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(SourceCidr, sourceCidr_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetIpamPoolAllocationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(IpamPoolAllocationDescription, ipamPoolAllocationDescription_);
      DARABONBA_PTR_FROM_JSON(IpamPoolAllocationId, ipamPoolAllocationId_);
      DARABONBA_PTR_FROM_JSON(IpamPoolAllocationName, ipamPoolAllocationName_);
      DARABONBA_PTR_FROM_JSON(IpamPoolId, ipamPoolId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(SourceCidr, sourceCidr_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetIpamPoolAllocationResponseBody() = default ;
    GetIpamPoolAllocationResponseBody(const GetIpamPoolAllocationResponseBody &) = default ;
    GetIpamPoolAllocationResponseBody(GetIpamPoolAllocationResponseBody &&) = default ;
    GetIpamPoolAllocationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIpamPoolAllocationResponseBody() = default ;
    GetIpamPoolAllocationResponseBody& operator=(const GetIpamPoolAllocationResponseBody &) = default ;
    GetIpamPoolAllocationResponseBody& operator=(GetIpamPoolAllocationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidr_ == nullptr
        && return this->creationTime_ == nullptr && return this->ipamPoolAllocationDescription_ == nullptr && return this->ipamPoolAllocationId_ == nullptr && return this->ipamPoolAllocationName_ == nullptr && return this->ipamPoolId_ == nullptr
        && return this->regionId_ == nullptr && return this->requestId_ == nullptr && return this->resourceId_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->resourceRegionId_ == nullptr
        && return this->resourceType_ == nullptr && return this->sourceCidr_ == nullptr && return this->status_ == nullptr; };
    // cidr Field Functions 
    bool hasCidr() const { return this->cidr_ != nullptr;};
    void deleteCidr() { this->cidr_ = nullptr;};
    inline string cidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
    inline GetIpamPoolAllocationResponseBody& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetIpamPoolAllocationResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // ipamPoolAllocationDescription Field Functions 
    bool hasIpamPoolAllocationDescription() const { return this->ipamPoolAllocationDescription_ != nullptr;};
    void deleteIpamPoolAllocationDescription() { this->ipamPoolAllocationDescription_ = nullptr;};
    inline string ipamPoolAllocationDescription() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolAllocationDescription_, "") };
    inline GetIpamPoolAllocationResponseBody& setIpamPoolAllocationDescription(string ipamPoolAllocationDescription) { DARABONBA_PTR_SET_VALUE(ipamPoolAllocationDescription_, ipamPoolAllocationDescription) };


    // ipamPoolAllocationId Field Functions 
    bool hasIpamPoolAllocationId() const { return this->ipamPoolAllocationId_ != nullptr;};
    void deleteIpamPoolAllocationId() { this->ipamPoolAllocationId_ = nullptr;};
    inline string ipamPoolAllocationId() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolAllocationId_, "") };
    inline GetIpamPoolAllocationResponseBody& setIpamPoolAllocationId(string ipamPoolAllocationId) { DARABONBA_PTR_SET_VALUE(ipamPoolAllocationId_, ipamPoolAllocationId) };


    // ipamPoolAllocationName Field Functions 
    bool hasIpamPoolAllocationName() const { return this->ipamPoolAllocationName_ != nullptr;};
    void deleteIpamPoolAllocationName() { this->ipamPoolAllocationName_ = nullptr;};
    inline string ipamPoolAllocationName() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolAllocationName_, "") };
    inline GetIpamPoolAllocationResponseBody& setIpamPoolAllocationName(string ipamPoolAllocationName) { DARABONBA_PTR_SET_VALUE(ipamPoolAllocationName_, ipamPoolAllocationName) };


    // ipamPoolId Field Functions 
    bool hasIpamPoolId() const { return this->ipamPoolId_ != nullptr;};
    void deleteIpamPoolId() { this->ipamPoolId_ = nullptr;};
    inline string ipamPoolId() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolId_, "") };
    inline GetIpamPoolAllocationResponseBody& setIpamPoolId(string ipamPoolId) { DARABONBA_PTR_SET_VALUE(ipamPoolId_, ipamPoolId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetIpamPoolAllocationResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIpamPoolAllocationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline GetIpamPoolAllocationResponseBody& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline GetIpamPoolAllocationResponseBody& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // resourceRegionId Field Functions 
    bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
    void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
    inline string resourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
    inline GetIpamPoolAllocationResponseBody& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetIpamPoolAllocationResponseBody& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // sourceCidr Field Functions 
    bool hasSourceCidr() const { return this->sourceCidr_ != nullptr;};
    void deleteSourceCidr() { this->sourceCidr_ = nullptr;};
    inline string sourceCidr() const { DARABONBA_PTR_GET_DEFAULT(sourceCidr_, "") };
    inline GetIpamPoolAllocationResponseBody& setSourceCidr(string sourceCidr) { DARABONBA_PTR_SET_VALUE(sourceCidr_, sourceCidr) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetIpamPoolAllocationResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The allocated CIDR block.
    std::shared_ptr<string> cidr_ = nullptr;
    // The time when the instance was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the CIDR allocation of the IPAM pool.
    // 
    // The description must be 1 to 256 characters in length and start with a letter, but cannot start with a `http://` or `https://`. This parameter is empty by default.
    std::shared_ptr<string> ipamPoolAllocationDescription_ = nullptr;
    // The ID of the instance to which CIDR blocks are allocated from the IPAM pool.
    std::shared_ptr<string> ipamPoolAllocationId_ = nullptr;
    // The name of the CIDR allocation of the IPAM pool.
    // 
    // It must be 1 to 128 characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> ipamPoolAllocationName_ = nullptr;
    // The ID of the IPAM pool.
    std::shared_ptr<string> ipamPoolId_ = nullptr;
    // The region of the IPAM pool.
    // 
    // >  If the IPAM pool to which the CIDR block allocation belongs has the region attribute, this parameter is the region of the IPAM pool. If not, this parameter is the IPAM hosted region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
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
    // The instance state. Valid values:
    // 
    // *   **Created**
    // *   **Deleted**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
