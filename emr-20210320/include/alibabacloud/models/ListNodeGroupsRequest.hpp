// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListNodeGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodeGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(NodeGroupIds, nodeGroupIds_);
      DARABONBA_PTR_TO_JSON(NodeGroupNames, nodeGroupNames_);
      DARABONBA_PTR_TO_JSON(NodeGroupStates, nodeGroupStates_);
      DARABONBA_PTR_TO_JSON(NodeGroupTypes, nodeGroupTypes_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodeGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(NodeGroupIds, nodeGroupIds_);
      DARABONBA_PTR_FROM_JSON(NodeGroupNames, nodeGroupNames_);
      DARABONBA_PTR_FROM_JSON(NodeGroupStates, nodeGroupStates_);
      DARABONBA_PTR_FROM_JSON(NodeGroupTypes, nodeGroupTypes_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ListNodeGroupsRequest() = default ;
    ListNodeGroupsRequest(const ListNodeGroupsRequest &) = default ;
    ListNodeGroupsRequest(ListNodeGroupsRequest &&) = default ;
    ListNodeGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodeGroupsRequest() = default ;
    ListNodeGroupsRequest& operator=(const ListNodeGroupsRequest &) = default ;
    ListNodeGroupsRequest& operator=(ListNodeGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->nodeGroupIds_ == nullptr && this->nodeGroupNames_ == nullptr && this->nodeGroupStates_ == nullptr
        && this->nodeGroupTypes_ == nullptr && this->regionId_ == nullptr && this->zoneId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListNodeGroupsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListNodeGroupsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNodeGroupsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // nodeGroupIds Field Functions 
    bool hasNodeGroupIds() const { return this->nodeGroupIds_ != nullptr;};
    void deleteNodeGroupIds() { this->nodeGroupIds_ = nullptr;};
    inline const vector<string> & getNodeGroupIds() const { DARABONBA_PTR_GET_CONST(nodeGroupIds_, vector<string>) };
    inline vector<string> getNodeGroupIds() { DARABONBA_PTR_GET(nodeGroupIds_, vector<string>) };
    inline ListNodeGroupsRequest& setNodeGroupIds(const vector<string> & nodeGroupIds) { DARABONBA_PTR_SET_VALUE(nodeGroupIds_, nodeGroupIds) };
    inline ListNodeGroupsRequest& setNodeGroupIds(vector<string> && nodeGroupIds) { DARABONBA_PTR_SET_RVALUE(nodeGroupIds_, nodeGroupIds) };


    // nodeGroupNames Field Functions 
    bool hasNodeGroupNames() const { return this->nodeGroupNames_ != nullptr;};
    void deleteNodeGroupNames() { this->nodeGroupNames_ = nullptr;};
    inline const vector<string> & getNodeGroupNames() const { DARABONBA_PTR_GET_CONST(nodeGroupNames_, vector<string>) };
    inline vector<string> getNodeGroupNames() { DARABONBA_PTR_GET(nodeGroupNames_, vector<string>) };
    inline ListNodeGroupsRequest& setNodeGroupNames(const vector<string> & nodeGroupNames) { DARABONBA_PTR_SET_VALUE(nodeGroupNames_, nodeGroupNames) };
    inline ListNodeGroupsRequest& setNodeGroupNames(vector<string> && nodeGroupNames) { DARABONBA_PTR_SET_RVALUE(nodeGroupNames_, nodeGroupNames) };


    // nodeGroupStates Field Functions 
    bool hasNodeGroupStates() const { return this->nodeGroupStates_ != nullptr;};
    void deleteNodeGroupStates() { this->nodeGroupStates_ = nullptr;};
    inline const vector<string> & getNodeGroupStates() const { DARABONBA_PTR_GET_CONST(nodeGroupStates_, vector<string>) };
    inline vector<string> getNodeGroupStates() { DARABONBA_PTR_GET(nodeGroupStates_, vector<string>) };
    inline ListNodeGroupsRequest& setNodeGroupStates(const vector<string> & nodeGroupStates) { DARABONBA_PTR_SET_VALUE(nodeGroupStates_, nodeGroupStates) };
    inline ListNodeGroupsRequest& setNodeGroupStates(vector<string> && nodeGroupStates) { DARABONBA_PTR_SET_RVALUE(nodeGroupStates_, nodeGroupStates) };


    // nodeGroupTypes Field Functions 
    bool hasNodeGroupTypes() const { return this->nodeGroupTypes_ != nullptr;};
    void deleteNodeGroupTypes() { this->nodeGroupTypes_ = nullptr;};
    inline const vector<string> & getNodeGroupTypes() const { DARABONBA_PTR_GET_CONST(nodeGroupTypes_, vector<string>) };
    inline vector<string> getNodeGroupTypes() { DARABONBA_PTR_GET(nodeGroupTypes_, vector<string>) };
    inline ListNodeGroupsRequest& setNodeGroupTypes(const vector<string> & nodeGroupTypes) { DARABONBA_PTR_SET_VALUE(nodeGroupTypes_, nodeGroupTypes) };
    inline ListNodeGroupsRequest& setNodeGroupTypes(vector<string> && nodeGroupTypes) { DARABONBA_PTR_SET_RVALUE(nodeGroupTypes_, nodeGroupTypes) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListNodeGroupsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListNodeGroupsRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The maximum number of records to return in a single request. Valid values: 1 to 100.
    shared_ptr<int32_t> maxResults_ {};
    // The token that marks the start of the query. Leave this parameter empty to start from the beginning.
    shared_ptr<string> nextToken_ {};
    // A list of node group IDs. The number of array elements N can range from 1 to 100.
    shared_ptr<vector<string>> nodeGroupIds_ {};
    // A list of node group names. The number of array elements N can range from 1 to 100.
    shared_ptr<vector<string>> nodeGroupNames_ {};
    // The state of the node group. The number of array elements N can range from 1 to 100.
    shared_ptr<vector<string>> nodeGroupStates_ {};
    // A list of node group types. The number of array elements N can range from 1 to 100.
    shared_ptr<vector<string>> nodeGroupTypes_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
