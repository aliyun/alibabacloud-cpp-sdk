// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTOREJOBSRESPONSEBODYRESTOREJOBS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTOREJOBSRESPONSEBODYRESTOREJOBS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeRestoreJobsResponseBodyRestoreJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRestoreJobsResponseBodyRestoreJobs& obj) { 
      DARABONBA_PTR_TO_JSON(ActualBytes, actualBytes_);
      DARABONBA_PTR_TO_JSON(BytesDone, bytesDone_);
      DARABONBA_PTR_TO_JSON(BytesTotal, bytesTotal_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(ErrorCount, errorCount_);
      DARABONBA_PTR_TO_JSON(ErrorFile, errorFile_);
      DARABONBA_PTR_TO_JSON(ErrorFileUrl, errorFileUrl_);
      DARABONBA_PTR_TO_JSON(ErrorType, errorType_);
      DARABONBA_PTR_TO_JSON(Eta, eta_);
      DARABONBA_PTR_TO_JSON(Excludes, excludes_);
      DARABONBA_PTR_TO_JSON(ExitCode, exitCode_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Includes, includes_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(ItemsDone, itemsDone_);
      DARABONBA_PTR_TO_JSON(ItemsTotal, itemsTotal_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Percentage, percentage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RestoreId, restoreId_);
      DARABONBA_PTR_TO_JSON(RestoreName, restoreName_);
      DARABONBA_PTR_TO_JSON(RestoreType, restoreType_);
      DARABONBA_PTR_TO_JSON(SnapshotHash, snapshotHash_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(SnapshotVersion, snapshotVersion_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceClientId, sourceClientId_);
      DARABONBA_PTR_TO_JSON(Speed, speed_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
      DARABONBA_PTR_TO_JSON(VaultRegionId, vaultRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRestoreJobsResponseBodyRestoreJobs& obj) { 
      DARABONBA_PTR_FROM_JSON(ActualBytes, actualBytes_);
      DARABONBA_PTR_FROM_JSON(BytesDone, bytesDone_);
      DARABONBA_PTR_FROM_JSON(BytesTotal, bytesTotal_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(ErrorCount, errorCount_);
      DARABONBA_PTR_FROM_JSON(ErrorFile, errorFile_);
      DARABONBA_PTR_FROM_JSON(ErrorFileUrl, errorFileUrl_);
      DARABONBA_PTR_FROM_JSON(ErrorType, errorType_);
      DARABONBA_PTR_FROM_JSON(Eta, eta_);
      DARABONBA_PTR_FROM_JSON(Excludes, excludes_);
      DARABONBA_PTR_FROM_JSON(ExitCode, exitCode_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Includes, includes_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(ItemsDone, itemsDone_);
      DARABONBA_PTR_FROM_JSON(ItemsTotal, itemsTotal_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RestoreId, restoreId_);
      DARABONBA_PTR_FROM_JSON(RestoreName, restoreName_);
      DARABONBA_PTR_FROM_JSON(RestoreType, restoreType_);
      DARABONBA_PTR_FROM_JSON(SnapshotHash, snapshotHash_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(SnapshotVersion, snapshotVersion_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourceClientId, sourceClientId_);
      DARABONBA_PTR_FROM_JSON(Speed, speed_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
      DARABONBA_PTR_FROM_JSON(VaultRegionId, vaultRegionId_);
    };
    DescribeRestoreJobsResponseBodyRestoreJobs() = default ;
    DescribeRestoreJobsResponseBodyRestoreJobs(const DescribeRestoreJobsResponseBodyRestoreJobs &) = default ;
    DescribeRestoreJobsResponseBodyRestoreJobs(DescribeRestoreJobsResponseBodyRestoreJobs &&) = default ;
    DescribeRestoreJobsResponseBodyRestoreJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRestoreJobsResponseBodyRestoreJobs() = default ;
    DescribeRestoreJobsResponseBodyRestoreJobs& operator=(const DescribeRestoreJobsResponseBodyRestoreJobs &) = default ;
    DescribeRestoreJobsResponseBodyRestoreJobs& operator=(DescribeRestoreJobsResponseBodyRestoreJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actualBytes_ != nullptr
        && this->bytesDone_ != nullptr && this->bytesTotal_ != nullptr && this->clientId_ != nullptr && this->completeTime_ != nullptr && this->createdTime_ != nullptr
        && this->duration_ != nullptr && this->errorCount_ != nullptr && this->errorFile_ != nullptr && this->errorFileUrl_ != nullptr && this->errorType_ != nullptr
        && this->eta_ != nullptr && this->excludes_ != nullptr && this->exitCode_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr
        && this->includes_ != nullptr && this->instanceId_ != nullptr && this->instanceName_ != nullptr && this->internetIp_ != nullptr && this->intranetIp_ != nullptr
        && this->itemsDone_ != nullptr && this->itemsTotal_ != nullptr && this->message_ != nullptr && this->percentage_ != nullptr && this->requestId_ != nullptr
        && this->restoreId_ != nullptr && this->restoreName_ != nullptr && this->restoreType_ != nullptr && this->snapshotHash_ != nullptr && this->snapshotId_ != nullptr
        && this->snapshotVersion_ != nullptr && this->source_ != nullptr && this->sourceClientId_ != nullptr && this->speed_ != nullptr && this->status_ != nullptr
        && this->target_ != nullptr && this->updatedTime_ != nullptr && this->uuid_ != nullptr && this->vaultId_ != nullptr && this->vaultRegionId_ != nullptr; };
    // actualBytes Field Functions 
    bool hasActualBytes() const { return this->actualBytes_ != nullptr;};
    void deleteActualBytes() { this->actualBytes_ = nullptr;};
    inline int64_t actualBytes() const { DARABONBA_PTR_GET_DEFAULT(actualBytes_, 0L) };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setActualBytes(int64_t actualBytes) { DARABONBA_PTR_SET_VALUE(actualBytes_, actualBytes) };


    // bytesDone Field Functions 
    bool hasBytesDone() const { return this->bytesDone_ != nullptr;};
    void deleteBytesDone() { this->bytesDone_ = nullptr;};
    inline int64_t bytesDone() const { DARABONBA_PTR_GET_DEFAULT(bytesDone_, 0L) };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setBytesDone(int64_t bytesDone) { DARABONBA_PTR_SET_VALUE(bytesDone_, bytesDone) };


    // bytesTotal Field Functions 
    bool hasBytesTotal() const { return this->bytesTotal_ != nullptr;};
    void deleteBytesTotal() { this->bytesTotal_ = nullptr;};
    inline int64_t bytesTotal() const { DARABONBA_PTR_GET_DEFAULT(bytesTotal_, 0L) };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setBytesTotal(int64_t bytesTotal) { DARABONBA_PTR_SET_VALUE(bytesTotal_, bytesTotal) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // completeTime Field Functions 
    bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
    void deleteCompleteTime() { this->completeTime_ = nullptr;};
    inline int64_t completeTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, 0L) };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setCompleteTime(int64_t completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // errorCount Field Functions 
    bool hasErrorCount() const { return this->errorCount_ != nullptr;};
    void deleteErrorCount() { this->errorCount_ = nullptr;};
    inline int64_t errorCount() const { DARABONBA_PTR_GET_DEFAULT(errorCount_, 0L) };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setErrorCount(int64_t errorCount) { DARABONBA_PTR_SET_VALUE(errorCount_, errorCount) };


    // errorFile Field Functions 
    bool hasErrorFile() const { return this->errorFile_ != nullptr;};
    void deleteErrorFile() { this->errorFile_ = nullptr;};
    inline string errorFile() const { DARABONBA_PTR_GET_DEFAULT(errorFile_, "") };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setErrorFile(string errorFile) { DARABONBA_PTR_SET_VALUE(errorFile_, errorFile) };


    // errorFileUrl Field Functions 
    bool hasErrorFileUrl() const { return this->errorFileUrl_ != nullptr;};
    void deleteErrorFileUrl() { this->errorFileUrl_ = nullptr;};
    inline string errorFileUrl() const { DARABONBA_PTR_GET_DEFAULT(errorFileUrl_, "") };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setErrorFileUrl(string errorFileUrl) { DARABONBA_PTR_SET_VALUE(errorFileUrl_, errorFileUrl) };


    // errorType Field Functions 
    bool hasErrorType() const { return this->errorType_ != nullptr;};
    void deleteErrorType() { this->errorType_ = nullptr;};
    inline string errorType() const { DARABONBA_PTR_GET_DEFAULT(errorType_, "") };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setErrorType(string errorType) { DARABONBA_PTR_SET_VALUE(errorType_, errorType) };


    // eta Field Functions 
    bool hasEta() const { return this->eta_ != nullptr;};
    void deleteEta() { this->eta_ = nullptr;};
    inline int64_t eta() const { DARABONBA_PTR_GET_DEFAULT(eta_, 0L) };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setEta(int64_t eta) { DARABONBA_PTR_SET_VALUE(eta_, eta) };


    // excludes Field Functions 
    bool hasExcludes() const { return this->excludes_ != nullptr;};
    void deleteExcludes() { this->excludes_ = nullptr;};
    inline string excludes() const { DARABONBA_PTR_GET_DEFAULT(excludes_, "") };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setExcludes(string excludes) { DARABONBA_PTR_SET_VALUE(excludes_, excludes) };


    // exitCode Field Functions 
    bool hasExitCode() const { return this->exitCode_ != nullptr;};
    void deleteExitCode() { this->exitCode_ = nullptr;};
    inline string exitCode() const { DARABONBA_PTR_GET_DEFAULT(exitCode_, "") };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setExitCode(string exitCode) { DARABONBA_PTR_SET_VALUE(exitCode_, exitCode) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // includes Field Functions 
    bool hasIncludes() const { return this->includes_ != nullptr;};
    void deleteIncludes() { this->includes_ = nullptr;};
    inline string includes() const { DARABONBA_PTR_GET_DEFAULT(includes_, "") };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setIncludes(string includes) { DARABONBA_PTR_SET_VALUE(includes_, includes) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // itemsDone Field Functions 
    bool hasItemsDone() const { return this->itemsDone_ != nullptr;};
    void deleteItemsDone() { this->itemsDone_ = nullptr;};
    inline int64_t itemsDone() const { DARABONBA_PTR_GET_DEFAULT(itemsDone_, 0L) };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setItemsDone(int64_t itemsDone) { DARABONBA_PTR_SET_VALUE(itemsDone_, itemsDone) };


    // itemsTotal Field Functions 
    bool hasItemsTotal() const { return this->itemsTotal_ != nullptr;};
    void deleteItemsTotal() { this->itemsTotal_ = nullptr;};
    inline int64_t itemsTotal() const { DARABONBA_PTR_GET_DEFAULT(itemsTotal_, 0L) };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setItemsTotal(int64_t itemsTotal) { DARABONBA_PTR_SET_VALUE(itemsTotal_, itemsTotal) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // percentage Field Functions 
    bool hasPercentage() const { return this->percentage_ != nullptr;};
    void deletePercentage() { this->percentage_ = nullptr;};
    inline int32_t percentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0) };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setPercentage(int32_t percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // restoreId Field Functions 
    bool hasRestoreId() const { return this->restoreId_ != nullptr;};
    void deleteRestoreId() { this->restoreId_ = nullptr;};
    inline string restoreId() const { DARABONBA_PTR_GET_DEFAULT(restoreId_, "") };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setRestoreId(string restoreId) { DARABONBA_PTR_SET_VALUE(restoreId_, restoreId) };


    // restoreName Field Functions 
    bool hasRestoreName() const { return this->restoreName_ != nullptr;};
    void deleteRestoreName() { this->restoreName_ = nullptr;};
    inline string restoreName() const { DARABONBA_PTR_GET_DEFAULT(restoreName_, "") };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setRestoreName(string restoreName) { DARABONBA_PTR_SET_VALUE(restoreName_, restoreName) };


    // restoreType Field Functions 
    bool hasRestoreType() const { return this->restoreType_ != nullptr;};
    void deleteRestoreType() { this->restoreType_ = nullptr;};
    inline string restoreType() const { DARABONBA_PTR_GET_DEFAULT(restoreType_, "") };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setRestoreType(string restoreType) { DARABONBA_PTR_SET_VALUE(restoreType_, restoreType) };


    // snapshotHash Field Functions 
    bool hasSnapshotHash() const { return this->snapshotHash_ != nullptr;};
    void deleteSnapshotHash() { this->snapshotHash_ = nullptr;};
    inline string snapshotHash() const { DARABONBA_PTR_GET_DEFAULT(snapshotHash_, "") };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setSnapshotHash(string snapshotHash) { DARABONBA_PTR_SET_VALUE(snapshotHash_, snapshotHash) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // snapshotVersion Field Functions 
    bool hasSnapshotVersion() const { return this->snapshotVersion_ != nullptr;};
    void deleteSnapshotVersion() { this->snapshotVersion_ = nullptr;};
    inline string snapshotVersion() const { DARABONBA_PTR_GET_DEFAULT(snapshotVersion_, "") };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setSnapshotVersion(string snapshotVersion) { DARABONBA_PTR_SET_VALUE(snapshotVersion_, snapshotVersion) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceClientId Field Functions 
    bool hasSourceClientId() const { return this->sourceClientId_ != nullptr;};
    void deleteSourceClientId() { this->sourceClientId_ = nullptr;};
    inline string sourceClientId() const { DARABONBA_PTR_GET_DEFAULT(sourceClientId_, "") };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setSourceClientId(string sourceClientId) { DARABONBA_PTR_SET_VALUE(sourceClientId_, sourceClientId) };


    // speed Field Functions 
    bool hasSpeed() const { return this->speed_ != nullptr;};
    void deleteSpeed() { this->speed_ = nullptr;};
    inline int64_t speed() const { DARABONBA_PTR_GET_DEFAULT(speed_, 0L) };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setSpeed(int64_t speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // updatedTime Field Functions 
    bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
    void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
    inline int64_t updatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


    // vaultRegionId Field Functions 
    bool hasVaultRegionId() const { return this->vaultRegionId_ != nullptr;};
    void deleteVaultRegionId() { this->vaultRegionId_ = nullptr;};
    inline string vaultRegionId() const { DARABONBA_PTR_GET_DEFAULT(vaultRegionId_, "") };
    inline DescribeRestoreJobsResponseBodyRestoreJobs& setVaultRegionId(string vaultRegionId) { DARABONBA_PTR_SET_VALUE(vaultRegionId_, vaultRegionId) };


  protected:
    // The size of backup data. Unit: bytes.
    std::shared_ptr<int64_t> actualBytes_ = nullptr;
    // The total size of data that is restored. Unit: bytes.
    std::shared_ptr<int64_t> bytesDone_ = nullptr;
    // The total size of data that you want to restore. Unit: bytes.
    std::shared_ptr<int64_t> bytesTotal_ = nullptr;
    // The ID of the anti-ransomware agent that is used to perform the restoration task.
    std::shared_ptr<string> clientId_ = nullptr;
    // The timestamp when the restoration task is complete. Unit: milliseconds.
    std::shared_ptr<int64_t> completeTime_ = nullptr;
    // The timestamp when the restoration task is created. Unit: milliseconds.
    std::shared_ptr<int64_t> createdTime_ = nullptr;
    // The duration of the restoration task. Unit: seconds.
    std::shared_ptr<int64_t> duration_ = nullptr;
    // The number of the restoration tasks on which errors occur.
    std::shared_ptr<int64_t> errorCount_ = nullptr;
    // The name of the CSV file. The CSV file contains the files that fail to be restored.
    std::shared_ptr<string> errorFile_ = nullptr;
    // The URL to download the CSV file. The CSV file contains the files that fail to be restored.
    std::shared_ptr<string> errorFileUrl_ = nullptr;
    // The error code that is returned for the restoration task.
    std::shared_ptr<string> errorType_ = nullptr;
    // The timestamp when the in-progress restoration task is expected to be complete. Unit: seconds.
    std::shared_ptr<int64_t> eta_ = nullptr;
    // The directory excluded from the anti-ransomware policy. The value is the directory that you specify to skip protection when you create the anti-ransomware policy.
    std::shared_ptr<string> excludes_ = nullptr;
    // The return value of the restoration task.
    std::shared_ptr<string> exitCode_ = nullptr;
    // The time when the restoration task is created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the restoration task is updated.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The directory in which the restored file is stored. The value is the directory that you specify for protection when you create the anti-ransomware policy
    std::shared_ptr<string> includes_ = nullptr;
    // The ID of the server whose data you want to restore.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the server whose data you want to restore.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the server whose data you want to restore.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The internal IP address of the server whose data you want to restore.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The number of files that are restored.
    std::shared_ptr<int64_t> itemsDone_ = nullptr;
    // The total number of files that need to be restored.
    std::shared_ptr<int64_t> itemsTotal_ = nullptr;
    // The error message.
    std::shared_ptr<string> message_ = nullptr;
    // The progress of the restoration task in percentage.
    std::shared_ptr<int32_t> percentage_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the restoration task.
    std::shared_ptr<string> restoreId_ = nullptr;
    // The name of the restoration task.
    std::shared_ptr<string> restoreName_ = nullptr;
    // The type of the file that is restored. Valid values:
    // 
    // *   **ECS_FILE**: files on Elastic Compute Service (ECS) instances
    // *   **FILE**: files on servers in data centers
    std::shared_ptr<string> restoreType_ = nullptr;
    // The hash value of the snapshot that stores backup data when the data is backed up.
    std::shared_ptr<string> snapshotHash_ = nullptr;
    // The hash value ID of the snapshot that stores backup data when the data is backed up.
    std::shared_ptr<string> snapshotId_ = nullptr;
    // The version of the backup data.
    std::shared_ptr<string> snapshotVersion_ = nullptr;
    // The restored content.
    std::shared_ptr<string> source_ = nullptr;
    // The ID of the anti-ransomware agent that is used to back up data.
    std::shared_ptr<string> sourceClientId_ = nullptr;
    // The speed at which data is restored. Unit: byte/s.
    std::shared_ptr<int64_t> speed_ = nullptr;
    // The status of the restoration task. Valid values:
    // 
    // *   **RUNNING**: The task is running.
    // *   **COMPLETE**: The task is complete.
    // *   **FAILED**: The task fails.
    // *   **CANCELING**: The task is being canceled.
    // *   **CANCELED**: The task is canceled.
    // *   **PARTIAL_COMPLETE**: The task is partially successful.
    // *   **CREATED**: The task was created but is not run.
    // *   **EXPIRED**: The task is not updated.
    // *   **QUEUED**: The task is waiting to be run.
    // *   **CLIENT_DELETED**: The task fails because the anti-ransomware agent is uninstalled.
    std::shared_ptr<string> status_ = nullptr;
    // The folder to which the backup data is restored. After you create the restoration task, the backup data is restored to the specified folder.
    std::shared_ptr<string> target_ = nullptr;
    // The timestamp when the restoration task was last updated. Unit: milliseconds.
    std::shared_ptr<int64_t> updatedTime_ = nullptr;
    // The UUID of the server whose data you want to restore.
    std::shared_ptr<string> uuid_ = nullptr;
    // The ID of the backup vault in which the backup data is stored.
    std::shared_ptr<string> vaultId_ = nullptr;
    // The ID of the region where the backup vault resides.
    std::shared_ptr<string> vaultRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
