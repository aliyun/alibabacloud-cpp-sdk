// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITBATCHTASKREQUESTSUBMITCOMMAND_HPP_
#define ALIBABACLOUD_MODELS_SUBMITBATCHTASKREQUESTSUBMITCOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitBatchTaskRequestSubmitCommandCustomScheduleConfig.hpp>
#include <vector>
#include <alibabacloud/models/SubmitBatchTaskRequestSubmitCommandParamList.hpp>
#include <alibabacloud/models/SubmitBatchTaskRequestSubmitCommandSparkClientInfo.hpp>
#include <alibabacloud/models/SubmitBatchTaskRequestSubmitCommandUpStreamList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class SubmitBatchTaskRequestSubmitCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitBatchTaskRequestSubmitCommand& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_TO_JSON(CustomScheduleConfig, customScheduleConfig_);
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
      DARABONBA_PTR_TO_JSON(UpStreamList, upStreamList_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitBatchTaskRequestSubmitCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_FROM_JSON(CustomScheduleConfig, customScheduleConfig_);
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
      DARABONBA_PTR_FROM_JSON(UpStreamList, upStreamList_);
    };
    SubmitBatchTaskRequestSubmitCommand() = default ;
    SubmitBatchTaskRequestSubmitCommand(const SubmitBatchTaskRequestSubmitCommand &) = default ;
    SubmitBatchTaskRequestSubmitCommand(SubmitBatchTaskRequestSubmitCommand &&) = default ;
    SubmitBatchTaskRequestSubmitCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitBatchTaskRequestSubmitCommand() = default ;
    SubmitBatchTaskRequestSubmitCommand& operator=(const SubmitBatchTaskRequestSubmitCommand &) = default ;
    SubmitBatchTaskRequestSubmitCommand& operator=(SubmitBatchTaskRequestSubmitCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->comment_ == nullptr && return this->cronExpression_ == nullptr && return this->customScheduleConfig_ == nullptr && return this->engine_ == nullptr && return this->fileId_ == nullptr
        && return this->name_ == nullptr && return this->nodeDescription_ == nullptr && return this->nodeOutputNameList_ == nullptr && return this->nodeStatus_ == nullptr && return this->paramList_ == nullptr
        && return this->priority_ == nullptr && return this->projectId_ == nullptr && return this->pythonModuleList_ == nullptr && return this->schedulePeriod_ == nullptr && return this->sparkClientInfo_ == nullptr
        && return this->upStreamList_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SubmitBatchTaskRequestSubmitCommand& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline SubmitBatchTaskRequestSubmitCommand& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // cronExpression Field Functions 
    bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
    void deleteCronExpression() { this->cronExpression_ = nullptr;};
    inline string cronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
    inline SubmitBatchTaskRequestSubmitCommand& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


    // customScheduleConfig Field Functions 
    bool hasCustomScheduleConfig() const { return this->customScheduleConfig_ != nullptr;};
    void deleteCustomScheduleConfig() { this->customScheduleConfig_ = nullptr;};
    inline const Models::SubmitBatchTaskRequestSubmitCommandCustomScheduleConfig & customScheduleConfig() const { DARABONBA_PTR_GET_CONST(customScheduleConfig_, Models::SubmitBatchTaskRequestSubmitCommandCustomScheduleConfig) };
    inline Models::SubmitBatchTaskRequestSubmitCommandCustomScheduleConfig customScheduleConfig() { DARABONBA_PTR_GET(customScheduleConfig_, Models::SubmitBatchTaskRequestSubmitCommandCustomScheduleConfig) };
    inline SubmitBatchTaskRequestSubmitCommand& setCustomScheduleConfig(const Models::SubmitBatchTaskRequestSubmitCommandCustomScheduleConfig & customScheduleConfig) { DARABONBA_PTR_SET_VALUE(customScheduleConfig_, customScheduleConfig) };
    inline SubmitBatchTaskRequestSubmitCommand& setCustomScheduleConfig(Models::SubmitBatchTaskRequestSubmitCommandCustomScheduleConfig && customScheduleConfig) { DARABONBA_PTR_SET_RVALUE(customScheduleConfig_, customScheduleConfig) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline SubmitBatchTaskRequestSubmitCommand& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline int64_t fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
    inline SubmitBatchTaskRequestSubmitCommand& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SubmitBatchTaskRequestSubmitCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nodeDescription Field Functions 
    bool hasNodeDescription() const { return this->nodeDescription_ != nullptr;};
    void deleteNodeDescription() { this->nodeDescription_ = nullptr;};
    inline string nodeDescription() const { DARABONBA_PTR_GET_DEFAULT(nodeDescription_, "") };
    inline SubmitBatchTaskRequestSubmitCommand& setNodeDescription(string nodeDescription) { DARABONBA_PTR_SET_VALUE(nodeDescription_, nodeDescription) };


    // nodeOutputNameList Field Functions 
    bool hasNodeOutputNameList() const { return this->nodeOutputNameList_ != nullptr;};
    void deleteNodeOutputNameList() { this->nodeOutputNameList_ = nullptr;};
    inline const vector<string> & nodeOutputNameList() const { DARABONBA_PTR_GET_CONST(nodeOutputNameList_, vector<string>) };
    inline vector<string> nodeOutputNameList() { DARABONBA_PTR_GET(nodeOutputNameList_, vector<string>) };
    inline SubmitBatchTaskRequestSubmitCommand& setNodeOutputNameList(const vector<string> & nodeOutputNameList) { DARABONBA_PTR_SET_VALUE(nodeOutputNameList_, nodeOutputNameList) };
    inline SubmitBatchTaskRequestSubmitCommand& setNodeOutputNameList(vector<string> && nodeOutputNameList) { DARABONBA_PTR_SET_RVALUE(nodeOutputNameList_, nodeOutputNameList) };


    // nodeStatus Field Functions 
    bool hasNodeStatus() const { return this->nodeStatus_ != nullptr;};
    void deleteNodeStatus() { this->nodeStatus_ = nullptr;};
    inline int32_t nodeStatus() const { DARABONBA_PTR_GET_DEFAULT(nodeStatus_, 0) };
    inline SubmitBatchTaskRequestSubmitCommand& setNodeStatus(int32_t nodeStatus) { DARABONBA_PTR_SET_VALUE(nodeStatus_, nodeStatus) };


    // paramList Field Functions 
    bool hasParamList() const { return this->paramList_ != nullptr;};
    void deleteParamList() { this->paramList_ = nullptr;};
    inline const vector<Models::SubmitBatchTaskRequestSubmitCommandParamList> & paramList() const { DARABONBA_PTR_GET_CONST(paramList_, vector<Models::SubmitBatchTaskRequestSubmitCommandParamList>) };
    inline vector<Models::SubmitBatchTaskRequestSubmitCommandParamList> paramList() { DARABONBA_PTR_GET(paramList_, vector<Models::SubmitBatchTaskRequestSubmitCommandParamList>) };
    inline SubmitBatchTaskRequestSubmitCommand& setParamList(const vector<Models::SubmitBatchTaskRequestSubmitCommandParamList> & paramList) { DARABONBA_PTR_SET_VALUE(paramList_, paramList) };
    inline SubmitBatchTaskRequestSubmitCommand& setParamList(vector<Models::SubmitBatchTaskRequestSubmitCommandParamList> && paramList) { DARABONBA_PTR_SET_RVALUE(paramList_, paramList) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline SubmitBatchTaskRequestSubmitCommand& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline SubmitBatchTaskRequestSubmitCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // pythonModuleList Field Functions 
    bool hasPythonModuleList() const { return this->pythonModuleList_ != nullptr;};
    void deletePythonModuleList() { this->pythonModuleList_ = nullptr;};
    inline const vector<string> & pythonModuleList() const { DARABONBA_PTR_GET_CONST(pythonModuleList_, vector<string>) };
    inline vector<string> pythonModuleList() { DARABONBA_PTR_GET(pythonModuleList_, vector<string>) };
    inline SubmitBatchTaskRequestSubmitCommand& setPythonModuleList(const vector<string> & pythonModuleList) { DARABONBA_PTR_SET_VALUE(pythonModuleList_, pythonModuleList) };
    inline SubmitBatchTaskRequestSubmitCommand& setPythonModuleList(vector<string> && pythonModuleList) { DARABONBA_PTR_SET_RVALUE(pythonModuleList_, pythonModuleList) };


    // schedulePeriod Field Functions 
    bool hasSchedulePeriod() const { return this->schedulePeriod_ != nullptr;};
    void deleteSchedulePeriod() { this->schedulePeriod_ = nullptr;};
    inline string schedulePeriod() const { DARABONBA_PTR_GET_DEFAULT(schedulePeriod_, "") };
    inline SubmitBatchTaskRequestSubmitCommand& setSchedulePeriod(string schedulePeriod) { DARABONBA_PTR_SET_VALUE(schedulePeriod_, schedulePeriod) };


    // sparkClientInfo Field Functions 
    bool hasSparkClientInfo() const { return this->sparkClientInfo_ != nullptr;};
    void deleteSparkClientInfo() { this->sparkClientInfo_ = nullptr;};
    inline const Models::SubmitBatchTaskRequestSubmitCommandSparkClientInfo & sparkClientInfo() const { DARABONBA_PTR_GET_CONST(sparkClientInfo_, Models::SubmitBatchTaskRequestSubmitCommandSparkClientInfo) };
    inline Models::SubmitBatchTaskRequestSubmitCommandSparkClientInfo sparkClientInfo() { DARABONBA_PTR_GET(sparkClientInfo_, Models::SubmitBatchTaskRequestSubmitCommandSparkClientInfo) };
    inline SubmitBatchTaskRequestSubmitCommand& setSparkClientInfo(const Models::SubmitBatchTaskRequestSubmitCommandSparkClientInfo & sparkClientInfo) { DARABONBA_PTR_SET_VALUE(sparkClientInfo_, sparkClientInfo) };
    inline SubmitBatchTaskRequestSubmitCommand& setSparkClientInfo(Models::SubmitBatchTaskRequestSubmitCommandSparkClientInfo && sparkClientInfo) { DARABONBA_PTR_SET_RVALUE(sparkClientInfo_, sparkClientInfo) };


    // upStreamList Field Functions 
    bool hasUpStreamList() const { return this->upStreamList_ != nullptr;};
    void deleteUpStreamList() { this->upStreamList_ = nullptr;};
    inline const vector<Models::SubmitBatchTaskRequestSubmitCommandUpStreamList> & upStreamList() const { DARABONBA_PTR_GET_CONST(upStreamList_, vector<Models::SubmitBatchTaskRequestSubmitCommandUpStreamList>) };
    inline vector<Models::SubmitBatchTaskRequestSubmitCommandUpStreamList> upStreamList() { DARABONBA_PTR_GET(upStreamList_, vector<Models::SubmitBatchTaskRequestSubmitCommandUpStreamList>) };
    inline SubmitBatchTaskRequestSubmitCommand& setUpStreamList(const vector<Models::SubmitBatchTaskRequestSubmitCommandUpStreamList> & upStreamList) { DARABONBA_PTR_SET_VALUE(upStreamList_, upStreamList) };
    inline SubmitBatchTaskRequestSubmitCommand& setUpStreamList(vector<Models::SubmitBatchTaskRequestSubmitCommandUpStreamList> && upStreamList) { DARABONBA_PTR_SET_RVALUE(upStreamList_, upStreamList) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> code_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<string> cronExpression_ = nullptr;
    std::shared_ptr<Models::SubmitBatchTaskRequestSubmitCommandCustomScheduleConfig> customScheduleConfig_ = nullptr;
    std::shared_ptr<string> engine_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> fileId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> nodeDescription_ = nullptr;
    std::shared_ptr<vector<string>> nodeOutputNameList_ = nullptr;
    std::shared_ptr<int32_t> nodeStatus_ = nullptr;
    std::shared_ptr<vector<Models::SubmitBatchTaskRequestSubmitCommandParamList>> paramList_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<vector<string>> pythonModuleList_ = nullptr;
    std::shared_ptr<string> schedulePeriod_ = nullptr;
    std::shared_ptr<Models::SubmitBatchTaskRequestSubmitCommandSparkClientInfo> sparkClientInfo_ = nullptr;
    std::shared_ptr<vector<Models::SubmitBatchTaskRequestSubmitCommandUpStreamList>> upStreamList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
