// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/NodeGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListNodeGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodeGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(NodeGroups, nodeGroups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodeGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(NodeGroups, nodeGroups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListNodeGroupsResponseBody() = default ;
    ListNodeGroupsResponseBody(const ListNodeGroupsResponseBody &) = default ;
    ListNodeGroupsResponseBody(ListNodeGroupsResponseBody &&) = default ;
    ListNodeGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodeGroupsResponseBody() = default ;
    ListNodeGroupsResponseBody& operator=(const ListNodeGroupsResponseBody &) = default ;
    ListNodeGroupsResponseBody& operator=(ListNodeGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->nodeGroups_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListNodeGroupsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNodeGroupsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // nodeGroups Field Functions 
    bool hasNodeGroups() const { return this->nodeGroups_ != nullptr;};
    void deleteNodeGroups() { this->nodeGroups_ = nullptr;};
    inline const vector<NodeGroup> & getNodeGroups() const { DARABONBA_PTR_GET_CONST(nodeGroups_, vector<NodeGroup>) };
    inline vector<NodeGroup> getNodeGroups() { DARABONBA_PTR_GET(nodeGroups_, vector<NodeGroup>) };
    inline ListNodeGroupsResponseBody& setNodeGroups(const vector<NodeGroup> & nodeGroups) { DARABONBA_PTR_SET_VALUE(nodeGroups_, nodeGroups) };
    inline ListNodeGroupsResponseBody& setNodeGroups(vector<NodeGroup> && nodeGroups) { DARABONBA_PTR_SET_RVALUE(nodeGroups_, nodeGroups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNodeGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListNodeGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries returned for the request.
    shared_ptr<int32_t> maxResults_ {};
    // The token to retrieve the next page of results. An empty value indicates that all results have been returned.
    shared_ptr<string> nextToken_ {};
    // An array of node groups.
    shared_ptr<vector<NodeGroup>> nodeGroups_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries that match the query conditions.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
