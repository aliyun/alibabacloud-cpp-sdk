// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTOREJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTOREJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeRestoreJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRestoreJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RestoreJobs, restoreJobs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRestoreJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RestoreJobs, restoreJobs_);
    };
    DescribeRestoreJobsResponseBody() = default ;
    DescribeRestoreJobsResponseBody(const DescribeRestoreJobsResponseBody &) = default ;
    DescribeRestoreJobsResponseBody(DescribeRestoreJobsResponseBody &&) = default ;
    DescribeRestoreJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRestoreJobsResponseBody() = default ;
    DescribeRestoreJobsResponseBody& operator=(const DescribeRestoreJobsResponseBody &) = default ;
    DescribeRestoreJobsResponseBody& operator=(DescribeRestoreJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RestoreJobs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RestoreJobs& obj) { 
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
      friend void from_json(const Darabonba::Json& j, RestoreJobs& obj) { 
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
      RestoreJobs() = default ;
      RestoreJobs(const RestoreJobs &) = default ;
      RestoreJobs(RestoreJobs &&) = default ;
      RestoreJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RestoreJobs() = default ;
      RestoreJobs& operator=(const RestoreJobs &) = default ;
      RestoreJobs& operator=(RestoreJobs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->actualBytes_ == nullptr
        && this->bytesDone_ == nullptr && this->bytesTotal_ == nullptr && this->clientId_ == nullptr && this->completeTime_ == nullptr && this->createdTime_ == nullptr
        && this->duration_ == nullptr && this->errorCount_ == nullptr && this->errorFile_ == nullptr && this->errorFileUrl_ == nullptr && this->errorType_ == nullptr
        && this->eta_ == nullptr && this->excludes_ == nullptr && this->exitCode_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->includes_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->internetIp_ == nullptr && this->intranetIp_ == nullptr
        && this->itemsDone_ == nullptr && this->itemsTotal_ == nullptr && this->message_ == nullptr && this->percentage_ == nullptr && this->requestId_ == nullptr
        && this->restoreId_ == nullptr && this->restoreName_ == nullptr && this->restoreType_ == nullptr && this->snapshotHash_ == nullptr && this->snapshotId_ == nullptr
        && this->snapshotVersion_ == nullptr && this->source_ == nullptr && this->sourceClientId_ == nullptr && this->speed_ == nullptr && this->status_ == nullptr
        && this->target_ == nullptr && this->updatedTime_ == nullptr && this->uuid_ == nullptr && this->vaultId_ == nullptr && this->vaultRegionId_ == nullptr; };
      // actualBytes Field Functions 
      bool hasActualBytes() const { return this->actualBytes_ != nullptr;};
      void deleteActualBytes() { this->actualBytes_ = nullptr;};
      inline int64_t getActualBytes() const { DARABONBA_PTR_GET_DEFAULT(actualBytes_, 0L) };
      inline RestoreJobs& setActualBytes(int64_t actualBytes) { DARABONBA_PTR_SET_VALUE(actualBytes_, actualBytes) };


      // bytesDone Field Functions 
      bool hasBytesDone() const { return this->bytesDone_ != nullptr;};
      void deleteBytesDone() { this->bytesDone_ = nullptr;};
      inline int64_t getBytesDone() const { DARABONBA_PTR_GET_DEFAULT(bytesDone_, 0L) };
      inline RestoreJobs& setBytesDone(int64_t bytesDone) { DARABONBA_PTR_SET_VALUE(bytesDone_, bytesDone) };


      // bytesTotal Field Functions 
      bool hasBytesTotal() const { return this->bytesTotal_ != nullptr;};
      void deleteBytesTotal() { this->bytesTotal_ = nullptr;};
      inline int64_t getBytesTotal() const { DARABONBA_PTR_GET_DEFAULT(bytesTotal_, 0L) };
      inline RestoreJobs& setBytesTotal(int64_t bytesTotal) { DARABONBA_PTR_SET_VALUE(bytesTotal_, bytesTotal) };


      // clientId Field Functions 
      bool hasClientId() const { return this->clientId_ != nullptr;};
      void deleteClientId() { this->clientId_ = nullptr;};
      inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
      inline RestoreJobs& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


      // completeTime Field Functions 
      bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
      void deleteCompleteTime() { this->completeTime_ = nullptr;};
      inline int64_t getCompleteTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, 0L) };
      inline RestoreJobs& setCompleteTime(int64_t completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
      inline RestoreJobs& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline RestoreJobs& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // errorCount Field Functions 
      bool hasErrorCount() const { return this->errorCount_ != nullptr;};
      void deleteErrorCount() { this->errorCount_ = nullptr;};
      inline int64_t getErrorCount() const { DARABONBA_PTR_GET_DEFAULT(errorCount_, 0L) };
      inline RestoreJobs& setErrorCount(int64_t errorCount) { DARABONBA_PTR_SET_VALUE(errorCount_, errorCount) };


      // errorFile Field Functions 
      bool hasErrorFile() const { return this->errorFile_ != nullptr;};
      void deleteErrorFile() { this->errorFile_ = nullptr;};
      inline string getErrorFile() const { DARABONBA_PTR_GET_DEFAULT(errorFile_, "") };
      inline RestoreJobs& setErrorFile(string errorFile) { DARABONBA_PTR_SET_VALUE(errorFile_, errorFile) };


      // errorFileUrl Field Functions 
      bool hasErrorFileUrl() const { return this->errorFileUrl_ != nullptr;};
      void deleteErrorFileUrl() { this->errorFileUrl_ = nullptr;};
      inline string getErrorFileUrl() const { DARABONBA_PTR_GET_DEFAULT(errorFileUrl_, "") };
      inline RestoreJobs& setErrorFileUrl(string errorFileUrl) { DARABONBA_PTR_SET_VALUE(errorFileUrl_, errorFileUrl) };


      // errorType Field Functions 
      bool hasErrorType() const { return this->errorType_ != nullptr;};
      void deleteErrorType() { this->errorType_ = nullptr;};
      inline string getErrorType() const { DARABONBA_PTR_GET_DEFAULT(errorType_, "") };
      inline RestoreJobs& setErrorType(string errorType) { DARABONBA_PTR_SET_VALUE(errorType_, errorType) };


      // eta Field Functions 
      bool hasEta() const { return this->eta_ != nullptr;};
      void deleteEta() { this->eta_ = nullptr;};
      inline int64_t getEta() const { DARABONBA_PTR_GET_DEFAULT(eta_, 0L) };
      inline RestoreJobs& setEta(int64_t eta) { DARABONBA_PTR_SET_VALUE(eta_, eta) };


      // excludes Field Functions 
      bool hasExcludes() const { return this->excludes_ != nullptr;};
      void deleteExcludes() { this->excludes_ = nullptr;};
      inline string getExcludes() const { DARABONBA_PTR_GET_DEFAULT(excludes_, "") };
      inline RestoreJobs& setExcludes(string excludes) { DARABONBA_PTR_SET_VALUE(excludes_, excludes) };


      // exitCode Field Functions 
      bool hasExitCode() const { return this->exitCode_ != nullptr;};
      void deleteExitCode() { this->exitCode_ = nullptr;};
      inline string getExitCode() const { DARABONBA_PTR_GET_DEFAULT(exitCode_, "") };
      inline RestoreJobs& setExitCode(string exitCode) { DARABONBA_PTR_SET_VALUE(exitCode_, exitCode) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline RestoreJobs& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline RestoreJobs& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // includes Field Functions 
      bool hasIncludes() const { return this->includes_ != nullptr;};
      void deleteIncludes() { this->includes_ = nullptr;};
      inline string getIncludes() const { DARABONBA_PTR_GET_DEFAULT(includes_, "") };
      inline RestoreJobs& setIncludes(string includes) { DARABONBA_PTR_SET_VALUE(includes_, includes) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline RestoreJobs& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline RestoreJobs& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline RestoreJobs& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline RestoreJobs& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // itemsDone Field Functions 
      bool hasItemsDone() const { return this->itemsDone_ != nullptr;};
      void deleteItemsDone() { this->itemsDone_ = nullptr;};
      inline int64_t getItemsDone() const { DARABONBA_PTR_GET_DEFAULT(itemsDone_, 0L) };
      inline RestoreJobs& setItemsDone(int64_t itemsDone) { DARABONBA_PTR_SET_VALUE(itemsDone_, itemsDone) };


      // itemsTotal Field Functions 
      bool hasItemsTotal() const { return this->itemsTotal_ != nullptr;};
      void deleteItemsTotal() { this->itemsTotal_ = nullptr;};
      inline int64_t getItemsTotal() const { DARABONBA_PTR_GET_DEFAULT(itemsTotal_, 0L) };
      inline RestoreJobs& setItemsTotal(int64_t itemsTotal) { DARABONBA_PTR_SET_VALUE(itemsTotal_, itemsTotal) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline RestoreJobs& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // percentage Field Functions 
      bool hasPercentage() const { return this->percentage_ != nullptr;};
      void deletePercentage() { this->percentage_ = nullptr;};
      inline int32_t getPercentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0) };
      inline RestoreJobs& setPercentage(int32_t percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline RestoreJobs& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // restoreId Field Functions 
      bool hasRestoreId() const { return this->restoreId_ != nullptr;};
      void deleteRestoreId() { this->restoreId_ = nullptr;};
      inline string getRestoreId() const { DARABONBA_PTR_GET_DEFAULT(restoreId_, "") };
      inline RestoreJobs& setRestoreId(string restoreId) { DARABONBA_PTR_SET_VALUE(restoreId_, restoreId) };


      // restoreName Field Functions 
      bool hasRestoreName() const { return this->restoreName_ != nullptr;};
      void deleteRestoreName() { this->restoreName_ = nullptr;};
      inline string getRestoreName() const { DARABONBA_PTR_GET_DEFAULT(restoreName_, "") };
      inline RestoreJobs& setRestoreName(string restoreName) { DARABONBA_PTR_SET_VALUE(restoreName_, restoreName) };


      // restoreType Field Functions 
      bool hasRestoreType() const { return this->restoreType_ != nullptr;};
      void deleteRestoreType() { this->restoreType_ = nullptr;};
      inline string getRestoreType() const { DARABONBA_PTR_GET_DEFAULT(restoreType_, "") };
      inline RestoreJobs& setRestoreType(string restoreType) { DARABONBA_PTR_SET_VALUE(restoreType_, restoreType) };


      // snapshotHash Field Functions 
      bool hasSnapshotHash() const { return this->snapshotHash_ != nullptr;};
      void deleteSnapshotHash() { this->snapshotHash_ = nullptr;};
      inline string getSnapshotHash() const { DARABONBA_PTR_GET_DEFAULT(snapshotHash_, "") };
      inline RestoreJobs& setSnapshotHash(string snapshotHash) { DARABONBA_PTR_SET_VALUE(snapshotHash_, snapshotHash) };


      // snapshotId Field Functions 
      bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
      void deleteSnapshotId() { this->snapshotId_ = nullptr;};
      inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
      inline RestoreJobs& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


      // snapshotVersion Field Functions 
      bool hasSnapshotVersion() const { return this->snapshotVersion_ != nullptr;};
      void deleteSnapshotVersion() { this->snapshotVersion_ = nullptr;};
      inline string getSnapshotVersion() const { DARABONBA_PTR_GET_DEFAULT(snapshotVersion_, "") };
      inline RestoreJobs& setSnapshotVersion(string snapshotVersion) { DARABONBA_PTR_SET_VALUE(snapshotVersion_, snapshotVersion) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline RestoreJobs& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // sourceClientId Field Functions 
      bool hasSourceClientId() const { return this->sourceClientId_ != nullptr;};
      void deleteSourceClientId() { this->sourceClientId_ = nullptr;};
      inline string getSourceClientId() const { DARABONBA_PTR_GET_DEFAULT(sourceClientId_, "") };
      inline RestoreJobs& setSourceClientId(string sourceClientId) { DARABONBA_PTR_SET_VALUE(sourceClientId_, sourceClientId) };


      // speed Field Functions 
      bool hasSpeed() const { return this->speed_ != nullptr;};
      void deleteSpeed() { this->speed_ = nullptr;};
      inline int64_t getSpeed() const { DARABONBA_PTR_GET_DEFAULT(speed_, 0L) };
      inline RestoreJobs& setSpeed(int64_t speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline RestoreJobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // target Field Functions 
      bool hasTarget() const { return this->target_ != nullptr;};
      void deleteTarget() { this->target_ = nullptr;};
      inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
      inline RestoreJobs& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


      // updatedTime Field Functions 
      bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
      void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
      inline int64_t getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
      inline RestoreJobs& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline RestoreJobs& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      // vaultId Field Functions 
      bool hasVaultId() const { return this->vaultId_ != nullptr;};
      void deleteVaultId() { this->vaultId_ = nullptr;};
      inline string getVaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
      inline RestoreJobs& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


      // vaultRegionId Field Functions 
      bool hasVaultRegionId() const { return this->vaultRegionId_ != nullptr;};
      void deleteVaultRegionId() { this->vaultRegionId_ = nullptr;};
      inline string getVaultRegionId() const { DARABONBA_PTR_GET_DEFAULT(vaultRegionId_, "") };
      inline RestoreJobs& setVaultRegionId(string vaultRegionId) { DARABONBA_PTR_SET_VALUE(vaultRegionId_, vaultRegionId) };


    protected:
      // The size of backup data. Unit: bytes.
      shared_ptr<int64_t> actualBytes_ {};
      // The total size of data that is restored. Unit: bytes.
      shared_ptr<int64_t> bytesDone_ {};
      // The total size of data that you want to restore. Unit: bytes.
      shared_ptr<int64_t> bytesTotal_ {};
      // The ID of the anti-ransomware agent that is used to perform the restoration task.
      shared_ptr<string> clientId_ {};
      // The timestamp when the restoration task is complete. Unit: milliseconds.
      shared_ptr<int64_t> completeTime_ {};
      // The timestamp when the restoration task is created. Unit: milliseconds.
      shared_ptr<int64_t> createdTime_ {};
      // The duration of the restoration task. Unit: seconds.
      shared_ptr<int64_t> duration_ {};
      // The number of the restoration tasks on which errors occur.
      shared_ptr<int64_t> errorCount_ {};
      // The name of the CSV file. The CSV file contains the files that fail to be restored.
      shared_ptr<string> errorFile_ {};
      // The URL to download the CSV file. The CSV file contains the files that fail to be restored.
      shared_ptr<string> errorFileUrl_ {};
      // The error code that is returned for the restoration task.
      shared_ptr<string> errorType_ {};
      // The timestamp when the in-progress restoration task is expected to be complete. Unit: seconds.
      shared_ptr<int64_t> eta_ {};
      // The directory excluded from the anti-ransomware policy. The value is the directory that you specify to skip protection when you create the anti-ransomware policy.
      shared_ptr<string> excludes_ {};
      // The return value of the restoration task.
      shared_ptr<string> exitCode_ {};
      // The time when the restoration task is created.
      shared_ptr<string> gmtCreate_ {};
      // The time when the restoration task is updated.
      shared_ptr<string> gmtModified_ {};
      // The directory in which the restored file is stored. The value is the directory that you specify for protection when you create the anti-ransomware policy
      shared_ptr<string> includes_ {};
      // The ID of the server whose data you want to restore.
      shared_ptr<string> instanceId_ {};
      // The name of the server whose data you want to restore.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the server whose data you want to restore.
      shared_ptr<string> internetIp_ {};
      // The internal IP address of the server whose data you want to restore.
      shared_ptr<string> intranetIp_ {};
      // The number of files that are restored.
      shared_ptr<int64_t> itemsDone_ {};
      // The total number of files that need to be restored.
      shared_ptr<int64_t> itemsTotal_ {};
      // The error message.
      shared_ptr<string> message_ {};
      // The progress of the restoration task in percentage.
      shared_ptr<int32_t> percentage_ {};
      // The request ID.
      shared_ptr<string> requestId_ {};
      // The ID of the restoration task.
      shared_ptr<string> restoreId_ {};
      // The name of the restoration task.
      shared_ptr<string> restoreName_ {};
      // The type of the file that is restored. Valid values:
      // 
      // *   **ECS_FILE**: files on Elastic Compute Service (ECS) instances
      // *   **FILE**: files on servers in data centers
      shared_ptr<string> restoreType_ {};
      // The hash value of the snapshot that stores backup data when the data is backed up.
      shared_ptr<string> snapshotHash_ {};
      // The hash value ID of the snapshot that stores backup data when the data is backed up.
      shared_ptr<string> snapshotId_ {};
      // The version of the backup data.
      shared_ptr<string> snapshotVersion_ {};
      // The restored content.
      shared_ptr<string> source_ {};
      // The ID of the anti-ransomware agent that is used to back up data.
      shared_ptr<string> sourceClientId_ {};
      // The speed at which data is restored. Unit: byte/s.
      shared_ptr<int64_t> speed_ {};
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
      shared_ptr<string> status_ {};
      // The folder to which the backup data is restored. After you create the restoration task, the backup data is restored to the specified folder.
      shared_ptr<string> target_ {};
      // The timestamp when the restoration task was last updated. Unit: milliseconds.
      shared_ptr<int64_t> updatedTime_ {};
      // The UUID of the server whose data you want to restore.
      shared_ptr<string> uuid_ {};
      // The ID of the backup vault in which the backup data is stored.
      shared_ptr<string> vaultId_ {};
      // The ID of the region where the backup vault resides.
      shared_ptr<string> vaultRegionId_ {};
    };

    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of restoration tasks returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page. Default value: **10**.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of restoration tasks returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->requestId_ == nullptr && this->restoreJobs_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeRestoreJobsResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeRestoreJobsResponseBody::PageInfo) };
    inline DescribeRestoreJobsResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeRestoreJobsResponseBody::PageInfo) };
    inline DescribeRestoreJobsResponseBody& setPageInfo(const DescribeRestoreJobsResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeRestoreJobsResponseBody& setPageInfo(DescribeRestoreJobsResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRestoreJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // restoreJobs Field Functions 
    bool hasRestoreJobs() const { return this->restoreJobs_ != nullptr;};
    void deleteRestoreJobs() { this->restoreJobs_ = nullptr;};
    inline const vector<DescribeRestoreJobsResponseBody::RestoreJobs> & getRestoreJobs() const { DARABONBA_PTR_GET_CONST(restoreJobs_, vector<DescribeRestoreJobsResponseBody::RestoreJobs>) };
    inline vector<DescribeRestoreJobsResponseBody::RestoreJobs> getRestoreJobs() { DARABONBA_PTR_GET(restoreJobs_, vector<DescribeRestoreJobsResponseBody::RestoreJobs>) };
    inline DescribeRestoreJobsResponseBody& setRestoreJobs(const vector<DescribeRestoreJobsResponseBody::RestoreJobs> & restoreJobs) { DARABONBA_PTR_SET_VALUE(restoreJobs_, restoreJobs) };
    inline DescribeRestoreJobsResponseBody& setRestoreJobs(vector<DescribeRestoreJobsResponseBody::RestoreJobs> && restoreJobs) { DARABONBA_PTR_SET_RVALUE(restoreJobs_, restoreJobs) };


  protected:
    // The pagination information.
    shared_ptr<DescribeRestoreJobsResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The details about the restoration tasks.
    shared_ptr<vector<DescribeRestoreJobsResponseBody::RestoreJobs>> restoreJobs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
