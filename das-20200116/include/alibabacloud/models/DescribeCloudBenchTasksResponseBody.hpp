// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDBENCHTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDBENCHTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeCloudBenchTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudBenchTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudBenchTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeCloudBenchTasksResponseBody() = default ;
    DescribeCloudBenchTasksResponseBody(const DescribeCloudBenchTasksResponseBody &) = default ;
    DescribeCloudBenchTasksResponseBody(DescribeCloudBenchTasksResponseBody &&) = default ;
    DescribeCloudBenchTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudBenchTasksResponseBody() = default ;
    DescribeCloudBenchTasksResponseBody& operator=(const DescribeCloudBenchTasksResponseBody &) = default ;
    DescribeCloudBenchTasksResponseBody& operator=(DescribeCloudBenchTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Extra, extra_);
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Extra, extra_);
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(cloudbenchTasks, cloudbenchTasks_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(cloudbenchTasks, cloudbenchTasks_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class CloudbenchTasks : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CloudbenchTasks& obj) { 
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
          friend void from_json(const Darabonba::Json& j, CloudbenchTasks& obj) { 
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
          CloudbenchTasks() = default ;
          CloudbenchTasks(const CloudbenchTasks &) = default ;
          CloudbenchTasks(CloudbenchTasks &&) = default ;
          CloudbenchTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CloudbenchTasks() = default ;
          CloudbenchTasks& operator=(const CloudbenchTasks &) = default ;
          CloudbenchTasks& operator=(CloudbenchTasks &&) = default ;
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
          inline CloudbenchTasks& setArchiveJobId(string archiveJobId) { DARABONBA_PTR_SET_VALUE(archiveJobId_, archiveJobId) };


          // archiveOssTableName Field Functions 
          bool hasArchiveOssTableName() const { return this->archiveOssTableName_ != nullptr;};
          void deleteArchiveOssTableName() { this->archiveOssTableName_ = nullptr;};
          inline string getArchiveOssTableName() const { DARABONBA_PTR_GET_DEFAULT(archiveOssTableName_, "") };
          inline CloudbenchTasks& setArchiveOssTableName(string archiveOssTableName) { DARABONBA_PTR_SET_VALUE(archiveOssTableName_, archiveOssTableName) };


          // archiveState Field Functions 
          bool hasArchiveState() const { return this->archiveState_ != nullptr;};
          void deleteArchiveState() { this->archiveState_ = nullptr;};
          inline int32_t getArchiveState() const { DARABONBA_PTR_GET_DEFAULT(archiveState_, 0) };
          inline CloudbenchTasks& setArchiveState(int32_t archiveState) { DARABONBA_PTR_SET_VALUE(archiveState_, archiveState) };


          // backupId Field Functions 
          bool hasBackupId() const { return this->backupId_ != nullptr;};
          void deleteBackupId() { this->backupId_ = nullptr;};
          inline string getBackupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
          inline CloudbenchTasks& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


          // backupType Field Functions 
          bool hasBackupType() const { return this->backupType_ != nullptr;};
          void deleteBackupType() { this->backupType_ = nullptr;};
          inline string getBackupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
          inline CloudbenchTasks& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


          // benchStep Field Functions 
          bool hasBenchStep() const { return this->benchStep_ != nullptr;};
          void deleteBenchStep() { this->benchStep_ = nullptr;};
          inline string getBenchStep() const { DARABONBA_PTR_GET_DEFAULT(benchStep_, "") };
          inline CloudbenchTasks& setBenchStep(string benchStep) { DARABONBA_PTR_SET_VALUE(benchStep_, benchStep) };


          // benchStepStatus Field Functions 
          bool hasBenchStepStatus() const { return this->benchStepStatus_ != nullptr;};
          void deleteBenchStepStatus() { this->benchStepStatus_ = nullptr;};
          inline string getBenchStepStatus() const { DARABONBA_PTR_GET_DEFAULT(benchStepStatus_, "") };
          inline CloudbenchTasks& setBenchStepStatus(string benchStepStatus) { DARABONBA_PTR_SET_VALUE(benchStepStatus_, benchStepStatus) };


          // clientGatewayId Field Functions 
          bool hasClientGatewayId() const { return this->clientGatewayId_ != nullptr;};
          void deleteClientGatewayId() { this->clientGatewayId_ = nullptr;};
          inline string getClientGatewayId() const { DARABONBA_PTR_GET_DEFAULT(clientGatewayId_, "") };
          inline CloudbenchTasks& setClientGatewayId(string clientGatewayId) { DARABONBA_PTR_SET_VALUE(clientGatewayId_, clientGatewayId) };


          // clientType Field Functions 
          bool hasClientType() const { return this->clientType_ != nullptr;};
          void deleteClientType() { this->clientType_ = nullptr;};
          inline string getClientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, "") };
          inline CloudbenchTasks& setClientType(string clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline CloudbenchTasks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // dstInstanceUuid Field Functions 
          bool hasDstInstanceUuid() const { return this->dstInstanceUuid_ != nullptr;};
          void deleteDstInstanceUuid() { this->dstInstanceUuid_ = nullptr;};
          inline string getDstInstanceUuid() const { DARABONBA_PTR_GET_DEFAULT(dstInstanceUuid_, "") };
          inline CloudbenchTasks& setDstInstanceUuid(string dstInstanceUuid) { DARABONBA_PTR_SET_VALUE(dstInstanceUuid_, dstInstanceUuid) };


          // dstIp Field Functions 
          bool hasDstIp() const { return this->dstIp_ != nullptr;};
          void deleteDstIp() { this->dstIp_ = nullptr;};
          inline string getDstIp() const { DARABONBA_PTR_GET_DEFAULT(dstIp_, "") };
          inline CloudbenchTasks& setDstIp(string dstIp) { DARABONBA_PTR_SET_VALUE(dstIp_, dstIp) };


          // dstPort Field Functions 
          bool hasDstPort() const { return this->dstPort_ != nullptr;};
          void deleteDstPort() { this->dstPort_ = nullptr;};
          inline int32_t getDstPort() const { DARABONBA_PTR_GET_DEFAULT(dstPort_, 0) };
          inline CloudbenchTasks& setDstPort(int32_t dstPort) { DARABONBA_PTR_SET_VALUE(dstPort_, dstPort) };


          // dstType Field Functions 
          bool hasDstType() const { return this->dstType_ != nullptr;};
          void deleteDstType() { this->dstType_ = nullptr;};
          inline string getDstType() const { DARABONBA_PTR_GET_DEFAULT(dstType_, "") };
          inline CloudbenchTasks& setDstType(string dstType) { DARABONBA_PTR_SET_VALUE(dstType_, dstType) };


          // dtsJobClass Field Functions 
          bool hasDtsJobClass() const { return this->dtsJobClass_ != nullptr;};
          void deleteDtsJobClass() { this->dtsJobClass_ = nullptr;};
          inline string getDtsJobClass() const { DARABONBA_PTR_GET_DEFAULT(dtsJobClass_, "") };
          inline CloudbenchTasks& setDtsJobClass(string dtsJobClass) { DARABONBA_PTR_SET_VALUE(dtsJobClass_, dtsJobClass) };


          // dtsJobId Field Functions 
          bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
          void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
          inline string getDtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
          inline CloudbenchTasks& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


          // dtsJobName Field Functions 
          bool hasDtsJobName() const { return this->dtsJobName_ != nullptr;};
          void deleteDtsJobName() { this->dtsJobName_ = nullptr;};
          inline string getDtsJobName() const { DARABONBA_PTR_GET_DEFAULT(dtsJobName_, "") };
          inline CloudbenchTasks& setDtsJobName(string dtsJobName) { DARABONBA_PTR_SET_VALUE(dtsJobName_, dtsJobName) };


          // dtsJobState Field Functions 
          bool hasDtsJobState() const { return this->dtsJobState_ != nullptr;};
          void deleteDtsJobState() { this->dtsJobState_ = nullptr;};
          inline int32_t getDtsJobState() const { DARABONBA_PTR_GET_DEFAULT(dtsJobState_, 0) };
          inline CloudbenchTasks& setDtsJobState(int32_t dtsJobState) { DARABONBA_PTR_SET_VALUE(dtsJobState_, dtsJobState) };


          // dtsJobStatus Field Functions 
          bool hasDtsJobStatus() const { return this->dtsJobStatus_ != nullptr;};
          void deleteDtsJobStatus() { this->dtsJobStatus_ = nullptr;};
          inline string getDtsJobStatus() const { DARABONBA_PTR_GET_DEFAULT(dtsJobStatus_, "") };
          inline CloudbenchTasks& setDtsJobStatus(string dtsJobStatus) { DARABONBA_PTR_SET_VALUE(dtsJobStatus_, dtsJobStatus) };


          // ecsInstanceId Field Functions 
          bool hasEcsInstanceId() const { return this->ecsInstanceId_ != nullptr;};
          void deleteEcsInstanceId() { this->ecsInstanceId_ = nullptr;};
          inline string getEcsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceId_, "") };
          inline CloudbenchTasks& setEcsInstanceId(string ecsInstanceId) { DARABONBA_PTR_SET_VALUE(ecsInstanceId_, ecsInstanceId) };


          // endState Field Functions 
          bool hasEndState() const { return this->endState_ != nullptr;};
          void deleteEndState() { this->endState_ = nullptr;};
          inline string getEndState() const { DARABONBA_PTR_GET_DEFAULT(endState_, "") };
          inline CloudbenchTasks& setEndState(string endState) { DARABONBA_PTR_SET_VALUE(endState_, endState) };


          // errorCode Field Functions 
          bool hasErrorCode() const { return this->errorCode_ != nullptr;};
          void deleteErrorCode() { this->errorCode_ = nullptr;};
          inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
          inline CloudbenchTasks& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline CloudbenchTasks& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // external Field Functions 
          bool hasExternal() const { return this->external_ != nullptr;};
          void deleteExternal() { this->external_ = nullptr;};
          inline string getExternal() const { DARABONBA_PTR_GET_DEFAULT(external_, "") };
          inline CloudbenchTasks& setExternal(string external) { DARABONBA_PTR_SET_VALUE(external_, external) };


          // rate Field Functions 
          bool hasRate() const { return this->rate_ != nullptr;};
          void deleteRate() { this->rate_ = nullptr;};
          inline int32_t getRate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0) };
          inline CloudbenchTasks& setRate(int32_t rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


          // requestDuration Field Functions 
          bool hasRequestDuration() const { return this->requestDuration_ != nullptr;};
          void deleteRequestDuration() { this->requestDuration_ = nullptr;};
          inline int64_t getRequestDuration() const { DARABONBA_PTR_GET_DEFAULT(requestDuration_, 0L) };
          inline CloudbenchTasks& setRequestDuration(int64_t requestDuration) { DARABONBA_PTR_SET_VALUE(requestDuration_, requestDuration) };


          // smartPressureTime Field Functions 
          bool hasSmartPressureTime() const { return this->smartPressureTime_ != nullptr;};
          void deleteSmartPressureTime() { this->smartPressureTime_ = nullptr;};
          inline int32_t getSmartPressureTime() const { DARABONBA_PTR_GET_DEFAULT(smartPressureTime_, 0) };
          inline CloudbenchTasks& setSmartPressureTime(int32_t smartPressureTime) { DARABONBA_PTR_SET_VALUE(smartPressureTime_, smartPressureTime) };


          // source Field Functions 
          bool hasSource() const { return this->source_ != nullptr;};
          void deleteSource() { this->source_ = nullptr;};
          inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
          inline CloudbenchTasks& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


          // sqlCompleteReuse Field Functions 
          bool hasSqlCompleteReuse() const { return this->sqlCompleteReuse_ != nullptr;};
          void deleteSqlCompleteReuse() { this->sqlCompleteReuse_ = nullptr;};
          inline string getSqlCompleteReuse() const { DARABONBA_PTR_GET_DEFAULT(sqlCompleteReuse_, "") };
          inline CloudbenchTasks& setSqlCompleteReuse(string sqlCompleteReuse) { DARABONBA_PTR_SET_VALUE(sqlCompleteReuse_, sqlCompleteReuse) };


          // srcInstanceArea Field Functions 
          bool hasSrcInstanceArea() const { return this->srcInstanceArea_ != nullptr;};
          void deleteSrcInstanceArea() { this->srcInstanceArea_ = nullptr;};
          inline string getSrcInstanceArea() const { DARABONBA_PTR_GET_DEFAULT(srcInstanceArea_, "") };
          inline CloudbenchTasks& setSrcInstanceArea(string srcInstanceArea) { DARABONBA_PTR_SET_VALUE(srcInstanceArea_, srcInstanceArea) };


          // srcInstanceUuid Field Functions 
          bool hasSrcInstanceUuid() const { return this->srcInstanceUuid_ != nullptr;};
          void deleteSrcInstanceUuid() { this->srcInstanceUuid_ = nullptr;};
          inline string getSrcInstanceUuid() const { DARABONBA_PTR_GET_DEFAULT(srcInstanceUuid_, "") };
          inline CloudbenchTasks& setSrcInstanceUuid(string srcInstanceUuid) { DARABONBA_PTR_SET_VALUE(srcInstanceUuid_, srcInstanceUuid) };


          // srcPublicIp Field Functions 
          bool hasSrcPublicIp() const { return this->srcPublicIp_ != nullptr;};
          void deleteSrcPublicIp() { this->srcPublicIp_ = nullptr;};
          inline string getSrcPublicIp() const { DARABONBA_PTR_GET_DEFAULT(srcPublicIp_, "") };
          inline CloudbenchTasks& setSrcPublicIp(string srcPublicIp) { DARABONBA_PTR_SET_VALUE(srcPublicIp_, srcPublicIp) };


          // state Field Functions 
          bool hasState() const { return this->state_ != nullptr;};
          void deleteState() { this->state_ = nullptr;};
          inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
          inline CloudbenchTasks& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline CloudbenchTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // tableSchema Field Functions 
          bool hasTableSchema() const { return this->tableSchema_ != nullptr;};
          void deleteTableSchema() { this->tableSchema_ = nullptr;};
          inline string getTableSchema() const { DARABONBA_PTR_GET_DEFAULT(tableSchema_, "") };
          inline CloudbenchTasks& setTableSchema(string tableSchema) { DARABONBA_PTR_SET_VALUE(tableSchema_, tableSchema) };


          // taskId Field Functions 
          bool hasTaskId() const { return this->taskId_ != nullptr;};
          void deleteTaskId() { this->taskId_ = nullptr;};
          inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
          inline CloudbenchTasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


          // taskType Field Functions 
          bool hasTaskType() const { return this->taskType_ != nullptr;};
          void deleteTaskType() { this->taskType_ = nullptr;};
          inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
          inline CloudbenchTasks& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


          // topic Field Functions 
          bool hasTopic() const { return this->topic_ != nullptr;};
          void deleteTopic() { this->topic_ = nullptr;};
          inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
          inline CloudbenchTasks& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


          // userId Field Functions 
          bool hasUserId() const { return this->userId_ != nullptr;};
          void deleteUserId() { this->userId_ = nullptr;};
          inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
          inline CloudbenchTasks& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


          // version Field Functions 
          bool hasVersion() const { return this->version_ != nullptr;};
          void deleteVersion() { this->version_ = nullptr;};
          inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
          inline CloudbenchTasks& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


          // workDir Field Functions 
          bool hasWorkDir() const { return this->workDir_ != nullptr;};
          void deleteWorkDir() { this->workDir_ = nullptr;};
          inline string getWorkDir() const { DARABONBA_PTR_GET_DEFAULT(workDir_, "") };
          inline CloudbenchTasks& setWorkDir(string workDir) { DARABONBA_PTR_SET_VALUE(workDir_, workDir) };


        protected:
          // The archiving task ID.
          shared_ptr<string> archiveJobId_ {};
          // The name of the table that was archived to Object Storage Service (OSS).
          shared_ptr<string> archiveOssTableName_ {};
          // The archiving status of the file that stores the analysis result of full SQL statistics. Valid values:
          // 
          // * **0**: The file archiving is not started.
          // * **1**: The file is archived.
          // * **2**: An error occurred.
          // * **3**: The file is being archived.
          // * **4**: The archived file does not need to be downloaded.
          shared_ptr<int32_t> archiveState_ {};
          // The ID of the backup set. You can call the [DescribeBackups](https://help.aliyun.com/document_detail/26273.html) operation to query the ID of the backup set.
          shared_ptr<string> backupId_ {};
          // The backup type. Valid values:
          // 
          // * **TIMESTAMP**: Data is restored to the state at a specific point in time.
          // * **BACKUPID**: Data is restored from a backup set that is identified by an ID.
          shared_ptr<string> backupType_ {};
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
          shared_ptr<string> benchStep_ {};
          // The status that indicates the substep performed for the stress testing task. Valid values:
          // 
          // * **NEW**: The task is being initialized.
          // * **RUNNING**: The task is running.
          // * **FAILED**: The task failed.
          // * **FINISHED**: The task is complete.
          // * **Terminated**: The task is terminated.
          // * **Deleted**: The task is deleted.
          shared_ptr<string> benchStepStatus_ {};
          // The DBGateway ID of the stress testing client.
          shared_ptr<string> clientGatewayId_ {};
          // The type of the stress testing client. Valid values:
          // 
          // * **ECS**: indicates that you must prepare the DBGateway.
          // * **DAS_ECS**: indicates that DAS automatically purchases and deploys an ECS instance for stress testing.
          shared_ptr<string> clientType_ {};
          // The description of the stress testing task.
          shared_ptr<string> description_ {};
          // The UUID of the destination instance.
          shared_ptr<string> dstInstanceUuid_ {};
          // The reserved parameter.
          shared_ptr<string> dstIp_ {};
          // The port number of the destination instance.
          shared_ptr<int32_t> dstPort_ {};
          // The type of the identifier that is used to indicate the destination instance. Valid values:
          // 
          // * **Instance** (default): the instance ID.
          // * **ConnectionString**: the endpoint of the instance.
          shared_ptr<string> dstType_ {};
          // The specification of the DTS instance.
          // 
          // > For more information about the specifications of DTS instances and the test performance of each instance, see [Specifications of data migration instances](https://help.aliyun.com/document_detail/26606.html).
          shared_ptr<string> dtsJobClass_ {};
          // The ID of the DTS migration task.
          shared_ptr<string> dtsJobId_ {};
          // The name of the Data Transmission Service (DTS) migration task.
          shared_ptr<string> dtsJobName_ {};
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
          shared_ptr<int32_t> dtsJobState_ {};
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
          shared_ptr<string> dtsJobStatus_ {};
          // The ID of the Elastic Compute Service (ECS) instance.
          shared_ptr<string> ecsInstanceId_ {};
          // The state that indicates the last operation performed for the stress testing task. Valid values:
          // 
          // * **WAIT_TARGET**: prepares the destination instance.
          // * **WAIT_DBGATEWAY**: prepares the DBGateway.
          // * **WAIT_SQL**: prepares the full SQL statistics.
          // * **WAIT_LOGIC**: prepares to replay the traffic.
          // 
          // > When the state of a stress testing task changes to the state that is specified by the EndState parameter, the stress testing task is complete.
          shared_ptr<string> endState_ {};
          // The error code returned for the substep of the stress testing task.
          shared_ptr<string> errorCode_ {};
          // The error message returned if the task failed.
          shared_ptr<string> errorMessage_ {};
          // The additional information.
          shared_ptr<string> external_ {};
          // The rate at which the stress testing task replayed the traffic. This value is a positive integer. Valid values: **0** to **30**. Default value: **1**.
          shared_ptr<int32_t> rate_ {};
          // The duration of the stress testing task. Unit: millisecond.
          shared_ptr<int64_t> requestDuration_ {};
          // The duration of the stress testing task of the smart pressure test type. Unit: millisecond.
          shared_ptr<int32_t> smartPressureTime_ {};
          // The source of the task. Valid values:
          // 
          // * **DAS**
          // * **OPEN_API**
          shared_ptr<string> source_ {};
          // The reused information about the analysis result of full SQL statistics.
          shared_ptr<string> sqlCompleteReuse_ {};
          // The database engine of the source instance. Valid values:
          shared_ptr<string> srcInstanceArea_ {};
          // The UUID of the source instance.
          shared_ptr<string> srcInstanceUuid_ {};
          // The reserved parameter.
          shared_ptr<string> srcPublicIp_ {};
          // The state that indicates the operation performed for the stress testing task. Valid values:
          // 
          // * **WAIT_TARGET**: prepares the destination instance.
          // * **WAIT_DBGATEWAY**: prepares the DBGateway.
          // * **WAIT_SQL**: prepares the full SQL statistics.
          // * **WAIT_LOGIC**: prepares to replay the traffic.
          shared_ptr<string> state_ {};
          // The status of the stress testing task. Valid values:
          // 
          // * **SUCCESS**: The task was successful.
          // * **IGNORED**: The task was ignored.
          // * **RUNNING**: The task is running.
          // * **EXCEPTION**: The task is abnormal.
          shared_ptr<string> status_ {};
          // The name of the table that is used for stress testing.
          shared_ptr<string> tableSchema_ {};
          // The task ID.
          shared_ptr<string> taskId_ {};
          // The type of the stress testing task. Valid values:
          // 
          // * **pressure test** (default): A task of this type replays the traffic that is captured from the source instance on the destination instance at the maximum playback rate that is supported by the destination instance.
          // * **smart pressure test**: A task of this type analyzes the traffic that is captured from the source instance over a short period of time and generates traffic on the destination instance for continuous stress testing. The business model based on which the traffic is generated on the destination instance and the traffic distribution are consistent with those on the source instance. Stress testing tasks of this type can help you reduce the amount of time that is consumed to collect data from the source instance and reduce storage costs and performance overheads.
          shared_ptr<string> taskType_ {};
          // The topic that contains the consumed data. This topic is a topic in Message Queue for Apache Kafka.
          shared_ptr<string> topic_ {};
          // The Alibaba Cloud account ID.
          shared_ptr<string> userId_ {};
          // The version of the stress testing task. Valid values:
          // 
          // * **V2.0**
          // * **V3.0**
          shared_ptr<string> version_ {};
          // The path of the temporary directory that is generated for stress testing.
          shared_ptr<string> workDir_ {};
        };

        virtual bool empty() const override { return this->cloudbenchTasks_ == nullptr; };
        // cloudbenchTasks Field Functions 
        bool hasCloudbenchTasks() const { return this->cloudbenchTasks_ != nullptr;};
        void deleteCloudbenchTasks() { this->cloudbenchTasks_ = nullptr;};
        inline const vector<List::CloudbenchTasks> & getCloudbenchTasks() const { DARABONBA_PTR_GET_CONST(cloudbenchTasks_, vector<List::CloudbenchTasks>) };
        inline vector<List::CloudbenchTasks> getCloudbenchTasks() { DARABONBA_PTR_GET(cloudbenchTasks_, vector<List::CloudbenchTasks>) };
        inline List& setCloudbenchTasks(const vector<List::CloudbenchTasks> & cloudbenchTasks) { DARABONBA_PTR_SET_VALUE(cloudbenchTasks_, cloudbenchTasks) };
        inline List& setCloudbenchTasks(vector<List::CloudbenchTasks> && cloudbenchTasks) { DARABONBA_PTR_SET_RVALUE(cloudbenchTasks_, cloudbenchTasks) };


      protected:
        shared_ptr<vector<List::CloudbenchTasks>> cloudbenchTasks_ {};
      };

      virtual bool empty() const override { return this->extra_ == nullptr
        && this->list_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // extra Field Functions 
      bool hasExtra() const { return this->extra_ != nullptr;};
      void deleteExtra() { this->extra_ = nullptr;};
      inline string getExtra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
      inline Data& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const Data::List & getList() const { DARABONBA_PTR_GET_CONST(list_, Data::List) };
      inline Data::List getList() { DARABONBA_PTR_GET(list_, Data::List) };
      inline Data& setList(const Data::List & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(Data::List && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
      inline Data& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The reserved parameter.
      shared_ptr<string> extra_ {};
      // The detailed information of the stress testing task.
      shared_ptr<Data::List> list_ {};
      // The page number.
      shared_ptr<int32_t> pageNo_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeCloudBenchTasksResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeCloudBenchTasksResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeCloudBenchTasksResponseBody::Data) };
    inline DescribeCloudBenchTasksResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeCloudBenchTasksResponseBody::Data) };
    inline DescribeCloudBenchTasksResponseBody& setData(const DescribeCloudBenchTasksResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeCloudBenchTasksResponseBody& setData(DescribeCloudBenchTasksResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeCloudBenchTasksResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudBenchTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeCloudBenchTasksResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<string> code_ {};
    // The detailed information, including the error codes and the number of entries that are returned.
    shared_ptr<DescribeCloudBenchTasksResponseBody::Data> data_ {};
    // The returned message.
    // 
    // >  If the request was successful, **Successful** is returned. If the request failed, an error message such as an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
