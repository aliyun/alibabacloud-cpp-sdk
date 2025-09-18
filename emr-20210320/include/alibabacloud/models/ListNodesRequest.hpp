// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Tag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(NodeGroupIds, nodeGroupIds_);
      DARABONBA_PTR_TO_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_TO_JSON(NodeNames, nodeNames_);
      DARABONBA_PTR_TO_JSON(NodeStates, nodeStates_);
      DARABONBA_PTR_TO_JSON(PrivateIps, privateIps_);
      DARABONBA_PTR_TO_JSON(PublicIps, publicIps_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(NodeGroupIds, nodeGroupIds_);
      DARABONBA_PTR_FROM_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_FROM_JSON(NodeNames, nodeNames_);
      DARABONBA_PTR_FROM_JSON(NodeStates, nodeStates_);
      DARABONBA_PTR_FROM_JSON(PrivateIps, privateIps_);
      DARABONBA_PTR_FROM_JSON(PublicIps, publicIps_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListNodesRequest() = default ;
    ListNodesRequest(const ListNodesRequest &) = default ;
    ListNodesRequest(ListNodesRequest &&) = default ;
    ListNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesRequest() = default ;
    ListNodesRequest& operator=(const ListNodesRequest &) = default ;
    ListNodesRequest& operator=(ListNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->nodeGroupIds_ != nullptr && this->nodeIds_ != nullptr && this->nodeNames_ != nullptr
        && this->nodeStates_ != nullptr && this->privateIps_ != nullptr && this->publicIps_ != nullptr && this->regionId_ != nullptr && this->tags_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListNodesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListNodesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNodesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // nodeGroupIds Field Functions 
    bool hasNodeGroupIds() const { return this->nodeGroupIds_ != nullptr;};
    void deleteNodeGroupIds() { this->nodeGroupIds_ = nullptr;};
    inline const vector<string> & nodeGroupIds() const { DARABONBA_PTR_GET_CONST(nodeGroupIds_, vector<string>) };
    inline vector<string> nodeGroupIds() { DARABONBA_PTR_GET(nodeGroupIds_, vector<string>) };
    inline ListNodesRequest& setNodeGroupIds(const vector<string> & nodeGroupIds) { DARABONBA_PTR_SET_VALUE(nodeGroupIds_, nodeGroupIds) };
    inline ListNodesRequest& setNodeGroupIds(vector<string> && nodeGroupIds) { DARABONBA_PTR_SET_RVALUE(nodeGroupIds_, nodeGroupIds) };


    // nodeIds Field Functions 
    bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
    void deleteNodeIds() { this->nodeIds_ = nullptr;};
    inline const vector<string> & nodeIds() const { DARABONBA_PTR_GET_CONST(nodeIds_, vector<string>) };
    inline vector<string> nodeIds() { DARABONBA_PTR_GET(nodeIds_, vector<string>) };
    inline ListNodesRequest& setNodeIds(const vector<string> & nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };
    inline ListNodesRequest& setNodeIds(vector<string> && nodeIds) { DARABONBA_PTR_SET_RVALUE(nodeIds_, nodeIds) };


    // nodeNames Field Functions 
    bool hasNodeNames() const { return this->nodeNames_ != nullptr;};
    void deleteNodeNames() { this->nodeNames_ = nullptr;};
    inline const vector<string> & nodeNames() const { DARABONBA_PTR_GET_CONST(nodeNames_, vector<string>) };
    inline vector<string> nodeNames() { DARABONBA_PTR_GET(nodeNames_, vector<string>) };
    inline ListNodesRequest& setNodeNames(const vector<string> & nodeNames) { DARABONBA_PTR_SET_VALUE(nodeNames_, nodeNames) };
    inline ListNodesRequest& setNodeNames(vector<string> && nodeNames) { DARABONBA_PTR_SET_RVALUE(nodeNames_, nodeNames) };


    // nodeStates Field Functions 
    bool hasNodeStates() const { return this->nodeStates_ != nullptr;};
    void deleteNodeStates() { this->nodeStates_ = nullptr;};
    inline const vector<string> & nodeStates() const { DARABONBA_PTR_GET_CONST(nodeStates_, vector<string>) };
    inline vector<string> nodeStates() { DARABONBA_PTR_GET(nodeStates_, vector<string>) };
    inline ListNodesRequest& setNodeStates(const vector<string> & nodeStates) { DARABONBA_PTR_SET_VALUE(nodeStates_, nodeStates) };
    inline ListNodesRequest& setNodeStates(vector<string> && nodeStates) { DARABONBA_PTR_SET_RVALUE(nodeStates_, nodeStates) };


    // privateIps Field Functions 
    bool hasPrivateIps() const { return this->privateIps_ != nullptr;};
    void deletePrivateIps() { this->privateIps_ = nullptr;};
    inline const vector<string> & privateIps() const { DARABONBA_PTR_GET_CONST(privateIps_, vector<string>) };
    inline vector<string> privateIps() { DARABONBA_PTR_GET(privateIps_, vector<string>) };
    inline ListNodesRequest& setPrivateIps(const vector<string> & privateIps) { DARABONBA_PTR_SET_VALUE(privateIps_, privateIps) };
    inline ListNodesRequest& setPrivateIps(vector<string> && privateIps) { DARABONBA_PTR_SET_RVALUE(privateIps_, privateIps) };


    // publicIps Field Functions 
    bool hasPublicIps() const { return this->publicIps_ != nullptr;};
    void deletePublicIps() { this->publicIps_ = nullptr;};
    inline const vector<string> & publicIps() const { DARABONBA_PTR_GET_CONST(publicIps_, vector<string>) };
    inline vector<string> publicIps() { DARABONBA_PTR_GET(publicIps_, vector<string>) };
    inline ListNodesRequest& setPublicIps(const vector<string> & publicIps) { DARABONBA_PTR_SET_VALUE(publicIps_, publicIps) };
    inline ListNodesRequest& setPublicIps(vector<string> && publicIps) { DARABONBA_PTR_SET_RVALUE(publicIps_, publicIps) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListNodesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Tag> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tag>) };
    inline vector<Tag> tags() { DARABONBA_PTR_GET(tags_, vector<Tag>) };
    inline ListNodesRequest& setTags(const vector<Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListNodesRequest& setTags(vector<Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The ID of the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The number of maximum number of records to obtain at a time. Valid values: 1 to 100.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // Marks the current position where reading starts. If you set this value to null, you can start from the beginning.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The IDs of node groups.
    std::shared_ptr<vector<string>> nodeGroupIds_ = nullptr;
    // An array that consists of information about the ID of the node.
    std::shared_ptr<vector<string>> nodeIds_ = nullptr;
    // The names of the nodes.
    std::shared_ptr<vector<string>> nodeNames_ = nullptr;
    // The status of the node.
    std::shared_ptr<vector<string>> nodeStates_ = nullptr;
    // The private IP address.
    std::shared_ptr<vector<string>> privateIps_ = nullptr;
    // The public IP address.
    std::shared_ptr<vector<string>> publicIps_ = nullptr;
    // The ID of the region in which you want to create the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Tag>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
