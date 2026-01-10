// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKFLOWGRAPHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTASKFLOWGRAPHRESPONSEBODY_HPP_
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
  class GetTaskFlowGraphResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskFlowGraphResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskFlowGraph, taskFlowGraph_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskFlowGraphResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskFlowGraph, taskFlowGraph_);
    };
    GetTaskFlowGraphResponseBody() = default ;
    GetTaskFlowGraphResponseBody(const GetTaskFlowGraphResponseBody &) = default ;
    GetTaskFlowGraphResponseBody(GetTaskFlowGraphResponseBody &&) = default ;
    GetTaskFlowGraphResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskFlowGraphResponseBody() = default ;
    GetTaskFlowGraphResponseBody& operator=(const GetTaskFlowGraphResponseBody &) = default ;
    GetTaskFlowGraphResponseBody& operator=(GetTaskFlowGraphResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskFlowGraph : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskFlowGraph& obj) { 
        DARABONBA_PTR_TO_JSON(CanEdit, canEdit_);
        DARABONBA_PTR_TO_JSON(DagName, dagName_);
        DARABONBA_PTR_TO_JSON(Edges, edges_);
        DARABONBA_PTR_TO_JSON(Nodes, nodes_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, TaskFlowGraph& obj) { 
        DARABONBA_PTR_FROM_JSON(CanEdit, canEdit_);
        DARABONBA_PTR_FROM_JSON(DagName, dagName_);
        DARABONBA_PTR_FROM_JSON(Edges, edges_);
        DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      TaskFlowGraph() = default ;
      TaskFlowGraph(const TaskFlowGraph &) = default ;
      TaskFlowGraph(TaskFlowGraph &&) = default ;
      TaskFlowGraph(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskFlowGraph() = default ;
      TaskFlowGraph& operator=(const TaskFlowGraph &) = default ;
      TaskFlowGraph& operator=(TaskFlowGraph &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Nodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
          DARABONBA_PTR_TO_JSON(Node, node_);
        };
        friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
          DARABONBA_PTR_FROM_JSON(Node, node_);
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
        class Node : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Node& obj) { 
            DARABONBA_PTR_TO_JSON(DagId, dagId_);
            DARABONBA_PTR_TO_JSON(GraphParam, graphParam_);
            DARABONBA_PTR_TO_JSON(NodeConfig, nodeConfig_);
            DARABONBA_PTR_TO_JSON(NodeContent, nodeContent_);
            DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
            DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
            DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
            DARABONBA_PTR_TO_JSON(TimeVariables, timeVariables_);
          };
          friend void from_json(const Darabonba::Json& j, Node& obj) { 
            DARABONBA_PTR_FROM_JSON(DagId, dagId_);
            DARABONBA_PTR_FROM_JSON(GraphParam, graphParam_);
            DARABONBA_PTR_FROM_JSON(NodeConfig, nodeConfig_);
            DARABONBA_PTR_FROM_JSON(NodeContent, nodeContent_);
            DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
            DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
            DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
            DARABONBA_PTR_FROM_JSON(TimeVariables, timeVariables_);
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
          virtual bool empty() const override { return this->dagId_ == nullptr
        && this->graphParam_ == nullptr && this->nodeConfig_ == nullptr && this->nodeContent_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr
        && this->nodeType_ == nullptr && this->timeVariables_ == nullptr; };
          // dagId Field Functions 
          bool hasDagId() const { return this->dagId_ != nullptr;};
          void deleteDagId() { this->dagId_ = nullptr;};
          inline int64_t getDagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
          inline Node& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


          // graphParam Field Functions 
          bool hasGraphParam() const { return this->graphParam_ != nullptr;};
          void deleteGraphParam() { this->graphParam_ = nullptr;};
          inline string getGraphParam() const { DARABONBA_PTR_GET_DEFAULT(graphParam_, "") };
          inline Node& setGraphParam(string graphParam) { DARABONBA_PTR_SET_VALUE(graphParam_, graphParam) };


          // nodeConfig Field Functions 
          bool hasNodeConfig() const { return this->nodeConfig_ != nullptr;};
          void deleteNodeConfig() { this->nodeConfig_ = nullptr;};
          inline string getNodeConfig() const { DARABONBA_PTR_GET_DEFAULT(nodeConfig_, "") };
          inline Node& setNodeConfig(string nodeConfig) { DARABONBA_PTR_SET_VALUE(nodeConfig_, nodeConfig) };


          // nodeContent Field Functions 
          bool hasNodeContent() const { return this->nodeContent_ != nullptr;};
          void deleteNodeContent() { this->nodeContent_ = nullptr;};
          inline string getNodeContent() const { DARABONBA_PTR_GET_DEFAULT(nodeContent_, "") };
          inline Node& setNodeContent(string nodeContent) { DARABONBA_PTR_SET_VALUE(nodeContent_, nodeContent) };


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
          inline int64_t getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, 0L) };
          inline Node& setNodeType(int64_t nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


          // timeVariables Field Functions 
          bool hasTimeVariables() const { return this->timeVariables_ != nullptr;};
          void deleteTimeVariables() { this->timeVariables_ = nullptr;};
          inline string getTimeVariables() const { DARABONBA_PTR_GET_DEFAULT(timeVariables_, "") };
          inline Node& setTimeVariables(string timeVariables) { DARABONBA_PTR_SET_VALUE(timeVariables_, timeVariables) };


        protected:
          // The ID of the task flow.
          shared_ptr<int64_t> dagId_ {};
          // The position of the node in the DAG.
          shared_ptr<string> graphParam_ {};
          // The advanced configuration of the node.
          shared_ptr<string> nodeConfig_ {};
          // The configuration of the node.
          shared_ptr<string> nodeContent_ {};
          // The ID of the node.
          shared_ptr<int64_t> nodeId_ {};
          // The name of the node.
          shared_ptr<string> nodeName_ {};
          // The type of the node. For more information about the valid values for this parameter, see [NodeType parameter](https://help.aliyun.com/document_detail/424705.html).
          shared_ptr<int64_t> nodeType_ {};
          // The time variables for the node.
          shared_ptr<string> timeVariables_ {};
        };

        virtual bool empty() const override { return this->node_ == nullptr; };
        // node Field Functions 
        bool hasNode() const { return this->node_ != nullptr;};
        void deleteNode() { this->node_ = nullptr;};
        inline const vector<Nodes::Node> & getNode() const { DARABONBA_PTR_GET_CONST(node_, vector<Nodes::Node>) };
        inline vector<Nodes::Node> getNode() { DARABONBA_PTR_GET(node_, vector<Nodes::Node>) };
        inline Nodes& setNode(const vector<Nodes::Node> & node) { DARABONBA_PTR_SET_VALUE(node_, node) };
        inline Nodes& setNode(vector<Nodes::Node> && node) { DARABONBA_PTR_SET_RVALUE(node_, node) };


      protected:
        shared_ptr<vector<Nodes::Node>> node_ {};
      };

      class Edges : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Edges& obj) { 
          DARABONBA_PTR_TO_JSON(Edge, edge_);
        };
        friend void from_json(const Darabonba::Json& j, Edges& obj) { 
          DARABONBA_PTR_FROM_JSON(Edge, edge_);
        };
        Edges() = default ;
        Edges(const Edges &) = default ;
        Edges(Edges &&) = default ;
        Edges(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Edges() = default ;
        Edges& operator=(const Edges &) = default ;
        Edges& operator=(Edges &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Edge : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Edge& obj) { 
            DARABONBA_PTR_TO_JSON(DagId, dagId_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(NodeEnd, nodeEnd_);
            DARABONBA_PTR_TO_JSON(NodeFrom, nodeFrom_);
          };
          friend void from_json(const Darabonba::Json& j, Edge& obj) { 
            DARABONBA_PTR_FROM_JSON(DagId, dagId_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(NodeEnd, nodeEnd_);
            DARABONBA_PTR_FROM_JSON(NodeFrom, nodeFrom_);
          };
          Edge() = default ;
          Edge(const Edge &) = default ;
          Edge(Edge &&) = default ;
          Edge(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Edge() = default ;
          Edge& operator=(const Edge &) = default ;
          Edge& operator=(Edge &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->dagId_ == nullptr
        && this->id_ == nullptr && this->nodeEnd_ == nullptr && this->nodeFrom_ == nullptr; };
          // dagId Field Functions 
          bool hasDagId() const { return this->dagId_ != nullptr;};
          void deleteDagId() { this->dagId_ = nullptr;};
          inline int64_t getDagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
          inline Edge& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline Edge& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // nodeEnd Field Functions 
          bool hasNodeEnd() const { return this->nodeEnd_ != nullptr;};
          void deleteNodeEnd() { this->nodeEnd_ = nullptr;};
          inline int64_t getNodeEnd() const { DARABONBA_PTR_GET_DEFAULT(nodeEnd_, 0L) };
          inline Edge& setNodeEnd(int64_t nodeEnd) { DARABONBA_PTR_SET_VALUE(nodeEnd_, nodeEnd) };


          // nodeFrom Field Functions 
          bool hasNodeFrom() const { return this->nodeFrom_ != nullptr;};
          void deleteNodeFrom() { this->nodeFrom_ = nullptr;};
          inline int64_t getNodeFrom() const { DARABONBA_PTR_GET_DEFAULT(nodeFrom_, 0L) };
          inline Edge& setNodeFrom(int64_t nodeFrom) { DARABONBA_PTR_SET_VALUE(nodeFrom_, nodeFrom) };


        protected:
          // The ID of the task flow.
          shared_ptr<int64_t> dagId_ {};
          // The ID of the task flow edge.
          shared_ptr<int64_t> id_ {};
          // The ID of the end node on the edge.
          shared_ptr<int64_t> nodeEnd_ {};
          // The ID of the start node on the edge.
          shared_ptr<int64_t> nodeFrom_ {};
        };

        virtual bool empty() const override { return this->edge_ == nullptr; };
        // edge Field Functions 
        bool hasEdge() const { return this->edge_ != nullptr;};
        void deleteEdge() { this->edge_ = nullptr;};
        inline const vector<Edges::Edge> & getEdge() const { DARABONBA_PTR_GET_CONST(edge_, vector<Edges::Edge>) };
        inline vector<Edges::Edge> getEdge() { DARABONBA_PTR_GET(edge_, vector<Edges::Edge>) };
        inline Edges& setEdge(const vector<Edges::Edge> & edge) { DARABONBA_PTR_SET_VALUE(edge_, edge) };
        inline Edges& setEdge(vector<Edges::Edge> && edge) { DARABONBA_PTR_SET_RVALUE(edge_, edge) };


      protected:
        shared_ptr<vector<Edges::Edge>> edge_ {};
      };

      virtual bool empty() const override { return this->canEdit_ == nullptr
        && this->dagName_ == nullptr && this->edges_ == nullptr && this->nodes_ == nullptr && this->status_ == nullptr; };
      // canEdit Field Functions 
      bool hasCanEdit() const { return this->canEdit_ != nullptr;};
      void deleteCanEdit() { this->canEdit_ = nullptr;};
      inline bool getCanEdit() const { DARABONBA_PTR_GET_DEFAULT(canEdit_, false) };
      inline TaskFlowGraph& setCanEdit(bool canEdit) { DARABONBA_PTR_SET_VALUE(canEdit_, canEdit) };


      // dagName Field Functions 
      bool hasDagName() const { return this->dagName_ != nullptr;};
      void deleteDagName() { this->dagName_ = nullptr;};
      inline string getDagName() const { DARABONBA_PTR_GET_DEFAULT(dagName_, "") };
      inline TaskFlowGraph& setDagName(string dagName) { DARABONBA_PTR_SET_VALUE(dagName_, dagName) };


      // edges Field Functions 
      bool hasEdges() const { return this->edges_ != nullptr;};
      void deleteEdges() { this->edges_ = nullptr;};
      inline const TaskFlowGraph::Edges & getEdges() const { DARABONBA_PTR_GET_CONST(edges_, TaskFlowGraph::Edges) };
      inline TaskFlowGraph::Edges getEdges() { DARABONBA_PTR_GET(edges_, TaskFlowGraph::Edges) };
      inline TaskFlowGraph& setEdges(const TaskFlowGraph::Edges & edges) { DARABONBA_PTR_SET_VALUE(edges_, edges) };
      inline TaskFlowGraph& setEdges(TaskFlowGraph::Edges && edges) { DARABONBA_PTR_SET_RVALUE(edges_, edges) };


      // nodes Field Functions 
      bool hasNodes() const { return this->nodes_ != nullptr;};
      void deleteNodes() { this->nodes_ = nullptr;};
      inline const TaskFlowGraph::Nodes & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, TaskFlowGraph::Nodes) };
      inline TaskFlowGraph::Nodes getNodes() { DARABONBA_PTR_GET(nodes_, TaskFlowGraph::Nodes) };
      inline TaskFlowGraph& setNodes(const TaskFlowGraph::Nodes & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
      inline TaskFlowGraph& setNodes(TaskFlowGraph::Nodes && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
      inline TaskFlowGraph& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // Indicates whether the task flow is editable. Valid values:
      // 
      // - **true**: editable
      // - **false**: non-editable
      shared_ptr<bool> canEdit_ {};
      // The name of the task flow.
      shared_ptr<string> dagName_ {};
      // The list of task flow edges.
      shared_ptr<TaskFlowGraph::Edges> edges_ {};
      // The node list of the task flow.
      shared_ptr<TaskFlowGraph::Nodes> nodes_ {};
      // The status of the task flow. Valid values:
      // 
      // - **0**: invalid
      // - **1**: not scheduled
      // - **2**: to be scheduled
      shared_ptr<int64_t> status_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->taskFlowGraph_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetTaskFlowGraphResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetTaskFlowGraphResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTaskFlowGraphResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTaskFlowGraphResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskFlowGraph Field Functions 
    bool hasTaskFlowGraph() const { return this->taskFlowGraph_ != nullptr;};
    void deleteTaskFlowGraph() { this->taskFlowGraph_ = nullptr;};
    inline const GetTaskFlowGraphResponseBody::TaskFlowGraph & getTaskFlowGraph() const { DARABONBA_PTR_GET_CONST(taskFlowGraph_, GetTaskFlowGraphResponseBody::TaskFlowGraph) };
    inline GetTaskFlowGraphResponseBody::TaskFlowGraph getTaskFlowGraph() { DARABONBA_PTR_GET(taskFlowGraph_, GetTaskFlowGraphResponseBody::TaskFlowGraph) };
    inline GetTaskFlowGraphResponseBody& setTaskFlowGraph(const GetTaskFlowGraphResponseBody::TaskFlowGraph & taskFlowGraph) { DARABONBA_PTR_SET_VALUE(taskFlowGraph_, taskFlowGraph) };
    inline GetTaskFlowGraphResponseBody& setTaskFlowGraph(GetTaskFlowGraphResponseBody::TaskFlowGraph && taskFlowGraph) { DARABONBA_PTR_SET_RVALUE(taskFlowGraph_, taskFlowGraph) };


  protected:
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
    // The list of DAG variables of the task flow.
    shared_ptr<GetTaskFlowGraphResponseBody::TaskFlowGraph> taskFlowGraph_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
