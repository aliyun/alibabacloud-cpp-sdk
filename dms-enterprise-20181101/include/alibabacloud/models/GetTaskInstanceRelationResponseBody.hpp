// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKINSTANCERELATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTASKINSTANCERELATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetTaskInstanceRelationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskInstanceRelationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(NodeList, nodeList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskInstanceRelationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(NodeList, nodeList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetTaskInstanceRelationResponseBody() = default ;
    GetTaskInstanceRelationResponseBody(const GetTaskInstanceRelationResponseBody &) = default ;
    GetTaskInstanceRelationResponseBody(GetTaskInstanceRelationResponseBody &&) = default ;
    GetTaskInstanceRelationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskInstanceRelationResponseBody() = default ;
    GetTaskInstanceRelationResponseBody& operator=(const GetTaskInstanceRelationResponseBody &) = default ;
    GetTaskInstanceRelationResponseBody& operator=(GetTaskInstanceRelationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NodeList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodeList& obj) { 
        DARABONBA_PTR_TO_JSON(Node, node_);
      };
      friend void from_json(const Darabonba::Json& j, NodeList& obj) { 
        DARABONBA_PTR_FROM_JSON(Node, node_);
      };
      NodeList() = default ;
      NodeList(const NodeList &) = default ;
      NodeList(NodeList &&) = default ;
      NodeList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodeList() = default ;
      NodeList& operator=(const NodeList &) = default ;
      NodeList& operator=(NodeList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Node : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Node& obj) { 
          DARABONBA_PTR_TO_JSON(BusinessTime, businessTime_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(ExecuteTime, executeTime_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
          DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Node& obj) { 
          DARABONBA_PTR_FROM_JSON(BusinessTime, businessTime_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(ExecuteTime, executeTime_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
          DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Node() = default ;
        Node(const Node &) = default ;
        Node(Node &&) = default ;
        Node(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Node() = default ;
        Node& operator=(const Node &) = default ;
        Node& operator=(Node &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->businessTime_ == nullptr
        && this->endTime_ == nullptr && this->executeTime_ == nullptr && this->id_ == nullptr && this->message_ == nullptr && this->nodeId_ == nullptr
        && this->nodeName_ == nullptr && this->nodeType_ == nullptr && this->status_ == nullptr; };
        // businessTime Field Functions 
        bool hasBusinessTime() const { return this->businessTime_ != nullptr;};
        void deleteBusinessTime() { this->businessTime_ = nullptr;};
        inline string getBusinessTime() const { DARABONBA_PTR_GET_DEFAULT(businessTime_, "") };
        inline Node& setBusinessTime(string businessTime) { DARABONBA_PTR_SET_VALUE(businessTime_, businessTime) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline Node& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // executeTime Field Functions 
        bool hasExecuteTime() const { return this->executeTime_ != nullptr;};
        void deleteExecuteTime() { this->executeTime_ = nullptr;};
        inline int64_t getExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(executeTime_, 0L) };
        inline Node& setExecuteTime(int64_t executeTime) { DARABONBA_PTR_SET_VALUE(executeTime_, executeTime) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Node& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Node& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline int64_t getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
        inline Node& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // nodeName Field Functions 
        bool hasNodeName() const { return this->nodeName_ != nullptr;};
        void deleteNodeName() { this->nodeName_ = nullptr;};
        inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
        inline Node& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


        // nodeType Field Functions 
        bool hasNodeType() const { return this->nodeType_ != nullptr;};
        void deleteNodeType() { this->nodeType_ = nullptr;};
        inline int32_t getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, 0) };
        inline Node& setNodeType(int32_t nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline Node& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The business time of the node.
        shared_ptr<string> businessTime_ {};
        // The time when the execution of the task flow was complete. The time is displayed in the yyyy-MM-DD HH:mm:ss format.
        shared_ptr<string> endTime_ {};
        // The amount of time consumed for running the node. Unit: milliseconds.
        shared_ptr<int64_t> executeTime_ {};
        // The ID of the execution record of the task flow.
        shared_ptr<int64_t> id_ {};
        // The description of the task.
        shared_ptr<string> message_ {};
        // The ID of the node.
        shared_ptr<int64_t> nodeId_ {};
        // The name of the node.
        shared_ptr<string> nodeName_ {};
        // The type of the node. For more information about the valid values for this parameter, see [NodeType parameter](https://help.aliyun.com/document_detail/424705.html).
        shared_ptr<int32_t> nodeType_ {};
        // The status of the node. Valid values:
        // 
        // *   **0**: The node is waiting to be scheduled.
        // *   **1**: The node is running.
        // *   **2**: The node is suspended.
        // *   **3**: The node failed to run.
        // *   **4**: The node is run.
        // *   **5**: The node is complete.
        shared_ptr<int32_t> status_ {};
      };

      virtual bool empty() const override { return this->node_ == nullptr; };
      // node Field Functions 
      bool hasNode() const { return this->node_ != nullptr;};
      void deleteNode() { this->node_ = nullptr;};
      inline const vector<NodeList::Node> & getNode() const { DARABONBA_PTR_GET_CONST(node_, vector<NodeList::Node>) };
      inline vector<NodeList::Node> getNode() { DARABONBA_PTR_GET(node_, vector<NodeList::Node>) };
      inline NodeList& setNode(const vector<NodeList::Node> & node) { DARABONBA_PTR_SET_VALUE(node_, node) };
      inline NodeList& setNode(vector<NodeList::Node> && node) { DARABONBA_PTR_SET_RVALUE(node_, node) };


    protected:
      shared_ptr<vector<NodeList::Node>> node_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->nodeList_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetTaskInstanceRelationResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetTaskInstanceRelationResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // nodeList Field Functions 
    bool hasNodeList() const { return this->nodeList_ != nullptr;};
    void deleteNodeList() { this->nodeList_ = nullptr;};
    inline const GetTaskInstanceRelationResponseBody::NodeList & getNodeList() const { DARABONBA_PTR_GET_CONST(nodeList_, GetTaskInstanceRelationResponseBody::NodeList) };
    inline GetTaskInstanceRelationResponseBody::NodeList getNodeList() { DARABONBA_PTR_GET(nodeList_, GetTaskInstanceRelationResponseBody::NodeList) };
    inline GetTaskInstanceRelationResponseBody& setNodeList(const GetTaskInstanceRelationResponseBody::NodeList & nodeList) { DARABONBA_PTR_SET_VALUE(nodeList_, nodeList) };
    inline GetTaskInstanceRelationResponseBody& setNodeList(GetTaskInstanceRelationResponseBody::NodeList && nodeList) { DARABONBA_PTR_SET_RVALUE(nodeList_, nodeList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTaskInstanceRelationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTaskInstanceRelationResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request fails.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request fails.
    shared_ptr<string> errorMessage_ {};
    // The information about the nodes in the execution record of the task flow.
    shared_ptr<GetTaskInstanceRelationResponseBody::NodeList> nodeList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   **true**: The request is successful.
    // *   **false**: The request fails.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
