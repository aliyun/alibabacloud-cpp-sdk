// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBATCHTASKREQUESTCREATECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_CREATEBATCHTASKREQUESTCREATECOMMAND_HPP_
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
  class CreateBatchTaskRequestCreateCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBatchTaskRequestCreateCommand& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CreateBatchTaskRequestCreateCommand& obj) { 
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
    CreateBatchTaskRequestCreateCommand() = default ;
    CreateBatchTaskRequestCreateCommand(const CreateBatchTaskRequestCreateCommand &) = default ;
    CreateBatchTaskRequestCreateCommand(CreateBatchTaskRequestCreateCommand &&) = default ;
    CreateBatchTaskRequestCreateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBatchTaskRequestCreateCommand() = default ;
    CreateBatchTaskRequestCreateCommand& operator=(const CreateBatchTaskRequestCreateCommand &) = default ;
    CreateBatchTaskRequestCreateCommand& operator=(CreateBatchTaskRequestCreateCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSourceCatalog_ == nullptr
        && return this->dataSourceId_ == nullptr && return this->dataSourceSchema_ == nullptr && return this->description_ == nullptr && return this->directory_ == nullptr && return this->engine_ == nullptr
        && return this->name_ == nullptr && return this->projectId_ == nullptr && return this->pythonModuleList_ == nullptr && return this->scheduleType_ == nullptr && return this->taskType_ == nullptr; };
    // dataSourceCatalog Field Functions 
    bool hasDataSourceCatalog() const { return this->dataSourceCatalog_ != nullptr;};
    void deleteDataSourceCatalog() { this->dataSourceCatalog_ = nullptr;};
    inline string dataSourceCatalog() const { DARABONBA_PTR_GET_DEFAULT(dataSourceCatalog_, "") };
    inline CreateBatchTaskRequestCreateCommand& setDataSourceCatalog(string dataSourceCatalog) { DARABONBA_PTR_SET_VALUE(dataSourceCatalog_, dataSourceCatalog) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline CreateBatchTaskRequestCreateCommand& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // dataSourceSchema Field Functions 
    bool hasDataSourceSchema() const { return this->dataSourceSchema_ != nullptr;};
    void deleteDataSourceSchema() { this->dataSourceSchema_ = nullptr;};
    inline string dataSourceSchema() const { DARABONBA_PTR_GET_DEFAULT(dataSourceSchema_, "") };
    inline CreateBatchTaskRequestCreateCommand& setDataSourceSchema(string dataSourceSchema) { DARABONBA_PTR_SET_VALUE(dataSourceSchema_, dataSourceSchema) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateBatchTaskRequestCreateCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // directory Field Functions 
    bool hasDirectory() const { return this->directory_ != nullptr;};
    void deleteDirectory() { this->directory_ = nullptr;};
    inline string directory() const { DARABONBA_PTR_GET_DEFAULT(directory_, "") };
    inline CreateBatchTaskRequestCreateCommand& setDirectory(string directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline CreateBatchTaskRequestCreateCommand& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateBatchTaskRequestCreateCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateBatchTaskRequestCreateCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // pythonModuleList Field Functions 
    bool hasPythonModuleList() const { return this->pythonModuleList_ != nullptr;};
    void deletePythonModuleList() { this->pythonModuleList_ = nullptr;};
    inline const vector<string> & pythonModuleList() const { DARABONBA_PTR_GET_CONST(pythonModuleList_, vector<string>) };
    inline vector<string> pythonModuleList() { DARABONBA_PTR_GET(pythonModuleList_, vector<string>) };
    inline CreateBatchTaskRequestCreateCommand& setPythonModuleList(const vector<string> & pythonModuleList) { DARABONBA_PTR_SET_VALUE(pythonModuleList_, pythonModuleList) };
    inline CreateBatchTaskRequestCreateCommand& setPythonModuleList(vector<string> && pythonModuleList) { DARABONBA_PTR_SET_RVALUE(pythonModuleList_, pythonModuleList) };


    // scheduleType Field Functions 
    bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
    void deleteScheduleType() { this->scheduleType_ = nullptr;};
    inline int32_t scheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, 0) };
    inline CreateBatchTaskRequestCreateCommand& setScheduleType(int32_t scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline int32_t taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0) };
    inline CreateBatchTaskRequestCreateCommand& setTaskType(int32_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    std::shared_ptr<string> dataSourceCatalog_ = nullptr;
    std::shared_ptr<string> dataSourceId_ = nullptr;
    std::shared_ptr<string> dataSourceSchema_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> directory_ = nullptr;
    std::shared_ptr<string> engine_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<vector<string>> pythonModuleList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> scheduleType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
