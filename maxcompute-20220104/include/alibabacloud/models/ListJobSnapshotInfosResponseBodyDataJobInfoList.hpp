// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSNAPSHOTINFOSRESPONSEBODYDATAJOBINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSNAPSHOTINFOSRESPONSEBODYDATAJOBINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListJobSnapshotInfosResponseBodyDataJobInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobSnapshotInfosResponseBodyDataJobInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(cpuRequest, cpuRequest_);
      DARABONBA_PTR_TO_JSON(cpuUsage, cpuUsage_);
      DARABONBA_PTR_TO_JSON(cpuUsageToRequestRatio, cpuUsageToRequestRatio_);
      DARABONBA_PTR_TO_JSON(extNodeId, extNodeId_);
      DARABONBA_PTR_TO_JSON(extNodeOnDuty, extNodeOnDuty_);
      DARABONBA_PTR_TO_JSON(extPlantFrom, extPlantFrom_);
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
    friend void from_json(const Darabonba::Json& j, ListJobSnapshotInfosResponseBodyDataJobInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(cpuRequest, cpuRequest_);
      DARABONBA_PTR_FROM_JSON(cpuUsage, cpuUsage_);
      DARABONBA_PTR_FROM_JSON(cpuUsageToRequestRatio, cpuUsageToRequestRatio_);
      DARABONBA_PTR_FROM_JSON(extNodeId, extNodeId_);
      DARABONBA_PTR_FROM_JSON(extNodeOnDuty, extNodeOnDuty_);
      DARABONBA_PTR_FROM_JSON(extPlantFrom, extPlantFrom_);
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
    ListJobSnapshotInfosResponseBodyDataJobInfoList() = default ;
    ListJobSnapshotInfosResponseBodyDataJobInfoList(const ListJobSnapshotInfosResponseBodyDataJobInfoList &) = default ;
    ListJobSnapshotInfosResponseBodyDataJobInfoList(ListJobSnapshotInfosResponseBodyDataJobInfoList &&) = default ;
    ListJobSnapshotInfosResponseBodyDataJobInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobSnapshotInfosResponseBodyDataJobInfoList() = default ;
    ListJobSnapshotInfosResponseBodyDataJobInfoList& operator=(const ListJobSnapshotInfosResponseBodyDataJobInfoList &) = default ;
    ListJobSnapshotInfosResponseBodyDataJobInfoList& operator=(ListJobSnapshotInfosResponseBodyDataJobInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cpuRequest_ != nullptr
        && this->cpuUsage_ != nullptr && this->cpuUsageToRequestRatio_ != nullptr && this->extNodeId_ != nullptr && this->extNodeOnDuty_ != nullptr && this->extPlantFrom_ != nullptr
        && this->instanceId_ != nullptr && this->jobOwner_ != nullptr && this->jobType_ != nullptr && this->maxCpuPct_ != nullptr && this->maxMemoryPct_ != nullptr
        && this->memoryRequest_ != nullptr && this->memoryUsage_ != nullptr && this->memoryUsageToRequestRatio_ != nullptr && this->minCpuPct_ != nullptr && this->minMemoryPct_ != nullptr
        && this->priority_ != nullptr && this->project_ != nullptr && this->quotaNickname_ != nullptr && this->quotaType_ != nullptr && this->region_ != nullptr
        && this->runningAtTime_ != nullptr && this->runningTime_ != nullptr && this->signature_ != nullptr && this->snapshotTime_ != nullptr && this->status_ != nullptr
        && this->submittedAtTime_ != nullptr && this->tenantId_ != nullptr && this->totalTime_ != nullptr && this->waitingTime_ != nullptr; };
    // cpuRequest Field Functions 
    bool hasCpuRequest() const { return this->cpuRequest_ != nullptr;};
    void deleteCpuRequest() { this->cpuRequest_ = nullptr;};
    inline int64_t cpuRequest() const { DARABONBA_PTR_GET_DEFAULT(cpuRequest_, 0L) };
    inline ListJobSnapshotInfosResponseBodyDataJobInfoList& setCpuRequest(int64_t cpuRequest) { DARABONBA_PTR_SET_VALUE(cpuRequest_, cpuRequest) };


    // cpuUsage Field Functions 
    bool hasCpuUsage() const { return this->cpuUsage_ != nullptr;};
    void deleteCpuUsage() { this->cpuUsage_ = nullptr;};
    inline int64_t cpuUsage() const { DARABONBA_PTR_GET_DEFAULT(cpuUsage_, 0L) };
    inline ListJobSnapshotInfosResponseBodyDataJobInfoList& setCpuUsage(int64_t cpuUsage) { DARABONBA_PTR_SET_VALUE(cpuUsage_, cpuUsage) };


    // cpuUsageToRequestRatio Field Functions 
    bool hasCpuUsageToRequestRatio() const { return this->cpuUsageToRequestRatio_ != nullptr;};
    void deleteCpuUsageToRequestRatio() { this->cpuUsageToRequestRatio_ = nullptr;};
    inline double cpuUsageToRequestRatio() const { DARABONBA_PTR_GET_DEFAULT(cpuUsageToRequestRatio_, 0.0) };
    inline ListJobSnapshotInfosResponseBodyDataJobInfoList& setCpuUsageToRequestRatio(double cpuUsageToRequestRatio) { DARABONBA_PTR_SET_VALUE(cpuUsageToRequestRatio_, cpuUsageToRequestRatio) };


    // extNodeId Field Functions 
    bool hasExtNodeId() const { return this->extNodeId_ != nullptr;};
    void deleteExtNodeId() { this->extNodeId_ = nullptr;};
    inline string extNodeId() const { DARABONBA_PTR_GET_DEFAULT(extNodeId_, "") };
    inline ListJobSnapshotInfosResponseBodyDataJobInfoList& setExtNodeId(string extNodeId) { DARABONBA_PTR_SET_VALUE(extNodeId_, extNodeId) };


    // extNodeOnDuty Field Functions 
    bool hasExtNodeOnDuty() const { return this->extNodeOnDuty_ != nullptr;};
    void deleteExtNodeOnDuty() { this->extNodeOnDuty_ = nullptr;};
    inline string extNodeOnDuty() const { DARABONBA_PTR_GET_DEFAULT(extNodeOnDuty_, "") };
    inline ListJobSnapshotInfosResponseBodyDataJobInfoList& setExtNodeOnDuty(string extNodeOnDuty) { DARABONBA_PTR_SET_VALUE(extNodeOnDuty_, extNodeOnDuty) };


    // extPlantFrom Field Functions 
    bool hasExtPlantFrom() const { return this->extPlantFrom_ != nullptr;};
    void deleteExtPlantFrom() { this->extPlantFrom_ = nullptr;};
    inline string extPlantFrom() const { DARABONBA_PTR_GET_DEFAULT(extPlantFrom_, "") };
    inline ListJobSnapshotInfosResponseBodyDataJobInfoList& setExtPlantFrom(string extPlantFrom) { DARABONBA_PTR_SET_VALUE(extPlantFrom_, extPlantFrom) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListJobSnapshotInfosResponseBodyDataJobInfoList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobOwner Field Functions 
    bool hasJobOwner() const { return this->jobOwner_ != nullptr;};
    void deleteJobOwner() { this->jobOwner_ = nullptr;};
    inline string jobOwner() const { DARABONBA_PTR_GET_DEFAULT(jobOwner_, "") };
    inline ListJobSnapshotInfosResponseBodyDataJobInfoList& setJobOwner(string jobOwner) { DARABONBA_PTR_SET_VALUE(jobOwner_, jobOwner) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline ListJobSnapshotInfosResponseBodyDataJobInfoList& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // maxCpuPct Field Functions 
    bool hasMaxCpuPct() const { return this->maxCpuPct_ != nullptr;};
    void deleteMaxCpuPct() { this->maxCpuPct_ = nullptr;};
    inline double maxCpuPct() const { DARABONBA_PTR_GET_DEFAULT(maxCpuPct_, 0.0) };
    inline ListJobSnapshotInfosResponseBodyDataJobInfoList& setMaxCpuPct(double maxCpuPct) { DARABONBA_PTR_SET_VALUE(maxCpuPct_, maxCpuPct) };


    // maxMemoryPct Field Functions 
    bool hasMaxMemoryPct() const { return this->maxMemoryPct_ != nullptr;};
    void deleteMaxMemoryPct() { this->maxMemoryPct_ = nullptr;};
    inline double maxMemoryPct() const { DARABONBA_PTR_GET_DEFAULT(maxMemoryPct_, 0.0) };
    inline ListJobSnapshotInfosResponseBodyDataJobInfoList& setMaxMemoryPct(double maxMemoryPct) { DARABONBA_PTR_SET_VALUE(maxMemoryPct_, maxMemoryPct) };


    // memoryRequest Field Functions 
    bool hasMemoryRequest() const { return this->memoryRequest_ != nullptr;};
    void deleteMemoryRequest() { this->memoryRequest_ = nullptr;};
    inline int64_t memoryRequest() const { DARABONBA_PTR_GET_DEFAULT(memoryRequest_, 0L) };
    inline ListJobSnapshotInfosResponseBodyDataJobInfoList& setMemoryRequest(int64_t memoryRequest) { DARABONBA_PTR_SET_VALUE(memoryRequest_, memoryRequest) };


    // memoryUsage Field Functions 
    bool hasMemoryUsage() const { return this->memoryUsage_ != nullptr;};
    void deleteMemoryUsage() { this->memoryUsage_ = nullptr;};
    inline int64_t memoryUsage() const { DARABONBA_PTR_GET_DEFAULT(memoryUsage_, 0L) };
    inline ListJobSnapshotInfosResponseBodyDataJobInfoList& setMemoryUsage(int64_t memoryUsage) { DARABONBA_PTR_SET_VALUE(memoryUsage_, memoryUsage) };


    // memoryUsageToRequestRatio Field Functions 
    bool hasMemoryUsageToRequestRatio() const { return this->memoryUsageToRequestRatio_ != nullptr;};
    void deleteMemoryUsageToRequestRatio() { this->memoryUsageToRequestRatio_ = nullptr;};
    inline double memoryUsageToRequestRatio() const { DARABONBA_PTR_GET_DEFAULT(memoryUsageToRequestRatio_, 0.0) };
    inline ListJobSnapshotInfosResponseBodyDataJobInfoList& setMemoryUsageToRequestRatio(double memoryUsageToRequestRatio) { DARABONBA_PTR_SET_VALUE(memoryUsageToRequestRatio_, memoryUsageToRequestRatio) };


    // minCpuPct Field Functions 
    bool hasMinCpuPct() const { return this->minCpuPct_ != nullptr;};
    void deleteMinCpuPct() { this->minCpuPct_ = nullptr;};
    inline double minCpuPct() const { DARABONBA_PTR_GET_DEFAULT(minCpuPct_, 0.0) };
    inline ListJobSnapshotInfosResponseBodyDataJobInfoList& setMinCpuPct(double minCpuPct) { DARABONBA_PTR_SET_VALUE(minCpuPct_, minCpuPct) };


    // minMemoryPct Field Functions 
    bool hasMinMemoryPct() const { return this->minMemoryPct_ != nullptr;};
    void deleteMinMemoryPct() { this->minMemoryPct_ = nullptr;};
    inline double minMemoryPct() const { DARABONBA_PTR_GET_DEFAULT(minMemoryPct_, 0.0) };
    inline ListJobSnapshotInfosResponseBodyDataJobInfoList& setMinMemoryPct(double minMemoryPct) { DARABONBA_PTR_SET_VALUE(minMemoryPct_, minMemoryPct) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int64_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
    inline ListJobSnapshotInfosResponseBodyDataJobInfoList& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline ListJobSnapshotInfosResponseBodyDataJobInfoList& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // quotaNickname Field Functions 
    bool hasQuotaNickname() const { return this->quotaNickname_ != nullptr;};
    void deleteQuotaNickname() { this->quotaNickname_ = nullptr;};
    inline string quotaNickname() const { DARABONBA_PTR_GET_DEFAULT(quotaNickname_, "") };
    inline ListJobSnapshotInfosResponseBodyDataJobInfoList& setQuotaNickname(string quotaNickname) { DARABONBA_PTR_SET_VALUE(quotaNickname_, quotaNickname) };


    // quotaType Field Functions 
    bool hasQuotaType() const { return this->quotaType_ != nullptr;};
    void deleteQuotaType() { this->quotaType_ = nullptr;};
    inline string quotaType() const { DARABONBA_PTR_GET_DEFAULT(quotaType_, "") };
    inline ListJobSnapshotInfosResponseBodyDataJobInfoList& setQuotaType(string quotaType) { DARABONBA_PTR_SET_VALUE(quotaType_, quotaType) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListJobSnapshotInfosResponseBodyDataJobInfoList& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // runningAtTime Field Functions 
    bool hasRunningAtTime() const { return this->runningAtTime_ != nullptr;};
    void deleteRunningAtTime() { this->runningAtTime_ = nullptr;};
    inline int64_t runningAtTime() const { DARABONBA_PTR_GET_DEFAULT(runningAtTime_, 0L) };
    inline ListJobSnapshotInfosResponseBodyDataJobInfoList& setRunningAtTime(int64_t runningAtTime) { DARABONBA_PTR_SET_VALUE(runningAtTime_, runningAtTime) };


    // runningTime Field Functions 
    bool hasRunningTime() const { return this->runningTime_ != nullptr;};
    void deleteRunningTime() { this->runningTime_ = nullptr;};
    inline int64_t runningTime() const { DARABONBA_PTR_GET_DEFAULT(runningTime_, 0L) };
    inline ListJobSnapshotInfosResponseBodyDataJobInfoList& setRunningTime(int64_t runningTime) { DARABONBA_PTR_SET_VALUE(runningTime_, runningTime) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string signature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline ListJobSnapshotInfosResponseBodyDataJobInfoList& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


    // snapshotTime Field Functions 
    bool hasSnapshotTime() const { return this->snapshotTime_ != nullptr;};
    void deleteSnapshotTime() { this->snapshotTime_ = nullptr;};
    inline int64_t snapshotTime() const { DARABONBA_PTR_GET_DEFAULT(snapshotTime_, 0L) };
    inline ListJobSnapshotInfosResponseBodyDataJobInfoList& setSnapshotTime(int64_t snapshotTime) { DARABONBA_PTR_SET_VALUE(snapshotTime_, snapshotTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListJobSnapshotInfosResponseBodyDataJobInfoList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // submittedAtTime Field Functions 
    bool hasSubmittedAtTime() const { return this->submittedAtTime_ != nullptr;};
    void deleteSubmittedAtTime() { this->submittedAtTime_ = nullptr;};
    inline int64_t submittedAtTime() const { DARABONBA_PTR_GET_DEFAULT(submittedAtTime_, 0L) };
    inline ListJobSnapshotInfosResponseBodyDataJobInfoList& setSubmittedAtTime(int64_t submittedAtTime) { DARABONBA_PTR_SET_VALUE(submittedAtTime_, submittedAtTime) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListJobSnapshotInfosResponseBodyDataJobInfoList& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // totalTime Field Functions 
    bool hasTotalTime() const { return this->totalTime_ != nullptr;};
    void deleteTotalTime() { this->totalTime_ = nullptr;};
    inline int64_t totalTime() const { DARABONBA_PTR_GET_DEFAULT(totalTime_, 0L) };
    inline ListJobSnapshotInfosResponseBodyDataJobInfoList& setTotalTime(int64_t totalTime) { DARABONBA_PTR_SET_VALUE(totalTime_, totalTime) };


    // waitingTime Field Functions 
    bool hasWaitingTime() const { return this->waitingTime_ != nullptr;};
    void deleteWaitingTime() { this->waitingTime_ = nullptr;};
    inline int64_t waitingTime() const { DARABONBA_PTR_GET_DEFAULT(waitingTime_, 0L) };
    inline ListJobSnapshotInfosResponseBodyDataJobInfoList& setWaitingTime(int64_t waitingTime) { DARABONBA_PTR_SET_VALUE(waitingTime_, waitingTime) };


  protected:
    // The CPU request amount of the job at the snapshot time point. Unit: Core.
    std::shared_ptr<int64_t> cpuRequest_ = nullptr;
    // CPU usage of the job at the snapshot time. Unit: Core.
    std::shared_ptr<int64_t> cpuUsage_ = nullptr;
    // The CPU satisfaction ratio of the job at the snapshot time point (cpuUsage/cpuRequest).
    std::shared_ptr<double> cpuUsageToRequestRatio_ = nullptr;
    // The ID of the upstream node.
    std::shared_ptr<string> extNodeId_ = nullptr;
    // The account ID of the task owner.
    std::shared_ptr<string> extNodeOnDuty_ = nullptr;
    // The upstream platform.
    std::shared_ptr<string> extPlantFrom_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The account that commits the job.
    std::shared_ptr<string> jobOwner_ = nullptr;
    // The type of the job.
    std::shared_ptr<string> jobType_ = nullptr;
    // Not applicable.
    std::shared_ptr<double> maxCpuPct_ = nullptr;
    // Not applicable.
    std::shared_ptr<double> maxMemoryPct_ = nullptr;
    // The Memory request amount of the job at the snapshot time point. Unit: MB.
    std::shared_ptr<int64_t> memoryRequest_ = nullptr;
    // Memory usage of the job at the snapshot time. Unit: MB.
    std::shared_ptr<int64_t> memoryUsage_ = nullptr;
    // The Memory satisfaction ratio of the job at the snapshot time point (memoryUsage/memoryRequest).
    std::shared_ptr<double> memoryUsageToRequestRatio_ = nullptr;
    // The CPU usage ratio of the annual or monthly subscription job at the snapshot time (CPU usage / (reserved CPU guarantee + elastic reserved CPU)). This parameter is not available for pay-as-you-go jobs.
    std::shared_ptr<double> minCpuPct_ = nullptr;
    // The memory usage ratio of the annual or monthly subscription job at the observation time (memory usage / (reserved memory guarantee + elastic reserved memory)). This parameter is not available for pay-as-you-go jobs.
    std::shared_ptr<double> minMemoryPct_ = nullptr;
    // The priority of the job.
    std::shared_ptr<int64_t> priority_ = nullptr;
    // The name of the MaxCompute project.
    std::shared_ptr<string> project_ = nullptr;
    // The nickname of the computing Quota used by the job.
    std::shared_ptr<string> quotaNickname_ = nullptr;
    // The type of the quota.
    std::shared_ptr<string> quotaType_ = nullptr;
    // The region ID.
    std::shared_ptr<string> region_ = nullptr;
    // The start time of the job.
    // > The time when the job received the first batch of computing resources.
    std::shared_ptr<int64_t> runningAtTime_ = nullptr;
    // The running duration, which is the duration from the runningAtTime to the snapshotTime of the job.  Unit: seconds (s).
    std::shared_ptr<int64_t> runningTime_ = nullptr;
    // The signature of the SQL job.
    std::shared_ptr<string> signature_ = nullptr;
    // The snapshot time.
    std::shared_ptr<int64_t> snapshotTime_ = nullptr;
    // The snapshot status of the job.
    // 
    // > The snapshot status is only running.
    std::shared_ptr<string> status_ = nullptr;
    // The time when the job was committed.
    std::shared_ptr<int64_t> submittedAtTime_ = nullptr;
    // The tenant ID.
    std::shared_ptr<string> tenantId_ = nullptr;
    // The interval from the time when the job was submitted to the snapshotTime .Unit: seconds (s).
    std::shared_ptr<int64_t> totalTime_ = nullptr;
    // The duration from the time the job is submitted to the time the job starts to run. Unit: seconds (s).
    std::shared_ptr<int64_t> waitingTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
