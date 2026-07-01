// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPAMPOOLALLOCATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIPAMPOOLALLOCATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class ListIpamPoolAllocationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpamPoolAllocationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(IpamPoolAllocations, ipamPoolAllocations_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpamPoolAllocationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(IpamPoolAllocations, ipamPoolAllocations_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListIpamPoolAllocationsResponseBody() = default ;
    ListIpamPoolAllocationsResponseBody(const ListIpamPoolAllocationsResponseBody &) = default ;
    ListIpamPoolAllocationsResponseBody(ListIpamPoolAllocationsResponseBody &&) = default ;
    ListIpamPoolAllocationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpamPoolAllocationsResponseBody() = default ;
    ListIpamPoolAllocationsResponseBody& operator=(const ListIpamPoolAllocationsResponseBody &) = default ;
    ListIpamPoolAllocationsResponseBody& operator=(ListIpamPoolAllocationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IpamPoolAllocations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpamPoolAllocations& obj) { 
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
      friend void from_json(const Darabonba::Json& j, IpamPoolAllocations& obj) { 
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
      IpamPoolAllocations() = default ;
      IpamPoolAllocations(const IpamPoolAllocations &) = default ;
      IpamPoolAllocations(IpamPoolAllocations &&) = default ;
      IpamPoolAllocations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpamPoolAllocations() = default ;
      IpamPoolAllocations& operator=(const IpamPoolAllocations &) = default ;
      IpamPoolAllocations& operator=(IpamPoolAllocations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cidr_ == nullptr
        && this->creationTime_ == nullptr && this->ipamPoolAllocationDescription_ == nullptr && this->ipamPoolAllocationId_ == nullptr && this->ipamPoolAllocationName_ == nullptr && this->ipamPoolId_ == nullptr
        && this->regionId_ == nullptr && this->resourceId_ == nullptr && this->resourceOwnerId_ == nullptr && this->resourceRegionId_ == nullptr && this->resourceType_ == nullptr
        && this->sourceCidr_ == nullptr && this->status_ == nullptr; };
      // cidr Field Functions 
      bool hasCidr() const { return this->cidr_ != nullptr;};
      void deleteCidr() { this->cidr_ = nullptr;};
      inline string getCidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
      inline IpamPoolAllocations& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline IpamPoolAllocations& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // ipamPoolAllocationDescription Field Functions 
      bool hasIpamPoolAllocationDescription() const { return this->ipamPoolAllocationDescription_ != nullptr;};
      void deleteIpamPoolAllocationDescription() { this->ipamPoolAllocationDescription_ = nullptr;};
      inline string getIpamPoolAllocationDescription() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolAllocationDescription_, "") };
      inline IpamPoolAllocations& setIpamPoolAllocationDescription(string ipamPoolAllocationDescription) { DARABONBA_PTR_SET_VALUE(ipamPoolAllocationDescription_, ipamPoolAllocationDescription) };


      // ipamPoolAllocationId Field Functions 
      bool hasIpamPoolAllocationId() const { return this->ipamPoolAllocationId_ != nullptr;};
      void deleteIpamPoolAllocationId() { this->ipamPoolAllocationId_ = nullptr;};
      inline string getIpamPoolAllocationId() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolAllocationId_, "") };
      inline IpamPoolAllocations& setIpamPoolAllocationId(string ipamPoolAllocationId) { DARABONBA_PTR_SET_VALUE(ipamPoolAllocationId_, ipamPoolAllocationId) };


      // ipamPoolAllocationName Field Functions 
      bool hasIpamPoolAllocationName() const { return this->ipamPoolAllocationName_ != nullptr;};
      void deleteIpamPoolAllocationName() { this->ipamPoolAllocationName_ = nullptr;};
      inline string getIpamPoolAllocationName() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolAllocationName_, "") };
      inline IpamPoolAllocations& setIpamPoolAllocationName(string ipamPoolAllocationName) { DARABONBA_PTR_SET_VALUE(ipamPoolAllocationName_, ipamPoolAllocationName) };


      // ipamPoolId Field Functions 
      bool hasIpamPoolId() const { return this->ipamPoolId_ != nullptr;};
      void deleteIpamPoolId() { this->ipamPoolId_ = nullptr;};
      inline string getIpamPoolId() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolId_, "") };
      inline IpamPoolAllocations& setIpamPoolId(string ipamPoolId) { DARABONBA_PTR_SET_VALUE(ipamPoolId_, ipamPoolId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline IpamPoolAllocations& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline IpamPoolAllocations& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceOwnerId Field Functions 
      bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
      void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
      inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
      inline IpamPoolAllocations& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


      // resourceRegionId Field Functions 
      bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
      void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
      inline string getResourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
      inline IpamPoolAllocations& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline IpamPoolAllocations& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // sourceCidr Field Functions 
      bool hasSourceCidr() const { return this->sourceCidr_ != nullptr;};
      void deleteSourceCidr() { this->sourceCidr_ = nullptr;};
      inline string getSourceCidr() const { DARABONBA_PTR_GET_DEFAULT(sourceCidr_, "") };
      inline IpamPoolAllocations& setSourceCidr(string sourceCidr) { DARABONBA_PTR_SET_VALUE(sourceCidr_, sourceCidr) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline IpamPoolAllocations& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The allocated CIDR block.
      shared_ptr<string> cidr_ {};
      // The time when the instance was created.
      shared_ptr<string> creationTime_ {};
      // The description of the IPAM pool CIDR block allocation.
      shared_ptr<string> ipamPoolAllocationDescription_ {};
      // The instance ID of the IPAM pool CIDR block allocation.
      shared_ptr<string> ipamPoolAllocationId_ {};
      // The name of the IPAM pool CIDR block allocation.
      shared_ptr<string> ipamPoolAllocationName_ {};
      // The instance ID of the IPAM pool.
      shared_ptr<string> ipamPoolId_ {};
      // The region of the IPAM pool that contains the CIDR block allocation.
      // 
      // > If the IPAM pool has a specific region, this parameter specifies that region. If the IPAM pool does not have a specific region, this parameter specifies the managed region of IPAM.
      shared_ptr<string> regionId_ {};
      // The ID of the resource to which the CIDR block is allocated.
      shared_ptr<string> resourceId_ {};
      // The ID of the Alibaba Cloud account to which the resource belongs.
      shared_ptr<int64_t> resourceOwnerId_ {};
      // The ID of the region where the resource is deployed.
      shared_ptr<string> resourceRegionId_ {};
      // The type of the resource to which the CIDR block is allocated. Valid values:
      // 
      // - **VPC**: The resource is a VPC.
      // 
      // - **IpamPool**: The resource is a child IPAM pool.
      // 
      // - **Custom**: The resource is a custom reserved CIDR block.
      shared_ptr<string> resourceType_ {};
      // The source CIDR block.
      shared_ptr<string> sourceCidr_ {};
      // The status of the instance. Valid values:
      // 
      // - **Created**: The instance is created.
      // 
      // - **Deleted**: The instance is deleted.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->ipamPoolAllocations_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline ListIpamPoolAllocationsResponseBody& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // ipamPoolAllocations Field Functions 
    bool hasIpamPoolAllocations() const { return this->ipamPoolAllocations_ != nullptr;};
    void deleteIpamPoolAllocations() { this->ipamPoolAllocations_ = nullptr;};
    inline const vector<ListIpamPoolAllocationsResponseBody::IpamPoolAllocations> & getIpamPoolAllocations() const { DARABONBA_PTR_GET_CONST(ipamPoolAllocations_, vector<ListIpamPoolAllocationsResponseBody::IpamPoolAllocations>) };
    inline vector<ListIpamPoolAllocationsResponseBody::IpamPoolAllocations> getIpamPoolAllocations() { DARABONBA_PTR_GET(ipamPoolAllocations_, vector<ListIpamPoolAllocationsResponseBody::IpamPoolAllocations>) };
    inline ListIpamPoolAllocationsResponseBody& setIpamPoolAllocations(const vector<ListIpamPoolAllocationsResponseBody::IpamPoolAllocations> & ipamPoolAllocations) { DARABONBA_PTR_SET_VALUE(ipamPoolAllocations_, ipamPoolAllocations) };
    inline ListIpamPoolAllocationsResponseBody& setIpamPoolAllocations(vector<ListIpamPoolAllocationsResponseBody::IpamPoolAllocations> && ipamPoolAllocations) { DARABONBA_PTR_SET_RVALUE(ipamPoolAllocations_, ipamPoolAllocations) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListIpamPoolAllocationsResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIpamPoolAllocationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIpamPoolAllocationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListIpamPoolAllocationsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned for the current query.
    shared_ptr<int64_t> count_ {};
    // A list of IPAM pool CIDR block allocations.
    shared_ptr<vector<ListIpamPoolAllocationsResponseBody::IpamPoolAllocations>> ipamPoolAllocations_ {};
    // The maximum number of entries to return on each page. Valid values: 1 to 100. Default value: 10.
    shared_ptr<int64_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // - If **NextToken** is empty, no next page exists.
    // 
    // - If a value is returned for **NextToken**, the value is the token that determines the start point of the next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries that meet the query conditions.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
