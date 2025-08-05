// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBINFOSRESPONSEBODYDATAJOBINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBINFOSRESPONSEBODYDATAJOBINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListJobInfosResponseBodyDataJobInfoListSceneResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListJobInfosResponseBodyDataJobInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobInfosResponseBodyDataJobInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(cluster, cluster_);
      DARABONBA_PTR_TO_JSON(cuSnapshot, cuSnapshot_);
      DARABONBA_PTR_TO_JSON(cuUsage, cuUsage_);
      DARABONBA_PTR_TO_JSON(endAtTime, endAtTime_);
      DARABONBA_PTR_TO_JSON(extNodeId, extNodeId_);
      DARABONBA_PTR_TO_JSON(extNodeOnDuty, extNodeOnDuty_);
      DARABONBA_PTR_TO_JSON(extPlantFrom, extPlantFrom_);
      DARABONBA_PTR_TO_JSON(inputBytes, inputBytes_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(jobOwner, jobOwner_);
      DARABONBA_PTR_TO_JSON(jobType, jobType_);
      DARABONBA_PTR_TO_JSON(memorySnapshot, memorySnapshot_);
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
      DARABONBA_PTR_TO_JSON(statusSnapshot, statusSnapshot_);
      DARABONBA_PTR_TO_JSON(submittedAtTime, submittedAtTime_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(totalTime, totalTime_);
      DARABONBA_PTR_TO_JSON(waitingTime, waitingTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobInfosResponseBodyDataJobInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster, cluster_);
      DARABONBA_PTR_FROM_JSON(cuSnapshot, cuSnapshot_);
      DARABONBA_PTR_FROM_JSON(cuUsage, cuUsage_);
      DARABONBA_PTR_FROM_JSON(endAtTime, endAtTime_);
      DARABONBA_PTR_FROM_JSON(extNodeId, extNodeId_);
      DARABONBA_PTR_FROM_JSON(extNodeOnDuty, extNodeOnDuty_);
      DARABONBA_PTR_FROM_JSON(extPlantFrom, extPlantFrom_);
      DARABONBA_PTR_FROM_JSON(inputBytes, inputBytes_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(jobOwner, jobOwner_);
      DARABONBA_PTR_FROM_JSON(jobType, jobType_);
      DARABONBA_PTR_FROM_JSON(memorySnapshot, memorySnapshot_);
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
      DARABONBA_PTR_FROM_JSON(statusSnapshot, statusSnapshot_);
      DARABONBA_PTR_FROM_JSON(submittedAtTime, submittedAtTime_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(totalTime, totalTime_);
      DARABONBA_PTR_FROM_JSON(waitingTime, waitingTime_);
    };
    ListJobInfosResponseBodyDataJobInfoList() = default ;
    ListJobInfosResponseBodyDataJobInfoList(const ListJobInfosResponseBodyDataJobInfoList &) = default ;
    ListJobInfosResponseBodyDataJobInfoList(ListJobInfosResponseBodyDataJobInfoList &&) = default ;
    ListJobInfosResponseBodyDataJobInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobInfosResponseBodyDataJobInfoList() = default ;
    ListJobInfosResponseBodyDataJobInfoList& operator=(const ListJobInfosResponseBodyDataJobInfoList &) = default ;
    ListJobInfosResponseBodyDataJobInfoList& operator=(ListJobInfosResponseBodyDataJobInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cluster_ != nullptr
        && this->cuSnapshot_ != nullptr && this->cuUsage_ != nullptr && this->endAtTime_ != nullptr && this->extNodeId_ != nullptr && this->extNodeOnDuty_ != nullptr
        && this->extPlantFrom_ != nullptr && this->inputBytes_ != nullptr && this->instanceId_ != nullptr && this->jobOwner_ != nullptr && this->jobType_ != nullptr
        && this->memorySnapshot_ != nullptr && this->memoryUsage_ != nullptr && this->priority_ != nullptr && this->project_ != nullptr && this->quotaNickname_ != nullptr
        && this->quotaType_ != nullptr && this->region_ != nullptr && this->runningAtTime_ != nullptr && this->runningTime_ != nullptr && this->sceneResults_ != nullptr
        && this->signature_ != nullptr && this->status_ != nullptr && this->statusSnapshot_ != nullptr && this->submittedAtTime_ != nullptr && this->tags_ != nullptr
        && this->tenantId_ != nullptr && this->totalTime_ != nullptr && this->waitingTime_ != nullptr; };
    // cluster Field Functions 
    bool hasCluster() const { return this->cluster_ != nullptr;};
    void deleteCluster() { this->cluster_ = nullptr;};
    inline string cluster() const { DARABONBA_PTR_GET_DEFAULT(cluster_, "") };
    inline ListJobInfosResponseBodyDataJobInfoList& setCluster(string cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };


    // cuSnapshot Field Functions 
    bool hasCuSnapshot() const { return this->cuSnapshot_ != nullptr;};
    void deleteCuSnapshot() { this->cuSnapshot_ = nullptr;};
    inline double cuSnapshot() const { DARABONBA_PTR_GET_DEFAULT(cuSnapshot_, 0.0) };
    inline ListJobInfosResponseBodyDataJobInfoList& setCuSnapshot(double cuSnapshot) { DARABONBA_PTR_SET_VALUE(cuSnapshot_, cuSnapshot) };


    // cuUsage Field Functions 
    bool hasCuUsage() const { return this->cuUsage_ != nullptr;};
    void deleteCuUsage() { this->cuUsage_ = nullptr;};
    inline int64_t cuUsage() const { DARABONBA_PTR_GET_DEFAULT(cuUsage_, 0L) };
    inline ListJobInfosResponseBodyDataJobInfoList& setCuUsage(int64_t cuUsage) { DARABONBA_PTR_SET_VALUE(cuUsage_, cuUsage) };


    // endAtTime Field Functions 
    bool hasEndAtTime() const { return this->endAtTime_ != nullptr;};
    void deleteEndAtTime() { this->endAtTime_ = nullptr;};
    inline int64_t endAtTime() const { DARABONBA_PTR_GET_DEFAULT(endAtTime_, 0L) };
    inline ListJobInfosResponseBodyDataJobInfoList& setEndAtTime(int64_t endAtTime) { DARABONBA_PTR_SET_VALUE(endAtTime_, endAtTime) };


    // extNodeId Field Functions 
    bool hasExtNodeId() const { return this->extNodeId_ != nullptr;};
    void deleteExtNodeId() { this->extNodeId_ = nullptr;};
    inline string extNodeId() const { DARABONBA_PTR_GET_DEFAULT(extNodeId_, "") };
    inline ListJobInfosResponseBodyDataJobInfoList& setExtNodeId(string extNodeId) { DARABONBA_PTR_SET_VALUE(extNodeId_, extNodeId) };


    // extNodeOnDuty Field Functions 
    bool hasExtNodeOnDuty() const { return this->extNodeOnDuty_ != nullptr;};
    void deleteExtNodeOnDuty() { this->extNodeOnDuty_ = nullptr;};
    inline string extNodeOnDuty() const { DARABONBA_PTR_GET_DEFAULT(extNodeOnDuty_, "") };
    inline ListJobInfosResponseBodyDataJobInfoList& setExtNodeOnDuty(string extNodeOnDuty) { DARABONBA_PTR_SET_VALUE(extNodeOnDuty_, extNodeOnDuty) };


    // extPlantFrom Field Functions 
    bool hasExtPlantFrom() const { return this->extPlantFrom_ != nullptr;};
    void deleteExtPlantFrom() { this->extPlantFrom_ = nullptr;};
    inline string extPlantFrom() const { DARABONBA_PTR_GET_DEFAULT(extPlantFrom_, "") };
    inline ListJobInfosResponseBodyDataJobInfoList& setExtPlantFrom(string extPlantFrom) { DARABONBA_PTR_SET_VALUE(extPlantFrom_, extPlantFrom) };


    // inputBytes Field Functions 
    bool hasInputBytes() const { return this->inputBytes_ != nullptr;};
    void deleteInputBytes() { this->inputBytes_ = nullptr;};
    inline double inputBytes() const { DARABONBA_PTR_GET_DEFAULT(inputBytes_, 0.0) };
    inline ListJobInfosResponseBodyDataJobInfoList& setInputBytes(double inputBytes) { DARABONBA_PTR_SET_VALUE(inputBytes_, inputBytes) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListJobInfosResponseBodyDataJobInfoList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobOwner Field Functions 
    bool hasJobOwner() const { return this->jobOwner_ != nullptr;};
    void deleteJobOwner() { this->jobOwner_ = nullptr;};
    inline string jobOwner() const { DARABONBA_PTR_GET_DEFAULT(jobOwner_, "") };
    inline ListJobInfosResponseBodyDataJobInfoList& setJobOwner(string jobOwner) { DARABONBA_PTR_SET_VALUE(jobOwner_, jobOwner) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline ListJobInfosResponseBodyDataJobInfoList& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // memorySnapshot Field Functions 
    bool hasMemorySnapshot() const { return this->memorySnapshot_ != nullptr;};
    void deleteMemorySnapshot() { this->memorySnapshot_ = nullptr;};
    inline double memorySnapshot() const { DARABONBA_PTR_GET_DEFAULT(memorySnapshot_, 0.0) };
    inline ListJobInfosResponseBodyDataJobInfoList& setMemorySnapshot(double memorySnapshot) { DARABONBA_PTR_SET_VALUE(memorySnapshot_, memorySnapshot) };


    // memoryUsage Field Functions 
    bool hasMemoryUsage() const { return this->memoryUsage_ != nullptr;};
    void deleteMemoryUsage() { this->memoryUsage_ = nullptr;};
    inline int64_t memoryUsage() const { DARABONBA_PTR_GET_DEFAULT(memoryUsage_, 0L) };
    inline ListJobInfosResponseBodyDataJobInfoList& setMemoryUsage(int64_t memoryUsage) { DARABONBA_PTR_SET_VALUE(memoryUsage_, memoryUsage) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int64_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
    inline ListJobInfosResponseBodyDataJobInfoList& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline ListJobInfosResponseBodyDataJobInfoList& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // quotaNickname Field Functions 
    bool hasQuotaNickname() const { return this->quotaNickname_ != nullptr;};
    void deleteQuotaNickname() { this->quotaNickname_ = nullptr;};
    inline string quotaNickname() const { DARABONBA_PTR_GET_DEFAULT(quotaNickname_, "") };
    inline ListJobInfosResponseBodyDataJobInfoList& setQuotaNickname(string quotaNickname) { DARABONBA_PTR_SET_VALUE(quotaNickname_, quotaNickname) };


    // quotaType Field Functions 
    bool hasQuotaType() const { return this->quotaType_ != nullptr;};
    void deleteQuotaType() { this->quotaType_ = nullptr;};
    inline string quotaType() const { DARABONBA_PTR_GET_DEFAULT(quotaType_, "") };
    inline ListJobInfosResponseBodyDataJobInfoList& setQuotaType(string quotaType) { DARABONBA_PTR_SET_VALUE(quotaType_, quotaType) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListJobInfosResponseBodyDataJobInfoList& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // runningAtTime Field Functions 
    bool hasRunningAtTime() const { return this->runningAtTime_ != nullptr;};
    void deleteRunningAtTime() { this->runningAtTime_ = nullptr;};
    inline int64_t runningAtTime() const { DARABONBA_PTR_GET_DEFAULT(runningAtTime_, 0L) };
    inline ListJobInfosResponseBodyDataJobInfoList& setRunningAtTime(int64_t runningAtTime) { DARABONBA_PTR_SET_VALUE(runningAtTime_, runningAtTime) };


    // runningTime Field Functions 
    bool hasRunningTime() const { return this->runningTime_ != nullptr;};
    void deleteRunningTime() { this->runningTime_ = nullptr;};
    inline int64_t runningTime() const { DARABONBA_PTR_GET_DEFAULT(runningTime_, 0L) };
    inline ListJobInfosResponseBodyDataJobInfoList& setRunningTime(int64_t runningTime) { DARABONBA_PTR_SET_VALUE(runningTime_, runningTime) };


    // sceneResults Field Functions 
    bool hasSceneResults() const { return this->sceneResults_ != nullptr;};
    void deleteSceneResults() { this->sceneResults_ = nullptr;};
    inline const vector<Models::ListJobInfosResponseBodyDataJobInfoListSceneResults> & sceneResults() const { DARABONBA_PTR_GET_CONST(sceneResults_, vector<Models::ListJobInfosResponseBodyDataJobInfoListSceneResults>) };
    inline vector<Models::ListJobInfosResponseBodyDataJobInfoListSceneResults> sceneResults() { DARABONBA_PTR_GET(sceneResults_, vector<Models::ListJobInfosResponseBodyDataJobInfoListSceneResults>) };
    inline ListJobInfosResponseBodyDataJobInfoList& setSceneResults(const vector<Models::ListJobInfosResponseBodyDataJobInfoListSceneResults> & sceneResults) { DARABONBA_PTR_SET_VALUE(sceneResults_, sceneResults) };
    inline ListJobInfosResponseBodyDataJobInfoList& setSceneResults(vector<Models::ListJobInfosResponseBodyDataJobInfoListSceneResults> && sceneResults) { DARABONBA_PTR_SET_RVALUE(sceneResults_, sceneResults) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string signature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline ListJobInfosResponseBodyDataJobInfoList& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListJobInfosResponseBodyDataJobInfoList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusSnapshot Field Functions 
    bool hasStatusSnapshot() const { return this->statusSnapshot_ != nullptr;};
    void deleteStatusSnapshot() { this->statusSnapshot_ = nullptr;};
    inline string statusSnapshot() const { DARABONBA_PTR_GET_DEFAULT(statusSnapshot_, "") };
    inline ListJobInfosResponseBodyDataJobInfoList& setStatusSnapshot(string statusSnapshot) { DARABONBA_PTR_SET_VALUE(statusSnapshot_, statusSnapshot) };


    // submittedAtTime Field Functions 
    bool hasSubmittedAtTime() const { return this->submittedAtTime_ != nullptr;};
    void deleteSubmittedAtTime() { this->submittedAtTime_ = nullptr;};
    inline int64_t submittedAtTime() const { DARABONBA_PTR_GET_DEFAULT(submittedAtTime_, 0L) };
    inline ListJobInfosResponseBodyDataJobInfoList& setSubmittedAtTime(int64_t submittedAtTime) { DARABONBA_PTR_SET_VALUE(submittedAtTime_, submittedAtTime) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline ListJobInfosResponseBodyDataJobInfoList& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListJobInfosResponseBodyDataJobInfoList& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // totalTime Field Functions 
    bool hasTotalTime() const { return this->totalTime_ != nullptr;};
    void deleteTotalTime() { this->totalTime_ = nullptr;};
    inline int64_t totalTime() const { DARABONBA_PTR_GET_DEFAULT(totalTime_, 0L) };
    inline ListJobInfosResponseBodyDataJobInfoList& setTotalTime(int64_t totalTime) { DARABONBA_PTR_SET_VALUE(totalTime_, totalTime) };


    // waitingTime Field Functions 
    bool hasWaitingTime() const { return this->waitingTime_ != nullptr;};
    void deleteWaitingTime() { this->waitingTime_ = nullptr;};
    inline int64_t waitingTime() const { DARABONBA_PTR_GET_DEFAULT(waitingTime_, 0L) };
    inline ListJobInfosResponseBodyDataJobInfoList& setWaitingTime(int64_t waitingTime) { DARABONBA_PTR_SET_VALUE(waitingTime_, waitingTime) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> cluster_ = nullptr;
    // The CU snapshot proportion of the job.
    std::shared_ptr<double> cuSnapshot_ = nullptr;
    // The amount of resources consumed by the job. This parameter is returned only for jobs that are complete.Unit: 100\\*Core\\*s.
    std::shared_ptr<int64_t> cuUsage_ = nullptr;
    // The time when the job stops running.
    std::shared_ptr<int64_t> endAtTime_ = nullptr;
    // The node ID of DataWorks.
    std::shared_ptr<string> extNodeId_ = nullptr;
    // The account of the node owner.
    std::shared_ptr<string> extNodeOnDuty_ = nullptr;
    // The upstream platform.
    std::shared_ptr<string> extPlantFrom_ = nullptr;
    // The amount of scanned data for the job. Unit: byte.
    std::shared_ptr<double> inputBytes_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The account that commits the job.
    std::shared_ptr<string> jobOwner_ = nullptr;
    // The type of the job.
    std::shared_ptr<string> jobType_ = nullptr;
    // The memory snapshot proportion of the job.
    std::shared_ptr<double> memorySnapshot_ = nullptr;
    // The number of memory consumed by the job. This parameter is returned only for jobs that are complete.Unit: MB\\*s.
    std::shared_ptr<int64_t> memoryUsage_ = nullptr;
    // The priority of the job.
    std::shared_ptr<int64_t> priority_ = nullptr;
    // The name of the MaxCompute project.
    std::shared_ptr<string> project_ = nullptr;
    // The nickname of the quota that is used by the job.
    std::shared_ptr<string> quotaNickname_ = nullptr;
    // The type of the quota.
    std::shared_ptr<string> quotaType_ = nullptr;
    // The region ID.
    std::shared_ptr<string> region_ = nullptr;
    // The time when the job starts to run.
    std::shared_ptr<int64_t> runningAtTime_ = nullptr;
    // The period for which the job runs.
    std::shared_ptr<int64_t> runningTime_ = nullptr;
    // The intelligent diagnostics results.
    std::shared_ptr<vector<Models::ListJobInfosResponseBodyDataJobInfoListSceneResults>> sceneResults_ = nullptr;
    // The signature of the SQL job.
    std::shared_ptr<string> signature_ = nullptr;
    // The status of the job.
    std::shared_ptr<string> status_ = nullptr;
    // The status of the snapshot.
    std::shared_ptr<string> statusSnapshot_ = nullptr;
    // The time when the job was committed.
    std::shared_ptr<int64_t> submittedAtTime_ = nullptr;
    // The tags.
    std::shared_ptr<string> tags_ = nullptr;
    // The tenant ID.
    std::shared_ptr<string> tenantId_ = nullptr;
    // The total period for which the job runs.
    std::shared_ptr<int64_t> totalTime_ = nullptr;
    // The duration for which the job waits to start.
    std::shared_ptr<int64_t> waitingTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
