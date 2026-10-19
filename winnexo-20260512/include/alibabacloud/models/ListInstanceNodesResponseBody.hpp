// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCENODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCENODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListInstanceNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(nodes, nodes_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(stateVersion, stateVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(stateVersion, stateVersion_);
    };
    ListInstanceNodesResponseBody() = default ;
    ListInstanceNodesResponseBody(const ListInstanceNodesResponseBody &) = default ;
    ListInstanceNodesResponseBody(ListInstanceNodesResponseBody &&) = default ;
    ListInstanceNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceNodesResponseBody() = default ;
    ListInstanceNodesResponseBody& operator=(const ListInstanceNodesResponseBody &) = default ;
    ListInstanceNodesResponseBody& operator=(ListInstanceNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Nodes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
        DARABONBA_PTR_TO_JSON(conclusion, conclusion_);
        DARABONBA_PTR_TO_JSON(duration, duration_);
        DARABONBA_PTR_TO_JSON(enteredAt, enteredAt_);
        DARABONBA_PTR_TO_JSON(finishedAt, finishedAt_);
        DARABONBA_PTR_TO_JSON(handler, handler_);
        DARABONBA_PTR_TO_JSON(lane, lane_);
        DARABONBA_PTR_TO_JSON(nodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(nodeName, nodeName_);
        DARABONBA_PTR_TO_JSON(nodeOrder, nodeOrder_);
        DARABONBA_PTR_TO_JSON(nodeType, nodeType_);
        DARABONBA_PTR_TO_JSON(rank, rank_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(waitType, waitType_);
      };
      friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
        DARABONBA_PTR_FROM_JSON(conclusion, conclusion_);
        DARABONBA_PTR_FROM_JSON(duration, duration_);
        DARABONBA_PTR_FROM_JSON(enteredAt, enteredAt_);
        DARABONBA_PTR_FROM_JSON(finishedAt, finishedAt_);
        DARABONBA_PTR_FROM_JSON(handler, handler_);
        DARABONBA_PTR_FROM_JSON(lane, lane_);
        DARABONBA_PTR_FROM_JSON(nodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(nodeName, nodeName_);
        DARABONBA_PTR_FROM_JSON(nodeOrder, nodeOrder_);
        DARABONBA_PTR_FROM_JSON(nodeType, nodeType_);
        DARABONBA_PTR_FROM_JSON(rank, rank_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(waitType, waitType_);
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
      virtual bool empty() const override { return this->conclusion_ == nullptr
        && this->duration_ == nullptr && this->enteredAt_ == nullptr && this->finishedAt_ == nullptr && this->handler_ == nullptr && this->lane_ == nullptr
        && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->nodeOrder_ == nullptr && this->nodeType_ == nullptr && this->rank_ == nullptr
        && this->status_ == nullptr && this->waitType_ == nullptr; };
      // conclusion Field Functions 
      bool hasConclusion() const { return this->conclusion_ != nullptr;};
      void deleteConclusion() { this->conclusion_ = nullptr;};
      inline string getConclusion() const { DARABONBA_PTR_GET_DEFAULT(conclusion_, "") };
      inline Nodes& setConclusion(string conclusion) { DARABONBA_PTR_SET_VALUE(conclusion_, conclusion) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline Nodes& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // enteredAt Field Functions 
      bool hasEnteredAt() const { return this->enteredAt_ != nullptr;};
      void deleteEnteredAt() { this->enteredAt_ = nullptr;};
      inline string getEnteredAt() const { DARABONBA_PTR_GET_DEFAULT(enteredAt_, "") };
      inline Nodes& setEnteredAt(string enteredAt) { DARABONBA_PTR_SET_VALUE(enteredAt_, enteredAt) };


      // finishedAt Field Functions 
      bool hasFinishedAt() const { return this->finishedAt_ != nullptr;};
      void deleteFinishedAt() { this->finishedAt_ = nullptr;};
      inline string getFinishedAt() const { DARABONBA_PTR_GET_DEFAULT(finishedAt_, "") };
      inline Nodes& setFinishedAt(string finishedAt) { DARABONBA_PTR_SET_VALUE(finishedAt_, finishedAt) };


      // handler Field Functions 
      bool hasHandler() const { return this->handler_ != nullptr;};
      void deleteHandler() { this->handler_ = nullptr;};
      inline string getHandler() const { DARABONBA_PTR_GET_DEFAULT(handler_, "") };
      inline Nodes& setHandler(string handler) { DARABONBA_PTR_SET_VALUE(handler_, handler) };


      // lane Field Functions 
      bool hasLane() const { return this->lane_ != nullptr;};
      void deleteLane() { this->lane_ = nullptr;};
      inline int64_t getLane() const { DARABONBA_PTR_GET_DEFAULT(lane_, 0L) };
      inline Nodes& setLane(int64_t lane) { DARABONBA_PTR_SET_VALUE(lane_, lane) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline Nodes& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline Nodes& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


      // nodeOrder Field Functions 
      bool hasNodeOrder() const { return this->nodeOrder_ != nullptr;};
      void deleteNodeOrder() { this->nodeOrder_ = nullptr;};
      inline int64_t getNodeOrder() const { DARABONBA_PTR_GET_DEFAULT(nodeOrder_, 0L) };
      inline Nodes& setNodeOrder(int64_t nodeOrder) { DARABONBA_PTR_SET_VALUE(nodeOrder_, nodeOrder) };


      // nodeType Field Functions 
      bool hasNodeType() const { return this->nodeType_ != nullptr;};
      void deleteNodeType() { this->nodeType_ = nullptr;};
      inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
      inline Nodes& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


      // rank Field Functions 
      bool hasRank() const { return this->rank_ != nullptr;};
      void deleteRank() { this->rank_ = nullptr;};
      inline int64_t getRank() const { DARABONBA_PTR_GET_DEFAULT(rank_, 0L) };
      inline Nodes& setRank(int64_t rank) { DARABONBA_PTR_SET_VALUE(rank_, rank) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Nodes& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // waitType Field Functions 
      bool hasWaitType() const { return this->waitType_ != nullptr;};
      void deleteWaitType() { this->waitType_ = nullptr;};
      inline string getWaitType() const { DARABONBA_PTR_GET_DEFAULT(waitType_, "") };
      inline Nodes& setWaitType(string waitType) { DARABONBA_PTR_SET_VALUE(waitType_, waitType) };


    protected:
      // 节点结果结论，无结论时为空
      shared_ptr<string> conclusion_ {};
      // 从首次运行到终态的整秒数，缺时间时为空
      shared_ptr<int64_t> duration_ {};
      // 节点首次运行时间，历史或未运行节点为空
      shared_ptr<string> enteredAt_ {};
      // 节点实际进入终态的时间，未结束时为空
      shared_ptr<string> finishedAt_ {};
      // 节点负责人展示名称，未知时为空
      shared_ptr<string> handler_ {};
      // 节点在工作流图中的泳道位置
      shared_ptr<int64_t> lane_ {};
      // 所属节点key（nodeKey），不是会话ID
      shared_ptr<string> nodeId_ {};
      // 节点展示名称
      shared_ptr<string> nodeName_ {};
      // 节点在返回拓扑列表中的展示序号，从1开始
      shared_ptr<int64_t> nodeOrder_ {};
      // 实际节点类型，例如AGENT或HUMAN
      shared_ptr<string> nodeType_ {};
      // 节点在工作流图中的层级，从0开始
      shared_ptr<int64_t> rank_ {};
      // 原始节点运行状态，例如READY、RUNNING、WAITING、SUCCEEDED或FAILED
      shared_ptr<string> status_ {};
      // 等待原因：HUMAN_INPUT、HUMAN_STEP、REVIEW、MANUAL_PAUSE或UNBLOCK；未等待时为空
      shared_ptr<string> waitType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->instanceId_ == nullptr && this->message_ == nullptr && this->nodes_ == nullptr && this->requestId_ == nullptr && this->stateVersion_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListInstanceNodesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstanceNodesResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListInstanceNodesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<ListInstanceNodesResponseBody::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<ListInstanceNodesResponseBody::Nodes>) };
    inline vector<ListInstanceNodesResponseBody::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<ListInstanceNodesResponseBody::Nodes>) };
    inline ListInstanceNodesResponseBody& setNodes(const vector<ListInstanceNodesResponseBody::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline ListInstanceNodesResponseBody& setNodes(vector<ListInstanceNodesResponseBody::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstanceNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stateVersion Field Functions 
    bool hasStateVersion() const { return this->stateVersion_ != nullptr;};
    void deleteStateVersion() { this->stateVersion_ = nullptr;};
    inline int64_t getStateVersion() const { DARABONBA_PTR_GET_DEFAULT(stateVersion_, 0L) };
    inline ListInstanceNodesResponseBody& setStateVersion(int64_t stateVersion) { DARABONBA_PTR_SET_VALUE(stateVersion_, stateVersion) };


  protected:
    // 业务状态码；成功为200
    shared_ptr<string> code_ {};
    // 物理实例ID
    shared_ptr<string> instanceId_ {};
    // 错误描述
    shared_ptr<string> message_ {};
    // 按拓扑顺序排列的可见节点，数量由实际动态图决定
    shared_ptr<vector<ListInstanceNodesResponseBody::Nodes>> nodes_ {};
    // 请求追踪ID
    shared_ptr<string> requestId_ {};
    // 状态版本
    shared_ptr<int64_t> stateVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
