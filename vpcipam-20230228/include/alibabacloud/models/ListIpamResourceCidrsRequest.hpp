// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPAMRESOURCECIDRSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTIPAMRESOURCECIDRSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class ListIpamResourceCidrsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpamResourceCidrsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IpamPoolId, ipamPoolId_);
      DARABONBA_PTR_TO_JSON(IpamScopeId, ipamScopeId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpamResourceCidrsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IpamPoolId, ipamPoolId_);
      DARABONBA_PTR_FROM_JSON(IpamScopeId, ipamScopeId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListIpamResourceCidrsRequest() = default ;
    ListIpamResourceCidrsRequest(const ListIpamResourceCidrsRequest &) = default ;
    ListIpamResourceCidrsRequest(ListIpamResourceCidrsRequest &&) = default ;
    ListIpamResourceCidrsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpamResourceCidrsRequest() = default ;
    ListIpamResourceCidrsRequest& operator=(const ListIpamResourceCidrsRequest &) = default ;
    ListIpamResourceCidrsRequest& operator=(ListIpamResourceCidrsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipamPoolId_ == nullptr
        && this->ipamScopeId_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr && this->resourceId_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->resourceType_ == nullptr && this->vpcId_ == nullptr; };
    // ipamPoolId Field Functions 
    bool hasIpamPoolId() const { return this->ipamPoolId_ != nullptr;};
    void deleteIpamPoolId() { this->ipamPoolId_ = nullptr;};
    inline string getIpamPoolId() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolId_, "") };
    inline ListIpamResourceCidrsRequest& setIpamPoolId(string ipamPoolId) { DARABONBA_PTR_SET_VALUE(ipamPoolId_, ipamPoolId) };


    // ipamScopeId Field Functions 
    bool hasIpamScopeId() const { return this->ipamScopeId_ != nullptr;};
    void deleteIpamScopeId() { this->ipamScopeId_ = nullptr;};
    inline string getIpamScopeId() const { DARABONBA_PTR_GET_DEFAULT(ipamScopeId_, "") };
    inline ListIpamResourceCidrsRequest& setIpamScopeId(string ipamScopeId) { DARABONBA_PTR_SET_VALUE(ipamScopeId_, ipamScopeId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListIpamResourceCidrsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIpamResourceCidrsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListIpamResourceCidrsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListIpamResourceCidrsRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListIpamResourceCidrsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListIpamResourceCidrsRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListIpamResourceCidrsRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The ID of the IPAM pool.
    // 
    // >  You must specify at least one of **IpamScopeId** and **IpamPoolId**.
    shared_ptr<string> ipamPoolId_ {};
    // The ID of the IPAM scope.
    // 
    // >  You must specify at least one of **IpamScopeId** and **IpamPoolId**.
    shared_ptr<string> ipamScopeId_ {};
    // The number of entries per page. Valid values: **1** to **100**. Default value: **10**.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   You do not need to specify this parameter for the first request.
    // *   You must specify the token that is obtained from the previous query as the value of **NextToken**.
    shared_ptr<string> nextToken_ {};
    // The ID of the region where the IPAM instance is hosted.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource ID.
    shared_ptr<string> resourceId_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The type of resource. Valid values:
    // 
    // *   **VPC**
    // *   **VSwitch**
    shared_ptr<string> resourceType_ {};
    // The VPC ID.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
