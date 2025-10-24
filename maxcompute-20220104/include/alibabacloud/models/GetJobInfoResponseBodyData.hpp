// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETJOBINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetJobInfoResponseBodyDataJobSubStatusList.hpp>
#include <alibabacloud/models/GetJobInfoResponseBodyDataSceneResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetJobInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(cuUsage, cuUsage_);
      DARABONBA_PTR_TO_JSON(endAtTime, endAtTime_);
      DARABONBA_PTR_TO_JSON(extNodeId, extNodeId_);
      DARABONBA_PTR_TO_JSON(extNodeOnDuty, extNodeOnDuty_);
      DARABONBA_PTR_TO_JSON(extPlantFrom, extPlantFrom_);
      DARABONBA_PTR_TO_JSON(inputBytes, inputBytes_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(jobOwner, jobOwner_);
      DARABONBA_PTR_TO_JSON(jobSubStatusList, jobSubStatusList_);
      DARABONBA_PTR_TO_JSON(jobType, jobType_);
      DARABONBA_PTR_TO_JSON(memoryUsage, memoryUsage_);
      DARABONBA_PTR_TO_JSON(priority, priority_);
      DARABONBA_PTR_TO_JSON(project, project_);
      DARABONBA_PTR_TO_JSON(quotaNickname, quotaNickname_);
      DARABONBA_PTR_TO_JSON(quotaType, quotaType_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(runningAtTime, runningAtTime_);
      DARABONBA_PTR_TO_JSON(runningTime, runningTime_);
      DARABONBA_PTR_TO_JSON(sceneResults, sceneResults_);
      DARABONBA_PTR_TO_JSON(signature, signature_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(submittedAtTime, submittedAtTime_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(totalTime, totalTime_);
      DARABONBA_PTR_TO_JSON(waitingTime, waitingTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(cuUsage, cuUsage_);
      DARABONBA_PTR_FROM_JSON(endAtTime, endAtTime_);
      DARABONBA_PTR_FROM_JSON(extNodeId, extNodeId_);
      DARABONBA_PTR_FROM_JSON(extNodeOnDuty, extNodeOnDuty_);
      DARABONBA_PTR_FROM_JSON(extPlantFrom, extPlantFrom_);
      DARABONBA_PTR_FROM_JSON(inputBytes, inputBytes_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(jobOwner, jobOwner_);
      DARABONBA_PTR_FROM_JSON(jobSubStatusList, jobSubStatusList_);
      DARABONBA_PTR_FROM_JSON(jobType, jobType_);
      DARABONBA_PTR_FROM_JSON(memoryUsage, memoryUsage_);
      DARABONBA_PTR_FROM_JSON(priority, priority_);
      DARABONBA_PTR_FROM_JSON(project, project_);
      DARABONBA_PTR_FROM_JSON(quotaNickname, quotaNickname_);
      DARABONBA_PTR_FROM_JSON(quotaType, quotaType_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(runningAtTime, runningAtTime_);
      DARABONBA_PTR_FROM_JSON(runningTime, runningTime_);
      DARABONBA_PTR_FROM_JSON(sceneResults, sceneResults_);
      DARABONBA_PTR_FROM_JSON(signature, signature_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(submittedAtTime, submittedAtTime_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(totalTime, totalTime_);
      DARABONBA_PTR_FROM_JSON(waitingTime, waitingTime_);
    };
    GetJobInfoResponseBodyData() = default ;
    GetJobInfoResponseBodyData(const GetJobInfoResponseBodyData &) = default ;
    GetJobInfoResponseBodyData(GetJobInfoResponseBodyData &&) = default ;
    GetJobInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobInfoResponseBodyData() = default ;
    GetJobInfoResponseBodyData& operator=(const GetJobInfoResponseBodyData &) = default ;
    GetJobInfoResponseBodyData& operator=(GetJobInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cuUsage_ == nullptr
        && return this->endAtTime_ == nullptr && return this->extNodeId_ == nullptr && return this->extNodeOnDuty_ == nullptr && return this->extPlantFrom_ == nullptr && return this->inputBytes_ == nullptr
        && return this->instanceId_ == nullptr && return this->jobOwner_ == nullptr && return this->jobSubStatusList_ == nullptr && return this->jobType_ == nullptr && return this->memoryUsage_ == nullptr
        && return this->priority_ == nullptr && return this->project_ == nullptr && return this->quotaNickname_ == nullptr && return this->quotaType_ == nullptr && return this->region_ == nullptr
        && return this->runningAtTime_ == nullptr && return this->runningTime_ == nullptr && return this->sceneResults_ == nullptr && return this->signature_ == nullptr && return this->status_ == nullptr
        && return this->submittedAtTime_ == nullptr && return this->tenantId_ == nullptr && return this->totalTime_ == nullptr && return this->waitingTime_ == nullptr; };
    // cuUsage Field Functions 
    bool hasCuUsage() const { return this->cuUsage_ != nullptr;};
    void deleteCuUsage() { this->cuUsage_ = nullptr;};
    inline int64_t cuUsage() const { DARABONBA_PTR_GET_DEFAULT(cuUsage_, 0L) };
    inline GetJobInfoResponseBodyData& setCuUsage(int64_t cuUsage) { DARABONBA_PTR_SET_VALUE(cuUsage_, cuUsage) };


    // endAtTime Field Functions 
    bool hasEndAtTime() const { return this->endAtTime_ != nullptr;};
    void deleteEndAtTime() { this->endAtTime_ = nullptr;};
    inline int64_t endAtTime() const { DARABONBA_PTR_GET_DEFAULT(endAtTime_, 0L) };
    inline GetJobInfoResponseBodyData& setEndAtTime(int64_t endAtTime) { DARABONBA_PTR_SET_VALUE(endAtTime_, endAtTime) };


    // extNodeId Field Functions 
    bool hasExtNodeId() const { return this->extNodeId_ != nullptr;};
    void deleteExtNodeId() { this->extNodeId_ = nullptr;};
    inline string extNodeId() const { DARABONBA_PTR_GET_DEFAULT(extNodeId_, "") };
    inline GetJobInfoResponseBodyData& setExtNodeId(string extNodeId) { DARABONBA_PTR_SET_VALUE(extNodeId_, extNodeId) };


    // extNodeOnDuty Field Functions 
    bool hasExtNodeOnDuty() const { return this->extNodeOnDuty_ != nullptr;};
    void deleteExtNodeOnDuty() { this->extNodeOnDuty_ = nullptr;};
    inline string extNodeOnDuty() const { DARABONBA_PTR_GET_DEFAULT(extNodeOnDuty_, "") };
    inline GetJobInfoResponseBodyData& setExtNodeOnDuty(string extNodeOnDuty) { DARABONBA_PTR_SET_VALUE(extNodeOnDuty_, extNodeOnDuty) };


    // extPlantFrom Field Functions 
    bool hasExtPlantFrom() const { return this->extPlantFrom_ != nullptr;};
    void deleteExtPlantFrom() { this->extPlantFrom_ = nullptr;};
    inline string extPlantFrom() const { DARABONBA_PTR_GET_DEFAULT(extPlantFrom_, "") };
    inline GetJobInfoResponseBodyData& setExtPlantFrom(string extPlantFrom) { DARABONBA_PTR_SET_VALUE(extPlantFrom_, extPlantFrom) };


    // inputBytes Field Functions 
    bool hasInputBytes() const { return this->inputBytes_ != nullptr;};
    void deleteInputBytes() { this->inputBytes_ = nullptr;};
    inline double inputBytes() const { DARABONBA_PTR_GET_DEFAULT(inputBytes_, 0.0) };
    inline GetJobInfoResponseBodyData& setInputBytes(double inputBytes) { DARABONBA_PTR_SET_VALUE(inputBytes_, inputBytes) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetJobInfoResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobOwner Field Functions 
    bool hasJobOwner() const { return this->jobOwner_ != nullptr;};
    void deleteJobOwner() { this->jobOwner_ = nullptr;};
    inline string jobOwner() const { DARABONBA_PTR_GET_DEFAULT(jobOwner_, "") };
    inline GetJobInfoResponseBodyData& setJobOwner(string jobOwner) { DARABONBA_PTR_SET_VALUE(jobOwner_, jobOwner) };


    // jobSubStatusList Field Functions 
    bool hasJobSubStatusList() const { return this->jobSubStatusList_ != nullptr;};
    void deleteJobSubStatusList() { this->jobSubStatusList_ = nullptr;};
    inline const vector<Models::GetJobInfoResponseBodyDataJobSubStatusList> & jobSubStatusList() const { DARABONBA_PTR_GET_CONST(jobSubStatusList_, vector<Models::GetJobInfoResponseBodyDataJobSubStatusList>) };
    inline vector<Models::GetJobInfoResponseBodyDataJobSubStatusList> jobSubStatusList() { DARABONBA_PTR_GET(jobSubStatusList_, vector<Models::GetJobInfoResponseBodyDataJobSubStatusList>) };
    inline GetJobInfoResponseBodyData& setJobSubStatusList(const vector<Models::GetJobInfoResponseBodyDataJobSubStatusList> & jobSubStatusList) { DARABONBA_PTR_SET_VALUE(jobSubStatusList_, jobSubStatusList) };
    inline GetJobInfoResponseBodyData& setJobSubStatusList(vector<Models::GetJobInfoResponseBodyDataJobSubStatusList> && jobSubStatusList) { DARABONBA_PTR_SET_RVALUE(jobSubStatusList_, jobSubStatusList) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline GetJobInfoResponseBodyData& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // memoryUsage Field Functions 
    bool hasMemoryUsage() const { return this->memoryUsage_ != nullptr;};
    void deleteMemoryUsage() { this->memoryUsage_ = nullptr;};
    inline int64_t memoryUsage() const { DARABONBA_PTR_GET_DEFAULT(memoryUsage_, 0L) };
    inline GetJobInfoResponseBodyData& setMemoryUsage(int64_t memoryUsage) { DARABONBA_PTR_SET_VALUE(memoryUsage_, memoryUsage) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int64_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
    inline GetJobInfoResponseBodyData& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline GetJobInfoResponseBodyData& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // quotaNickname Field Functions 
    bool hasQuotaNickname() const { return this->quotaNickname_ != nullptr;};
    void deleteQuotaNickname() { this->quotaNickname_ = nullptr;};
    inline string quotaNickname() const { DARABONBA_PTR_GET_DEFAULT(quotaNickname_, "") };
    inline GetJobInfoResponseBodyData& setQuotaNickname(string quotaNickname) { DARABONBA_PTR_SET_VALUE(quotaNickname_, quotaNickname) };


    // quotaType Field Functions 
    bool hasQuotaType() const { return this->quotaType_ != nullptr;};
    void deleteQuotaType() { this->quotaType_ = nullptr;};
    inline string quotaType() const { DARABONBA_PTR_GET_DEFAULT(quotaType_, "") };
    inline GetJobInfoResponseBodyData& setQuotaType(string quotaType) { DARABONBA_PTR_SET_VALUE(quotaType_, quotaType) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetJobInfoResponseBodyData& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // runningAtTime Field Functions 
    bool hasRunningAtTime() const { return this->runningAtTime_ != nullptr;};
    void deleteRunningAtTime() { this->runningAtTime_ = nullptr;};
    inline int64_t runningAtTime() const { DARABONBA_PTR_GET_DEFAULT(runningAtTime_, 0L) };
    inline GetJobInfoResponseBodyData& setRunningAtTime(int64_t runningAtTime) { DARABONBA_PTR_SET_VALUE(runningAtTime_, runningAtTime) };


    // runningTime Field Functions 
    bool hasRunningTime() const { return this->runningTime_ != nullptr;};
    void deleteRunningTime() { this->runningTime_ = nullptr;};
    inline int64_t runningTime() const { DARABONBA_PTR_GET_DEFAULT(runningTime_, 0L) };
    inline GetJobInfoResponseBodyData& setRunningTime(int64_t runningTime) { DARABONBA_PTR_SET_VALUE(runningTime_, runningTime) };


    // sceneResults Field Functions 
    bool hasSceneResults() const { return this->sceneResults_ != nullptr;};
    void deleteSceneResults() { this->sceneResults_ = nullptr;};
    inline const vector<Models::GetJobInfoResponseBodyDataSceneResults> & sceneResults() const { DARABONBA_PTR_GET_CONST(sceneResults_, vector<Models::GetJobInfoResponseBodyDataSceneResults>) };
    inline vector<Models::GetJobInfoResponseBodyDataSceneResults> sceneResults() { DARABONBA_PTR_GET(sceneResults_, vector<Models::GetJobInfoResponseBodyDataSceneResults>) };
    inline GetJobInfoResponseBodyData& setSceneResults(const vector<Models::GetJobInfoResponseBodyDataSceneResults> & sceneResults) { DARABONBA_PTR_SET_VALUE(sceneResults_, sceneResults) };
    inline GetJobInfoResponseBodyData& setSceneResults(vector<Models::GetJobInfoResponseBodyDataSceneResults> && sceneResults) { DARABONBA_PTR_SET_RVALUE(sceneResults_, sceneResults) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string signature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline GetJobInfoResponseBodyData& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetJobInfoResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // submittedAtTime Field Functions 
    bool hasSubmittedAtTime() const { return this->submittedAtTime_ != nullptr;};
    void deleteSubmittedAtTime() { this->submittedAtTime_ = nullptr;};
    inline int64_t submittedAtTime() const { DARABONBA_PTR_GET_DEFAULT(submittedAtTime_, 0L) };
    inline GetJobInfoResponseBodyData& setSubmittedAtTime(int64_t submittedAtTime) { DARABONBA_PTR_SET_VALUE(submittedAtTime_, submittedAtTime) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetJobInfoResponseBodyData& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // totalTime Field Functions 
    bool hasTotalTime() const { return this->totalTime_ != nullptr;};
    void deleteTotalTime() { this->totalTime_ = nullptr;};
    inline int64_t totalTime() const { DARABONBA_PTR_GET_DEFAULT(totalTime_, 0L) };
    inline GetJobInfoResponseBodyData& setTotalTime(int64_t totalTime) { DARABONBA_PTR_SET_VALUE(totalTime_, totalTime) };


    // waitingTime Field Functions 
    bool hasWaitingTime() const { return this->waitingTime_ != nullptr;};
    void deleteWaitingTime() { this->waitingTime_ = nullptr;};
    inline int64_t waitingTime() const { DARABONBA_PTR_GET_DEFAULT(waitingTime_, 0L) };
    inline GetJobInfoResponseBodyData& setWaitingTime(int64_t waitingTime) { DARABONBA_PTR_SET_VALUE(waitingTime_, waitingTime) };


  protected:
    // The amount of resources consumed by the job. This parameter is returned only for jobs that are complete.Unit: 100\\*Core\\*s.
    std::shared_ptr<int64_t> cuUsage_ = nullptr;
    // The end time of the job.
    std::shared_ptr<int64_t> endAtTime_ = nullptr;
    // The ID of the ancestor node.
    std::shared_ptr<string> extNodeId_ = nullptr;
    // The Alibaba Cloud account ID of the task owner.
    std::shared_ptr<string> extNodeOnDuty_ = nullptr;
    // The upstream platform.
    std::shared_ptr<string> extPlantFrom_ = nullptr;
    // The amount of data scanned by the job.
    std::shared_ptr<double> inputBytes_ = nullptr;
    // The job ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The owner of the job.
    std::shared_ptr<string> jobOwner_ = nullptr;
    // The substatuses of the job lifecycle.
    std::shared_ptr<vector<Models::GetJobInfoResponseBodyDataJobSubStatusList>> jobSubStatusList_ = nullptr;
    // The type of the job.
    std::shared_ptr<string> jobType_ = nullptr;
    // The number of memory consumed by the job. This parameter is returned only for jobs that are complete.Unit: MB\\*s.
    std::shared_ptr<int64_t> memoryUsage_ = nullptr;
    // The priority of the job.
    std::shared_ptr<int64_t> priority_ = nullptr;
    // The project name.
    std::shared_ptr<string> project_ = nullptr;
    // The nickname of the computing quota that is used by the job.
    std::shared_ptr<string> quotaNickname_ = nullptr;
    // The quota type.
    std::shared_ptr<string> quotaType_ = nullptr;
    // The region ID.
    std::shared_ptr<string> region_ = nullptr;
    // The start time, which is the time when the job received the first batch of computing resources. For jobs that run for a short period of time or do not consume computing resources, such as the jobs that involve DDL statements, the job submission time is used instead.
    std::shared_ptr<int64_t> runningAtTime_ = nullptr;
    // The execution duration, which is the duration from the start time to the end time of the job.
    std::shared_ptr<int64_t> runningTime_ = nullptr;
    // The intelligent diagnostics result.
    std::shared_ptr<vector<Models::GetJobInfoResponseBodyDataSceneResults>> sceneResults_ = nullptr;
    // The signature of the SQL job. You can use the signature to find the instances on which each time an SQL statement is executed.
    std::shared_ptr<string> signature_ = nullptr;
    // The job status.
    std::shared_ptr<string> status_ = nullptr;
    // The time when the job was submitted.
    std::shared_ptr<int64_t> submittedAtTime_ = nullptr;
    // The tenant ID.
    std::shared_ptr<string> tenantId_ = nullptr;
    // The total duration from the time a job is submitted to the time the job is terminated.
    std::shared_ptr<int64_t> totalTime_ = nullptr;
    // The wait time, which is the duration from the time the job is submitted to the time the job starts to run.
    std::shared_ptr<int64_t> waitingTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
