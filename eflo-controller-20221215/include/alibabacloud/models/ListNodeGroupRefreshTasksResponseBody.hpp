// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEGROUPREFRESHTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEGROUPREFRESHTASKSRESPONSEBODY_HPP_
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
  class ListNodeGroupRefreshTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodeGroupRefreshTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(NodeGroupRefreshTasks, nodeGroupRefreshTasks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodeGroupRefreshTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(NodeGroupRefreshTasks, nodeGroupRefreshTasks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListNodeGroupRefreshTasksResponseBody() = default ;
    ListNodeGroupRefreshTasksResponseBody(const ListNodeGroupRefreshTasksResponseBody &) = default ;
    ListNodeGroupRefreshTasksResponseBody(ListNodeGroupRefreshTasksResponseBody &&) = default ;
    ListNodeGroupRefreshTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodeGroupRefreshTasksResponseBody() = default ;
    ListNodeGroupRefreshTasksResponseBody& operator=(const ListNodeGroupRefreshTasksResponseBody &) = default ;
    ListNodeGroupRefreshTasksResponseBody& operator=(ListNodeGroupRefreshTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NodeGroupRefreshTasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodeGroupRefreshTasks& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
        DARABONBA_PTR_TO_JSON(FinishedCount, finishedCount_);
        DARABONBA_PTR_TO_JSON(MaxDisruptiveAction, maxDisruptiveAction_);
        DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
        DARABONBA_PTR_TO_JSON(NodeGroupRefreshTaskId, nodeGroupRefreshTaskId_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TotalNodeCount, totalNodeCount_);
      };
      friend void from_json(const Darabonba::Json& j, NodeGroupRefreshTasks& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
        DARABONBA_PTR_FROM_JSON(FinishedCount, finishedCount_);
        DARABONBA_PTR_FROM_JSON(MaxDisruptiveAction, maxDisruptiveAction_);
        DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
        DARABONBA_PTR_FROM_JSON(NodeGroupRefreshTaskId, nodeGroupRefreshTaskId_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TotalNodeCount, totalNodeCount_);
      };
      NodeGroupRefreshTasks() = default ;
      NodeGroupRefreshTasks(const NodeGroupRefreshTasks &) = default ;
      NodeGroupRefreshTasks(NodeGroupRefreshTasks &&) = default ;
      NodeGroupRefreshTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodeGroupRefreshTasks() = default ;
      NodeGroupRefreshTasks& operator=(const NodeGroupRefreshTasks &) = default ;
      NodeGroupRefreshTasks& operator=(NodeGroupRefreshTasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->failedCount_ == nullptr && this->finishedCount_ == nullptr && this->maxDisruptiveAction_ == nullptr && this->nodeGroupId_ == nullptr && this->nodeGroupRefreshTaskId_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr && this->totalNodeCount_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline NodeGroupRefreshTasks& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // failedCount Field Functions 
      bool hasFailedCount() const { return this->failedCount_ != nullptr;};
      void deleteFailedCount() { this->failedCount_ = nullptr;};
      inline int64_t getFailedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0L) };
      inline NodeGroupRefreshTasks& setFailedCount(int64_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


      // finishedCount Field Functions 
      bool hasFinishedCount() const { return this->finishedCount_ != nullptr;};
      void deleteFinishedCount() { this->finishedCount_ = nullptr;};
      inline int64_t getFinishedCount() const { DARABONBA_PTR_GET_DEFAULT(finishedCount_, 0L) };
      inline NodeGroupRefreshTasks& setFinishedCount(int64_t finishedCount) { DARABONBA_PTR_SET_VALUE(finishedCount_, finishedCount) };


      // maxDisruptiveAction Field Functions 
      bool hasMaxDisruptiveAction() const { return this->maxDisruptiveAction_ != nullptr;};
      void deleteMaxDisruptiveAction() { this->maxDisruptiveAction_ = nullptr;};
      inline string getMaxDisruptiveAction() const { DARABONBA_PTR_GET_DEFAULT(maxDisruptiveAction_, "") };
      inline NodeGroupRefreshTasks& setMaxDisruptiveAction(string maxDisruptiveAction) { DARABONBA_PTR_SET_VALUE(maxDisruptiveAction_, maxDisruptiveAction) };


      // nodeGroupId Field Functions 
      bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
      void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
      inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
      inline NodeGroupRefreshTasks& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


      // nodeGroupRefreshTaskId Field Functions 
      bool hasNodeGroupRefreshTaskId() const { return this->nodeGroupRefreshTaskId_ != nullptr;};
      void deleteNodeGroupRefreshTaskId() { this->nodeGroupRefreshTaskId_ = nullptr;};
      inline string getNodeGroupRefreshTaskId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupRefreshTaskId_, "") };
      inline NodeGroupRefreshTasks& setNodeGroupRefreshTaskId(string nodeGroupRefreshTaskId) { DARABONBA_PTR_SET_VALUE(nodeGroupRefreshTaskId_, nodeGroupRefreshTaskId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline NodeGroupRefreshTasks& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline NodeGroupRefreshTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // totalNodeCount Field Functions 
      bool hasTotalNodeCount() const { return this->totalNodeCount_ != nullptr;};
      void deleteTotalNodeCount() { this->totalNodeCount_ = nullptr;};
      inline int64_t getTotalNodeCount() const { DARABONBA_PTR_GET_DEFAULT(totalNodeCount_, 0L) };
      inline NodeGroupRefreshTasks& setTotalNodeCount(int64_t totalNodeCount) { DARABONBA_PTR_SET_VALUE(totalNodeCount_, totalNodeCount) };


    protected:
      // The end time of the refresh task in ISO 8601 format.
      shared_ptr<string> endTime_ {};
      // The number of failed nodes.
      shared_ptr<int64_t> failedCount_ {};
      // The number of finished nodes, including succeeded, failed, and skipped nodes.
      shared_ptr<int64_t> finishedCount_ {};
      // The maximum disruptive action level allowed for the refresh operation.
      shared_ptr<string> maxDisruptiveAction_ {};
      // The node group ID.
      shared_ptr<string> nodeGroupId_ {};
      // The task ID.
      shared_ptr<string> nodeGroupRefreshTaskId_ {};
      // The start time of the refresh task in ISO 8601 format.
      shared_ptr<string> startTime_ {};
      // The task status. Valid values:
      // - Pending: The refresh task is created and waiting to be executed.
      // - InProgress: The refresh task is being processed.
      // - Success: The refresh task is executed.
      // - Failed: The refresh task failed.
      shared_ptr<string> status_ {};
      // The total number of nodes to be refreshed by this task.
      shared_ptr<int64_t> totalNodeCount_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->nodeGroupRefreshTasks_ == nullptr && this->requestId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListNodeGroupRefreshTasksResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNodeGroupRefreshTasksResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // nodeGroupRefreshTasks Field Functions 
    bool hasNodeGroupRefreshTasks() const { return this->nodeGroupRefreshTasks_ != nullptr;};
    void deleteNodeGroupRefreshTasks() { this->nodeGroupRefreshTasks_ = nullptr;};
    inline const vector<ListNodeGroupRefreshTasksResponseBody::NodeGroupRefreshTasks> & getNodeGroupRefreshTasks() const { DARABONBA_PTR_GET_CONST(nodeGroupRefreshTasks_, vector<ListNodeGroupRefreshTasksResponseBody::NodeGroupRefreshTasks>) };
    inline vector<ListNodeGroupRefreshTasksResponseBody::NodeGroupRefreshTasks> getNodeGroupRefreshTasks() { DARABONBA_PTR_GET(nodeGroupRefreshTasks_, vector<ListNodeGroupRefreshTasksResponseBody::NodeGroupRefreshTasks>) };
    inline ListNodeGroupRefreshTasksResponseBody& setNodeGroupRefreshTasks(const vector<ListNodeGroupRefreshTasksResponseBody::NodeGroupRefreshTasks> & nodeGroupRefreshTasks) { DARABONBA_PTR_SET_VALUE(nodeGroupRefreshTasks_, nodeGroupRefreshTasks) };
    inline ListNodeGroupRefreshTasksResponseBody& setNodeGroupRefreshTasks(vector<ListNodeGroupRefreshTasksResponseBody::NodeGroupRefreshTasks> && nodeGroupRefreshTasks) { DARABONBA_PTR_SET_RVALUE(nodeGroupRefreshTasks_, nodeGroupRefreshTasks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNodeGroupRefreshTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The maximum number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next query. An empty value indicates that no more results exist.
    shared_ptr<string> nextToken_ {};
    // The list of node group refresh tasks.
    shared_ptr<vector<ListNodeGroupRefreshTasksResponseBody::NodeGroupRefreshTasks>> nodeGroupRefreshTasks_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
