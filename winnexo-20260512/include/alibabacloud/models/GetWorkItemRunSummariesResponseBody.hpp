// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKITEMRUNSUMMARIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKITEMRUNSUMMARIESRESPONSEBODY_HPP_
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
  class GetWorkItemRunSummariesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkItemRunSummariesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkItemRunSummariesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetWorkItemRunSummariesResponseBody() = default ;
    GetWorkItemRunSummariesResponseBody(const GetWorkItemRunSummariesResponseBody &) = default ;
    GetWorkItemRunSummariesResponseBody(GetWorkItemRunSummariesResponseBody &&) = default ;
    GetWorkItemRunSummariesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkItemRunSummariesResponseBody() = default ;
    GetWorkItemRunSummariesResponseBody& operator=(const GetWorkItemRunSummariesResponseBody &) = default ;
    GetWorkItemRunSummariesResponseBody& operator=(GetWorkItemRunSummariesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(attemptId, attemptId_);
        DARABONBA_PTR_TO_JSON(attemptSeq, attemptSeq_);
        DARABONBA_PTR_TO_JSON(executorId, executorId_);
        DARABONBA_PTR_TO_JSON(executorName, executorName_);
        DARABONBA_PTR_TO_JSON(executorType, executorType_);
        DARABONBA_PTR_TO_JSON(finishedAt, finishedAt_);
        DARABONBA_PTR_TO_JSON(nodeKey, nodeKey_);
        DARABONBA_PTR_TO_JSON(nodeName, nodeName_);
        DARABONBA_PTR_TO_JSON(nodeStatus, nodeStatus_);
        DARABONBA_PTR_TO_JSON(planId, planId_);
        DARABONBA_ANY_TO_JSON(result, result_);
        DARABONBA_ANY_TO_JSON(runSummary, runSummary_);
        DARABONBA_PTR_TO_JSON(runSummaryError, runSummaryError_);
        DARABONBA_PTR_TO_JSON(runSummaryGeneratedAt, runSummaryGeneratedAt_);
        DARABONBA_PTR_TO_JSON(runSummarySources, runSummarySources_);
        DARABONBA_PTR_TO_JSON(runSummaryStatus, runSummaryStatus_);
        DARABONBA_PTR_TO_JSON(runSummaryTools, runSummaryTools_);
        DARABONBA_PTR_TO_JSON(startedAt, startedAt_);
        DARABONBA_PTR_TO_JSON(turnSeq, turnSeq_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(attemptId, attemptId_);
        DARABONBA_PTR_FROM_JSON(attemptSeq, attemptSeq_);
        DARABONBA_PTR_FROM_JSON(executorId, executorId_);
        DARABONBA_PTR_FROM_JSON(executorName, executorName_);
        DARABONBA_PTR_FROM_JSON(executorType, executorType_);
        DARABONBA_PTR_FROM_JSON(finishedAt, finishedAt_);
        DARABONBA_PTR_FROM_JSON(nodeKey, nodeKey_);
        DARABONBA_PTR_FROM_JSON(nodeName, nodeName_);
        DARABONBA_PTR_FROM_JSON(nodeStatus, nodeStatus_);
        DARABONBA_PTR_FROM_JSON(planId, planId_);
        DARABONBA_ANY_FROM_JSON(result, result_);
        DARABONBA_ANY_FROM_JSON(runSummary, runSummary_);
        DARABONBA_PTR_FROM_JSON(runSummaryError, runSummaryError_);
        DARABONBA_PTR_FROM_JSON(runSummaryGeneratedAt, runSummaryGeneratedAt_);
        DARABONBA_PTR_FROM_JSON(runSummarySources, runSummarySources_);
        DARABONBA_PTR_FROM_JSON(runSummaryStatus, runSummaryStatus_);
        DARABONBA_PTR_FROM_JSON(runSummaryTools, runSummaryTools_);
        DARABONBA_PTR_FROM_JSON(startedAt, startedAt_);
        DARABONBA_PTR_FROM_JSON(turnSeq, turnSeq_);
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
      class RunSummaryTools : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RunSummaryTools& obj) { 
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, RunSummaryTools& obj) { 
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        RunSummaryTools() = default ;
        RunSummaryTools(const RunSummaryTools &) = default ;
        RunSummaryTools(RunSummaryTools &&) = default ;
        RunSummaryTools(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RunSummaryTools() = default ;
        RunSummaryTools& operator=(const RunSummaryTools &) = default ;
        RunSummaryTools& operator=(RunSummaryTools &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->type_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline RunSummaryTools& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline RunSummaryTools& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // 工具名称
        shared_ptr<string> name_ {};
        // 工具类型，如 SKILL、MCP
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->attemptId_ == nullptr
        && this->attemptSeq_ == nullptr && this->executorId_ == nullptr && this->executorName_ == nullptr && this->executorType_ == nullptr && this->finishedAt_ == nullptr
        && this->nodeKey_ == nullptr && this->nodeName_ == nullptr && this->nodeStatus_ == nullptr && this->planId_ == nullptr && this->result_ == nullptr
        && this->runSummary_ == nullptr && this->runSummaryError_ == nullptr && this->runSummaryGeneratedAt_ == nullptr && this->runSummarySources_ == nullptr && this->runSummaryStatus_ == nullptr
        && this->runSummaryTools_ == nullptr && this->startedAt_ == nullptr && this->turnSeq_ == nullptr; };
      // attemptId Field Functions 
      bool hasAttemptId() const { return this->attemptId_ != nullptr;};
      void deleteAttemptId() { this->attemptId_ = nullptr;};
      inline string getAttemptId() const { DARABONBA_PTR_GET_DEFAULT(attemptId_, "") };
      inline Items& setAttemptId(string attemptId) { DARABONBA_PTR_SET_VALUE(attemptId_, attemptId) };


      // attemptSeq Field Functions 
      bool hasAttemptSeq() const { return this->attemptSeq_ != nullptr;};
      void deleteAttemptSeq() { this->attemptSeq_ = nullptr;};
      inline int64_t getAttemptSeq() const { DARABONBA_PTR_GET_DEFAULT(attemptSeq_, 0L) };
      inline Items& setAttemptSeq(int64_t attemptSeq) { DARABONBA_PTR_SET_VALUE(attemptSeq_, attemptSeq) };


      // executorId Field Functions 
      bool hasExecutorId() const { return this->executorId_ != nullptr;};
      void deleteExecutorId() { this->executorId_ = nullptr;};
      inline string getExecutorId() const { DARABONBA_PTR_GET_DEFAULT(executorId_, "") };
      inline Items& setExecutorId(string executorId) { DARABONBA_PTR_SET_VALUE(executorId_, executorId) };


      // executorName Field Functions 
      bool hasExecutorName() const { return this->executorName_ != nullptr;};
      void deleteExecutorName() { this->executorName_ = nullptr;};
      inline string getExecutorName() const { DARABONBA_PTR_GET_DEFAULT(executorName_, "") };
      inline Items& setExecutorName(string executorName) { DARABONBA_PTR_SET_VALUE(executorName_, executorName) };


      // executorType Field Functions 
      bool hasExecutorType() const { return this->executorType_ != nullptr;};
      void deleteExecutorType() { this->executorType_ = nullptr;};
      inline string getExecutorType() const { DARABONBA_PTR_GET_DEFAULT(executorType_, "") };
      inline Items& setExecutorType(string executorType) { DARABONBA_PTR_SET_VALUE(executorType_, executorType) };


      // finishedAt Field Functions 
      bool hasFinishedAt() const { return this->finishedAt_ != nullptr;};
      void deleteFinishedAt() { this->finishedAt_ = nullptr;};
      inline string getFinishedAt() const { DARABONBA_PTR_GET_DEFAULT(finishedAt_, "") };
      inline Items& setFinishedAt(string finishedAt) { DARABONBA_PTR_SET_VALUE(finishedAt_, finishedAt) };


      // nodeKey Field Functions 
      bool hasNodeKey() const { return this->nodeKey_ != nullptr;};
      void deleteNodeKey() { this->nodeKey_ = nullptr;};
      inline string getNodeKey() const { DARABONBA_PTR_GET_DEFAULT(nodeKey_, "") };
      inline Items& setNodeKey(string nodeKey) { DARABONBA_PTR_SET_VALUE(nodeKey_, nodeKey) };


      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline Items& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


      // nodeStatus Field Functions 
      bool hasNodeStatus() const { return this->nodeStatus_ != nullptr;};
      void deleteNodeStatus() { this->nodeStatus_ = nullptr;};
      inline string getNodeStatus() const { DARABONBA_PTR_GET_DEFAULT(nodeStatus_, "") };
      inline Items& setNodeStatus(string nodeStatus) { DARABONBA_PTR_SET_VALUE(nodeStatus_, nodeStatus) };


      // planId Field Functions 
      bool hasPlanId() const { return this->planId_ != nullptr;};
      void deletePlanId() { this->planId_ = nullptr;};
      inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
      inline Items& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline       const Darabonba::Json & getResult() const { DARABONBA_GET(result_) };
      Darabonba::Json & getResult() { DARABONBA_GET(result_) };
      inline Items& setResult(const Darabonba::Json & result) { DARABONBA_SET_VALUE(result_, result) };
      inline Items& setResult(Darabonba::Json && result) { DARABONBA_SET_RVALUE(result_, result) };


      // runSummary Field Functions 
      bool hasRunSummary() const { return this->runSummary_ != nullptr;};
      void deleteRunSummary() { this->runSummary_ = nullptr;};
      inline       const Darabonba::Json & getRunSummary() const { DARABONBA_GET(runSummary_) };
      Darabonba::Json & getRunSummary() { DARABONBA_GET(runSummary_) };
      inline Items& setRunSummary(const Darabonba::Json & runSummary) { DARABONBA_SET_VALUE(runSummary_, runSummary) };
      inline Items& setRunSummary(Darabonba::Json && runSummary) { DARABONBA_SET_RVALUE(runSummary_, runSummary) };


      // runSummaryError Field Functions 
      bool hasRunSummaryError() const { return this->runSummaryError_ != nullptr;};
      void deleteRunSummaryError() { this->runSummaryError_ = nullptr;};
      inline string getRunSummaryError() const { DARABONBA_PTR_GET_DEFAULT(runSummaryError_, "") };
      inline Items& setRunSummaryError(string runSummaryError) { DARABONBA_PTR_SET_VALUE(runSummaryError_, runSummaryError) };


      // runSummaryGeneratedAt Field Functions 
      bool hasRunSummaryGeneratedAt() const { return this->runSummaryGeneratedAt_ != nullptr;};
      void deleteRunSummaryGeneratedAt() { this->runSummaryGeneratedAt_ = nullptr;};
      inline string getRunSummaryGeneratedAt() const { DARABONBA_PTR_GET_DEFAULT(runSummaryGeneratedAt_, "") };
      inline Items& setRunSummaryGeneratedAt(string runSummaryGeneratedAt) { DARABONBA_PTR_SET_VALUE(runSummaryGeneratedAt_, runSummaryGeneratedAt) };


      // runSummarySources Field Functions 
      bool hasRunSummarySources() const { return this->runSummarySources_ != nullptr;};
      void deleteRunSummarySources() { this->runSummarySources_ = nullptr;};
      inline const vector<Darabonba::Json> & getRunSummarySources() const { DARABONBA_PTR_GET_CONST(runSummarySources_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getRunSummarySources() { DARABONBA_PTR_GET(runSummarySources_, vector<Darabonba::Json>) };
      inline Items& setRunSummarySources(const vector<Darabonba::Json> & runSummarySources) { DARABONBA_PTR_SET_VALUE(runSummarySources_, runSummarySources) };
      inline Items& setRunSummarySources(vector<Darabonba::Json> && runSummarySources) { DARABONBA_PTR_SET_RVALUE(runSummarySources_, runSummarySources) };


      // runSummaryStatus Field Functions 
      bool hasRunSummaryStatus() const { return this->runSummaryStatus_ != nullptr;};
      void deleteRunSummaryStatus() { this->runSummaryStatus_ = nullptr;};
      inline string getRunSummaryStatus() const { DARABONBA_PTR_GET_DEFAULT(runSummaryStatus_, "") };
      inline Items& setRunSummaryStatus(string runSummaryStatus) { DARABONBA_PTR_SET_VALUE(runSummaryStatus_, runSummaryStatus) };


      // runSummaryTools Field Functions 
      bool hasRunSummaryTools() const { return this->runSummaryTools_ != nullptr;};
      void deleteRunSummaryTools() { this->runSummaryTools_ = nullptr;};
      inline const vector<Items::RunSummaryTools> & getRunSummaryTools() const { DARABONBA_PTR_GET_CONST(runSummaryTools_, vector<Items::RunSummaryTools>) };
      inline vector<Items::RunSummaryTools> getRunSummaryTools() { DARABONBA_PTR_GET(runSummaryTools_, vector<Items::RunSummaryTools>) };
      inline Items& setRunSummaryTools(const vector<Items::RunSummaryTools> & runSummaryTools) { DARABONBA_PTR_SET_VALUE(runSummaryTools_, runSummaryTools) };
      inline Items& setRunSummaryTools(vector<Items::RunSummaryTools> && runSummaryTools) { DARABONBA_PTR_SET_RVALUE(runSummaryTools_, runSummaryTools) };


      // startedAt Field Functions 
      bool hasStartedAt() const { return this->startedAt_ != nullptr;};
      void deleteStartedAt() { this->startedAt_ = nullptr;};
      inline string getStartedAt() const { DARABONBA_PTR_GET_DEFAULT(startedAt_, "") };
      inline Items& setStartedAt(string startedAt) { DARABONBA_PTR_SET_VALUE(startedAt_, startedAt) };


      // turnSeq Field Functions 
      bool hasTurnSeq() const { return this->turnSeq_ != nullptr;};
      void deleteTurnSeq() { this->turnSeq_ = nullptr;};
      inline int64_t getTurnSeq() const { DARABONBA_PTR_GET_DEFAULT(turnSeq_, 0L) };
      inline Items& setTurnSeq(int64_t turnSeq) { DARABONBA_PTR_SET_VALUE(turnSeq_, turnSeq) };


    protected:
      // 节点尝试 ID
      shared_ptr<string> attemptId_ {};
      // 节点尝试序号，从 1 开始
      shared_ptr<int64_t> attemptSeq_ {};
      // 执行器 ID
      shared_ptr<string> executorId_ {};
      // 执行器名称
      shared_ptr<string> executorName_ {};
      // 执行器类型，如 AGENT、HUMAN
      shared_ptr<string> executorType_ {};
      // 节点结束时间，ISO8601 格式
      shared_ptr<string> finishedAt_ {};
      // 节点 key
      shared_ptr<string> nodeKey_ {};
      // 节点名称
      shared_ptr<string> nodeName_ {};
      // 节点状态，如 COMPLETED、FAILED
      shared_ptr<string> nodeStatus_ {};
      // 所属物理计划 ID
      shared_ptr<string> planId_ {};
      // 节点执行结果，JSON 对象
      Darabonba::Json result_ {};
      // 运行总结正文；未生成时为空
      Darabonba::Json runSummary_ {};
      // 运行总结失败原因；成功时为空
      shared_ptr<string> runSummaryError_ {};
      // 运行总结生成时间，ISO8601 格式
      shared_ptr<string> runSummaryGeneratedAt_ {};
      // 运行总结引用的数据来源列表
      shared_ptr<vector<Darabonba::Json>> runSummarySources_ {};
      // 运行总结生成状态，如 COMPLETED、FAILED、PROCESSING
      shared_ptr<string> runSummaryStatus_ {};
      // 运行总结使用的工具列表
      shared_ptr<vector<Items::RunSummaryTools>> runSummaryTools_ {};
      // 节点开始时间，ISO8601 格式
      shared_ptr<string> startedAt_ {};
      // 节点轮次序号，从 1 开始
      shared_ptr<int64_t> turnSeq_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->items_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetWorkItemRunSummariesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<GetWorkItemRunSummariesResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<GetWorkItemRunSummariesResponseBody::Items>) };
    inline vector<GetWorkItemRunSummariesResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<GetWorkItemRunSummariesResponseBody::Items>) };
    inline GetWorkItemRunSummariesResponseBody& setItems(const vector<GetWorkItemRunSummariesResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline GetWorkItemRunSummariesResponseBody& setItems(vector<GetWorkItemRunSummariesResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetWorkItemRunSummariesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkItemRunSummariesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // 公共业务状态码
    shared_ptr<string> code_ {};
    // 当前计划、当前轮次已经生成的运行总结；重跑受影响节点的新总结生成前不会返回旧总结
    shared_ptr<vector<GetWorkItemRunSummariesResponseBody::Items>> items_ {};
    // 公共错误描述
    shared_ptr<string> message_ {};
    // 请求追踪ID
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
