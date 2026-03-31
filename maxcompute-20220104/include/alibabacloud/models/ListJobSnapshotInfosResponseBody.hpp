// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSNAPSHOTINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSNAPSHOTINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListJobSnapshotInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobSnapshotInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobSnapshotInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListJobSnapshotInfosResponseBody() = default ;
    ListJobSnapshotInfosResponseBody(const ListJobSnapshotInfosResponseBody &) = default ;
    ListJobSnapshotInfosResponseBody(ListJobSnapshotInfosResponseBody &&) = default ;
    ListJobSnapshotInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobSnapshotInfosResponseBody() = default ;
    ListJobSnapshotInfosResponseBody& operator=(const ListJobSnapshotInfosResponseBody &) = default ;
    ListJobSnapshotInfosResponseBody& operator=(ListJobSnapshotInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(jobInfoList, jobInfoList_);
        DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(jobInfoList, jobInfoList_);
        DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
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
      class JobInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const JobInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(cpuRequest, cpuRequest_);
          DARABONBA_PTR_TO_JSON(cpuUsage, cpuUsage_);
          DARABONBA_PTR_TO_JSON(cpuUsageToRequestRatio, cpuUsageToRequestRatio_);
          DARABONBA_PTR_TO_JSON(extNodeId, extNodeId_);
          DARABONBA_PTR_TO_JSON(extNodeOnDuty, extNodeOnDuty_);
          DARABONBA_PTR_TO_JSON(extPlantFrom, extPlantFrom_);
          DARABONBA_PTR_TO_JSON(extPlatformId, extPlatformId_);
          DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(jobOwner, jobOwner_);
          DARABONBA_PTR_TO_JSON(jobType, jobType_);
          DARABONBA_PTR_TO_JSON(maxCpuPct, maxCpuPct_);
          DARABONBA_PTR_TO_JSON(maxMemoryPct, maxMemoryPct_);
          DARABONBA_PTR_TO_JSON(memoryRequest, memoryRequest_);
          DARABONBA_PTR_TO_JSON(memoryUsage, memoryUsage_);
          DARABONBA_PTR_TO_JSON(memoryUsageToRequestRatio, memoryUsageToRequestRatio_);
          DARABONBA_PTR_TO_JSON(minCpuPct, minCpuPct_);
          DARABONBA_PTR_TO_JSON(minMemoryPct, minMemoryPct_);
          DARABONBA_PTR_TO_JSON(priority, priority_);
          DARABONBA_PTR_TO_JSON(project, project_);
          DARABONBA_PTR_TO_JSON(quotaNickname, quotaNickname_);
          DARABONBA_PTR_TO_JSON(quotaType, quotaType_);
          DARABONBA_PTR_TO_JSON(region, region_);
          DARABONBA_PTR_TO_JSON(runningAtTime, runningAtTime_);
          DARABONBA_PTR_TO_JSON(runningTime, runningTime_);
          DARABONBA_PTR_TO_JSON(signature, signature_);
          DARABONBA_PTR_TO_JSON(snapshotTime, snapshotTime_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(submittedAtTime, submittedAtTime_);
          DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
          DARABONBA_PTR_TO_JSON(totalTime, totalTime_);
          DARABONBA_PTR_TO_JSON(waitingTime, waitingTime_);
        };
        friend void from_json(const Darabonba::Json& j, JobInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(cpuRequest, cpuRequest_);
          DARABONBA_PTR_FROM_JSON(cpuUsage, cpuUsage_);
          DARABONBA_PTR_FROM_JSON(cpuUsageToRequestRatio, cpuUsageToRequestRatio_);
          DARABONBA_PTR_FROM_JSON(extNodeId, extNodeId_);
          DARABONBA_PTR_FROM_JSON(extNodeOnDuty, extNodeOnDuty_);
          DARABONBA_PTR_FROM_JSON(extPlantFrom, extPlantFrom_);
          DARABONBA_PTR_FROM_JSON(extPlatformId, extPlatformId_);
          DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(jobOwner, jobOwner_);
          DARABONBA_PTR_FROM_JSON(jobType, jobType_);
          DARABONBA_PTR_FROM_JSON(maxCpuPct, maxCpuPct_);
          DARABONBA_PTR_FROM_JSON(maxMemoryPct, maxMemoryPct_);
          DARABONBA_PTR_FROM_JSON(memoryRequest, memoryRequest_);
          DARABONBA_PTR_FROM_JSON(memoryUsage, memoryUsage_);
          DARABONBA_PTR_FROM_JSON(memoryUsageToRequestRatio, memoryUsageToRequestRatio_);
          DARABONBA_PTR_FROM_JSON(minCpuPct, minCpuPct_);
          DARABONBA_PTR_FROM_JSON(minMemoryPct, minMemoryPct_);
          DARABONBA_PTR_FROM_JSON(priority, priority_);
          DARABONBA_PTR_FROM_JSON(project, project_);
          DARABONBA_PTR_FROM_JSON(quotaNickname, quotaNickname_);
          DARABONBA_PTR_FROM_JSON(quotaType, quotaType_);
          DARABONBA_PTR_FROM_JSON(region, region_);
          DARABONBA_PTR_FROM_JSON(runningAtTime, runningAtTime_);
          DARABONBA_PTR_FROM_JSON(runningTime, runningTime_);
          DARABONBA_PTR_FROM_JSON(signature, signature_);
          DARABONBA_PTR_FROM_JSON(snapshotTime, snapshotTime_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(submittedAtTime, submittedAtTime_);
          DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
          DARABONBA_PTR_FROM_JSON(totalTime, totalTime_);
          DARABONBA_PTR_FROM_JSON(waitingTime, waitingTime_);
        };
        JobInfoList() = default ;
        JobInfoList(const JobInfoList &) = default ;
        JobInfoList(JobInfoList &&) = default ;
        JobInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~JobInfoList() = default ;
        JobInfoList& operator=(const JobInfoList &) = default ;
        JobInfoList& operator=(JobInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cpuRequest_ == nullptr
        && this->cpuUsage_ == nullptr && this->cpuUsageToRequestRatio_ == nullptr && this->extNodeId_ == nullptr && this->extNodeOnDuty_ == nullptr && this->extPlantFrom_ == nullptr
        && this->extPlatformId_ == nullptr && this->instanceId_ == nullptr && this->jobOwner_ == nullptr && this->jobType_ == nullptr && this->maxCpuPct_ == nullptr
        && this->maxMemoryPct_ == nullptr && this->memoryRequest_ == nullptr && this->memoryUsage_ == nullptr && this->memoryUsageToRequestRatio_ == nullptr && this->minCpuPct_ == nullptr
        && this->minMemoryPct_ == nullptr && this->priority_ == nullptr && this->project_ == nullptr && this->quotaNickname_ == nullptr && this->quotaType_ == nullptr
        && this->region_ == nullptr && this->runningAtTime_ == nullptr && this->runningTime_ == nullptr && this->signature_ == nullptr && this->snapshotTime_ == nullptr
        && this->status_ == nullptr && this->submittedAtTime_ == nullptr && this->tenantId_ == nullptr && this->totalTime_ == nullptr && this->waitingTime_ == nullptr; };
        // cpuRequest Field Functions 
        bool hasCpuRequest() const { return this->cpuRequest_ != nullptr;};
        void deleteCpuRequest() { this->cpuRequest_ = nullptr;};
        inline int64_t getCpuRequest() const { DARABONBA_PTR_GET_DEFAULT(cpuRequest_, 0L) };
        inline JobInfoList& setCpuRequest(int64_t cpuRequest) { DARABONBA_PTR_SET_VALUE(cpuRequest_, cpuRequest) };


        // cpuUsage Field Functions 
        bool hasCpuUsage() const { return this->cpuUsage_ != nullptr;};
        void deleteCpuUsage() { this->cpuUsage_ = nullptr;};
        inline int64_t getCpuUsage() const { DARABONBA_PTR_GET_DEFAULT(cpuUsage_, 0L) };
        inline JobInfoList& setCpuUsage(int64_t cpuUsage) { DARABONBA_PTR_SET_VALUE(cpuUsage_, cpuUsage) };


        // cpuUsageToRequestRatio Field Functions 
        bool hasCpuUsageToRequestRatio() const { return this->cpuUsageToRequestRatio_ != nullptr;};
        void deleteCpuUsageToRequestRatio() { this->cpuUsageToRequestRatio_ = nullptr;};
        inline double getCpuUsageToRequestRatio() const { DARABONBA_PTR_GET_DEFAULT(cpuUsageToRequestRatio_, 0.0) };
        inline JobInfoList& setCpuUsageToRequestRatio(double cpuUsageToRequestRatio) { DARABONBA_PTR_SET_VALUE(cpuUsageToRequestRatio_, cpuUsageToRequestRatio) };


        // extNodeId Field Functions 
        bool hasExtNodeId() const { return this->extNodeId_ != nullptr;};
        void deleteExtNodeId() { this->extNodeId_ = nullptr;};
        inline string getExtNodeId() const { DARABONBA_PTR_GET_DEFAULT(extNodeId_, "") };
        inline JobInfoList& setExtNodeId(string extNodeId) { DARABONBA_PTR_SET_VALUE(extNodeId_, extNodeId) };


        // extNodeOnDuty Field Functions 
        bool hasExtNodeOnDuty() const { return this->extNodeOnDuty_ != nullptr;};
        void deleteExtNodeOnDuty() { this->extNodeOnDuty_ = nullptr;};
        inline string getExtNodeOnDuty() const { DARABONBA_PTR_GET_DEFAULT(extNodeOnDuty_, "") };
        inline JobInfoList& setExtNodeOnDuty(string extNodeOnDuty) { DARABONBA_PTR_SET_VALUE(extNodeOnDuty_, extNodeOnDuty) };


        // extPlantFrom Field Functions 
        bool hasExtPlantFrom() const { return this->extPlantFrom_ != nullptr;};
        void deleteExtPlantFrom() { this->extPlantFrom_ = nullptr;};
        inline string getExtPlantFrom() const { DARABONBA_PTR_GET_DEFAULT(extPlantFrom_, "") };
        inline JobInfoList& setExtPlantFrom(string extPlantFrom) { DARABONBA_PTR_SET_VALUE(extPlantFrom_, extPlantFrom) };


        // extPlatformId Field Functions 
        bool hasExtPlatformId() const { return this->extPlatformId_ != nullptr;};
        void deleteExtPlatformId() { this->extPlatformId_ = nullptr;};
        inline string getExtPlatformId() const { DARABONBA_PTR_GET_DEFAULT(extPlatformId_, "") };
        inline JobInfoList& setExtPlatformId(string extPlatformId) { DARABONBA_PTR_SET_VALUE(extPlatformId_, extPlatformId) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline JobInfoList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // jobOwner Field Functions 
        bool hasJobOwner() const { return this->jobOwner_ != nullptr;};
        void deleteJobOwner() { this->jobOwner_ = nullptr;};
        inline string getJobOwner() const { DARABONBA_PTR_GET_DEFAULT(jobOwner_, "") };
        inline JobInfoList& setJobOwner(string jobOwner) { DARABONBA_PTR_SET_VALUE(jobOwner_, jobOwner) };


        // jobType Field Functions 
        bool hasJobType() const { return this->jobType_ != nullptr;};
        void deleteJobType() { this->jobType_ = nullptr;};
        inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
        inline JobInfoList& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


        // maxCpuPct Field Functions 
        bool hasMaxCpuPct() const { return this->maxCpuPct_ != nullptr;};
        void deleteMaxCpuPct() { this->maxCpuPct_ = nullptr;};
        inline double getMaxCpuPct() const { DARABONBA_PTR_GET_DEFAULT(maxCpuPct_, 0.0) };
        inline JobInfoList& setMaxCpuPct(double maxCpuPct) { DARABONBA_PTR_SET_VALUE(maxCpuPct_, maxCpuPct) };


        // maxMemoryPct Field Functions 
        bool hasMaxMemoryPct() const { return this->maxMemoryPct_ != nullptr;};
        void deleteMaxMemoryPct() { this->maxMemoryPct_ = nullptr;};
        inline double getMaxMemoryPct() const { DARABONBA_PTR_GET_DEFAULT(maxMemoryPct_, 0.0) };
        inline JobInfoList& setMaxMemoryPct(double maxMemoryPct) { DARABONBA_PTR_SET_VALUE(maxMemoryPct_, maxMemoryPct) };


        // memoryRequest Field Functions 
        bool hasMemoryRequest() const { return this->memoryRequest_ != nullptr;};
        void deleteMemoryRequest() { this->memoryRequest_ = nullptr;};
        inline int64_t getMemoryRequest() const { DARABONBA_PTR_GET_DEFAULT(memoryRequest_, 0L) };
        inline JobInfoList& setMemoryRequest(int64_t memoryRequest) { DARABONBA_PTR_SET_VALUE(memoryRequest_, memoryRequest) };


        // memoryUsage Field Functions 
        bool hasMemoryUsage() const { return this->memoryUsage_ != nullptr;};
        void deleteMemoryUsage() { this->memoryUsage_ = nullptr;};
        inline int64_t getMemoryUsage() const { DARABONBA_PTR_GET_DEFAULT(memoryUsage_, 0L) };
        inline JobInfoList& setMemoryUsage(int64_t memoryUsage) { DARABONBA_PTR_SET_VALUE(memoryUsage_, memoryUsage) };


        // memoryUsageToRequestRatio Field Functions 
        bool hasMemoryUsageToRequestRatio() const { return this->memoryUsageToRequestRatio_ != nullptr;};
        void deleteMemoryUsageToRequestRatio() { this->memoryUsageToRequestRatio_ = nullptr;};
        inline double getMemoryUsageToRequestRatio() const { DARABONBA_PTR_GET_DEFAULT(memoryUsageToRequestRatio_, 0.0) };
        inline JobInfoList& setMemoryUsageToRequestRatio(double memoryUsageToRequestRatio) { DARABONBA_PTR_SET_VALUE(memoryUsageToRequestRatio_, memoryUsageToRequestRatio) };


        // minCpuPct Field Functions 
        bool hasMinCpuPct() const { return this->minCpuPct_ != nullptr;};
        void deleteMinCpuPct() { this->minCpuPct_ = nullptr;};
        inline double getMinCpuPct() const { DARABONBA_PTR_GET_DEFAULT(minCpuPct_, 0.0) };
        inline JobInfoList& setMinCpuPct(double minCpuPct) { DARABONBA_PTR_SET_VALUE(minCpuPct_, minCpuPct) };


        // minMemoryPct Field Functions 
        bool hasMinMemoryPct() const { return this->minMemoryPct_ != nullptr;};
        void deleteMinMemoryPct() { this->minMemoryPct_ = nullptr;};
        inline double getMinMemoryPct() const { DARABONBA_PTR_GET_DEFAULT(minMemoryPct_, 0.0) };
        inline JobInfoList& setMinMemoryPct(double minMemoryPct) { DARABONBA_PTR_SET_VALUE(minMemoryPct_, minMemoryPct) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int64_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
        inline JobInfoList& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // project Field Functions 
        bool hasProject() const { return this->project_ != nullptr;};
        void deleteProject() { this->project_ = nullptr;};
        inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
        inline JobInfoList& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


        // quotaNickname Field Functions 
        bool hasQuotaNickname() const { return this->quotaNickname_ != nullptr;};
        void deleteQuotaNickname() { this->quotaNickname_ = nullptr;};
        inline string getQuotaNickname() const { DARABONBA_PTR_GET_DEFAULT(quotaNickname_, "") };
        inline JobInfoList& setQuotaNickname(string quotaNickname) { DARABONBA_PTR_SET_VALUE(quotaNickname_, quotaNickname) };


        // quotaType Field Functions 
        bool hasQuotaType() const { return this->quotaType_ != nullptr;};
        void deleteQuotaType() { this->quotaType_ = nullptr;};
        inline string getQuotaType() const { DARABONBA_PTR_GET_DEFAULT(quotaType_, "") };
        inline JobInfoList& setQuotaType(string quotaType) { DARABONBA_PTR_SET_VALUE(quotaType_, quotaType) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline JobInfoList& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // runningAtTime Field Functions 
        bool hasRunningAtTime() const { return this->runningAtTime_ != nullptr;};
        void deleteRunningAtTime() { this->runningAtTime_ = nullptr;};
        inline int64_t getRunningAtTime() const { DARABONBA_PTR_GET_DEFAULT(runningAtTime_, 0L) };
        inline JobInfoList& setRunningAtTime(int64_t runningAtTime) { DARABONBA_PTR_SET_VALUE(runningAtTime_, runningAtTime) };


        // runningTime Field Functions 
        bool hasRunningTime() const { return this->runningTime_ != nullptr;};
        void deleteRunningTime() { this->runningTime_ = nullptr;};
        inline int64_t getRunningTime() const { DARABONBA_PTR_GET_DEFAULT(runningTime_, 0L) };
        inline JobInfoList& setRunningTime(int64_t runningTime) { DARABONBA_PTR_SET_VALUE(runningTime_, runningTime) };


        // signature Field Functions 
        bool hasSignature() const { return this->signature_ != nullptr;};
        void deleteSignature() { this->signature_ = nullptr;};
        inline string getSignature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
        inline JobInfoList& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


        // snapshotTime Field Functions 
        bool hasSnapshotTime() const { return this->snapshotTime_ != nullptr;};
        void deleteSnapshotTime() { this->snapshotTime_ = nullptr;};
        inline int64_t getSnapshotTime() const { DARABONBA_PTR_GET_DEFAULT(snapshotTime_, 0L) };
        inline JobInfoList& setSnapshotTime(int64_t snapshotTime) { DARABONBA_PTR_SET_VALUE(snapshotTime_, snapshotTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline JobInfoList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // submittedAtTime Field Functions 
        bool hasSubmittedAtTime() const { return this->submittedAtTime_ != nullptr;};
        void deleteSubmittedAtTime() { this->submittedAtTime_ = nullptr;};
        inline int64_t getSubmittedAtTime() const { DARABONBA_PTR_GET_DEFAULT(submittedAtTime_, 0L) };
        inline JobInfoList& setSubmittedAtTime(int64_t submittedAtTime) { DARABONBA_PTR_SET_VALUE(submittedAtTime_, submittedAtTime) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
        inline JobInfoList& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


        // totalTime Field Functions 
        bool hasTotalTime() const { return this->totalTime_ != nullptr;};
        void deleteTotalTime() { this->totalTime_ = nullptr;};
        inline int64_t getTotalTime() const { DARABONBA_PTR_GET_DEFAULT(totalTime_, 0L) };
        inline JobInfoList& setTotalTime(int64_t totalTime) { DARABONBA_PTR_SET_VALUE(totalTime_, totalTime) };


        // waitingTime Field Functions 
        bool hasWaitingTime() const { return this->waitingTime_ != nullptr;};
        void deleteWaitingTime() { this->waitingTime_ = nullptr;};
        inline int64_t getWaitingTime() const { DARABONBA_PTR_GET_DEFAULT(waitingTime_, 0L) };
        inline JobInfoList& setWaitingTime(int64_t waitingTime) { DARABONBA_PTR_SET_VALUE(waitingTime_, waitingTime) };


      protected:
        // The CPU request amount of the job at the snapshot time point. Unit: Core.
        shared_ptr<int64_t> cpuRequest_ {};
        // CPU usage of the job at the snapshot time. Unit: Core.
        shared_ptr<int64_t> cpuUsage_ {};
        // The CPU satisfaction ratio of the job at the snapshot time point (cpuUsage/cpuRequest).
        shared_ptr<double> cpuUsageToRequestRatio_ {};
        // The ID of the upstream node.
        shared_ptr<string> extNodeId_ {};
        // The account ID of the task owner.
        shared_ptr<string> extNodeOnDuty_ {};
        // The upstream platform.
        shared_ptr<string> extPlantFrom_ {};
        shared_ptr<string> extPlatformId_ {};
        // The instance ID.
        shared_ptr<string> instanceId_ {};
        // The account that commits the job.
        shared_ptr<string> jobOwner_ {};
        // The type of the job.
        shared_ptr<string> jobType_ {};
        // Not applicable.
        shared_ptr<double> maxCpuPct_ {};
        // Not applicable.
        shared_ptr<double> maxMemoryPct_ {};
        // The Memory request amount of the job at the snapshot time point. Unit: MB.
        shared_ptr<int64_t> memoryRequest_ {};
        // Memory usage of the job at the snapshot time. Unit: MB.
        shared_ptr<int64_t> memoryUsage_ {};
        // The Memory satisfaction ratio of the job at the snapshot time point (memoryUsage/memoryRequest).
        shared_ptr<double> memoryUsageToRequestRatio_ {};
        // The CPU usage ratio of the annual or monthly subscription job at the snapshot time (CPU usage / (reserved CPU guarantee + elastic reserved CPU)). This parameter is not available for pay-as-you-go jobs.
        shared_ptr<double> minCpuPct_ {};
        // The memory usage ratio of the annual or monthly subscription job at the observation time (memory usage / (reserved memory guarantee + elastic reserved memory)). This parameter is not available for pay-as-you-go jobs.
        shared_ptr<double> minMemoryPct_ {};
        // The priority of the job.
        shared_ptr<int64_t> priority_ {};
        // The name of the MaxCompute project.
        shared_ptr<string> project_ {};
        // The nickname of the computing Quota used by the job.
        shared_ptr<string> quotaNickname_ {};
        // The type of the quota.
        shared_ptr<string> quotaType_ {};
        // The region ID.
        shared_ptr<string> region_ {};
        // The start time of the job.
        // > The time when the job received the first batch of computing resources.
        shared_ptr<int64_t> runningAtTime_ {};
        // The running duration, which is the duration from the runningAtTime to the snapshotTime of the job.  Unit: seconds (s).
        shared_ptr<int64_t> runningTime_ {};
        // The signature of the SQL job.
        shared_ptr<string> signature_ {};
        // The snapshot time.
        shared_ptr<int64_t> snapshotTime_ {};
        // The snapshot status of the job.
        // 
        // > The snapshot status is only running.
        shared_ptr<string> status_ {};
        // The time when the job was committed.
        shared_ptr<int64_t> submittedAtTime_ {};
        // The tenant ID.
        shared_ptr<string> tenantId_ {};
        // The interval from the time when the job was submitted to the snapshotTime .Unit: seconds (s).
        shared_ptr<int64_t> totalTime_ {};
        // The duration from the time the job is submitted to the time the job starts to run. Unit: seconds (s).
        shared_ptr<int64_t> waitingTime_ {};
      };

      virtual bool empty() const override { return this->jobInfoList_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // jobInfoList Field Functions 
      bool hasJobInfoList() const { return this->jobInfoList_ != nullptr;};
      void deleteJobInfoList() { this->jobInfoList_ = nullptr;};
      inline const vector<Data::JobInfoList> & getJobInfoList() const { DARABONBA_PTR_GET_CONST(jobInfoList_, vector<Data::JobInfoList>) };
      inline vector<Data::JobInfoList> getJobInfoList() { DARABONBA_PTR_GET(jobInfoList_, vector<Data::JobInfoList>) };
      inline Data& setJobInfoList(const vector<Data::JobInfoList> & jobInfoList) { DARABONBA_PTR_SET_VALUE(jobInfoList_, jobInfoList) };
      inline Data& setJobInfoList(vector<Data::JobInfoList> && jobInfoList) { DARABONBA_PTR_SET_RVALUE(jobInfoList_, jobInfoList) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
      inline Data& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The job snapshots.
      shared_ptr<vector<Data::JobInfoList>> jobInfoList_ {};
      // The page number.
      shared_ptr<int64_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int64_t> pageSize_ {};
      // The total number of returned results.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->httpCode_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListJobSnapshotInfosResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListJobSnapshotInfosResponseBody::Data) };
    inline ListJobSnapshotInfosResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListJobSnapshotInfosResponseBody::Data) };
    inline ListJobSnapshotInfosResponseBody& setData(const ListJobSnapshotInfosResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListJobSnapshotInfosResponseBody& setData(ListJobSnapshotInfosResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListJobSnapshotInfosResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline ListJobSnapshotInfosResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline ListJobSnapshotInfosResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListJobSnapshotInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<ListJobSnapshotInfosResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMsg_ {};
    // The HTTP status code.
    // 
    // - 1xx: informational response. The request is received and is being processed.
    // - 2xx: success. The request is successfully received, understood, and accepted by the server.
    // - 3xx: redirection. The request is redirected, and further actions are required to complete the request.
    // - 4xx: client error. The request contains invalid request parameters or syntaxes, or specific request conditions cannot be met.
    // - 5xx: server error. The server cannot meet requirements due to other reasons.
    shared_ptr<int32_t> httpCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
