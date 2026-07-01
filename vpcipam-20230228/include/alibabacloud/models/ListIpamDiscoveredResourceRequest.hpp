// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPAMDISCOVEREDRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTIPAMDISCOVEREDRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class ListIpamDiscoveredResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpamDiscoveredResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IpamResourceDiscoveryId, ipamResourceDiscoveryId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpamDiscoveredResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IpamResourceDiscoveryId, ipamResourceDiscoveryId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    ListIpamDiscoveredResourceRequest() = default ;
    ListIpamDiscoveredResourceRequest(const ListIpamDiscoveredResourceRequest &) = default ;
    ListIpamDiscoveredResourceRequest(ListIpamDiscoveredResourceRequest &&) = default ;
    ListIpamDiscoveredResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpamDiscoveredResourceRequest() = default ;
    ListIpamDiscoveredResourceRequest& operator=(const ListIpamDiscoveredResourceRequest &) = default ;
    ListIpamDiscoveredResourceRequest& operator=(ListIpamDiscoveredResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipamResourceDiscoveryId_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr && this->resourceRegionId_ == nullptr && this->resourceType_ == nullptr; };
    // ipamResourceDiscoveryId Field Functions 
    bool hasIpamResourceDiscoveryId() const { return this->ipamResourceDiscoveryId_ != nullptr;};
    void deleteIpamResourceDiscoveryId() { this->ipamResourceDiscoveryId_ = nullptr;};
    inline string getIpamResourceDiscoveryId() const { DARABONBA_PTR_GET_DEFAULT(ipamResourceDiscoveryId_, "") };
    inline ListIpamDiscoveredResourceRequest& setIpamResourceDiscoveryId(string ipamResourceDiscoveryId) { DARABONBA_PTR_SET_VALUE(ipamResourceDiscoveryId_, ipamResourceDiscoveryId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListIpamDiscoveredResourceRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIpamDiscoveredResourceRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListIpamDiscoveredResourceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceRegionId Field Functions 
    bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
    void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
    inline string getResourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
    inline ListIpamDiscoveredResourceRequest& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListIpamDiscoveredResourceRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The resource discovery instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> ipamResourceDiscoveryId_ {};
    // The maximum number of entries to return per page. Valid values: 1 to 100. Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. Valid values:
    // 
    // - If this is the first query or no subsequent query exists, leave this parameter empty.
    // - If a subsequent query exists, set this parameter to the **NextToken** value returned in the previous API call.
    shared_ptr<string> nextToken_ {};
    // The hosted region ID of the resource discovery instance.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to obtain the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The operating region of the resource discovery.
    // 
    // This parameter is required.
    shared_ptr<string> resourceRegionId_ {};
    // The resource type. Valid values:
    // 
    // - **VPC**: VPC.
    // 
    // - **VSwitch**: vSwitch.
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
