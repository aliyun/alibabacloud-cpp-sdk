// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKFLOWBYJSONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKFLOWBYJSONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateWorkFlowByJsonRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkFlowByJsonRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Context, context_);
      DARABONBA_PTR_TO_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkFlowByJsonRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Context, context_);
      DARABONBA_PTR_FROM_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    CreateWorkFlowByJsonRequest() = default ;
    CreateWorkFlowByJsonRequest(const CreateWorkFlowByJsonRequest &) = default ;
    CreateWorkFlowByJsonRequest(CreateWorkFlowByJsonRequest &&) = default ;
    CreateWorkFlowByJsonRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkFlowByJsonRequest() = default ;
    CreateWorkFlowByJsonRequest& operator=(const CreateWorkFlowByJsonRequest &) = default ;
    CreateWorkFlowByJsonRequest& operator=(CreateWorkFlowByJsonRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Directory, directory_);
        DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfig_);
        DARABONBA_PTR_TO_JSON(Submit, submit_);
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        DARABONBA_PTR_TO_JSON(WorkFlowJson, workFlowJson_);
      };
      friend void from_json(const Darabonba::Json& j, CreateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Directory, directory_);
        DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfig_);
        DARABONBA_PTR_FROM_JSON(Submit, submit_);
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        DARABONBA_PTR_FROM_JSON(WorkFlowJson, workFlowJson_);
      };
      CreateCommand() = default ;
      CreateCommand(const CreateCommand &) = default ;
      CreateCommand(CreateCommand &&) = default ;
      CreateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateCommand() = default ;
      CreateCommand& operator=(const CreateCommand &) = default ;
      CreateCommand& operator=(CreateCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->directory_ == nullptr && this->scheduleConfig_ == nullptr && this->submit_ == nullptr && this->taskName_ == nullptr && this->taskType_ == nullptr
        && this->workFlowJson_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline CreateCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // directory Field Functions 
      bool hasDirectory() const { return this->directory_ != nullptr;};
      void deleteDirectory() { this->directory_ = nullptr;};
      inline string getDirectory() const { DARABONBA_PTR_GET_DEFAULT(directory_, "") };
      inline CreateCommand& setDirectory(string directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };


      // scheduleConfig Field Functions 
      bool hasScheduleConfig() const { return this->scheduleConfig_ != nullptr;};
      void deleteScheduleConfig() { this->scheduleConfig_ = nullptr;};
      inline string getScheduleConfig() const { DARABONBA_PTR_GET_DEFAULT(scheduleConfig_, "") };
      inline CreateCommand& setScheduleConfig(string scheduleConfig) { DARABONBA_PTR_SET_VALUE(scheduleConfig_, scheduleConfig) };


      // submit Field Functions 
      bool hasSubmit() const { return this->submit_ != nullptr;};
      void deleteSubmit() { this->submit_ = nullptr;};
      inline bool getSubmit() const { DARABONBA_PTR_GET_DEFAULT(submit_, false) };
      inline CreateCommand& setSubmit(bool submit) { DARABONBA_PTR_SET_VALUE(submit_, submit) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline CreateCommand& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline int32_t getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0) };
      inline CreateCommand& setTaskType(int32_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // workFlowJson Field Functions 
      bool hasWorkFlowJson() const { return this->workFlowJson_ != nullptr;};
      void deleteWorkFlowJson() { this->workFlowJson_ = nullptr;};
      inline string getWorkFlowJson() const { DARABONBA_PTR_GET_DEFAULT(workFlowJson_, "") };
      inline CreateCommand& setWorkFlowJson(string workFlowJson) { DARABONBA_PTR_SET_VALUE(workFlowJson_, workFlowJson) };


    protected:
      // The description of the node.
      shared_ptr<string> description_ {};
      // The folder to which the node belongs. If this parameter is left empty, the root folder is used.
      shared_ptr<string> directory_ {};
      // The schedule configuration. This parameter is required for periodic nodes. The value is a JSON string. Refer to the utility class: com.alibaba.dataphin.pipeline.common.facade.openapi.model.OAScheduleConfig#toJsonString method.
      shared_ptr<string> scheduleConfig_ {};
      // Specifies whether to submit the node. Default value: true.
      shared_ptr<bool> submit_ {};
      // The name of the node.
      // 
      // This parameter is required.
      shared_ptr<string> taskName_ {};
      // The scheduling type of the node. Valid values:
      // 
      // - 1: periodic scheduling.
      // - 3: manual scheduling.
      // - 5: real-time node.
      // 
      // This parameter is required.
      shared_ptr<int32_t> taskType_ {};
      // The workflow JSON.
      // 
      // This parameter is required.
      shared_ptr<string> workFlowJson_ {};
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
      // The current operating environment. Valid values:
      // 
      // - DEV: the development environment.
      // - PROD: the production environment.
      // 
      // The current version supports only BASIC mode, so set this parameter to PROD.
      // 
      // This parameter is required.
      shared_ptr<string> env_ {};
      // The ID of the project to which the workflow node belongs.
      // 
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
    };

    virtual bool empty() const override { return this->context_ == nullptr
        && this->createCommand_ == nullptr && this->opTenantId_ == nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline const CreateWorkFlowByJsonRequest::Context & getContext() const { DARABONBA_PTR_GET_CONST(context_, CreateWorkFlowByJsonRequest::Context) };
    inline CreateWorkFlowByJsonRequest::Context getContext() { DARABONBA_PTR_GET(context_, CreateWorkFlowByJsonRequest::Context) };
    inline CreateWorkFlowByJsonRequest& setContext(const CreateWorkFlowByJsonRequest::Context & context) { DARABONBA_PTR_SET_VALUE(context_, context) };
    inline CreateWorkFlowByJsonRequest& setContext(CreateWorkFlowByJsonRequest::Context && context) { DARABONBA_PTR_SET_RVALUE(context_, context) };


    // createCommand Field Functions 
    bool hasCreateCommand() const { return this->createCommand_ != nullptr;};
    void deleteCreateCommand() { this->createCommand_ = nullptr;};
    inline const CreateWorkFlowByJsonRequest::CreateCommand & getCreateCommand() const { DARABONBA_PTR_GET_CONST(createCommand_, CreateWorkFlowByJsonRequest::CreateCommand) };
    inline CreateWorkFlowByJsonRequest::CreateCommand getCreateCommand() { DARABONBA_PTR_GET(createCommand_, CreateWorkFlowByJsonRequest::CreateCommand) };
    inline CreateWorkFlowByJsonRequest& setCreateCommand(const CreateWorkFlowByJsonRequest::CreateCommand & createCommand) { DARABONBA_PTR_SET_VALUE(createCommand_, createCommand) };
    inline CreateWorkFlowByJsonRequest& setCreateCommand(CreateWorkFlowByJsonRequest::CreateCommand && createCommand) { DARABONBA_PTR_SET_RVALUE(createCommand_, createCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreateWorkFlowByJsonRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // The request context information.
    // 
    // This parameter is required.
    shared_ptr<CreateWorkFlowByJsonRequest::Context> context_ {};
    // The JSON script command for creating a workflow.
    // 
    // This parameter is required.
    shared_ptr<CreateWorkFlowByJsonRequest::CreateCommand> createCommand_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
