// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBATCHTASKREQUESTUPDATECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBATCHTASKREQUESTUPDATECOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateBatchTaskRequestUpdateCommandCustomScheduleConfig.hpp>
#include <vector>
#include <alibabacloud/models/UpdateBatchTaskRequestUpdateCommandParamList.hpp>
#include <alibabacloud/models/UpdateBatchTaskRequestUpdateCommandSparkClientInfo.hpp>
#include <alibabacloud/models/UpdateBatchTaskRequestUpdateCommandUpStreamList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateBatchTaskRequestUpdateCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBatchTaskRequestUpdateCommand& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_TO_JSON(CustomScheduleConfig, customScheduleConfig_);
      DARABONBA_PTR_TO_JSON(DataSourceCatalog, dataSourceCatalog_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(DataSourceSchema, dataSourceSchema_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NodeDescription, nodeDescription_);
      DARABONBA_PTR_TO_JSON(NodeOutputNameList, nodeOutputNameList_);
      DARABONBA_PTR_TO_JSON(NodeStatus, nodeStatus_);
      DARABONBA_PTR_TO_JSON(ParamList, paramList_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(PythonModuleList, pythonModuleList_);
      DARABONBA_PTR_TO_JSON(SchedulePeriod, schedulePeriod_);
      DARABONBA_PTR_TO_JSON(SparkClientInfo, sparkClientInfo_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(UpStreamList, upStreamList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBatchTaskRequestUpdateCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_FROM_JSON(CustomScheduleConfig, customScheduleConfig_);
      DARABONBA_PTR_FROM_JSON(DataSourceCatalog, dataSourceCatalog_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(DataSourceSchema, dataSourceSchema_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NodeDescription, nodeDescription_);
      DARABONBA_PTR_FROM_JSON(NodeOutputNameList, nodeOutputNameList_);
      DARABONBA_PTR_FROM_JSON(NodeStatus, nodeStatus_);
      DARABONBA_PTR_FROM_JSON(ParamList, paramList_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(PythonModuleList, pythonModuleList_);
      DARABONBA_PTR_FROM_JSON(SchedulePeriod, schedulePeriod_);
      DARABONBA_PTR_FROM_JSON(SparkClientInfo, sparkClientInfo_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(UpStreamList, upStreamList_);
    };
    UpdateBatchTaskRequestUpdateCommand() = default ;
    UpdateBatchTaskRequestUpdateCommand(const UpdateBatchTaskRequestUpdateCommand &) = default ;
    UpdateBatchTaskRequestUpdateCommand(UpdateBatchTaskRequestUpdateCommand &&) = default ;
    UpdateBatchTaskRequestUpdateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBatchTaskRequestUpdateCommand() = default ;
    UpdateBatchTaskRequestUpdateCommand& operator=(const UpdateBatchTaskRequestUpdateCommand &) = default ;
    UpdateBatchTaskRequestUpdateCommand& operator=(UpdateBatchTaskRequestUpdateCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->cronExpression_ != nullptr && this->customScheduleConfig_ != nullptr && this->dataSourceCatalog_ != nullptr && this->dataSourceId_ != nullptr && this->dataSourceSchema_ != nullptr
        && this->engine_ != nullptr && this->fileId_ != nullptr && this->name_ != nullptr && this->nodeDescription_ != nullptr && this->nodeOutputNameList_ != nullptr
        && this->nodeStatus_ != nullptr && this->paramList_ != nullptr && this->priority_ != nullptr && this->projectId_ != nullptr && this->pythonModuleList_ != nullptr
        && this->schedulePeriod_ != nullptr && this->sparkClientInfo_ != nullptr && this->taskType_ != nullptr && this->upStreamList_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateBatchTaskRequestUpdateCommand& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // cronExpression Field Functions 
    bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
    void deleteCronExpression() { this->cronExpression_ = nullptr;};
    inline string cronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
    inline UpdateBatchTaskRequestUpdateCommand& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


    // customScheduleConfig Field Functions 
    bool hasCustomScheduleConfig() const { return this->customScheduleConfig_ != nullptr;};
    void deleteCustomScheduleConfig() { this->customScheduleConfig_ = nullptr;};
    inline const Models::UpdateBatchTaskRequestUpdateCommandCustomScheduleConfig & customScheduleConfig() const { DARABONBA_PTR_GET_CONST(customScheduleConfig_, Models::UpdateBatchTaskRequestUpdateCommandCustomScheduleConfig) };
    inline Models::UpdateBatchTaskRequestUpdateCommandCustomScheduleConfig customScheduleConfig() { DARABONBA_PTR_GET(customScheduleConfig_, Models::UpdateBatchTaskRequestUpdateCommandCustomScheduleConfig) };
    inline UpdateBatchTaskRequestUpdateCommand& setCustomScheduleConfig(const Models::UpdateBatchTaskRequestUpdateCommandCustomScheduleConfig & customScheduleConfig) { DARABONBA_PTR_SET_VALUE(customScheduleConfig_, customScheduleConfig) };
    inline UpdateBatchTaskRequestUpdateCommand& setCustomScheduleConfig(Models::UpdateBatchTaskRequestUpdateCommandCustomScheduleConfig && customScheduleConfig) { DARABONBA_PTR_SET_RVALUE(customScheduleConfig_, customScheduleConfig) };


    // dataSourceCatalog Field Functions 
    bool hasDataSourceCatalog() const { return this->dataSourceCatalog_ != nullptr;};
    void deleteDataSourceCatalog() { this->dataSourceCatalog_ = nullptr;};
    inline string dataSourceCatalog() const { DARABONBA_PTR_GET_DEFAULT(dataSourceCatalog_, "") };
    inline UpdateBatchTaskRequestUpdateCommand& setDataSourceCatalog(string dataSourceCatalog) { DARABONBA_PTR_SET_VALUE(dataSourceCatalog_, dataSourceCatalog) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline UpdateBatchTaskRequestUpdateCommand& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // dataSourceSchema Field Functions 
    bool hasDataSourceSchema() const { return this->dataSourceSchema_ != nullptr;};
    void deleteDataSourceSchema() { this->dataSourceSchema_ = nullptr;};
    inline string dataSourceSchema() const { DARABONBA_PTR_GET_DEFAULT(dataSourceSchema_, "") };
    inline UpdateBatchTaskRequestUpdateCommand& setDataSourceSchema(string dataSourceSchema) { DARABONBA_PTR_SET_VALUE(dataSourceSchema_, dataSourceSchema) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline UpdateBatchTaskRequestUpdateCommand& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline int64_t fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
    inline UpdateBatchTaskRequestUpdateCommand& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateBatchTaskRequestUpdateCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nodeDescription Field Functions 
    bool hasNodeDescription() const { return this->nodeDescription_ != nullptr;};
    void deleteNodeDescription() { this->nodeDescription_ = nullptr;};
    inline string nodeDescription() const { DARABONBA_PTR_GET_DEFAULT(nodeDescription_, "") };
    inline UpdateBatchTaskRequestUpdateCommand& setNodeDescription(string nodeDescription) { DARABONBA_PTR_SET_VALUE(nodeDescription_, nodeDescription) };


    // nodeOutputNameList Field Functions 
    bool hasNodeOutputNameList() const { return this->nodeOutputNameList_ != nullptr;};
    void deleteNodeOutputNameList() { this->nodeOutputNameList_ = nullptr;};
    inline const vector<string> & nodeOutputNameList() const { DARABONBA_PTR_GET_CONST(nodeOutputNameList_, vector<string>) };
    inline vector<string> nodeOutputNameList() { DARABONBA_PTR_GET(nodeOutputNameList_, vector<string>) };
    inline UpdateBatchTaskRequestUpdateCommand& setNodeOutputNameList(const vector<string> & nodeOutputNameList) { DARABONBA_PTR_SET_VALUE(nodeOutputNameList_, nodeOutputNameList) };
    inline UpdateBatchTaskRequestUpdateCommand& setNodeOutputNameList(vector<string> && nodeOutputNameList) { DARABONBA_PTR_SET_RVALUE(nodeOutputNameList_, nodeOutputNameList) };


    // nodeStatus Field Functions 
    bool hasNodeStatus() const { return this->nodeStatus_ != nullptr;};
    void deleteNodeStatus() { this->nodeStatus_ = nullptr;};
    inline int32_t nodeStatus() const { DARABONBA_PTR_GET_DEFAULT(nodeStatus_, 0) };
    inline UpdateBatchTaskRequestUpdateCommand& setNodeStatus(int32_t nodeStatus) { DARABONBA_PTR_SET_VALUE(nodeStatus_, nodeStatus) };


    // paramList Field Functions 
    bool hasParamList() const { return this->paramList_ != nullptr;};
    void deleteParamList() { this->paramList_ = nullptr;};
    inline const vector<Models::UpdateBatchTaskRequestUpdateCommandParamList> & paramList() const { DARABONBA_PTR_GET_CONST(paramList_, vector<Models::UpdateBatchTaskRequestUpdateCommandParamList>) };
    inline vector<Models::UpdateBatchTaskRequestUpdateCommandParamList> paramList() { DARABONBA_PTR_GET(paramList_, vector<Models::UpdateBatchTaskRequestUpdateCommandParamList>) };
    inline UpdateBatchTaskRequestUpdateCommand& setParamList(const vector<Models::UpdateBatchTaskRequestUpdateCommandParamList> & paramList) { DARABONBA_PTR_SET_VALUE(paramList_, paramList) };
    inline UpdateBatchTaskRequestUpdateCommand& setParamList(vector<Models::UpdateBatchTaskRequestUpdateCommandParamList> && paramList) { DARABONBA_PTR_SET_RVALUE(paramList_, paramList) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline UpdateBatchTaskRequestUpdateCommand& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateBatchTaskRequestUpdateCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // pythonModuleList Field Functions 
    bool hasPythonModuleList() const { return this->pythonModuleList_ != nullptr;};
    void deletePythonModuleList() { this->pythonModuleList_ = nullptr;};
    inline const vector<string> & pythonModuleList() const { DARABONBA_PTR_GET_CONST(pythonModuleList_, vector<string>) };
    inline vector<string> pythonModuleList() { DARABONBA_PTR_GET(pythonModuleList_, vector<string>) };
    inline UpdateBatchTaskRequestUpdateCommand& setPythonModuleList(const vector<string> & pythonModuleList) { DARABONBA_PTR_SET_VALUE(pythonModuleList_, pythonModuleList) };
    inline UpdateBatchTaskRequestUpdateCommand& setPythonModuleList(vector<string> && pythonModuleList) { DARABONBA_PTR_SET_RVALUE(pythonModuleList_, pythonModuleList) };


    // schedulePeriod Field Functions 
    bool hasSchedulePeriod() const { return this->schedulePeriod_ != nullptr;};
    void deleteSchedulePeriod() { this->schedulePeriod_ = nullptr;};
    inline string schedulePeriod() const { DARABONBA_PTR_GET_DEFAULT(schedulePeriod_, "") };
    inline UpdateBatchTaskRequestUpdateCommand& setSchedulePeriod(string schedulePeriod) { DARABONBA_PTR_SET_VALUE(schedulePeriod_, schedulePeriod) };


    // sparkClientInfo Field Functions 
    bool hasSparkClientInfo() const { return this->sparkClientInfo_ != nullptr;};
    void deleteSparkClientInfo() { this->sparkClientInfo_ = nullptr;};
    inline const Models::UpdateBatchTaskRequestUpdateCommandSparkClientInfo & sparkClientInfo() const { DARABONBA_PTR_GET_CONST(sparkClientInfo_, Models::UpdateBatchTaskRequestUpdateCommandSparkClientInfo) };
    inline Models::UpdateBatchTaskRequestUpdateCommandSparkClientInfo sparkClientInfo() { DARABONBA_PTR_GET(sparkClientInfo_, Models::UpdateBatchTaskRequestUpdateCommandSparkClientInfo) };
    inline UpdateBatchTaskRequestUpdateCommand& setSparkClientInfo(const Models::UpdateBatchTaskRequestUpdateCommandSparkClientInfo & sparkClientInfo) { DARABONBA_PTR_SET_VALUE(sparkClientInfo_, sparkClientInfo) };
    inline UpdateBatchTaskRequestUpdateCommand& setSparkClientInfo(Models::UpdateBatchTaskRequestUpdateCommandSparkClientInfo && sparkClientInfo) { DARABONBA_PTR_SET_RVALUE(sparkClientInfo_, sparkClientInfo) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline int32_t taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0) };
    inline UpdateBatchTaskRequestUpdateCommand& setTaskType(int32_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // upStreamList Field Functions 
    bool hasUpStreamList() const { return this->upStreamList_ != nullptr;};
    void deleteUpStreamList() { this->upStreamList_ = nullptr;};
    inline const vector<Models::UpdateBatchTaskRequestUpdateCommandUpStreamList> & upStreamList() const { DARABONBA_PTR_GET_CONST(upStreamList_, vector<Models::UpdateBatchTaskRequestUpdateCommandUpStreamList>) };
    inline vector<Models::UpdateBatchTaskRequestUpdateCommandUpStreamList> upStreamList() { DARABONBA_PTR_GET(upStreamList_, vector<Models::UpdateBatchTaskRequestUpdateCommandUpStreamList>) };
    inline UpdateBatchTaskRequestUpdateCommand& setUpStreamList(const vector<Models::UpdateBatchTaskRequestUpdateCommandUpStreamList> & upStreamList) { DARABONBA_PTR_SET_VALUE(upStreamList_, upStreamList) };
    inline UpdateBatchTaskRequestUpdateCommand& setUpStreamList(vector<Models::UpdateBatchTaskRequestUpdateCommandUpStreamList> && upStreamList) { DARABONBA_PTR_SET_RVALUE(upStreamList_, upStreamList) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> cronExpression_ = nullptr;
    std::shared_ptr<Models::UpdateBatchTaskRequestUpdateCommandCustomScheduleConfig> customScheduleConfig_ = nullptr;
    std::shared_ptr<string> dataSourceCatalog_ = nullptr;
    std::shared_ptr<string> dataSourceId_ = nullptr;
    std::shared_ptr<string> dataSourceSchema_ = nullptr;
    std::shared_ptr<string> engine_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> fileId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> nodeDescription_ = nullptr;
    std::shared_ptr<vector<string>> nodeOutputNameList_ = nullptr;
    std::shared_ptr<int32_t> nodeStatus_ = nullptr;
    std::shared_ptr<vector<Models::UpdateBatchTaskRequestUpdateCommandParamList>> paramList_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<vector<string>> pythonModuleList_ = nullptr;
    std::shared_ptr<string> schedulePeriod_ = nullptr;
    std::shared_ptr<Models::UpdateBatchTaskRequestUpdateCommandSparkClientInfo> sparkClientInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> taskType_ = nullptr;
    std::shared_ptr<vector<Models::UpdateBatchTaskRequestUpdateCommandUpStreamList>> upStreamList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
