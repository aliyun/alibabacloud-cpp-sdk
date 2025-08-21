// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDBENCHTASKSRESPONSEBODYDATALISTCLOUDBENCHTASKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDBENCHTASKSRESPONSEBODYDATALISTCLOUDBENCHTASKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& obj) { 
      DARABONBA_PTR_TO_JSON(ArchiveJobId, archiveJobId_);
      DARABONBA_PTR_TO_JSON(ArchiveOssTableName, archiveOssTableName_);
      DARABONBA_PTR_TO_JSON(ArchiveState, archiveState_);
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(BackupType, backupType_);
      DARABONBA_PTR_TO_JSON(BenchStep, benchStep_);
      DARABONBA_PTR_TO_JSON(BenchStepStatus, benchStepStatus_);
      DARABONBA_PTR_TO_JSON(ClientGatewayId, clientGatewayId_);
      DARABONBA_PTR_TO_JSON(ClientType, clientType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DstInstanceUuid, dstInstanceUuid_);
      DARABONBA_PTR_TO_JSON(DstIp, dstIp_);
      DARABONBA_PTR_TO_JSON(DstPort, dstPort_);
      DARABONBA_PTR_TO_JSON(DstType, dstType_);
      DARABONBA_PTR_TO_JSON(DtsJobClass, dtsJobClass_);
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(DtsJobName, dtsJobName_);
      DARABONBA_PTR_TO_JSON(DtsJobState, dtsJobState_);
      DARABONBA_PTR_TO_JSON(DtsJobStatus, dtsJobStatus_);
      DARABONBA_PTR_TO_JSON(EcsInstanceId, ecsInstanceId_);
      DARABONBA_PTR_TO_JSON(EndState, endState_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(External, external_);
      DARABONBA_PTR_TO_JSON(Rate, rate_);
      DARABONBA_PTR_TO_JSON(RequestDuration, requestDuration_);
      DARABONBA_PTR_TO_JSON(SmartPressureTime, smartPressureTime_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SqlCompleteReuse, sqlCompleteReuse_);
      DARABONBA_PTR_TO_JSON(SrcInstanceArea, srcInstanceArea_);
      DARABONBA_PTR_TO_JSON(SrcInstanceUuid, srcInstanceUuid_);
      DARABONBA_PTR_TO_JSON(SrcPublicIp, srcPublicIp_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TableSchema, tableSchema_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(WorkDir, workDir_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(ArchiveJobId, archiveJobId_);
      DARABONBA_PTR_FROM_JSON(ArchiveOssTableName, archiveOssTableName_);
      DARABONBA_PTR_FROM_JSON(ArchiveState, archiveState_);
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
      DARABONBA_PTR_FROM_JSON(BenchStep, benchStep_);
      DARABONBA_PTR_FROM_JSON(BenchStepStatus, benchStepStatus_);
      DARABONBA_PTR_FROM_JSON(ClientGatewayId, clientGatewayId_);
      DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DstInstanceUuid, dstInstanceUuid_);
      DARABONBA_PTR_FROM_JSON(DstIp, dstIp_);
      DARABONBA_PTR_FROM_JSON(DstPort, dstPort_);
      DARABONBA_PTR_FROM_JSON(DstType, dstType_);
      DARABONBA_PTR_FROM_JSON(DtsJobClass, dtsJobClass_);
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(DtsJobName, dtsJobName_);
      DARABONBA_PTR_FROM_JSON(DtsJobState, dtsJobState_);
      DARABONBA_PTR_FROM_JSON(DtsJobStatus, dtsJobStatus_);
      DARABONBA_PTR_FROM_JSON(EcsInstanceId, ecsInstanceId_);
      DARABONBA_PTR_FROM_JSON(EndState, endState_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(External, external_);
      DARABONBA_PTR_FROM_JSON(Rate, rate_);
      DARABONBA_PTR_FROM_JSON(RequestDuration, requestDuration_);
      DARABONBA_PTR_FROM_JSON(SmartPressureTime, smartPressureTime_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SqlCompleteReuse, sqlCompleteReuse_);
      DARABONBA_PTR_FROM_JSON(SrcInstanceArea, srcInstanceArea_);
      DARABONBA_PTR_FROM_JSON(SrcInstanceUuid, srcInstanceUuid_);
      DARABONBA_PTR_FROM_JSON(SrcPublicIp, srcPublicIp_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TableSchema, tableSchema_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(WorkDir, workDir_);
    };
    DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks() = default ;
    DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks(const DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks &) = default ;
    DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks(DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks &&) = default ;
    DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks() = default ;
    DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& operator=(const DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks &) = default ;
    DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& operator=(DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->archiveJobId_ != nullptr
        && this->archiveOssTableName_ != nullptr && this->archiveState_ != nullptr && this->backupId_ != nullptr && this->backupType_ != nullptr && this->benchStep_ != nullptr
        && this->benchStepStatus_ != nullptr && this->clientGatewayId_ != nullptr && this->clientType_ != nullptr && this->description_ != nullptr && this->dstInstanceUuid_ != nullptr
        && this->dstIp_ != nullptr && this->dstPort_ != nullptr && this->dstType_ != nullptr && this->dtsJobClass_ != nullptr && this->dtsJobId_ != nullptr
        && this->dtsJobName_ != nullptr && this->dtsJobState_ != nullptr && this->dtsJobStatus_ != nullptr && this->ecsInstanceId_ != nullptr && this->endState_ != nullptr
        && this->errorCode_ != nullptr && this->errorMessage_ != nullptr && this->external_ != nullptr && this->rate_ != nullptr && this->requestDuration_ != nullptr
        && this->smartPressureTime_ != nullptr && this->source_ != nullptr && this->sqlCompleteReuse_ != nullptr && this->srcInstanceArea_ != nullptr && this->srcInstanceUuid_ != nullptr
        && this->srcPublicIp_ != nullptr && this->state_ != nullptr && this->status_ != nullptr && this->tableSchema_ != nullptr && this->taskId_ != nullptr
        && this->taskType_ != nullptr && this->topic_ != nullptr && this->userId_ != nullptr && this->version_ != nullptr && this->workDir_ != nullptr; };
    // archiveJobId Field Functions 
    bool hasArchiveJobId() const { return this->archiveJobId_ != nullptr;};
    void deleteArchiveJobId() { this->archiveJobId_ = nullptr;};
    inline string archiveJobId() const { DARABONBA_PTR_GET_DEFAULT(archiveJobId_, "") };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setArchiveJobId(string archiveJobId) { DARABONBA_PTR_SET_VALUE(archiveJobId_, archiveJobId) };


    // archiveOssTableName Field Functions 
    bool hasArchiveOssTableName() const { return this->archiveOssTableName_ != nullptr;};
    void deleteArchiveOssTableName() { this->archiveOssTableName_ = nullptr;};
    inline string archiveOssTableName() const { DARABONBA_PTR_GET_DEFAULT(archiveOssTableName_, "") };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setArchiveOssTableName(string archiveOssTableName) { DARABONBA_PTR_SET_VALUE(archiveOssTableName_, archiveOssTableName) };


    // archiveState Field Functions 
    bool hasArchiveState() const { return this->archiveState_ != nullptr;};
    void deleteArchiveState() { this->archiveState_ = nullptr;};
    inline int32_t archiveState() const { DARABONBA_PTR_GET_DEFAULT(archiveState_, 0) };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setArchiveState(int32_t archiveState) { DARABONBA_PTR_SET_VALUE(archiveState_, archiveState) };


    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string backupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // backupType Field Functions 
    bool hasBackupType() const { return this->backupType_ != nullptr;};
    void deleteBackupType() { this->backupType_ = nullptr;};
    inline string backupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


    // benchStep Field Functions 
    bool hasBenchStep() const { return this->benchStep_ != nullptr;};
    void deleteBenchStep() { this->benchStep_ = nullptr;};
    inline string benchStep() const { DARABONBA_PTR_GET_DEFAULT(benchStep_, "") };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setBenchStep(string benchStep) { DARABONBA_PTR_SET_VALUE(benchStep_, benchStep) };


    // benchStepStatus Field Functions 
    bool hasBenchStepStatus() const { return this->benchStepStatus_ != nullptr;};
    void deleteBenchStepStatus() { this->benchStepStatus_ = nullptr;};
    inline string benchStepStatus() const { DARABONBA_PTR_GET_DEFAULT(benchStepStatus_, "") };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setBenchStepStatus(string benchStepStatus) { DARABONBA_PTR_SET_VALUE(benchStepStatus_, benchStepStatus) };


    // clientGatewayId Field Functions 
    bool hasClientGatewayId() const { return this->clientGatewayId_ != nullptr;};
    void deleteClientGatewayId() { this->clientGatewayId_ = nullptr;};
    inline string clientGatewayId() const { DARABONBA_PTR_GET_DEFAULT(clientGatewayId_, "") };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setClientGatewayId(string clientGatewayId) { DARABONBA_PTR_SET_VALUE(clientGatewayId_, clientGatewayId) };


    // clientType Field Functions 
    bool hasClientType() const { return this->clientType_ != nullptr;};
    void deleteClientType() { this->clientType_ = nullptr;};
    inline string clientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, "") };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setClientType(string clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dstInstanceUuid Field Functions 
    bool hasDstInstanceUuid() const { return this->dstInstanceUuid_ != nullptr;};
    void deleteDstInstanceUuid() { this->dstInstanceUuid_ = nullptr;};
    inline string dstInstanceUuid() const { DARABONBA_PTR_GET_DEFAULT(dstInstanceUuid_, "") };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setDstInstanceUuid(string dstInstanceUuid) { DARABONBA_PTR_SET_VALUE(dstInstanceUuid_, dstInstanceUuid) };


    // dstIp Field Functions 
    bool hasDstIp() const { return this->dstIp_ != nullptr;};
    void deleteDstIp() { this->dstIp_ = nullptr;};
    inline string dstIp() const { DARABONBA_PTR_GET_DEFAULT(dstIp_, "") };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setDstIp(string dstIp) { DARABONBA_PTR_SET_VALUE(dstIp_, dstIp) };


    // dstPort Field Functions 
    bool hasDstPort() const { return this->dstPort_ != nullptr;};
    void deleteDstPort() { this->dstPort_ = nullptr;};
    inline int32_t dstPort() const { DARABONBA_PTR_GET_DEFAULT(dstPort_, 0) };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setDstPort(int32_t dstPort) { DARABONBA_PTR_SET_VALUE(dstPort_, dstPort) };


    // dstType Field Functions 
    bool hasDstType() const { return this->dstType_ != nullptr;};
    void deleteDstType() { this->dstType_ = nullptr;};
    inline string dstType() const { DARABONBA_PTR_GET_DEFAULT(dstType_, "") };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setDstType(string dstType) { DARABONBA_PTR_SET_VALUE(dstType_, dstType) };


    // dtsJobClass Field Functions 
    bool hasDtsJobClass() const { return this->dtsJobClass_ != nullptr;};
    void deleteDtsJobClass() { this->dtsJobClass_ = nullptr;};
    inline string dtsJobClass() const { DARABONBA_PTR_GET_DEFAULT(dtsJobClass_, "") };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setDtsJobClass(string dtsJobClass) { DARABONBA_PTR_SET_VALUE(dtsJobClass_, dtsJobClass) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string dtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // dtsJobName Field Functions 
    bool hasDtsJobName() const { return this->dtsJobName_ != nullptr;};
    void deleteDtsJobName() { this->dtsJobName_ = nullptr;};
    inline string dtsJobName() const { DARABONBA_PTR_GET_DEFAULT(dtsJobName_, "") };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setDtsJobName(string dtsJobName) { DARABONBA_PTR_SET_VALUE(dtsJobName_, dtsJobName) };


    // dtsJobState Field Functions 
    bool hasDtsJobState() const { return this->dtsJobState_ != nullptr;};
    void deleteDtsJobState() { this->dtsJobState_ = nullptr;};
    inline int32_t dtsJobState() const { DARABONBA_PTR_GET_DEFAULT(dtsJobState_, 0) };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setDtsJobState(int32_t dtsJobState) { DARABONBA_PTR_SET_VALUE(dtsJobState_, dtsJobState) };


    // dtsJobStatus Field Functions 
    bool hasDtsJobStatus() const { return this->dtsJobStatus_ != nullptr;};
    void deleteDtsJobStatus() { this->dtsJobStatus_ = nullptr;};
    inline string dtsJobStatus() const { DARABONBA_PTR_GET_DEFAULT(dtsJobStatus_, "") };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setDtsJobStatus(string dtsJobStatus) { DARABONBA_PTR_SET_VALUE(dtsJobStatus_, dtsJobStatus) };


    // ecsInstanceId Field Functions 
    bool hasEcsInstanceId() const { return this->ecsInstanceId_ != nullptr;};
    void deleteEcsInstanceId() { this->ecsInstanceId_ = nullptr;};
    inline string ecsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceId_, "") };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setEcsInstanceId(string ecsInstanceId) { DARABONBA_PTR_SET_VALUE(ecsInstanceId_, ecsInstanceId) };


    // endState Field Functions 
    bool hasEndState() const { return this->endState_ != nullptr;};
    void deleteEndState() { this->endState_ = nullptr;};
    inline string endState() const { DARABONBA_PTR_GET_DEFAULT(endState_, "") };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setEndState(string endState) { DARABONBA_PTR_SET_VALUE(endState_, endState) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // external Field Functions 
    bool hasExternal() const { return this->external_ != nullptr;};
    void deleteExternal() { this->external_ = nullptr;};
    inline string external() const { DARABONBA_PTR_GET_DEFAULT(external_, "") };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setExternal(string external) { DARABONBA_PTR_SET_VALUE(external_, external) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline int32_t rate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0) };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setRate(int32_t rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


    // requestDuration Field Functions 
    bool hasRequestDuration() const { return this->requestDuration_ != nullptr;};
    void deleteRequestDuration() { this->requestDuration_ = nullptr;};
    inline int64_t requestDuration() const { DARABONBA_PTR_GET_DEFAULT(requestDuration_, 0L) };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setRequestDuration(int64_t requestDuration) { DARABONBA_PTR_SET_VALUE(requestDuration_, requestDuration) };


    // smartPressureTime Field Functions 
    bool hasSmartPressureTime() const { return this->smartPressureTime_ != nullptr;};
    void deleteSmartPressureTime() { this->smartPressureTime_ = nullptr;};
    inline int32_t smartPressureTime() const { DARABONBA_PTR_GET_DEFAULT(smartPressureTime_, 0) };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setSmartPressureTime(int32_t smartPressureTime) { DARABONBA_PTR_SET_VALUE(smartPressureTime_, smartPressureTime) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sqlCompleteReuse Field Functions 
    bool hasSqlCompleteReuse() const { return this->sqlCompleteReuse_ != nullptr;};
    void deleteSqlCompleteReuse() { this->sqlCompleteReuse_ = nullptr;};
    inline string sqlCompleteReuse() const { DARABONBA_PTR_GET_DEFAULT(sqlCompleteReuse_, "") };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setSqlCompleteReuse(string sqlCompleteReuse) { DARABONBA_PTR_SET_VALUE(sqlCompleteReuse_, sqlCompleteReuse) };


    // srcInstanceArea Field Functions 
    bool hasSrcInstanceArea() const { return this->srcInstanceArea_ != nullptr;};
    void deleteSrcInstanceArea() { this->srcInstanceArea_ = nullptr;};
    inline string srcInstanceArea() const { DARABONBA_PTR_GET_DEFAULT(srcInstanceArea_, "") };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setSrcInstanceArea(string srcInstanceArea) { DARABONBA_PTR_SET_VALUE(srcInstanceArea_, srcInstanceArea) };


    // srcInstanceUuid Field Functions 
    bool hasSrcInstanceUuid() const { return this->srcInstanceUuid_ != nullptr;};
    void deleteSrcInstanceUuid() { this->srcInstanceUuid_ = nullptr;};
    inline string srcInstanceUuid() const { DARABONBA_PTR_GET_DEFAULT(srcInstanceUuid_, "") };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setSrcInstanceUuid(string srcInstanceUuid) { DARABONBA_PTR_SET_VALUE(srcInstanceUuid_, srcInstanceUuid) };


    // srcPublicIp Field Functions 
    bool hasSrcPublicIp() const { return this->srcPublicIp_ != nullptr;};
    void deleteSrcPublicIp() { this->srcPublicIp_ = nullptr;};
    inline string srcPublicIp() const { DARABONBA_PTR_GET_DEFAULT(srcPublicIp_, "") };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setSrcPublicIp(string srcPublicIp) { DARABONBA_PTR_SET_VALUE(srcPublicIp_, srcPublicIp) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tableSchema Field Functions 
    bool hasTableSchema() const { return this->tableSchema_ != nullptr;};
    void deleteTableSchema() { this->tableSchema_ = nullptr;};
    inline string tableSchema() const { DARABONBA_PTR_GET_DEFAULT(tableSchema_, "") };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setTableSchema(string tableSchema) { DARABONBA_PTR_SET_VALUE(tableSchema_, tableSchema) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // workDir Field Functions 
    bool hasWorkDir() const { return this->workDir_ != nullptr;};
    void deleteWorkDir() { this->workDir_ = nullptr;};
    inline string workDir() const { DARABONBA_PTR_GET_DEFAULT(workDir_, "") };
    inline DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks& setWorkDir(string workDir) { DARABONBA_PTR_SET_VALUE(workDir_, workDir) };


  protected:
    // The archiving task ID.
    std::shared_ptr<string> archiveJobId_ = nullptr;
    // The name of the table that was archived to Object Storage Service (OSS).
    std::shared_ptr<string> archiveOssTableName_ = nullptr;
    // The archiving status of the file that stores the analysis result of full SQL statistics. Valid values:
    // 
    // * **0**: The file archiving is not started.
    // * **1**: The file is archived.
    // * **2**: An error occurred.
    // * **3**: The file is being archived.
    // * **4**: The archived file does not need to be downloaded.
    std::shared_ptr<int32_t> archiveState_ = nullptr;
    // The ID of the backup set. You can call the [DescribeBackups](https://help.aliyun.com/document_detail/26273.html) operation to query the ID of the backup set.
    std::shared_ptr<string> backupId_ = nullptr;
    // The backup type. Valid values:
    // 
    // * **TIMESTAMP**: Data is restored to the state at a specific point in time.
    // * **BACKUPID**: Data is restored from a backup set that is identified by an ID.
    std::shared_ptr<string> backupType_ = nullptr;
    // The substep in the stress testing task. Valid values:
    // 
    // * **NEW**: Initialize the stress testing task.
    // * **WAIT_BUY_ECS**: Purchase an ECS instance.
    // * **WAIT_START_ECS**: Start the ECS instance.
    // * **WAIT_INSTALL_JDK**: Install the Java Development Kit (JDK).
    // * **WAIT_INSTALL_DBGATEWAY**: Install the database gateway (DBGateway).
    // * **ADD_SECURITY_IPS_STEP**: Configure the whitelist of the security group.
    // * **ARCHIVE**: Archive the file that stores the analysis results of full SQL statistics.
    // * **DOWNLOAD**: Download the file that stores the analysis result of full SQL statistics.
    // * **PROCEED**: Preprocess the file that stores the analysis result of full SQL statistics.
    // * **PRE_LOAD**: Preload the file that stores the analysis result of full SQL statistics.
    // * **VALIDATE**: Verify the functionality of stress testing.
    // * **PRESSURE**: Start the stress testing task.
    std::shared_ptr<string> benchStep_ = nullptr;
    // The status that indicates the substep performed for the stress testing task. Valid values:
    // 
    // * **NEW**: The task is being initialized.
    // * **RUNNING**: The task is running.
    // * **FAILED**: The task failed.
    // * **FINISHED**: The task is complete.
    // * **Terminated**: The task is terminated.
    // * **Deleted**: The task is deleted.
    std::shared_ptr<string> benchStepStatus_ = nullptr;
    // The DBGateway ID of the stress testing client.
    std::shared_ptr<string> clientGatewayId_ = nullptr;
    // The type of the stress testing client. Valid values:
    // 
    // * **ECS**: indicates that you must prepare the DBGateway.
    // * **DAS_ECS**: indicates that DAS automatically purchases and deploys an ECS instance for stress testing.
    std::shared_ptr<string> clientType_ = nullptr;
    // The description of the stress testing task.
    std::shared_ptr<string> description_ = nullptr;
    // The UUID of the destination instance.
    std::shared_ptr<string> dstInstanceUuid_ = nullptr;
    // The reserved parameter.
    std::shared_ptr<string> dstIp_ = nullptr;
    // The port number of the destination instance.
    std::shared_ptr<int32_t> dstPort_ = nullptr;
    // The type of the identifier that is used to indicate the destination instance. Valid values:
    // 
    // * **Instance** (default): the instance ID.
    // * **ConnectionString**: the endpoint of the instance.
    std::shared_ptr<string> dstType_ = nullptr;
    // The specification of the DTS instance.
    // 
    // > For more information about the specifications of DTS instances and the test performance of each instance, see [Specifications of data migration instances](https://help.aliyun.com/document_detail/26606.html).
    std::shared_ptr<string> dtsJobClass_ = nullptr;
    // The ID of the DTS migration task.
    std::shared_ptr<string> dtsJobId_ = nullptr;
    // The name of the Data Transmission Service (DTS) migration task.
    std::shared_ptr<string> dtsJobName_ = nullptr;
    // The status of the DTS migration task. Valid values:
    // 
    // * **NOT_STARTED**: The task is not started.
    // * **PRE_CHECKING**: The task is in precheck.
    // * **PRE_CHECK_FAILED**: The precheck failed.
    // * **CHECKING**: The task is being checked.
    // * **MIGRATING**: The data is being migrated.
    // * **CATCHED**: The data is migrated from the source instance to the destination instance.
    // * **SUSPENDING**: The task is suspended.
    // * **MIGRATION_FAILED**: The data failed to be migrated.
    // * **FINISHED**: The task is complete.
    // * **INITIALIZING**: The synchronization is being initialized.
    // * **INITIALIZE_FAILED**: The synchronization failed to be initialized.
    // * **SYNCHRONIZING**: The data is being synchronized.
    // * **MODIFYING**: The roles of the instances are being changed.
    // * **SWITCHING**: The roles of the instances are being switched.
    // * **FAILED**: The task failed.
    std::shared_ptr<int32_t> dtsJobState_ = nullptr;
    // The status of the DTS migration task. Valid values:
    // 
    // * **NOT_STARTED**: The task is not started.
    // * **PRE_CHECKING**: The task is in precheck.
    // * **PRE_CHECK_FAILED**: The precheck failed.
    // * **CHECKING**: The task is being checked.
    // * **MIGRATING**: The data is being migrated.
    // * **CATCHED**: The data is migrated from the source instance to the destination instance.
    // * **SUSPENDING**: The task is suspended.
    // * **MIGRATION_FAILED**: The data failed to be migrated.
    // * **FINISHED**: The task is complete.
    // * **INITIALIZING**: The synchronization is being initialized.
    // * **INITIALIZE_FAILED**: The synchronization failed to be initialized.
    // * **SYNCHRONIZING**: The data is being synchronized.
    // * **MODIFYING**: The roles of the instances are being changed.
    // * **SWITCHING**: The roles of the instances are being switched.
    // * **FAILED**: The task failed.
    std::shared_ptr<string> dtsJobStatus_ = nullptr;
    // The ID of the Elastic Compute Service (ECS) instance.
    std::shared_ptr<string> ecsInstanceId_ = nullptr;
    // The state that indicates the last operation performed for the stress testing task. Valid values:
    // 
    // * **WAIT_TARGET**: prepares the destination instance.
    // * **WAIT_DBGATEWAY**: prepares the DBGateway.
    // * **WAIT_SQL**: prepares the full SQL statistics.
    // * **WAIT_LOGIC**: prepares to replay the traffic.
    // 
    // > When the state of a stress testing task changes to the state that is specified by the EndState parameter, the stress testing task is complete.
    std::shared_ptr<string> endState_ = nullptr;
    // The error code returned for the substep of the stress testing task.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the task failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The additional information.
    std::shared_ptr<string> external_ = nullptr;
    // The rate at which the stress testing task replayed the traffic. This value is a positive integer. Valid values: **0** to **30**. Default value: **1**.
    std::shared_ptr<int32_t> rate_ = nullptr;
    // The duration of the stress testing task. Unit: millisecond.
    std::shared_ptr<int64_t> requestDuration_ = nullptr;
    // The duration of the stress testing task of the smart pressure test type. Unit: millisecond.
    std::shared_ptr<int32_t> smartPressureTime_ = nullptr;
    // The source of the task. Valid values:
    // 
    // * **DAS**
    // * **OPEN_API**
    std::shared_ptr<string> source_ = nullptr;
    // The reused information about the analysis result of full SQL statistics.
    std::shared_ptr<string> sqlCompleteReuse_ = nullptr;
    // The database engine of the source instance. Valid values:
    std::shared_ptr<string> srcInstanceArea_ = nullptr;
    // The UUID of the source instance.
    std::shared_ptr<string> srcInstanceUuid_ = nullptr;
    // The reserved parameter.
    std::shared_ptr<string> srcPublicIp_ = nullptr;
    // The state that indicates the operation performed for the stress testing task. Valid values:
    // 
    // * **WAIT_TARGET**: prepares the destination instance.
    // * **WAIT_DBGATEWAY**: prepares the DBGateway.
    // * **WAIT_SQL**: prepares the full SQL statistics.
    // * **WAIT_LOGIC**: prepares to replay the traffic.
    std::shared_ptr<string> state_ = nullptr;
    // The status of the stress testing task. Valid values:
    // 
    // * **SUCCESS**: The task was successful.
    // * **IGNORED**: The task was ignored.
    // * **RUNNING**: The task is running.
    // * **EXCEPTION**: The task is abnormal.
    std::shared_ptr<string> status_ = nullptr;
    // The name of the table that is used for stress testing.
    std::shared_ptr<string> tableSchema_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
    // The type of the stress testing task. Valid values:
    // 
    // * **pressure test** (default): A task of this type replays the traffic that is captured from the source instance on the destination instance at the maximum playback rate that is supported by the destination instance.
    // * **smart pressure test**: A task of this type analyzes the traffic that is captured from the source instance over a short period of time and generates traffic on the destination instance for continuous stress testing. The business model based on which the traffic is generated on the destination instance and the traffic distribution are consistent with those on the source instance. Stress testing tasks of this type can help you reduce the amount of time that is consumed to collect data from the source instance and reduce storage costs and performance overheads.
    std::shared_ptr<string> taskType_ = nullptr;
    // The topic that contains the consumed data. This topic is a topic in Message Queue for Apache Kafka.
    std::shared_ptr<string> topic_ = nullptr;
    // The Alibaba Cloud account ID.
    std::shared_ptr<string> userId_ = nullptr;
    // The version of the stress testing task. Valid values:
    // 
    // * **V2.0**
    // * **V3.0**
    std::shared_ptr<string> version_ = nullptr;
    // The path of the temporary directory that is generated for stress testing.
    std::shared_ptr<string> workDir_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
