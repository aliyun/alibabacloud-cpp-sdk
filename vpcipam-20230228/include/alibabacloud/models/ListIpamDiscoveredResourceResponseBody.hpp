// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPAMDISCOVEREDRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIPAMDISCOVEREDRESOURCERESPONSEBODY_HPP_
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
  class ListIpamDiscoveredResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpamDiscoveredResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(IpamDiscoveredResources, ipamDiscoveredResources_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpamDiscoveredResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(IpamDiscoveredResources, ipamDiscoveredResources_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListIpamDiscoveredResourceResponseBody() = default ;
    ListIpamDiscoveredResourceResponseBody(const ListIpamDiscoveredResourceResponseBody &) = default ;
    ListIpamDiscoveredResourceResponseBody(ListIpamDiscoveredResourceResponseBody &&) = default ;
    ListIpamDiscoveredResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpamDiscoveredResourceResponseBody() = default ;
    ListIpamDiscoveredResourceResponseBody& operator=(const ListIpamDiscoveredResourceResponseBody &) = default ;
    ListIpamDiscoveredResourceResponseBody& operator=(ListIpamDiscoveredResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IpamDiscoveredResources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpamDiscoveredResources& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(Cidr, cidr_);
        DARABONBA_PTR_TO_JSON(DiscoveryTime, discoveryTime_);
        DARABONBA_PTR_TO_JSON(IpCountDetail, ipCountDetail_);
        DARABONBA_PTR_TO_JSON(IpUsage, ipUsage_);
        DARABONBA_PTR_TO_JSON(IpamResourceDiscoveryId, ipamResourceDiscoveryId_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
        DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
        DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(SourceCidr, sourceCidr_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, IpamDiscoveredResources& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
        DARABONBA_PTR_FROM_JSON(DiscoveryTime, discoveryTime_);
        DARABONBA_PTR_FROM_JSON(IpCountDetail, ipCountDetail_);
        DARABONBA_PTR_FROM_JSON(IpUsage, ipUsage_);
        DARABONBA_PTR_FROM_JSON(IpamResourceDiscoveryId, ipamResourceDiscoveryId_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
        DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
        DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(SourceCidr, sourceCidr_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      IpamDiscoveredResources() = default ;
      IpamDiscoveredResources(const IpamDiscoveredResources &) = default ;
      IpamDiscoveredResources(IpamDiscoveredResources &&) = default ;
      IpamDiscoveredResources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpamDiscoveredResources() = default ;
      IpamDiscoveredResources& operator=(const IpamDiscoveredResources &) = default ;
      IpamDiscoveredResources& operator=(IpamDiscoveredResources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class IpCountDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IpCountDetail& obj) { 
          DARABONBA_PTR_TO_JSON(FreeIpCount, freeIpCount_);
          DARABONBA_PTR_TO_JSON(TotalIpCount, totalIpCount_);
          DARABONBA_PTR_TO_JSON(UsedIpCount, usedIpCount_);
        };
        friend void from_json(const Darabonba::Json& j, IpCountDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(FreeIpCount, freeIpCount_);
          DARABONBA_PTR_FROM_JSON(TotalIpCount, totalIpCount_);
          DARABONBA_PTR_FROM_JSON(UsedIpCount, usedIpCount_);
        };
        IpCountDetail() = default ;
        IpCountDetail(const IpCountDetail &) = default ;
        IpCountDetail(IpCountDetail &&) = default ;
        IpCountDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IpCountDetail() = default ;
        IpCountDetail& operator=(const IpCountDetail &) = default ;
        IpCountDetail& operator=(IpCountDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->freeIpCount_ == nullptr
        && this->totalIpCount_ == nullptr && this->usedIpCount_ == nullptr; };
        // freeIpCount Field Functions 
        bool hasFreeIpCount() const { return this->freeIpCount_ != nullptr;};
        void deleteFreeIpCount() { this->freeIpCount_ = nullptr;};
        inline string getFreeIpCount() const { DARABONBA_PTR_GET_DEFAULT(freeIpCount_, "") };
        inline IpCountDetail& setFreeIpCount(string freeIpCount) { DARABONBA_PTR_SET_VALUE(freeIpCount_, freeIpCount) };


        // totalIpCount Field Functions 
        bool hasTotalIpCount() const { return this->totalIpCount_ != nullptr;};
        void deleteTotalIpCount() { this->totalIpCount_ = nullptr;};
        inline string getTotalIpCount() const { DARABONBA_PTR_GET_DEFAULT(totalIpCount_, "") };
        inline IpCountDetail& setTotalIpCount(string totalIpCount) { DARABONBA_PTR_SET_VALUE(totalIpCount_, totalIpCount) };


        // usedIpCount Field Functions 
        bool hasUsedIpCount() const { return this->usedIpCount_ != nullptr;};
        void deleteUsedIpCount() { this->usedIpCount_ = nullptr;};
        inline string getUsedIpCount() const { DARABONBA_PTR_GET_DEFAULT(usedIpCount_, "") };
        inline IpCountDetail& setUsedIpCount(string usedIpCount) { DARABONBA_PTR_SET_VALUE(usedIpCount_, usedIpCount) };


      protected:
        // The number of available IP addresses.
        shared_ptr<string> freeIpCount_ {};
        // The total number of IP addresses.
        shared_ptr<string> totalIpCount_ {};
        // The number of allocated IP addresses.
        shared_ptr<string> usedIpCount_ {};
      };

      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->cidr_ == nullptr && this->discoveryTime_ == nullptr && this->ipCountDetail_ == nullptr && this->ipUsage_ == nullptr && this->ipamResourceDiscoveryId_ == nullptr
        && this->resourceId_ == nullptr && this->resourceName_ == nullptr && this->resourceOwnerId_ == nullptr && this->resourceRegionId_ == nullptr && this->resourceType_ == nullptr
        && this->sourceCidr_ == nullptr && this->vpcId_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline IpamDiscoveredResources& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // cidr Field Functions 
      bool hasCidr() const { return this->cidr_ != nullptr;};
      void deleteCidr() { this->cidr_ = nullptr;};
      inline string getCidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
      inline IpamDiscoveredResources& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


      // discoveryTime Field Functions 
      bool hasDiscoveryTime() const { return this->discoveryTime_ != nullptr;};
      void deleteDiscoveryTime() { this->discoveryTime_ = nullptr;};
      inline string getDiscoveryTime() const { DARABONBA_PTR_GET_DEFAULT(discoveryTime_, "") };
      inline IpamDiscoveredResources& setDiscoveryTime(string discoveryTime) { DARABONBA_PTR_SET_VALUE(discoveryTime_, discoveryTime) };


      // ipCountDetail Field Functions 
      bool hasIpCountDetail() const { return this->ipCountDetail_ != nullptr;};
      void deleteIpCountDetail() { this->ipCountDetail_ = nullptr;};
      inline const IpamDiscoveredResources::IpCountDetail & getIpCountDetail() const { DARABONBA_PTR_GET_CONST(ipCountDetail_, IpamDiscoveredResources::IpCountDetail) };
      inline IpamDiscoveredResources::IpCountDetail getIpCountDetail() { DARABONBA_PTR_GET(ipCountDetail_, IpamDiscoveredResources::IpCountDetail) };
      inline IpamDiscoveredResources& setIpCountDetail(const IpamDiscoveredResources::IpCountDetail & ipCountDetail) { DARABONBA_PTR_SET_VALUE(ipCountDetail_, ipCountDetail) };
      inline IpamDiscoveredResources& setIpCountDetail(IpamDiscoveredResources::IpCountDetail && ipCountDetail) { DARABONBA_PTR_SET_RVALUE(ipCountDetail_, ipCountDetail) };


      // ipUsage Field Functions 
      bool hasIpUsage() const { return this->ipUsage_ != nullptr;};
      void deleteIpUsage() { this->ipUsage_ = nullptr;};
      inline string getIpUsage() const { DARABONBA_PTR_GET_DEFAULT(ipUsage_, "") };
      inline IpamDiscoveredResources& setIpUsage(string ipUsage) { DARABONBA_PTR_SET_VALUE(ipUsage_, ipUsage) };


      // ipamResourceDiscoveryId Field Functions 
      bool hasIpamResourceDiscoveryId() const { return this->ipamResourceDiscoveryId_ != nullptr;};
      void deleteIpamResourceDiscoveryId() { this->ipamResourceDiscoveryId_ = nullptr;};
      inline string getIpamResourceDiscoveryId() const { DARABONBA_PTR_GET_DEFAULT(ipamResourceDiscoveryId_, "") };
      inline IpamDiscoveredResources& setIpamResourceDiscoveryId(string ipamResourceDiscoveryId) { DARABONBA_PTR_SET_VALUE(ipamResourceDiscoveryId_, ipamResourceDiscoveryId) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline IpamDiscoveredResources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceName Field Functions 
      bool hasResourceName() const { return this->resourceName_ != nullptr;};
      void deleteResourceName() { this->resourceName_ = nullptr;};
      inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
      inline IpamDiscoveredResources& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


      // resourceOwnerId Field Functions 
      bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
      void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
      inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
      inline IpamDiscoveredResources& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


      // resourceRegionId Field Functions 
      bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
      void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
      inline string getResourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
      inline IpamDiscoveredResources& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline IpamDiscoveredResources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // sourceCidr Field Functions 
      bool hasSourceCidr() const { return this->sourceCidr_ != nullptr;};
      void deleteSourceCidr() { this->sourceCidr_ = nullptr;};
      inline string getSourceCidr() const { DARABONBA_PTR_GET_DEFAULT(sourceCidr_, "") };
      inline IpamDiscoveredResources& setSourceCidr(string sourceCidr) { DARABONBA_PTR_SET_VALUE(sourceCidr_, sourceCidr) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline IpamDiscoveredResources& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The Alibaba Cloud account ID.
      shared_ptr<int64_t> aliUid_ {};
      // The CIDR block of the resource.
      shared_ptr<string> cidr_ {};
      // The time when the resource was discovered.
      // 
      // > If the resource has not been modified since it was created, the discovery time remains unchanged.
      shared_ptr<string> discoveryTime_ {};
      // The details of the resource IP address count.
      shared_ptr<IpamDiscoveredResources::IpCountDetail> ipCountDetail_ {};
      // The IP utilization rate, in decimal format.
      shared_ptr<string> ipUsage_ {};
      // The resource discovery instance ID.
      shared_ptr<string> ipamResourceDiscoveryId_ {};
      // The resource ID.
      shared_ptr<string> resourceId_ {};
      // The resource name.
      shared_ptr<string> resourceName_ {};
      // The Alibaba Cloud account ID of the resource ownership.
      shared_ptr<int64_t> resourceOwnerId_ {};
      // The region ID of the resource ownership.
      shared_ptr<string> resourceRegionId_ {};
      // The resource type. Valid values:
      // 
      // - **VPC**: VPC.
      // 
      // - **VSwitch**: vSwitch.
      shared_ptr<string> resourceType_ {};
      // The source CIDR block.
      shared_ptr<string> sourceCidr_ {};
      // The instance ID of the VPC-connected instance to which the resource belongs.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->ipamDiscoveredResources_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListIpamDiscoveredResourceResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // ipamDiscoveredResources Field Functions 
    bool hasIpamDiscoveredResources() const { return this->ipamDiscoveredResources_ != nullptr;};
    void deleteIpamDiscoveredResources() { this->ipamDiscoveredResources_ = nullptr;};
    inline const vector<ListIpamDiscoveredResourceResponseBody::IpamDiscoveredResources> & getIpamDiscoveredResources() const { DARABONBA_PTR_GET_CONST(ipamDiscoveredResources_, vector<ListIpamDiscoveredResourceResponseBody::IpamDiscoveredResources>) };
    inline vector<ListIpamDiscoveredResourceResponseBody::IpamDiscoveredResources> getIpamDiscoveredResources() { DARABONBA_PTR_GET(ipamDiscoveredResources_, vector<ListIpamDiscoveredResourceResponseBody::IpamDiscoveredResources>) };
    inline ListIpamDiscoveredResourceResponseBody& setIpamDiscoveredResources(const vector<ListIpamDiscoveredResourceResponseBody::IpamDiscoveredResources> & ipamDiscoveredResources) { DARABONBA_PTR_SET_VALUE(ipamDiscoveredResources_, ipamDiscoveredResources) };
    inline ListIpamDiscoveredResourceResponseBody& setIpamDiscoveredResources(vector<ListIpamDiscoveredResourceResponseBody::IpamDiscoveredResources> && ipamDiscoveredResources) { DARABONBA_PTR_SET_RVALUE(ipamDiscoveredResources_, ipamDiscoveredResources) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListIpamDiscoveredResourceResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIpamDiscoveredResourceResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIpamDiscoveredResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListIpamDiscoveredResourceResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned per page.
    shared_ptr<int32_t> count_ {};
    // The resources.
    shared_ptr<vector<ListIpamDiscoveredResourceResponseBody::IpamDiscoveredResources>> ipamDiscoveredResources_ {};
    // The maximum number of entries to return per page. Valid values: 1 to 100. Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. Valid values:
    // - If **NextToken** is empty, no subsequent query exists.
    // - If **NextToken** has a return value, the value indicates the token for the next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries that match the query conditions.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
