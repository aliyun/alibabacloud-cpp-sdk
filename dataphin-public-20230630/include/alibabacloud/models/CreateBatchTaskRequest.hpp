// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBATCHTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBATCHTASKREQUEST_HPP_
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
  class CreateBatchTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBatchTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBatchTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    CreateBatchTaskRequest() = default ;
    CreateBatchTaskRequest(const CreateBatchTaskRequest &) = default ;
    CreateBatchTaskRequest(CreateBatchTaskRequest &&) = default ;
    CreateBatchTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBatchTaskRequest() = default ;
    CreateBatchTaskRequest& operator=(const CreateBatchTaskRequest &) = default ;
    CreateBatchTaskRequest& operator=(CreateBatchTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(DataSourceCatalog, dataSourceCatalog_);
        DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_TO_JSON(DataSourceSchema, dataSourceSchema_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Directory, directory_);
        DARABONBA_PTR_TO_JSON(Engine, engine_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(PythonModuleList, pythonModuleList_);
        DARABONBA_PTR_TO_JSON(ScheduleType, scheduleType_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      };
      friend void from_json(const Darabonba::Json& j, CreateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(DataSourceCatalog, dataSourceCatalog_);
        DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_FROM_JSON(DataSourceSchema, dataSourceSchema_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Directory, directory_);
        DARABONBA_PTR_FROM_JSON(Engine, engine_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(PythonModuleList, pythonModuleList_);
        DARABONBA_PTR_FROM_JSON(ScheduleType, scheduleType_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
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
      virtual bool empty() const override { return this->dataSourceCatalog_ == nullptr
        && this->dataSourceId_ == nullptr && this->dataSourceSchema_ == nullptr && this->description_ == nullptr && this->directory_ == nullptr && this->engine_ == nullptr
        && this->name_ == nullptr && this->projectId_ == nullptr && this->pythonModuleList_ == nullptr && this->scheduleType_ == nullptr && this->taskType_ == nullptr; };
      // dataSourceCatalog Field Functions 
      bool hasDataSourceCatalog() const { return this->dataSourceCatalog_ != nullptr;};
      void deleteDataSourceCatalog() { this->dataSourceCatalog_ = nullptr;};
      inline string getDataSourceCatalog() const { DARABONBA_PTR_GET_DEFAULT(dataSourceCatalog_, "") };
      inline CreateCommand& setDataSourceCatalog(string dataSourceCatalog) { DARABONBA_PTR_SET_VALUE(dataSourceCatalog_, dataSourceCatalog) };


      // dataSourceId Field Functions 
      bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
      void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
      inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
      inline CreateCommand& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


      // dataSourceSchema Field Functions 
      bool hasDataSourceSchema() const { return this->dataSourceSchema_ != nullptr;};
      void deleteDataSourceSchema() { this->dataSourceSchema_ = nullptr;};
      inline string getDataSourceSchema() const { DARABONBA_PTR_GET_DEFAULT(dataSourceSchema_, "") };
      inline CreateCommand& setDataSourceSchema(string dataSourceSchema) { DARABONBA_PTR_SET_VALUE(dataSourceSchema_, dataSourceSchema) };


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


      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline CreateCommand& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline CreateCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline CreateCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // pythonModuleList Field Functions 
      bool hasPythonModuleList() const { return this->pythonModuleList_ != nullptr;};
      void deletePythonModuleList() { this->pythonModuleList_ = nullptr;};
      inline const vector<string> & getPythonModuleList() const { DARABONBA_PTR_GET_CONST(pythonModuleList_, vector<string>) };
      inline vector<string> getPythonModuleList() { DARABONBA_PTR_GET(pythonModuleList_, vector<string>) };
      inline CreateCommand& setPythonModuleList(const vector<string> & pythonModuleList) { DARABONBA_PTR_SET_VALUE(pythonModuleList_, pythonModuleList) };
      inline CreateCommand& setPythonModuleList(vector<string> && pythonModuleList) { DARABONBA_PTR_SET_RVALUE(pythonModuleList_, pythonModuleList) };


      // scheduleType Field Functions 
      bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
      void deleteScheduleType() { this->scheduleType_ = nullptr;};
      inline int32_t getScheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, 0) };
      inline CreateCommand& setScheduleType(int32_t scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline int32_t getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0) };
      inline CreateCommand& setTaskType(int32_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    protected:
      shared_ptr<string> dataSourceCatalog_ {};
      shared_ptr<string> dataSourceId_ {};
      shared_ptr<string> dataSourceSchema_ {};
      // This parameter is required.
      shared_ptr<string> description_ {};
      // This parameter is required.
      shared_ptr<string> directory_ {};
      shared_ptr<string> engine_ {};
      // This parameter is required.
      shared_ptr<string> name_ {};
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
      shared_ptr<vector<string>> pythonModuleList_ {};
      // This parameter is required.
      shared_ptr<int32_t> scheduleType_ {};
      // This parameter is required.
      shared_ptr<int32_t> taskType_ {};
    };

    virtual bool empty() const override { return this->createCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // createCommand Field Functions 
    bool hasCreateCommand() const { return this->createCommand_ != nullptr;};
    void deleteCreateCommand() { this->createCommand_ = nullptr;};
    inline const CreateBatchTaskRequest::CreateCommand & getCreateCommand() const { DARABONBA_PTR_GET_CONST(createCommand_, CreateBatchTaskRequest::CreateCommand) };
    inline CreateBatchTaskRequest::CreateCommand getCreateCommand() { DARABONBA_PTR_GET(createCommand_, CreateBatchTaskRequest::CreateCommand) };
    inline CreateBatchTaskRequest& setCreateCommand(const CreateBatchTaskRequest::CreateCommand & createCommand) { DARABONBA_PTR_SET_VALUE(createCommand_, createCommand) };
    inline CreateBatchTaskRequest& setCreateCommand(CreateBatchTaskRequest::CreateCommand && createCommand) { DARABONBA_PTR_SET_RVALUE(createCommand_, createCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreateBatchTaskRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<CreateBatchTaskRequest::CreateCommand> createCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
