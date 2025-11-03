// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRTUALPHYSICALCONNECTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRTUALPHYSICALCONNECTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVirtualPhysicalConnectionsRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListVirtualPhysicalConnectionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirtualPhysicalConnectionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IsConfirmed, isConfirmed_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PhysicalConnectionId, physicalConnectionId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VirtualPhysicalConnectionAliUids, virtualPhysicalConnectionAliUids_);
      DARABONBA_PTR_TO_JSON(VirtualPhysicalConnectionBusinessStatus, virtualPhysicalConnectionBusinessStatus_);
      DARABONBA_PTR_TO_JSON(VirtualPhysicalConnectionIds, virtualPhysicalConnectionIds_);
      DARABONBA_PTR_TO_JSON(VirtualPhysicalConnectionStatuses, virtualPhysicalConnectionStatuses_);
      DARABONBA_PTR_TO_JSON(VlanIds, vlanIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirtualPhysicalConnectionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IsConfirmed, isConfirmed_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PhysicalConnectionId, physicalConnectionId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VirtualPhysicalConnectionAliUids, virtualPhysicalConnectionAliUids_);
      DARABONBA_PTR_FROM_JSON(VirtualPhysicalConnectionBusinessStatus, virtualPhysicalConnectionBusinessStatus_);
      DARABONBA_PTR_FROM_JSON(VirtualPhysicalConnectionIds, virtualPhysicalConnectionIds_);
      DARABONBA_PTR_FROM_JSON(VirtualPhysicalConnectionStatuses, virtualPhysicalConnectionStatuses_);
      DARABONBA_PTR_FROM_JSON(VlanIds, vlanIds_);
    };
    ListVirtualPhysicalConnectionsRequest() = default ;
    ListVirtualPhysicalConnectionsRequest(const ListVirtualPhysicalConnectionsRequest &) = default ;
    ListVirtualPhysicalConnectionsRequest(ListVirtualPhysicalConnectionsRequest &&) = default ;
    ListVirtualPhysicalConnectionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirtualPhysicalConnectionsRequest() = default ;
    ListVirtualPhysicalConnectionsRequest& operator=(const ListVirtualPhysicalConnectionsRequest &) = default ;
    ListVirtualPhysicalConnectionsRequest& operator=(ListVirtualPhysicalConnectionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isConfirmed_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->physicalConnectionId_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->tags_ == nullptr && return this->virtualPhysicalConnectionAliUids_ == nullptr && return this->virtualPhysicalConnectionBusinessStatus_ == nullptr && return this->virtualPhysicalConnectionIds_ == nullptr && return this->virtualPhysicalConnectionStatuses_ == nullptr
        && return this->vlanIds_ == nullptr; };
    // isConfirmed Field Functions 
    bool hasIsConfirmed() const { return this->isConfirmed_ != nullptr;};
    void deleteIsConfirmed() { this->isConfirmed_ = nullptr;};
    inline bool isConfirmed() const { DARABONBA_PTR_GET_DEFAULT(isConfirmed_, false) };
    inline ListVirtualPhysicalConnectionsRequest& setIsConfirmed(bool isConfirmed) { DARABONBA_PTR_SET_VALUE(isConfirmed_, isConfirmed) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListVirtualPhysicalConnectionsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVirtualPhysicalConnectionsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // physicalConnectionId Field Functions 
    bool hasPhysicalConnectionId() const { return this->physicalConnectionId_ != nullptr;};
    void deletePhysicalConnectionId() { this->physicalConnectionId_ = nullptr;};
    inline string physicalConnectionId() const { DARABONBA_PTR_GET_DEFAULT(physicalConnectionId_, "") };
    inline ListVirtualPhysicalConnectionsRequest& setPhysicalConnectionId(string physicalConnectionId) { DARABONBA_PTR_SET_VALUE(physicalConnectionId_, physicalConnectionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListVirtualPhysicalConnectionsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListVirtualPhysicalConnectionsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListVirtualPhysicalConnectionsRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListVirtualPhysicalConnectionsRequestTags>) };
    inline vector<ListVirtualPhysicalConnectionsRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<ListVirtualPhysicalConnectionsRequestTags>) };
    inline ListVirtualPhysicalConnectionsRequest& setTags(const vector<ListVirtualPhysicalConnectionsRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListVirtualPhysicalConnectionsRequest& setTags(vector<ListVirtualPhysicalConnectionsRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // virtualPhysicalConnectionAliUids Field Functions 
    bool hasVirtualPhysicalConnectionAliUids() const { return this->virtualPhysicalConnectionAliUids_ != nullptr;};
    void deleteVirtualPhysicalConnectionAliUids() { this->virtualPhysicalConnectionAliUids_ = nullptr;};
    inline const vector<string> & virtualPhysicalConnectionAliUids() const { DARABONBA_PTR_GET_CONST(virtualPhysicalConnectionAliUids_, vector<string>) };
    inline vector<string> virtualPhysicalConnectionAliUids() { DARABONBA_PTR_GET(virtualPhysicalConnectionAliUids_, vector<string>) };
    inline ListVirtualPhysicalConnectionsRequest& setVirtualPhysicalConnectionAliUids(const vector<string> & virtualPhysicalConnectionAliUids) { DARABONBA_PTR_SET_VALUE(virtualPhysicalConnectionAliUids_, virtualPhysicalConnectionAliUids) };
    inline ListVirtualPhysicalConnectionsRequest& setVirtualPhysicalConnectionAliUids(vector<string> && virtualPhysicalConnectionAliUids) { DARABONBA_PTR_SET_RVALUE(virtualPhysicalConnectionAliUids_, virtualPhysicalConnectionAliUids) };


    // virtualPhysicalConnectionBusinessStatus Field Functions 
    bool hasVirtualPhysicalConnectionBusinessStatus() const { return this->virtualPhysicalConnectionBusinessStatus_ != nullptr;};
    void deleteVirtualPhysicalConnectionBusinessStatus() { this->virtualPhysicalConnectionBusinessStatus_ = nullptr;};
    inline string virtualPhysicalConnectionBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(virtualPhysicalConnectionBusinessStatus_, "") };
    inline ListVirtualPhysicalConnectionsRequest& setVirtualPhysicalConnectionBusinessStatus(string virtualPhysicalConnectionBusinessStatus) { DARABONBA_PTR_SET_VALUE(virtualPhysicalConnectionBusinessStatus_, virtualPhysicalConnectionBusinessStatus) };


    // virtualPhysicalConnectionIds Field Functions 
    bool hasVirtualPhysicalConnectionIds() const { return this->virtualPhysicalConnectionIds_ != nullptr;};
    void deleteVirtualPhysicalConnectionIds() { this->virtualPhysicalConnectionIds_ = nullptr;};
    inline const vector<string> & virtualPhysicalConnectionIds() const { DARABONBA_PTR_GET_CONST(virtualPhysicalConnectionIds_, vector<string>) };
    inline vector<string> virtualPhysicalConnectionIds() { DARABONBA_PTR_GET(virtualPhysicalConnectionIds_, vector<string>) };
    inline ListVirtualPhysicalConnectionsRequest& setVirtualPhysicalConnectionIds(const vector<string> & virtualPhysicalConnectionIds) { DARABONBA_PTR_SET_VALUE(virtualPhysicalConnectionIds_, virtualPhysicalConnectionIds) };
    inline ListVirtualPhysicalConnectionsRequest& setVirtualPhysicalConnectionIds(vector<string> && virtualPhysicalConnectionIds) { DARABONBA_PTR_SET_RVALUE(virtualPhysicalConnectionIds_, virtualPhysicalConnectionIds) };


    // virtualPhysicalConnectionStatuses Field Functions 
    bool hasVirtualPhysicalConnectionStatuses() const { return this->virtualPhysicalConnectionStatuses_ != nullptr;};
    void deleteVirtualPhysicalConnectionStatuses() { this->virtualPhysicalConnectionStatuses_ = nullptr;};
    inline const vector<string> & virtualPhysicalConnectionStatuses() const { DARABONBA_PTR_GET_CONST(virtualPhysicalConnectionStatuses_, vector<string>) };
    inline vector<string> virtualPhysicalConnectionStatuses() { DARABONBA_PTR_GET(virtualPhysicalConnectionStatuses_, vector<string>) };
    inline ListVirtualPhysicalConnectionsRequest& setVirtualPhysicalConnectionStatuses(const vector<string> & virtualPhysicalConnectionStatuses) { DARABONBA_PTR_SET_VALUE(virtualPhysicalConnectionStatuses_, virtualPhysicalConnectionStatuses) };
    inline ListVirtualPhysicalConnectionsRequest& setVirtualPhysicalConnectionStatuses(vector<string> && virtualPhysicalConnectionStatuses) { DARABONBA_PTR_SET_RVALUE(virtualPhysicalConnectionStatuses_, virtualPhysicalConnectionStatuses) };


    // vlanIds Field Functions 
    bool hasVlanIds() const { return this->vlanIds_ != nullptr;};
    void deleteVlanIds() { this->vlanIds_ = nullptr;};
    inline const vector<string> & vlanIds() const { DARABONBA_PTR_GET_CONST(vlanIds_, vector<string>) };
    inline vector<string> vlanIds() { DARABONBA_PTR_GET(vlanIds_, vector<string>) };
    inline ListVirtualPhysicalConnectionsRequest& setVlanIds(const vector<string> & vlanIds) { DARABONBA_PTR_SET_VALUE(vlanIds_, vlanIds) };
    inline ListVirtualPhysicalConnectionsRequest& setVlanIds(vector<string> && vlanIds) { DARABONBA_PTR_SET_RVALUE(vlanIds_, vlanIds) };


  protected:
    // Specifies whether the hosted connection is accepted by the tenant. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> isConfirmed_ = nullptr;
    // The number of entries per page. Valid values: **1** to **100**. Default value: **20**.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   You do not need to specify this parameter for the first request.
    // *   You must specify the token that is obtained from the previous query as the value of NextToken.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the Express Connect circuit over which the hosted connections are created.
    // 
    // Express Connect circuits in this topic refer to Express Connect circuits over which hosted connections are created.
    std::shared_ptr<string> physicalConnectionId_ = nullptr;
    // The region ID of the hosted connection.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the hosted connection belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tag list.
    std::shared_ptr<vector<ListVirtualPhysicalConnectionsRequestTags>> tags_ = nullptr;
    // The information about the Alibaba Cloud account that owns the hosted connection.
    std::shared_ptr<vector<string>> virtualPhysicalConnectionAliUids_ = nullptr;
    // The business status of the hosted connection. Valid values:
    // 
    // *   **Normal**
    // *   **FinancialLocked**
    // *   **SecurityLocked**
    std::shared_ptr<string> virtualPhysicalConnectionBusinessStatus_ = nullptr;
    // The information about the hosted connection.
    std::shared_ptr<vector<string>> virtualPhysicalConnectionIds_ = nullptr;
    // The business status of the hosted connection.
    std::shared_ptr<vector<string>> virtualPhysicalConnectionStatuses_ = nullptr;
    // The VLAN ID of the hosted connection.
    std::shared_ptr<vector<string>> vlanIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
