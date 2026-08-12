// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEGROUPDRIFTEDNODESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEGROUPDRIFTEDNODESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListNodeGroupDriftedNodesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodeGroupDriftedNodesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(NodeIds, nodeIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodeGroupDriftedNodesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(NodeIds, nodeIdsShrink_);
    };
    ListNodeGroupDriftedNodesShrinkRequest() = default ;
    ListNodeGroupDriftedNodesShrinkRequest(const ListNodeGroupDriftedNodesShrinkRequest &) = default ;
    ListNodeGroupDriftedNodesShrinkRequest(ListNodeGroupDriftedNodesShrinkRequest &&) = default ;
    ListNodeGroupDriftedNodesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodeGroupDriftedNodesShrinkRequest() = default ;
    ListNodeGroupDriftedNodesShrinkRequest& operator=(const ListNodeGroupDriftedNodesShrinkRequest &) = default ;
    ListNodeGroupDriftedNodesShrinkRequest& operator=(ListNodeGroupDriftedNodesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->nodeGroupId_ == nullptr && this->nodeIdsShrink_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListNodeGroupDriftedNodesShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNodeGroupDriftedNodesShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline ListNodeGroupDriftedNodesShrinkRequest& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // nodeIdsShrink Field Functions 
    bool hasNodeIdsShrink() const { return this->nodeIdsShrink_ != nullptr;};
    void deleteNodeIdsShrink() { this->nodeIdsShrink_ = nullptr;};
    inline string getNodeIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(nodeIdsShrink_, "") };
    inline ListNodeGroupDriftedNodesShrinkRequest& setNodeIdsShrink(string nodeIdsShrink) { DARABONBA_PTR_SET_VALUE(nodeIdsShrink_, nodeIdsShrink) };


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
    shared_ptr<string> nodeIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
