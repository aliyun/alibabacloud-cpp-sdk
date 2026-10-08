// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPPIPELINEINTEGRATEDTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPPIPELINEINTEGRATEDTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class StopPipelineIntegratedTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopPipelineIntegratedTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Context, context_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(StopCommand, stopCommand_);
    };
    friend void from_json(const Darabonba::Json& j, StopPipelineIntegratedTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Context, context_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(StopCommand, stopCommand_);
    };
    StopPipelineIntegratedTaskRequest() = default ;
    StopPipelineIntegratedTaskRequest(const StopPipelineIntegratedTaskRequest &) = default ;
    StopPipelineIntegratedTaskRequest(StopPipelineIntegratedTaskRequest &&) = default ;
    StopPipelineIntegratedTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopPipelineIntegratedTaskRequest() = default ;
    StopPipelineIntegratedTaskRequest& operator=(const StopPipelineIntegratedTaskRequest &) = default ;
    StopPipelineIntegratedTaskRequest& operator=(StopPipelineIntegratedTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StopCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StopCommand& obj) { 
        DARABONBA_PTR_TO_JSON(TaskIds, taskIds_);
      };
      friend void from_json(const Darabonba::Json& j, StopCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(TaskIds, taskIds_);
      };
      StopCommand() = default ;
      StopCommand(const StopCommand &) = default ;
      StopCommand(StopCommand &&) = default ;
      StopCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StopCommand() = default ;
      StopCommand& operator=(const StopCommand &) = default ;
      StopCommand& operator=(StopCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->taskIds_ == nullptr; };
      // taskIds Field Functions 
      bool hasTaskIds() const { return this->taskIds_ != nullptr;};
      void deleteTaskIds() { this->taskIds_ = nullptr;};
      inline const vector<string> & getTaskIds() const { DARABONBA_PTR_GET_CONST(taskIds_, vector<string>) };
      inline vector<string> getTaskIds() { DARABONBA_PTR_GET(taskIds_, vector<string>) };
      inline StopCommand& setTaskIds(const vector<string> & taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };
      inline StopCommand& setTaskIds(vector<string> && taskIds) { DARABONBA_PTR_SET_RVALUE(taskIds_, taskIds) };


    protected:
      // This parameter is required.
      shared_ptr<vector<string>> taskIds_ {};
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
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr && this->stopCommand_ == nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline const StopPipelineIntegratedTaskRequest::Context & getContext() const { DARABONBA_PTR_GET_CONST(context_, StopPipelineIntegratedTaskRequest::Context) };
    inline StopPipelineIntegratedTaskRequest::Context getContext() { DARABONBA_PTR_GET(context_, StopPipelineIntegratedTaskRequest::Context) };
    inline StopPipelineIntegratedTaskRequest& setContext(const StopPipelineIntegratedTaskRequest::Context & context) { DARABONBA_PTR_SET_VALUE(context_, context) };
    inline StopPipelineIntegratedTaskRequest& setContext(StopPipelineIntegratedTaskRequest::Context && context) { DARABONBA_PTR_SET_RVALUE(context_, context) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline StopPipelineIntegratedTaskRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline StopPipelineIntegratedTaskRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // stopCommand Field Functions 
    bool hasStopCommand() const { return this->stopCommand_ != nullptr;};
    void deleteStopCommand() { this->stopCommand_ = nullptr;};
    inline const StopPipelineIntegratedTaskRequest::StopCommand & getStopCommand() const { DARABONBA_PTR_GET_CONST(stopCommand_, StopPipelineIntegratedTaskRequest::StopCommand) };
    inline StopPipelineIntegratedTaskRequest::StopCommand getStopCommand() { DARABONBA_PTR_GET(stopCommand_, StopPipelineIntegratedTaskRequest::StopCommand) };
    inline StopPipelineIntegratedTaskRequest& setStopCommand(const StopPipelineIntegratedTaskRequest::StopCommand & stopCommand) { DARABONBA_PTR_SET_VALUE(stopCommand_, stopCommand) };
    inline StopPipelineIntegratedTaskRequest& setStopCommand(StopPipelineIntegratedTaskRequest::StopCommand && stopCommand) { DARABONBA_PTR_SET_RVALUE(stopCommand_, stopCommand) };


  protected:
    // This parameter is required.
    shared_ptr<StopPipelineIntegratedTaskRequest::Context> context_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    shared_ptr<string> opUserId_ {};
    // This parameter is required.
    shared_ptr<StopPipelineIntegratedTaskRequest::StopCommand> stopCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
