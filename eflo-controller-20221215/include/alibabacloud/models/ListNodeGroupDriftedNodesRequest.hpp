// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEGROUPDRIFTEDNODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEGROUPDRIFTEDNODESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListNodeGroupDriftedNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodeGroupDriftedNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(NodeIds, nodeIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodeGroupDriftedNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(NodeIds, nodeIds_);
    };
    ListNodeGroupDriftedNodesRequest() = default ;
    ListNodeGroupDriftedNodesRequest(const ListNodeGroupDriftedNodesRequest &) = default ;
    ListNodeGroupDriftedNodesRequest(ListNodeGroupDriftedNodesRequest &&) = default ;
    ListNodeGroupDriftedNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodeGroupDriftedNodesRequest() = default ;
    ListNodeGroupDriftedNodesRequest& operator=(const ListNodeGroupDriftedNodesRequest &) = default ;
    ListNodeGroupDriftedNodesRequest& operator=(ListNodeGroupDriftedNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->nodeGroupId_ == nullptr && this->nodeIds_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListNodeGroupDriftedNodesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNodeGroupDriftedNodesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline ListNodeGroupDriftedNodesRequest& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // nodeIds Field Functions 
    bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
    void deleteNodeIds() { this->nodeIds_ = nullptr;};
    inline const vector<string> & getNodeIds() const { DARABONBA_PTR_GET_CONST(nodeIds_, vector<string>) };
    inline vector<string> getNodeIds() { DARABONBA_PTR_GET(nodeIds_, vector<string>) };
    inline ListNodeGroupDriftedNodesRequest& setNodeIds(const vector<string> & nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };
    inline ListNodeGroupDriftedNodesRequest& setNodeIds(vector<string> && nodeIds) { DARABONBA_PTR_SET_RVALUE(nodeIds_, nodeIds) };


  protected:
    // The maximum number of entries per page for a paged query. Valid values: 1 to 500. Default value: 100.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. Set this parameter to the NextToken value returned in the previous call. You do not need to set this parameter for the first request.
    shared_ptr<string> nextToken_ {};
    // The ID of the node group.
    // 
    // This parameter is required.
    shared_ptr<string> nodeGroupId_ {};
    // Limits the check scope. If not specified, all nodes in the node group are checked. <warning>If the model is a super node, pass the TrayNode ID.</warning>
    shared_ptr<vector<string>> nodeIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
