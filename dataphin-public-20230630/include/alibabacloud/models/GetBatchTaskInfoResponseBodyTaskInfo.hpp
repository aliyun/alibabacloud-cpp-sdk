// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBATCHTASKINFORESPONSEBODYTASKINFO_HPP_
#define ALIBABACLOUD_MODELS_GETBATCHTASKINFORESPONSEBODYTASKINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetBatchTaskInfoResponseBodyTaskInfoCustomScheduleConfig.hpp>
#include <vector>
#include <alibabacloud/models/GetBatchTaskInfoResponseBodyTaskInfoParamList.hpp>
#include <alibabacloud/models/GetBatchTaskInfoResponseBodyTaskInfoSparkClientInfo.hpp>
#include <alibabacloud/models/GetBatchTaskInfoResponseBodyTaskInfoUpStreamList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetBatchTaskInfoResponseBodyTaskInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBatchTaskInfoResponseBodyTaskInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_TO_JSON(CustomScheduleConfig, customScheduleConfig_);
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(DataSourceCatalog, dataSourceCatalog_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(DataSourceSchema, dataSourceSchema_);
      DARABONBA_PTR_TO_JSON(DevelopOwnerId, developOwnerId_);
      DARABONBA_PTR_TO_JSON(DevelopOwnerName, developOwnerName_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(HasDevNode, hasDevNode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NeedPublish, needPublish_);
      DARABONBA_PTR_TO_JSON(NodeDescription, nodeDescription_);
      DARABONBA_PTR_TO_JSON(NodeFrom, nodeFrom_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(NodeOutputNameList, nodeOutputNameList_);
      DARABONBA_PTR_TO_JSON(NodeStatus, nodeStatus_);
      DARABONBA_PTR_TO_JSON(OperatorUserId, operatorUserId_);
      DARABONBA_PTR_TO_JSON(OpsOwnerId, opsOwnerId_);
      DARABONBA_PTR_TO_JSON(OpsOwnerName, opsOwnerName_);
      DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_TO_JSON(ParamList, paramList_);
      DARABONBA_PTR_TO_JSON(Paused, paused_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Published, published_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Rerunable, rerunable_);
      DARABONBA_PTR_TO_JSON(SchedulePeriod, schedulePeriod_);
      DARABONBA_PTR_TO_JSON(ScheduleType, scheduleType_);
      DARABONBA_PTR_TO_JSON(SparkClientInfo, sparkClientInfo_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(UpStreamList, upStreamList_);
    };
    friend void from_json(const Darabonba::Json& j, GetBatchTaskInfoResponseBodyTaskInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_FROM_JSON(CustomScheduleConfig, customScheduleConfig_);
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(DataSourceCatalog, dataSourceCatalog_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(DataSourceSchema, dataSourceSchema_);
      DARABONBA_PTR_FROM_JSON(DevelopOwnerId, developOwnerId_);
      DARABONBA_PTR_FROM_JSON(DevelopOwnerName, developOwnerName_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(HasDevNode, hasDevNode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NeedPublish, needPublish_);
      DARABONBA_PTR_FROM_JSON(NodeDescription, nodeDescription_);
      DARABONBA_PTR_FROM_JSON(NodeFrom, nodeFrom_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(NodeOutputNameList, nodeOutputNameList_);
      DARABONBA_PTR_FROM_JSON(NodeStatus, nodeStatus_);
      DARABONBA_PTR_FROM_JSON(OperatorUserId, operatorUserId_);
      DARABONBA_PTR_FROM_JSON(OpsOwnerId, opsOwnerId_);
      DARABONBA_PTR_FROM_JSON(OpsOwnerName, opsOwnerName_);
      DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_FROM_JSON(ParamList, paramList_);
      DARABONBA_PTR_FROM_JSON(Paused, paused_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Published, published_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Rerunable, rerunable_);
      DARABONBA_PTR_FROM_JSON(SchedulePeriod, schedulePeriod_);
      DARABONBA_PTR_FROM_JSON(ScheduleType, scheduleType_);
      DARABONBA_PTR_FROM_JSON(SparkClientInfo, sparkClientInfo_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(UpStreamList, upStreamList_);
    };
    GetBatchTaskInfoResponseBodyTaskInfo() = default ;
    GetBatchTaskInfoResponseBodyTaskInfo(const GetBatchTaskInfoResponseBodyTaskInfo &) = default ;
    GetBatchTaskInfoResponseBodyTaskInfo(GetBatchTaskInfoResponseBodyTaskInfo &&) = default ;
    GetBatchTaskInfoResponseBodyTaskInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBatchTaskInfoResponseBodyTaskInfo() = default ;
    GetBatchTaskInfoResponseBodyTaskInfo& operator=(const GetBatchTaskInfoResponseBodyTaskInfo &) = default ;
    GetBatchTaskInfoResponseBodyTaskInfo& operator=(GetBatchTaskInfoResponseBodyTaskInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->cronExpression_ != nullptr && this->customScheduleConfig_ != nullptr && this->dagId_ != nullptr && this->dataSourceCatalog_ != nullptr && this->dataSourceId_ != nullptr
        && this->dataSourceSchema_ != nullptr && this->developOwnerId_ != nullptr && this->developOwnerName_ != nullptr && this->fileId_ != nullptr && this->hasDevNode_ != nullptr
        && this->name_ != nullptr && this->needPublish_ != nullptr && this->nodeDescription_ != nullptr && this->nodeFrom_ != nullptr && this->nodeId_ != nullptr
        && this->nodeName_ != nullptr && this->nodeOutputNameList_ != nullptr && this->nodeStatus_ != nullptr && this->operatorUserId_ != nullptr && this->opsOwnerId_ != nullptr
        && this->opsOwnerName_ != nullptr && this->ownerName_ != nullptr && this->ownerUserId_ != nullptr && this->paramList_ != nullptr && this->paused_ != nullptr
        && this->priority_ != nullptr && this->projectId_ != nullptr && this->published_ != nullptr && this->remark_ != nullptr && this->rerunable_ != nullptr
        && this->schedulePeriod_ != nullptr && this->scheduleType_ != nullptr && this->sparkClientInfo_ != nullptr && this->status_ != nullptr && this->taskType_ != nullptr
        && this->upStreamList_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // cronExpression Field Functions 
    bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
    void deleteCronExpression() { this->cronExpression_ = nullptr;};
    inline string cronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


    // customScheduleConfig Field Functions 
    bool hasCustomScheduleConfig() const { return this->customScheduleConfig_ != nullptr;};
    void deleteCustomScheduleConfig() { this->customScheduleConfig_ = nullptr;};
    inline const Models::GetBatchTaskInfoResponseBodyTaskInfoCustomScheduleConfig & customScheduleConfig() const { DARABONBA_PTR_GET_CONST(customScheduleConfig_, Models::GetBatchTaskInfoResponseBodyTaskInfoCustomScheduleConfig) };
    inline Models::GetBatchTaskInfoResponseBodyTaskInfoCustomScheduleConfig customScheduleConfig() { DARABONBA_PTR_GET(customScheduleConfig_, Models::GetBatchTaskInfoResponseBodyTaskInfoCustomScheduleConfig) };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setCustomScheduleConfig(const Models::GetBatchTaskInfoResponseBodyTaskInfoCustomScheduleConfig & customScheduleConfig) { DARABONBA_PTR_SET_VALUE(customScheduleConfig_, customScheduleConfig) };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setCustomScheduleConfig(Models::GetBatchTaskInfoResponseBodyTaskInfoCustomScheduleConfig && customScheduleConfig) { DARABONBA_PTR_SET_RVALUE(customScheduleConfig_, customScheduleConfig) };


    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline string dagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, "") };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setDagId(string dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // dataSourceCatalog Field Functions 
    bool hasDataSourceCatalog() const { return this->dataSourceCatalog_ != nullptr;};
    void deleteDataSourceCatalog() { this->dataSourceCatalog_ = nullptr;};
    inline string dataSourceCatalog() const { DARABONBA_PTR_GET_DEFAULT(dataSourceCatalog_, "") };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setDataSourceCatalog(string dataSourceCatalog) { DARABONBA_PTR_SET_VALUE(dataSourceCatalog_, dataSourceCatalog) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // dataSourceSchema Field Functions 
    bool hasDataSourceSchema() const { return this->dataSourceSchema_ != nullptr;};
    void deleteDataSourceSchema() { this->dataSourceSchema_ = nullptr;};
    inline string dataSourceSchema() const { DARABONBA_PTR_GET_DEFAULT(dataSourceSchema_, "") };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setDataSourceSchema(string dataSourceSchema) { DARABONBA_PTR_SET_VALUE(dataSourceSchema_, dataSourceSchema) };


    // developOwnerId Field Functions 
    bool hasDevelopOwnerId() const { return this->developOwnerId_ != nullptr;};
    void deleteDevelopOwnerId() { this->developOwnerId_ = nullptr;};
    inline string developOwnerId() const { DARABONBA_PTR_GET_DEFAULT(developOwnerId_, "") };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setDevelopOwnerId(string developOwnerId) { DARABONBA_PTR_SET_VALUE(developOwnerId_, developOwnerId) };


    // developOwnerName Field Functions 
    bool hasDevelopOwnerName() const { return this->developOwnerName_ != nullptr;};
    void deleteDevelopOwnerName() { this->developOwnerName_ = nullptr;};
    inline string developOwnerName() const { DARABONBA_PTR_GET_DEFAULT(developOwnerName_, "") };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setDevelopOwnerName(string developOwnerName) { DARABONBA_PTR_SET_VALUE(developOwnerName_, developOwnerName) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline int64_t fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // hasDevNode Field Functions 
    bool hasHasDevNode() const { return this->hasDevNode_ != nullptr;};
    void deleteHasDevNode() { this->hasDevNode_ = nullptr;};
    inline bool hasDevNode() const { DARABONBA_PTR_GET_DEFAULT(hasDevNode_, false) };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setHasDevNode(bool hasDevNode) { DARABONBA_PTR_SET_VALUE(hasDevNode_, hasDevNode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // needPublish Field Functions 
    bool hasNeedPublish() const { return this->needPublish_ != nullptr;};
    void deleteNeedPublish() { this->needPublish_ = nullptr;};
    inline bool needPublish() const { DARABONBA_PTR_GET_DEFAULT(needPublish_, false) };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setNeedPublish(bool needPublish) { DARABONBA_PTR_SET_VALUE(needPublish_, needPublish) };


    // nodeDescription Field Functions 
    bool hasNodeDescription() const { return this->nodeDescription_ != nullptr;};
    void deleteNodeDescription() { this->nodeDescription_ = nullptr;};
    inline string nodeDescription() const { DARABONBA_PTR_GET_DEFAULT(nodeDescription_, "") };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setNodeDescription(string nodeDescription) { DARABONBA_PTR_SET_VALUE(nodeDescription_, nodeDescription) };


    // nodeFrom Field Functions 
    bool hasNodeFrom() const { return this->nodeFrom_ != nullptr;};
    void deleteNodeFrom() { this->nodeFrom_ = nullptr;};
    inline string nodeFrom() const { DARABONBA_PTR_GET_DEFAULT(nodeFrom_, "") };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setNodeFrom(string nodeFrom) { DARABONBA_PTR_SET_VALUE(nodeFrom_, nodeFrom) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // nodeOutputNameList Field Functions 
    bool hasNodeOutputNameList() const { return this->nodeOutputNameList_ != nullptr;};
    void deleteNodeOutputNameList() { this->nodeOutputNameList_ = nullptr;};
    inline const vector<string> & nodeOutputNameList() const { DARABONBA_PTR_GET_CONST(nodeOutputNameList_, vector<string>) };
    inline vector<string> nodeOutputNameList() { DARABONBA_PTR_GET(nodeOutputNameList_, vector<string>) };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setNodeOutputNameList(const vector<string> & nodeOutputNameList) { DARABONBA_PTR_SET_VALUE(nodeOutputNameList_, nodeOutputNameList) };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setNodeOutputNameList(vector<string> && nodeOutputNameList) { DARABONBA_PTR_SET_RVALUE(nodeOutputNameList_, nodeOutputNameList) };


    // nodeStatus Field Functions 
    bool hasNodeStatus() const { return this->nodeStatus_ != nullptr;};
    void deleteNodeStatus() { this->nodeStatus_ = nullptr;};
    inline int32_t nodeStatus() const { DARABONBA_PTR_GET_DEFAULT(nodeStatus_, 0) };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setNodeStatus(int32_t nodeStatus) { DARABONBA_PTR_SET_VALUE(nodeStatus_, nodeStatus) };


    // operatorUserId Field Functions 
    bool hasOperatorUserId() const { return this->operatorUserId_ != nullptr;};
    void deleteOperatorUserId() { this->operatorUserId_ = nullptr;};
    inline string operatorUserId() const { DARABONBA_PTR_GET_DEFAULT(operatorUserId_, "") };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setOperatorUserId(string operatorUserId) { DARABONBA_PTR_SET_VALUE(operatorUserId_, operatorUserId) };


    // opsOwnerId Field Functions 
    bool hasOpsOwnerId() const { return this->opsOwnerId_ != nullptr;};
    void deleteOpsOwnerId() { this->opsOwnerId_ = nullptr;};
    inline string opsOwnerId() const { DARABONBA_PTR_GET_DEFAULT(opsOwnerId_, "") };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setOpsOwnerId(string opsOwnerId) { DARABONBA_PTR_SET_VALUE(opsOwnerId_, opsOwnerId) };


    // opsOwnerName Field Functions 
    bool hasOpsOwnerName() const { return this->opsOwnerName_ != nullptr;};
    void deleteOpsOwnerName() { this->opsOwnerName_ = nullptr;};
    inline string opsOwnerName() const { DARABONBA_PTR_GET_DEFAULT(opsOwnerName_, "") };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setOpsOwnerName(string opsOwnerName) { DARABONBA_PTR_SET_VALUE(opsOwnerName_, opsOwnerName) };


    // ownerName Field Functions 
    bool hasOwnerName() const { return this->ownerName_ != nullptr;};
    void deleteOwnerName() { this->ownerName_ = nullptr;};
    inline string ownerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


    // ownerUserId Field Functions 
    bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
    void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
    inline string ownerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


    // paramList Field Functions 
    bool hasParamList() const { return this->paramList_ != nullptr;};
    void deleteParamList() { this->paramList_ = nullptr;};
    inline const vector<Models::GetBatchTaskInfoResponseBodyTaskInfoParamList> & paramList() const { DARABONBA_PTR_GET_CONST(paramList_, vector<Models::GetBatchTaskInfoResponseBodyTaskInfoParamList>) };
    inline vector<Models::GetBatchTaskInfoResponseBodyTaskInfoParamList> paramList() { DARABONBA_PTR_GET(paramList_, vector<Models::GetBatchTaskInfoResponseBodyTaskInfoParamList>) };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setParamList(const vector<Models::GetBatchTaskInfoResponseBodyTaskInfoParamList> & paramList) { DARABONBA_PTR_SET_VALUE(paramList_, paramList) };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setParamList(vector<Models::GetBatchTaskInfoResponseBodyTaskInfoParamList> && paramList) { DARABONBA_PTR_SET_RVALUE(paramList_, paramList) };


    // paused Field Functions 
    bool hasPaused() const { return this->paused_ != nullptr;};
    void deletePaused() { this->paused_ = nullptr;};
    inline bool paused() const { DARABONBA_PTR_GET_DEFAULT(paused_, false) };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setPaused(bool paused) { DARABONBA_PTR_SET_VALUE(paused_, paused) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // published Field Functions 
    bool hasPublished() const { return this->published_ != nullptr;};
    void deletePublished() { this->published_ = nullptr;};
    inline bool published() const { DARABONBA_PTR_GET_DEFAULT(published_, false) };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setPublished(bool published) { DARABONBA_PTR_SET_VALUE(published_, published) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // rerunable Field Functions 
    bool hasRerunable() const { return this->rerunable_ != nullptr;};
    void deleteRerunable() { this->rerunable_ = nullptr;};
    inline bool rerunable() const { DARABONBA_PTR_GET_DEFAULT(rerunable_, false) };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setRerunable(bool rerunable) { DARABONBA_PTR_SET_VALUE(rerunable_, rerunable) };


    // schedulePeriod Field Functions 
    bool hasSchedulePeriod() const { return this->schedulePeriod_ != nullptr;};
    void deleteSchedulePeriod() { this->schedulePeriod_ = nullptr;};
    inline string schedulePeriod() const { DARABONBA_PTR_GET_DEFAULT(schedulePeriod_, "") };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setSchedulePeriod(string schedulePeriod) { DARABONBA_PTR_SET_VALUE(schedulePeriod_, schedulePeriod) };


    // scheduleType Field Functions 
    bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
    void deleteScheduleType() { this->scheduleType_ = nullptr;};
    inline int32_t scheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, 0) };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setScheduleType(int32_t scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


    // sparkClientInfo Field Functions 
    bool hasSparkClientInfo() const { return this->sparkClientInfo_ != nullptr;};
    void deleteSparkClientInfo() { this->sparkClientInfo_ = nullptr;};
    inline const Models::GetBatchTaskInfoResponseBodyTaskInfoSparkClientInfo & sparkClientInfo() const { DARABONBA_PTR_GET_CONST(sparkClientInfo_, Models::GetBatchTaskInfoResponseBodyTaskInfoSparkClientInfo) };
    inline Models::GetBatchTaskInfoResponseBodyTaskInfoSparkClientInfo sparkClientInfo() { DARABONBA_PTR_GET(sparkClientInfo_, Models::GetBatchTaskInfoResponseBodyTaskInfoSparkClientInfo) };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setSparkClientInfo(const Models::GetBatchTaskInfoResponseBodyTaskInfoSparkClientInfo & sparkClientInfo) { DARABONBA_PTR_SET_VALUE(sparkClientInfo_, sparkClientInfo) };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setSparkClientInfo(Models::GetBatchTaskInfoResponseBodyTaskInfoSparkClientInfo && sparkClientInfo) { DARABONBA_PTR_SET_RVALUE(sparkClientInfo_, sparkClientInfo) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline int32_t taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0) };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setTaskType(int32_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // upStreamList Field Functions 
    bool hasUpStreamList() const { return this->upStreamList_ != nullptr;};
    void deleteUpStreamList() { this->upStreamList_ = nullptr;};
    inline const vector<Models::GetBatchTaskInfoResponseBodyTaskInfoUpStreamList> & upStreamList() const { DARABONBA_PTR_GET_CONST(upStreamList_, vector<Models::GetBatchTaskInfoResponseBodyTaskInfoUpStreamList>) };
    inline vector<Models::GetBatchTaskInfoResponseBodyTaskInfoUpStreamList> upStreamList() { DARABONBA_PTR_GET(upStreamList_, vector<Models::GetBatchTaskInfoResponseBodyTaskInfoUpStreamList>) };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setUpStreamList(const vector<Models::GetBatchTaskInfoResponseBodyTaskInfoUpStreamList> & upStreamList) { DARABONBA_PTR_SET_VALUE(upStreamList_, upStreamList) };
    inline GetBatchTaskInfoResponseBodyTaskInfo& setUpStreamList(vector<Models::GetBatchTaskInfoResponseBodyTaskInfoUpStreamList> && upStreamList) { DARABONBA_PTR_SET_RVALUE(upStreamList_, upStreamList) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> cronExpression_ = nullptr;
    std::shared_ptr<Models::GetBatchTaskInfoResponseBodyTaskInfoCustomScheduleConfig> customScheduleConfig_ = nullptr;
    std::shared_ptr<string> dagId_ = nullptr;
    std::shared_ptr<string> dataSourceCatalog_ = nullptr;
    std::shared_ptr<string> dataSourceId_ = nullptr;
    std::shared_ptr<string> dataSourceSchema_ = nullptr;
    std::shared_ptr<string> developOwnerId_ = nullptr;
    std::shared_ptr<string> developOwnerName_ = nullptr;
    std::shared_ptr<int64_t> fileId_ = nullptr;
    std::shared_ptr<bool> hasDevNode_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> needPublish_ = nullptr;
    std::shared_ptr<string> nodeDescription_ = nullptr;
    std::shared_ptr<string> nodeFrom_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<string> nodeName_ = nullptr;
    std::shared_ptr<vector<string>> nodeOutputNameList_ = nullptr;
    std::shared_ptr<int32_t> nodeStatus_ = nullptr;
    std::shared_ptr<string> operatorUserId_ = nullptr;
    std::shared_ptr<string> opsOwnerId_ = nullptr;
    std::shared_ptr<string> opsOwnerName_ = nullptr;
    std::shared_ptr<string> ownerName_ = nullptr;
    std::shared_ptr<string> ownerUserId_ = nullptr;
    std::shared_ptr<vector<Models::GetBatchTaskInfoResponseBodyTaskInfoParamList>> paramList_ = nullptr;
    std::shared_ptr<bool> paused_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<bool> published_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<bool> rerunable_ = nullptr;
    std::shared_ptr<string> schedulePeriod_ = nullptr;
    std::shared_ptr<int32_t> scheduleType_ = nullptr;
    std::shared_ptr<Models::GetBatchTaskInfoResponseBodyTaskInfoSparkClientInfo> sparkClientInfo_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int32_t> taskType_ = nullptr;
    std::shared_ptr<vector<Models::GetBatchTaskInfoResponseBodyTaskInfoUpStreamList>> upStreamList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
