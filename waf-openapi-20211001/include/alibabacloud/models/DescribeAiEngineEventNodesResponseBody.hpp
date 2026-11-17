// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIENGINEEVENTNODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIENGINEEVENTNODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeAiEngineEventNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAiEngineEventNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAiEngineEventNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAiEngineEventNodesResponseBody() = default ;
    DescribeAiEngineEventNodesResponseBody(const DescribeAiEngineEventNodesResponseBody &) = default ;
    DescribeAiEngineEventNodesResponseBody(DescribeAiEngineEventNodesResponseBody &&) = default ;
    DescribeAiEngineEventNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAiEngineEventNodesResponseBody() = default ;
    DescribeAiEngineEventNodesResponseBody& operator=(const DescribeAiEngineEventNodesResponseBody &) = default ;
    DescribeAiEngineEventNodesResponseBody& operator=(DescribeAiEngineEventNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(NodeDetail, nodeDetail_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
        DARABONBA_PTR_TO_JSON(NodeSummary, nodeSummary_);
        DARABONBA_PTR_TO_JSON(NodeTag, nodeTag_);
        DARABONBA_PTR_TO_JSON(OccurredAt, occurredAt_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(NodeDetail, nodeDetail_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
        DARABONBA_PTR_FROM_JSON(NodeSummary, nodeSummary_);
        DARABONBA_PTR_FROM_JSON(NodeTag, nodeTag_);
        DARABONBA_PTR_FROM_JSON(OccurredAt, occurredAt_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->nodeDetail_ == nullptr
        && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->nodeSummary_ == nullptr && this->nodeTag_ == nullptr && this->occurredAt_ == nullptr; };
      // nodeDetail Field Functions 
      bool hasNodeDetail() const { return this->nodeDetail_ != nullptr;};
      void deleteNodeDetail() { this->nodeDetail_ = nullptr;};
      inline string getNodeDetail() const { DARABONBA_PTR_GET_DEFAULT(nodeDetail_, "") };
      inline Items& setNodeDetail(string nodeDetail) { DARABONBA_PTR_SET_VALUE(nodeDetail_, nodeDetail) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline Items& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline Items& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


      // nodeSummary Field Functions 
      bool hasNodeSummary() const { return this->nodeSummary_ != nullptr;};
      void deleteNodeSummary() { this->nodeSummary_ = nullptr;};
      inline string getNodeSummary() const { DARABONBA_PTR_GET_DEFAULT(nodeSummary_, "") };
      inline Items& setNodeSummary(string nodeSummary) { DARABONBA_PTR_SET_VALUE(nodeSummary_, nodeSummary) };


      // nodeTag Field Functions 
      bool hasNodeTag() const { return this->nodeTag_ != nullptr;};
      void deleteNodeTag() { this->nodeTag_ = nullptr;};
      inline string getNodeTag() const { DARABONBA_PTR_GET_DEFAULT(nodeTag_, "") };
      inline Items& setNodeTag(string nodeTag) { DARABONBA_PTR_SET_VALUE(nodeTag_, nodeTag) };


      // occurredAt Field Functions 
      bool hasOccurredAt() const { return this->occurredAt_ != nullptr;};
      void deleteOccurredAt() { this->occurredAt_ = nullptr;};
      inline int64_t getOccurredAt() const { DARABONBA_PTR_GET_DEFAULT(occurredAt_, 0L) };
      inline Items& setOccurredAt(int64_t occurredAt) { DARABONBA_PTR_SET_VALUE(occurredAt_, occurredAt) };


    protected:
      // The details of the node in the specified language. The details are in Markdown format.
      shared_ptr<string> nodeDetail_ {};
      // The node ID.
      shared_ptr<string> nodeId_ {};
      // The name of the node in the specified language.
      shared_ptr<string> nodeName_ {};
      // The summary of the node in the specified language.
      shared_ptr<string> nodeSummary_ {};
      // The node tag. Valid values:
      // 
      // - **bypass**: Suspected bypass.
      // 
      // - **protect**: Mitigated.
      // 
      // - **attempt**: Reconnaissance and probing.
      shared_ptr<string> nodeTag_ {};
      // The time when the node occurred. The time is in the UNIX timestamp format. Unit: milliseconds.
      shared_ptr<int64_t> occurredAt_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeAiEngineEventNodesResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeAiEngineEventNodesResponseBody::Items>) };
    inline vector<DescribeAiEngineEventNodesResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeAiEngineEventNodesResponseBody::Items>) };
    inline DescribeAiEngineEventNodesResponseBody& setItems(const vector<DescribeAiEngineEventNodesResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeAiEngineEventNodesResponseBody& setItems(vector<DescribeAiEngineEventNodesResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeAiEngineEventNodesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeAiEngineEventNodesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAiEngineEventNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeAiEngineEventNodesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of nodes.
    shared_ptr<vector<DescribeAiEngineEventNodesResponseBody::Items>> items_ {};
    // The number of entries to return on each page in a paging query. Valid values: 1 to 20. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used to query the next page. If a next page exists, this field returns a value.
    // > If this parameter returns a value, a next page exists. You can use the returned **NextToken** as a request parameter to obtain the data on the next page until no value is returned, which indicates that all data is obtained.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of nodes for the event.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
