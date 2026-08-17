// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENODEGROUPREFRESHTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENODEGROUPREFRESHTASKRESPONSEBODY_HPP_
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
  class DescribeNodeGroupRefreshTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNodeGroupRefreshTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_TO_JSON(FinishedCount, finishedCount_);
      DARABONBA_PTR_TO_JSON(MaxDisruptiveAction, maxDisruptiveAction_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(NodeGroupRefreshTaskId, nodeGroupRefreshTaskId_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalNodeCount, totalNodeCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNodeGroupRefreshTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_FROM_JSON(FinishedCount, finishedCount_);
      DARABONBA_PTR_FROM_JSON(MaxDisruptiveAction, maxDisruptiveAction_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(NodeGroupRefreshTaskId, nodeGroupRefreshTaskId_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalNodeCount, totalNodeCount_);
    };
    DescribeNodeGroupRefreshTaskResponseBody() = default ;
    DescribeNodeGroupRefreshTaskResponseBody(const DescribeNodeGroupRefreshTaskResponseBody &) = default ;
    DescribeNodeGroupRefreshTaskResponseBody(DescribeNodeGroupRefreshTaskResponseBody &&) = default ;
    DescribeNodeGroupRefreshTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNodeGroupRefreshTaskResponseBody() = default ;
    DescribeNodeGroupRefreshTaskResponseBody& operator=(const DescribeNodeGroupRefreshTaskResponseBody &) = default ;
    DescribeNodeGroupRefreshTaskResponseBody& operator=(DescribeNodeGroupRefreshTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Nodes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(PropertyDrifts, propertyDrifts_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(PropertyDrifts, propertyDrifts_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Nodes() = default ;
      Nodes(const Nodes &) = default ;
      Nodes(Nodes &&) = default ;
      Nodes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Nodes() = default ;
      Nodes& operator=(const Nodes &) = default ;
      Nodes& operator=(Nodes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PropertyDrifts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PropertyDrifts& obj) { 
          DARABONBA_PTR_TO_JSON(ActualValue, actualValue_);
          DARABONBA_PTR_TO_JSON(MinRequiredAction, minRequiredAction_);
          DARABONBA_PTR_TO_JSON(PropertyPath, propertyPath_);
          DARABONBA_PTR_TO_JSON(Skipped, skipped_);
          DARABONBA_PTR_TO_JSON(TargetValue, targetValue_);
        };
        friend void from_json(const Darabonba::Json& j, PropertyDrifts& obj) { 
          DARABONBA_PTR_FROM_JSON(ActualValue, actualValue_);
          DARABONBA_PTR_FROM_JSON(MinRequiredAction, minRequiredAction_);
          DARABONBA_PTR_FROM_JSON(PropertyPath, propertyPath_);
          DARABONBA_PTR_FROM_JSON(Skipped, skipped_);
          DARABONBA_PTR_FROM_JSON(TargetValue, targetValue_);
        };
        PropertyDrifts() = default ;
        PropertyDrifts(const PropertyDrifts &) = default ;
        PropertyDrifts(PropertyDrifts &&) = default ;
        PropertyDrifts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PropertyDrifts() = default ;
        PropertyDrifts& operator=(const PropertyDrifts &) = default ;
        PropertyDrifts& operator=(PropertyDrifts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->actualValue_ == nullptr
        && this->minRequiredAction_ == nullptr && this->propertyPath_ == nullptr && this->skipped_ == nullptr && this->targetValue_ == nullptr; };
        // actualValue Field Functions 
        bool hasActualValue() const { return this->actualValue_ != nullptr;};
        void deleteActualValue() { this->actualValue_ = nullptr;};
        inline string getActualValue() const { DARABONBA_PTR_GET_DEFAULT(actualValue_, "") };
        inline PropertyDrifts& setActualValue(string actualValue) { DARABONBA_PTR_SET_VALUE(actualValue_, actualValue) };


        // minRequiredAction Field Functions 
        bool hasMinRequiredAction() const { return this->minRequiredAction_ != nullptr;};
        void deleteMinRequiredAction() { this->minRequiredAction_ = nullptr;};
        inline string getMinRequiredAction() const { DARABONBA_PTR_GET_DEFAULT(minRequiredAction_, "") };
        inline PropertyDrifts& setMinRequiredAction(string minRequiredAction) { DARABONBA_PTR_SET_VALUE(minRequiredAction_, minRequiredAction) };


        // propertyPath Field Functions 
        bool hasPropertyPath() const { return this->propertyPath_ != nullptr;};
        void deletePropertyPath() { this->propertyPath_ = nullptr;};
        inline string getPropertyPath() const { DARABONBA_PTR_GET_DEFAULT(propertyPath_, "") };
        inline PropertyDrifts& setPropertyPath(string propertyPath) { DARABONBA_PTR_SET_VALUE(propertyPath_, propertyPath) };


        // skipped Field Functions 
        bool hasSkipped() const { return this->skipped_ != nullptr;};
        void deleteSkipped() { this->skipped_ = nullptr;};
        inline bool getSkipped() const { DARABONBA_PTR_GET_DEFAULT(skipped_, false) };
        inline PropertyDrifts& setSkipped(bool skipped) { DARABONBA_PTR_SET_VALUE(skipped_, skipped) };


        // targetValue Field Functions 
        bool hasTargetValue() const { return this->targetValue_ != nullptr;};
        void deleteTargetValue() { this->targetValue_ = nullptr;};
        inline string getTargetValue() const { DARABONBA_PTR_GET_DEFAULT(targetValue_, "") };
        inline PropertyDrifts& setTargetValue(string targetValue) { DARABONBA_PTR_SET_VALUE(targetValue_, targetValue) };


      protected:
        // The current value of the node property. Complex types are serialized as JSON strings.
        shared_ptr<string> actualValue_ {};
        // The minimum action required to apply the target value: Refresh / Reboot / Reimage. For more information, see the MaxDisruptiveAction parameter description in the RefreshNodeGroupNodes operation.
        shared_ptr<string> minRequiredAction_ {};
        // The property path in dot notation.
        shared_ptr<string> propertyPath_ {};
        // Indicates whether the property was skipped because it exceeded the MaxDisruptiveAction constraint.
        shared_ptr<bool> skipped_ {};
        // The target value of the node property. Complex types are serialized as JSON strings.
        shared_ptr<string> targetValue_ {};
      };

      virtual bool empty() const override { return this->action_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->nodeId_ == nullptr && this->propertyDrifts_ == nullptr && this->status_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline Nodes& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Nodes& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Nodes& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline Nodes& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // propertyDrifts Field Functions 
      bool hasPropertyDrifts() const { return this->propertyDrifts_ != nullptr;};
      void deletePropertyDrifts() { this->propertyDrifts_ = nullptr;};
      inline const vector<Nodes::PropertyDrifts> & getPropertyDrifts() const { DARABONBA_PTR_GET_CONST(propertyDrifts_, vector<Nodes::PropertyDrifts>) };
      inline vector<Nodes::PropertyDrifts> getPropertyDrifts() { DARABONBA_PTR_GET(propertyDrifts_, vector<Nodes::PropertyDrifts>) };
      inline Nodes& setPropertyDrifts(const vector<Nodes::PropertyDrifts> & propertyDrifts) { DARABONBA_PTR_SET_VALUE(propertyDrifts_, propertyDrifts) };
      inline Nodes& setPropertyDrifts(vector<Nodes::PropertyDrifts> && propertyDrifts) { DARABONBA_PTR_SET_RVALUE(propertyDrifts_, propertyDrifts) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Nodes& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The action level actually executed on the node. If multiple properties are refreshed on the node, the highest required action level is used. Valid values:
      // - Refresh: in-place refresh.
      // - Reboot: restart.
      // - Reimage: reimage.
      // If the entire node is skipped, this value is empty.
      shared_ptr<string> action_ {};
      // The error code.
      shared_ptr<string> errorCode_ {};
      // The error message.
      shared_ptr<string> errorMessage_ {};
      // The ID of the node.
      shared_ptr<string> nodeId_ {};
      // The list of property drifts for the node, including both executed and skipped properties.
      shared_ptr<vector<Nodes::PropertyDrifts>> propertyDrifts_ {};
      // The node refresh status. Valid values:
      // - Pending: the node is waiting to be refreshed.
      // - InProgress: the node is being refreshed.
      // - Success: the node is refreshed.
      // - Failed: the node failed to be refreshed.
      // - Skipped: all properties to be refreshed on the node exceeded the MaxDisruptiveAction constraint and were skipped.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->failedCount_ == nullptr && this->finishedCount_ == nullptr && this->maxDisruptiveAction_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->nodeGroupId_ == nullptr && this->nodeGroupRefreshTaskId_ == nullptr && this->nodes_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->totalNodeCount_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeNodeGroupRefreshTaskResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // failedCount Field Functions 
    bool hasFailedCount() const { return this->failedCount_ != nullptr;};
    void deleteFailedCount() { this->failedCount_ = nullptr;};
    inline int64_t getFailedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0L) };
    inline DescribeNodeGroupRefreshTaskResponseBody& setFailedCount(int64_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


    // finishedCount Field Functions 
    bool hasFinishedCount() const { return this->finishedCount_ != nullptr;};
    void deleteFinishedCount() { this->finishedCount_ = nullptr;};
    inline int64_t getFinishedCount() const { DARABONBA_PTR_GET_DEFAULT(finishedCount_, 0L) };
    inline DescribeNodeGroupRefreshTaskResponseBody& setFinishedCount(int64_t finishedCount) { DARABONBA_PTR_SET_VALUE(finishedCount_, finishedCount) };


    // maxDisruptiveAction Field Functions 
    bool hasMaxDisruptiveAction() const { return this->maxDisruptiveAction_ != nullptr;};
    void deleteMaxDisruptiveAction() { this->maxDisruptiveAction_ = nullptr;};
    inline string getMaxDisruptiveAction() const { DARABONBA_PTR_GET_DEFAULT(maxDisruptiveAction_, "") };
    inline DescribeNodeGroupRefreshTaskResponseBody& setMaxDisruptiveAction(string maxDisruptiveAction) { DARABONBA_PTR_SET_VALUE(maxDisruptiveAction_, maxDisruptiveAction) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeNodeGroupRefreshTaskResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeNodeGroupRefreshTaskResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline DescribeNodeGroupRefreshTaskResponseBody& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // nodeGroupRefreshTaskId Field Functions 
    bool hasNodeGroupRefreshTaskId() const { return this->nodeGroupRefreshTaskId_ != nullptr;};
    void deleteNodeGroupRefreshTaskId() { this->nodeGroupRefreshTaskId_ = nullptr;};
    inline string getNodeGroupRefreshTaskId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupRefreshTaskId_, "") };
    inline DescribeNodeGroupRefreshTaskResponseBody& setNodeGroupRefreshTaskId(string nodeGroupRefreshTaskId) { DARABONBA_PTR_SET_VALUE(nodeGroupRefreshTaskId_, nodeGroupRefreshTaskId) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<DescribeNodeGroupRefreshTaskResponseBody::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<DescribeNodeGroupRefreshTaskResponseBody::Nodes>) };
    inline vector<DescribeNodeGroupRefreshTaskResponseBody::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<DescribeNodeGroupRefreshTaskResponseBody::Nodes>) };
    inline DescribeNodeGroupRefreshTaskResponseBody& setNodes(const vector<DescribeNodeGroupRefreshTaskResponseBody::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline DescribeNodeGroupRefreshTaskResponseBody& setNodes(vector<DescribeNodeGroupRefreshTaskResponseBody::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNodeGroupRefreshTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeNodeGroupRefreshTaskResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeNodeGroupRefreshTaskResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalNodeCount Field Functions 
    bool hasTotalNodeCount() const { return this->totalNodeCount_ != nullptr;};
    void deleteTotalNodeCount() { this->totalNodeCount_ = nullptr;};
    inline int64_t getTotalNodeCount() const { DARABONBA_PTR_GET_DEFAULT(totalNodeCount_, 0L) };
    inline DescribeNodeGroupRefreshTaskResponseBody& setTotalNodeCount(int64_t totalNodeCount) { DARABONBA_PTR_SET_VALUE(totalNodeCount_, totalNodeCount) };


  protected:
    // The end time of the refresh task in ISO 8601 format.
    shared_ptr<string> endTime_ {};
    // The number of failed nodes.
    shared_ptr<int64_t> failedCount_ {};
    // The number of finished nodes, including succeeded, failed, and skipped nodes.
    shared_ptr<int64_t> finishedCount_ {};
    // The maximum disruptive action level allowed for the refresh operation.
    shared_ptr<string> maxDisruptiveAction_ {};
    // The maximum number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next query. An empty value of NextToken indicates that no more results exist.
    shared_ptr<string> nextToken_ {};
    // The ID of the node group.
    shared_ptr<string> nodeGroupId_ {};
    // The ID of the refresh task.
    shared_ptr<string> nodeGroupRefreshTaskId_ {};
    // The list of nodes.
    shared_ptr<vector<DescribeNodeGroupRefreshTaskResponseBody::Nodes>> nodes_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The start time of the refresh task in ISO 8601 format.
    shared_ptr<string> startTime_ {};
    // The task status. Valid values:
    // - Pending: the refresh task is created and waiting to be executed.
    // - InProgress: the refresh task is being processed.
    // - Success: the refresh task is executed.
    // - Failed: the refresh task failed to be executed.
    shared_ptr<string> status_ {};
    // The total number of nodes to be refreshed in the task.
    shared_ptr<int64_t> totalNodeCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
