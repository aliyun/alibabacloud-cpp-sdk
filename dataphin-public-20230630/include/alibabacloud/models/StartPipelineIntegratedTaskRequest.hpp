// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTPIPELINEINTEGRATEDTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTPIPELINEINTEGRATEDTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class StartPipelineIntegratedTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartPipelineIntegratedTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Context, context_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(StartCommand, startCommand_);
    };
    friend void from_json(const Darabonba::Json& j, StartPipelineIntegratedTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Context, context_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(StartCommand, startCommand_);
    };
    StartPipelineIntegratedTaskRequest() = default ;
    StartPipelineIntegratedTaskRequest(const StartPipelineIntegratedTaskRequest &) = default ;
    StartPipelineIntegratedTaskRequest(StartPipelineIntegratedTaskRequest &&) = default ;
    StartPipelineIntegratedTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartPipelineIntegratedTaskRequest() = default ;
    StartPipelineIntegratedTaskRequest& operator=(const StartPipelineIntegratedTaskRequest &) = default ;
    StartPipelineIntegratedTaskRequest& operator=(StartPipelineIntegratedTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StartCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StartCommand& obj) { 
        DARABONBA_PTR_TO_JSON(ByteSpeed, byteSpeed_);
        DARABONBA_PTR_TO_JSON(Checkpoint, checkpoint_);
        DARABONBA_PTR_TO_JSON(Concurrent, concurrent_);
        DARABONBA_PTR_TO_JSON(FullTaskMode, fullTaskMode_);
        DARABONBA_PTR_TO_JSON(IncrementalTaskId, incrementalTaskId_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(QuotaGroupId, quotaGroupId_);
        DARABONBA_PTR_TO_JSON(SyncMode, syncMode_);
      };
      friend void from_json(const Darabonba::Json& j, StartCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(ByteSpeed, byteSpeed_);
        DARABONBA_PTR_FROM_JSON(Checkpoint, checkpoint_);
        DARABONBA_PTR_FROM_JSON(Concurrent, concurrent_);
        DARABONBA_PTR_FROM_JSON(FullTaskMode, fullTaskMode_);
        DARABONBA_PTR_FROM_JSON(IncrementalTaskId, incrementalTaskId_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(QuotaGroupId, quotaGroupId_);
        DARABONBA_PTR_FROM_JSON(SyncMode, syncMode_);
      };
      StartCommand() = default ;
      StartCommand(const StartCommand &) = default ;
      StartCommand(StartCommand &&) = default ;
      StartCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StartCommand() = default ;
      StartCommand& operator=(const StartCommand &) = default ;
      StartCommand& operator=(StartCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->byteSpeed_ == nullptr
        && this->checkpoint_ == nullptr && this->concurrent_ == nullptr && this->fullTaskMode_ == nullptr && this->incrementalTaskId_ == nullptr && this->memory_ == nullptr
        && this->nodeId_ == nullptr && this->quotaGroupId_ == nullptr && this->syncMode_ == nullptr; };
      // byteSpeed Field Functions 
      bool hasByteSpeed() const { return this->byteSpeed_ != nullptr;};
      void deleteByteSpeed() { this->byteSpeed_ = nullptr;};
      inline int32_t getByteSpeed() const { DARABONBA_PTR_GET_DEFAULT(byteSpeed_, 0) };
      inline StartCommand& setByteSpeed(int32_t byteSpeed) { DARABONBA_PTR_SET_VALUE(byteSpeed_, byteSpeed) };


      // checkpoint Field Functions 
      bool hasCheckpoint() const { return this->checkpoint_ != nullptr;};
      void deleteCheckpoint() { this->checkpoint_ = nullptr;};
      inline string getCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(checkpoint_, "") };
      inline StartCommand& setCheckpoint(string checkpoint) { DARABONBA_PTR_SET_VALUE(checkpoint_, checkpoint) };


      // concurrent Field Functions 
      bool hasConcurrent() const { return this->concurrent_ != nullptr;};
      void deleteConcurrent() { this->concurrent_ = nullptr;};
      inline int32_t getConcurrent() const { DARABONBA_PTR_GET_DEFAULT(concurrent_, 0) };
      inline StartCommand& setConcurrent(int32_t concurrent) { DARABONBA_PTR_SET_VALUE(concurrent_, concurrent) };


      // fullTaskMode Field Functions 
      bool hasFullTaskMode() const { return this->fullTaskMode_ != nullptr;};
      void deleteFullTaskMode() { this->fullTaskMode_ = nullptr;};
      inline string getFullTaskMode() const { DARABONBA_PTR_GET_DEFAULT(fullTaskMode_, "") };
      inline StartCommand& setFullTaskMode(string fullTaskMode) { DARABONBA_PTR_SET_VALUE(fullTaskMode_, fullTaskMode) };


      // incrementalTaskId Field Functions 
      bool hasIncrementalTaskId() const { return this->incrementalTaskId_ != nullptr;};
      void deleteIncrementalTaskId() { this->incrementalTaskId_ = nullptr;};
      inline string getIncrementalTaskId() const { DARABONBA_PTR_GET_DEFAULT(incrementalTaskId_, "") };
      inline StartCommand& setIncrementalTaskId(string incrementalTaskId) { DARABONBA_PTR_SET_VALUE(incrementalTaskId_, incrementalTaskId) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
      inline StartCommand& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline StartCommand& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // quotaGroupId Field Functions 
      bool hasQuotaGroupId() const { return this->quotaGroupId_ != nullptr;};
      void deleteQuotaGroupId() { this->quotaGroupId_ = nullptr;};
      inline string getQuotaGroupId() const { DARABONBA_PTR_GET_DEFAULT(quotaGroupId_, "") };
      inline StartCommand& setQuotaGroupId(string quotaGroupId) { DARABONBA_PTR_SET_VALUE(quotaGroupId_, quotaGroupId) };


      // syncMode Field Functions 
      bool hasSyncMode() const { return this->syncMode_ != nullptr;};
      void deleteSyncMode() { this->syncMode_ = nullptr;};
      inline string getSyncMode() const { DARABONBA_PTR_GET_DEFAULT(syncMode_, "") };
      inline StartCommand& setSyncMode(string syncMode) { DARABONBA_PTR_SET_VALUE(syncMode_, syncMode) };


    protected:
      shared_ptr<int32_t> byteSpeed_ {};
      shared_ptr<string> checkpoint_ {};
      shared_ptr<int32_t> concurrent_ {};
      shared_ptr<string> fullTaskMode_ {};
      shared_ptr<string> incrementalTaskId_ {};
      shared_ptr<int32_t> memory_ {};
      shared_ptr<string> nodeId_ {};
      shared_ptr<string> quotaGroupId_ {};
      shared_ptr<string> syncMode_ {};
    };

    class Context : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Context& obj) { 
        DARABONBA_PTR_TO_JSON(Env, env_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      };
      friend void from_json(const Darabonba::Json& j, Context& obj) { 
        DARABONBA_PTR_FROM_JSON(Env, env_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      };
      Context() = default ;
      Context(const Context &) = default ;
      Context(Context &&) = default ;
      Context(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Context() = default ;
      Context& operator=(const Context &) = default ;
      Context& operator=(Context &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->env_ == nullptr
        && this->projectId_ == nullptr; };
      // env Field Functions 
      bool hasEnv() const { return this->env_ != nullptr;};
      void deleteEnv() { this->env_ = nullptr;};
      inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
      inline Context& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline Context& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    protected:
      // This parameter is required.
      shared_ptr<string> env_ {};
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
    };

    virtual bool empty() const override { return this->context_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr && this->startCommand_ == nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline const StartPipelineIntegratedTaskRequest::Context & getContext() const { DARABONBA_PTR_GET_CONST(context_, StartPipelineIntegratedTaskRequest::Context) };
    inline StartPipelineIntegratedTaskRequest::Context getContext() { DARABONBA_PTR_GET(context_, StartPipelineIntegratedTaskRequest::Context) };
    inline StartPipelineIntegratedTaskRequest& setContext(const StartPipelineIntegratedTaskRequest::Context & context) { DARABONBA_PTR_SET_VALUE(context_, context) };
    inline StartPipelineIntegratedTaskRequest& setContext(StartPipelineIntegratedTaskRequest::Context && context) { DARABONBA_PTR_SET_RVALUE(context_, context) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline StartPipelineIntegratedTaskRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline StartPipelineIntegratedTaskRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // startCommand Field Functions 
    bool hasStartCommand() const { return this->startCommand_ != nullptr;};
    void deleteStartCommand() { this->startCommand_ = nullptr;};
    inline const StartPipelineIntegratedTaskRequest::StartCommand & getStartCommand() const { DARABONBA_PTR_GET_CONST(startCommand_, StartPipelineIntegratedTaskRequest::StartCommand) };
    inline StartPipelineIntegratedTaskRequest::StartCommand getStartCommand() { DARABONBA_PTR_GET(startCommand_, StartPipelineIntegratedTaskRequest::StartCommand) };
    inline StartPipelineIntegratedTaskRequest& setStartCommand(const StartPipelineIntegratedTaskRequest::StartCommand & startCommand) { DARABONBA_PTR_SET_VALUE(startCommand_, startCommand) };
    inline StartPipelineIntegratedTaskRequest& setStartCommand(StartPipelineIntegratedTaskRequest::StartCommand && startCommand) { DARABONBA_PTR_SET_RVALUE(startCommand_, startCommand) };


  protected:
    // This parameter is required.
    shared_ptr<StartPipelineIntegratedTaskRequest::Context> context_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    shared_ptr<string> opUserId_ {};
    // This parameter is required.
    shared_ptr<StartPipelineIntegratedTaskRequest::StartCommand> startCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
