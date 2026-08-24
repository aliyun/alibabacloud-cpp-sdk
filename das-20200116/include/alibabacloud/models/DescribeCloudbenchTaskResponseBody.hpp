// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDBENCHTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDBENCHTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeCloudbenchTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudbenchTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudbenchTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeCloudbenchTaskResponseBody() = default ;
    DescribeCloudbenchTaskResponseBody(const DescribeCloudbenchTaskResponseBody &) = default ;
    DescribeCloudbenchTaskResponseBody(DescribeCloudbenchTaskResponseBody &&) = default ;
    DescribeCloudbenchTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudbenchTaskResponseBody() = default ;
    DescribeCloudbenchTaskResponseBody& operator=(const DescribeCloudbenchTaskResponseBody &) = default ;
    DescribeCloudbenchTaskResponseBody& operator=(DescribeCloudbenchTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->archiveJobId_ == nullptr
        && this->archiveOssTableName_ == nullptr && this->archiveState_ == nullptr && this->backupId_ == nullptr && this->backupType_ == nullptr && this->benchStep_ == nullptr
        && this->benchStepStatus_ == nullptr && this->clientGatewayId_ == nullptr && this->clientType_ == nullptr && this->description_ == nullptr && this->dstInstanceUuid_ == nullptr
        && this->dstIp_ == nullptr && this->dstPort_ == nullptr && this->dstType_ == nullptr && this->dtsJobClass_ == nullptr && this->dtsJobId_ == nullptr
        && this->dtsJobName_ == nullptr && this->dtsJobState_ == nullptr && this->dtsJobStatus_ == nullptr && this->ecsInstanceId_ == nullptr && this->endState_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->external_ == nullptr && this->rate_ == nullptr && this->requestDuration_ == nullptr
        && this->smartPressureTime_ == nullptr && this->source_ == nullptr && this->sqlCompleteReuse_ == nullptr && this->srcInstanceArea_ == nullptr && this->srcInstanceUuid_ == nullptr
        && this->srcPublicIp_ == nullptr && this->state_ == nullptr && this->status_ == nullptr && this->tableSchema_ == nullptr && this->taskId_ == nullptr
        && this->taskType_ == nullptr && this->topic_ == nullptr && this->userId_ == nullptr && this->version_ == nullptr && this->workDir_ == nullptr; };
      // archiveJobId Field Functions 
      bool hasArchiveJobId() const { return this->archiveJobId_ != nullptr;};
      void deleteArchiveJobId() { this->archiveJobId_ = nullptr;};
      inline string getArchiveJobId() const { DARABONBA_PTR_GET_DEFAULT(archiveJobId_, "") };
      inline Data& setArchiveJobId(string archiveJobId) { DARABONBA_PTR_SET_VALUE(archiveJobId_, archiveJobId) };


      // archiveOssTableName Field Functions 
      bool hasArchiveOssTableName() const { return this->archiveOssTableName_ != nullptr;};
      void deleteArchiveOssTableName() { this->archiveOssTableName_ = nullptr;};
      inline string getArchiveOssTableName() const { DARABONBA_PTR_GET_DEFAULT(archiveOssTableName_, "") };
      inline Data& setArchiveOssTableName(string archiveOssTableName) { DARABONBA_PTR_SET_VALUE(archiveOssTableName_, archiveOssTableName) };


      // archiveState Field Functions 
      bool hasArchiveState() const { return this->archiveState_ != nullptr;};
      void deleteArchiveState() { this->archiveState_ = nullptr;};
      inline int32_t getArchiveState() const { DARABONBA_PTR_GET_DEFAULT(archiveState_, 0) };
      inline Data& setArchiveState(int32_t archiveState) { DARABONBA_PTR_SET_VALUE(archiveState_, archiveState) };


      // backupId Field Functions 
      bool hasBackupId() const { return this->backupId_ != nullptr;};
      void deleteBackupId() { this->backupId_ = nullptr;};
      inline string getBackupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
      inline Data& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


      // backupType Field Functions 
      bool hasBackupType() const { return this->backupType_ != nullptr;};
      void deleteBackupType() { this->backupType_ = nullptr;};
      inline string getBackupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
      inline Data& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


      // benchStep Field Functions 
      bool hasBenchStep() const { return this->benchStep_ != nullptr;};
      void deleteBenchStep() { this->benchStep_ = nullptr;};
      inline string getBenchStep() const { DARABONBA_PTR_GET_DEFAULT(benchStep_, "") };
      inline Data& setBenchStep(string benchStep) { DARABONBA_PTR_SET_VALUE(benchStep_, benchStep) };


      // benchStepStatus Field Functions 
      bool hasBenchStepStatus() const { return this->benchStepStatus_ != nullptr;};
      void deleteBenchStepStatus() { this->benchStepStatus_ = nullptr;};
      inline string getBenchStepStatus() const { DARABONBA_PTR_GET_DEFAULT(benchStepStatus_, "") };
      inline Data& setBenchStepStatus(string benchStepStatus) { DARABONBA_PTR_SET_VALUE(benchStepStatus_, benchStepStatus) };


      // clientGatewayId Field Functions 
      bool hasClientGatewayId() const { return this->clientGatewayId_ != nullptr;};
      void deleteClientGatewayId() { this->clientGatewayId_ = nullptr;};
      inline string getClientGatewayId() const { DARABONBA_PTR_GET_DEFAULT(clientGatewayId_, "") };
      inline Data& setClientGatewayId(string clientGatewayId) { DARABONBA_PTR_SET_VALUE(clientGatewayId_, clientGatewayId) };


      // clientType Field Functions 
      bool hasClientType() const { return this->clientType_ != nullptr;};
      void deleteClientType() { this->clientType_ = nullptr;};
      inline string getClientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, "") };
      inline Data& setClientType(string clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // dstInstanceUuid Field Functions 
      bool hasDstInstanceUuid() const { return this->dstInstanceUuid_ != nullptr;};
      void deleteDstInstanceUuid() { this->dstInstanceUuid_ = nullptr;};
      inline string getDstInstanceUuid() const { DARABONBA_PTR_GET_DEFAULT(dstInstanceUuid_, "") };
      inline Data& setDstInstanceUuid(string dstInstanceUuid) { DARABONBA_PTR_SET_VALUE(dstInstanceUuid_, dstInstanceUuid) };


      // dstIp Field Functions 
      bool hasDstIp() const { return this->dstIp_ != nullptr;};
      void deleteDstIp() { this->dstIp_ = nullptr;};
      inline string getDstIp() const { DARABONBA_PTR_GET_DEFAULT(dstIp_, "") };
      inline Data& setDstIp(string dstIp) { DARABONBA_PTR_SET_VALUE(dstIp_, dstIp) };


      // dstPort Field Functions 
      bool hasDstPort() const { return this->dstPort_ != nullptr;};
      void deleteDstPort() { this->dstPort_ = nullptr;};
      inline int32_t getDstPort() const { DARABONBA_PTR_GET_DEFAULT(dstPort_, 0) };
      inline Data& setDstPort(int32_t dstPort) { DARABONBA_PTR_SET_VALUE(dstPort_, dstPort) };


      // dstType Field Functions 
      bool hasDstType() const { return this->dstType_ != nullptr;};
      void deleteDstType() { this->dstType_ = nullptr;};
      inline string getDstType() const { DARABONBA_PTR_GET_DEFAULT(dstType_, "") };
      inline Data& setDstType(string dstType) { DARABONBA_PTR_SET_VALUE(dstType_, dstType) };


      // dtsJobClass Field Functions 
      bool hasDtsJobClass() const { return this->dtsJobClass_ != nullptr;};
      void deleteDtsJobClass() { this->dtsJobClass_ = nullptr;};
      inline string getDtsJobClass() const { DARABONBA_PTR_GET_DEFAULT(dtsJobClass_, "") };
      inline Data& setDtsJobClass(string dtsJobClass) { DARABONBA_PTR_SET_VALUE(dtsJobClass_, dtsJobClass) };


      // dtsJobId Field Functions 
      bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
      void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
      inline string getDtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
      inline Data& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


      // dtsJobName Field Functions 
      bool hasDtsJobName() const { return this->dtsJobName_ != nullptr;};
      void deleteDtsJobName() { this->dtsJobName_ = nullptr;};
      inline string getDtsJobName() const { DARABONBA_PTR_GET_DEFAULT(dtsJobName_, "") };
      inline Data& setDtsJobName(string dtsJobName) { DARABONBA_PTR_SET_VALUE(dtsJobName_, dtsJobName) };


      // dtsJobState Field Functions 
      bool hasDtsJobState() const { return this->dtsJobState_ != nullptr;};
      void deleteDtsJobState() { this->dtsJobState_ = nullptr;};
      inline int32_t getDtsJobState() const { DARABONBA_PTR_GET_DEFAULT(dtsJobState_, 0) };
      inline Data& setDtsJobState(int32_t dtsJobState) { DARABONBA_PTR_SET_VALUE(dtsJobState_, dtsJobState) };


      // dtsJobStatus Field Functions 
      bool hasDtsJobStatus() const { return this->dtsJobStatus_ != nullptr;};
      void deleteDtsJobStatus() { this->dtsJobStatus_ = nullptr;};
      inline string getDtsJobStatus() const { DARABONBA_PTR_GET_DEFAULT(dtsJobStatus_, "") };
      inline Data& setDtsJobStatus(string dtsJobStatus) { DARABONBA_PTR_SET_VALUE(dtsJobStatus_, dtsJobStatus) };


      // ecsInstanceId Field Functions 
      bool hasEcsInstanceId() const { return this->ecsInstanceId_ != nullptr;};
      void deleteEcsInstanceId() { this->ecsInstanceId_ = nullptr;};
      inline string getEcsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceId_, "") };
      inline Data& setEcsInstanceId(string ecsInstanceId) { DARABONBA_PTR_SET_VALUE(ecsInstanceId_, ecsInstanceId) };


      // endState Field Functions 
      bool hasEndState() const { return this->endState_ != nullptr;};
      void deleteEndState() { this->endState_ = nullptr;};
      inline string getEndState() const { DARABONBA_PTR_GET_DEFAULT(endState_, "") };
      inline Data& setEndState(string endState) { DARABONBA_PTR_SET_VALUE(endState_, endState) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Data& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Data& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // external Field Functions 
      bool hasExternal() const { return this->external_ != nullptr;};
      void deleteExternal() { this->external_ = nullptr;};
      inline string getExternal() const { DARABONBA_PTR_GET_DEFAULT(external_, "") };
      inline Data& setExternal(string external) { DARABONBA_PTR_SET_VALUE(external_, external) };


      // rate Field Functions 
      bool hasRate() const { return this->rate_ != nullptr;};
      void deleteRate() { this->rate_ = nullptr;};
      inline int64_t getRate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0L) };
      inline Data& setRate(int64_t rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


      // requestDuration Field Functions 
      bool hasRequestDuration() const { return this->requestDuration_ != nullptr;};
      void deleteRequestDuration() { this->requestDuration_ = nullptr;};
      inline int64_t getRequestDuration() const { DARABONBA_PTR_GET_DEFAULT(requestDuration_, 0L) };
      inline Data& setRequestDuration(int64_t requestDuration) { DARABONBA_PTR_SET_VALUE(requestDuration_, requestDuration) };


      // smartPressureTime Field Functions 
      bool hasSmartPressureTime() const { return this->smartPressureTime_ != nullptr;};
      void deleteSmartPressureTime() { this->smartPressureTime_ = nullptr;};
      inline int32_t getSmartPressureTime() const { DARABONBA_PTR_GET_DEFAULT(smartPressureTime_, 0) };
      inline Data& setSmartPressureTime(int32_t smartPressureTime) { DARABONBA_PTR_SET_VALUE(smartPressureTime_, smartPressureTime) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Data& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // sqlCompleteReuse Field Functions 
      bool hasSqlCompleteReuse() const { return this->sqlCompleteReuse_ != nullptr;};
      void deleteSqlCompleteReuse() { this->sqlCompleteReuse_ = nullptr;};
      inline string getSqlCompleteReuse() const { DARABONBA_PTR_GET_DEFAULT(sqlCompleteReuse_, "") };
      inline Data& setSqlCompleteReuse(string sqlCompleteReuse) { DARABONBA_PTR_SET_VALUE(sqlCompleteReuse_, sqlCompleteReuse) };


      // srcInstanceArea Field Functions 
      bool hasSrcInstanceArea() const { return this->srcInstanceArea_ != nullptr;};
      void deleteSrcInstanceArea() { this->srcInstanceArea_ = nullptr;};
      inline string getSrcInstanceArea() const { DARABONBA_PTR_GET_DEFAULT(srcInstanceArea_, "") };
      inline Data& setSrcInstanceArea(string srcInstanceArea) { DARABONBA_PTR_SET_VALUE(srcInstanceArea_, srcInstanceArea) };


      // srcInstanceUuid Field Functions 
      bool hasSrcInstanceUuid() const { return this->srcInstanceUuid_ != nullptr;};
      void deleteSrcInstanceUuid() { this->srcInstanceUuid_ = nullptr;};
      inline string getSrcInstanceUuid() const { DARABONBA_PTR_GET_DEFAULT(srcInstanceUuid_, "") };
      inline Data& setSrcInstanceUuid(string srcInstanceUuid) { DARABONBA_PTR_SET_VALUE(srcInstanceUuid_, srcInstanceUuid) };


      // srcPublicIp Field Functions 
      bool hasSrcPublicIp() const { return this->srcPublicIp_ != nullptr;};
      void deleteSrcPublicIp() { this->srcPublicIp_ = nullptr;};
      inline string getSrcPublicIp() const { DARABONBA_PTR_GET_DEFAULT(srcPublicIp_, "") };
      inline Data& setSrcPublicIp(string srcPublicIp) { DARABONBA_PTR_SET_VALUE(srcPublicIp_, srcPublicIp) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Data& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tableSchema Field Functions 
      bool hasTableSchema() const { return this->tableSchema_ != nullptr;};
      void deleteTableSchema() { this->tableSchema_ = nullptr;};
      inline string getTableSchema() const { DARABONBA_PTR_GET_DEFAULT(tableSchema_, "") };
      inline Data& setTableSchema(string tableSchema) { DARABONBA_PTR_SET_VALUE(tableSchema_, tableSchema) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline Data& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // topic Field Functions 
      bool hasTopic() const { return this->topic_ != nullptr;};
      void deleteTopic() { this->topic_ = nullptr;};
      inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
      inline Data& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Data& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // workDir Field Functions 
      bool hasWorkDir() const { return this->workDir_ != nullptr;};
      void deleteWorkDir() { this->workDir_ = nullptr;};
      inline string getWorkDir() const { DARABONBA_PTR_GET_DEFAULT(workDir_, "") };
      inline Data& setWorkDir(string workDir) { DARABONBA_PTR_SET_VALUE(workDir_, workDir) };


    protected:
      // The archiving task ID.
      shared_ptr<string> archiveJobId_ {};
      // The name of the archived OSS table.
      shared_ptr<string> archiveOssTableName_ {};
      // The SQL archiving state. Valid values:
      // 
      // - **0**: not started.
      // - **1**: completed.
      // - **2**: error.
      // - **3**: running.
      // - **4**: no download required.
      shared_ptr<int32_t> archiveState_ {};
      // The backup set ID. You can call the [DescribeBackups](https://help.aliyun.com/document_detail/26273.html) operation to obtain the backup set ID.
      shared_ptr<string> backupId_ {};
      // The backup type. Valid values:
      // 
      // - **TIMESTAMP**: by backup time.
      // - **BACKUPID**: by backup set ID.
      shared_ptr<string> backupType_ {};
      // The substep of the stress testing task. Valid values:
      // 
      // - **NEW**: task initialization.
      // - **WAIT_BUY_ECS**: purchasing an ECS instance.
      // - **WAIT_START_ECS**: starting the ECS instance.
      // - **WAIT_INSTALL_JDK**: installing JDK.
      // - **WAIT_INSTALL_DBGATEWAY**: installing DBGateway.
      // - **ADD_SECURITY_IPS_STEP**: configuring the security group whitelist.
      // - **ARCHIVE**: archiving full SQL.
      // - **DOWNLOAD**: downloading the full SQL file.
      // - **PROCEED**: preprocessing the full SQL file.
      // - **PRE_LOAD**: preloading the full SQL file.
      // - **VALIDATE**: functional verification.
      // - **PRESSURE**: performance stress testing.
      shared_ptr<string> benchStep_ {};
      // The status of the stress testing substep. Valid values:
      // 
      // - **NEW**: task initialization.
      // - **RUNNING**: running.
      // - **FAILED**: failed.
      // - **FINISHED**: completed.
      // - **Terminated**: terminated.
      // - **Deleted**: deleted.
      shared_ptr<string> benchStepStatus_ {};
      // The database gateway ID of the stress testing machine.
      shared_ptr<string> clientGatewayId_ {};
      // The type of the stress testing machine. Valid values:
      // 
      // - **ECS**: You need to prepare the [Database Gateway](https://help.aliyun.com/document_detail/64905.html) on your own.
      // - **DAS_ECS**: an ECS instance automatically purchased and deployed by DAS.
      shared_ptr<string> clientType_ {};
      // The description of the stress testing task.
      shared_ptr<string> description_ {};
      // The unique identity of the target instance.
      shared_ptr<string> dstInstanceUuid_ {};
      // The reserved parameter.
      shared_ptr<string> dstIp_ {};
      // The port of the target instance.
      shared_ptr<int32_t> dstPort_ {};
      // The type of the target instance. Valid values:
      // - **Instance** (default): instance ID.
      // - **ConnectionString**: endpoint of the instance.
      shared_ptr<string> dstType_ {};
      // The DTS task specification.
      shared_ptr<string> dtsJobClass_ {};
      // The ID of the DTS migration task.
      shared_ptr<string> dtsJobId_ {};
      // The name of the Data Transmission Service (DTS) task.
      shared_ptr<string> dtsJobName_ {};
      // The DTS task state. Valid values:
      // 
      // - **NOT_STARTED**: not started.
      // - **PRE_CHECKING**: precheck in progress.
      // - **PRE_CHECK_FAILED**: precheck failed.
      // - **CHECKING**: checking.
      // - **MIGRATING**: migrating.
      // - **CATCHED**: caught up.
      // - **SUSPENDING**: suspending.
      // - **MIGRATION_FAILED**: migration failed.
      // - **FINISHED**: completed.
      // - **INITIALIZING**: synchronization initializing.
      // - **INITIALIZE_FAILED**: synchronization initialization failed.
      // - **SYNCHRONIZING**: synchronizing.
      // - **MODIFYING**: modifying synchronization objects.
      // - **SWITCHING**: switching.
      // - **FAILED**: failed.
      shared_ptr<int32_t> dtsJobState_ {};
      // The DTS task state. Valid values:
      // 
      // - **NOT_STARTED**: not started.
      // - **PRE_CHECKING**: precheck in progress.
      // - **PRE_CHECK_FAILED**: precheck failed.
      // - **CHECKING**: checking.
      // - **MIGRATING**: migrating.
      // - **CATCHED**: caught up.
      // - **SUSPENDING**: suspending.
      // - **MIGRATION_FAILED**: migration failed.
      // - **FINISHED**: completed.
      // - **INITIALIZING**: synchronization initializing.
      // - **INITIALIZE_FAILED**: synchronization initialization failed.
      // - **SYNCHRONIZING**: synchronizing.
      // - **MODIFYING**: modifying synchronization objects.
      // - **SWITCHING**: switching.
      // - **FAILED**: failed.
      shared_ptr<string> dtsJobStatus_ {};
      // The ECS instance ID.
      shared_ptr<string> ecsInstanceId_ {};
      // The state after the stress testing task ends. Valid values:
      // 
      // - **WAIT_TARGET**: preparing the target instance for stress testing.
      // - **WAIT_DBGATEWAY**: preparing the stress testing deployment.
      // - **WAIT_SQL**: preparing full SQL.
      // - **WAIT_LOGIC**: preparing to start traffic replay.
      // 
      // >After the stress testing task executes the state specified by EndState, the task directly reaches the completed state.
      shared_ptr<string> endState_ {};
      // The error code returned by the internal stress testing task.
      shared_ptr<string> errorCode_ {};
      // The error message returned when the task fails.
      shared_ptr<string> errorMessage_ {};
      // The additional information.
      shared_ptr<string> external_ {};
      // The stress testing rate multiplier. The replay rate must be a positive integer. Valid values: **0** to **30**. Default value: **1**.
      shared_ptr<int64_t> rate_ {};
      // The duration of the stress testing task.
      shared_ptr<int64_t> requestDuration_ {};
      // The generated stress testing duration. Unit: milliseconds.
      shared_ptr<int32_t> smartPressureTime_ {};
      // The task source. Valid values:
      // 
      // - **DAS**.
      // - **OPEN_API**.
      shared_ptr<string> source_ {};
      // The reuse information of the full SQL.
      shared_ptr<string> sqlCompleteReuse_ {};
      // The database type of the source instance.
      shared_ptr<string> srcInstanceArea_ {};
      // The UUID of the source instance.
      shared_ptr<string> srcInstanceUuid_ {};
      // The reserved parameter.
      shared_ptr<string> srcPublicIp_ {};
      // The current state of the stress testing task. Valid values:
      // 
      // - **WAIT_TARGET**: preparing the target instance for stress testing.
      // - **WAIT_DBGATEWAY**: preparing the stress testing deployment.
      // - **WAIT_SQL**: preparing full SQL.
      // - **WAIT_LOGIC**: preparing to start traffic replay.
      shared_ptr<string> state_ {};
      // The running status of the stress testing task. Valid values:
      // 
      // - **SUCCESS**: successful.
      // - **IGNORED**: ignored.
      // - **RUNNING**: running.
      // - **EXCEPTION**: abnormal.
      shared_ptr<string> status_ {};
      // The table names involved in the stress testing task.
      shared_ptr<string> tableSchema_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
      // The type of the stress testing task. Valid values:
      // - **pressure test** (default): intelligent stress testing. The traffic captured from the target instance is replayed on the destination instance at the maximum speed supported by the destination instance specifications.
      // - **smart pressure test**: generated stress testing. By analyzing and learning the traffic captured from the target instance within a short period of time, traffic that is consistent with the business model and traffic distribution of the original traffic is generated for continuous stress testing. This reduces the time required to collect data from the target instance and lowers storage costs and performance overhead.
      shared_ptr<string> taskType_ {};
      // The Kafka consumption topic.
      shared_ptr<string> topic_ {};
      // The Alibaba Cloud account ID.
      shared_ptr<string> userId_ {};
      // The version of the stress testing task. Valid values:
      // 
      // - **V2.0**
      // - **V3.0**
      shared_ptr<string> version_ {};
      // The temporary directory generated by the stress testing task.
      shared_ptr<string> workDir_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeCloudbenchTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeCloudbenchTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeCloudbenchTaskResponseBody::Data) };
    inline DescribeCloudbenchTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeCloudbenchTaskResponseBody::Data) };
    inline DescribeCloudbenchTaskResponseBody& setData(const DescribeCloudbenchTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeCloudbenchTaskResponseBody& setData(DescribeCloudbenchTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeCloudbenchTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudbenchTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeCloudbenchTaskResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The returned status code.
    shared_ptr<string> code_ {};
    // The detailed information, including the total number of entries and error codes.
    shared_ptr<DescribeCloudbenchTaskResponseBody::Data> data_ {};
    // The returned message.
    // >If the request is successful, **Successful** is returned. If the request fails, an error message is returned, such as an error code.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // - **true**: The request is successful.
    // - **false**: The request fails.
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
