// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListJobInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListJobInfosResponseBody() = default ;
    ListJobInfosResponseBody(const ListJobInfosResponseBody &) = default ;
    ListJobInfosResponseBody(ListJobInfosResponseBody &&) = default ;
    ListJobInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobInfosResponseBody() = default ;
    ListJobInfosResponseBody& operator=(const ListJobInfosResponseBody &) = default ;
    ListJobInfosResponseBody& operator=(ListJobInfosResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(cluster, cluster_);
          DARABONBA_PTR_TO_JSON(cuSnapshot, cuSnapshot_);
          DARABONBA_PTR_TO_JSON(cuUsage, cuUsage_);
          DARABONBA_PTR_TO_JSON(endAtTime, endAtTime_);
          DARABONBA_PTR_TO_JSON(extNodeId, extNodeId_);
          DARABONBA_PTR_TO_JSON(extNodeName, extNodeName_);
          DARABONBA_PTR_TO_JSON(extNodeOnDuty, extNodeOnDuty_);
          DARABONBA_PTR_TO_JSON(extPlantFrom, extPlantFrom_);
          DARABONBA_PTR_TO_JSON(extPlatformId, extPlatformId_);
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
          DARABONBA_PTR_TO_JSON(taskName, taskName_);
          DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
          DARABONBA_PTR_TO_JSON(totalTime, totalTime_);
          DARABONBA_PTR_TO_JSON(waitingTime, waitingTime_);
        };
        friend void from_json(const Darabonba::Json& j, JobInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(cluster, cluster_);
          DARABONBA_PTR_FROM_JSON(cuSnapshot, cuSnapshot_);
          DARABONBA_PTR_FROM_JSON(cuUsage, cuUsage_);
          DARABONBA_PTR_FROM_JSON(endAtTime, endAtTime_);
          DARABONBA_PTR_FROM_JSON(extNodeId, extNodeId_);
          DARABONBA_PTR_FROM_JSON(extNodeName, extNodeName_);
          DARABONBA_PTR_FROM_JSON(extNodeOnDuty, extNodeOnDuty_);
          DARABONBA_PTR_FROM_JSON(extPlantFrom, extPlantFrom_);
          DARABONBA_PTR_FROM_JSON(extPlatformId, extPlatformId_);
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
          DARABONBA_PTR_FROM_JSON(taskName, taskName_);
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
        class SceneResults : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SceneResults& obj) { 
            DARABONBA_PTR_TO_JSON(description, description_);
            DARABONBA_PTR_TO_JSON(params, params_);
            DARABONBA_PTR_TO_JSON(scene, scene_);
            DARABONBA_PTR_TO_JSON(sceneTag, sceneTag_);
            DARABONBA_PTR_TO_JSON(summary, summary_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, SceneResults& obj) { 
            DARABONBA_PTR_FROM_JSON(description, description_);
            DARABONBA_PTR_FROM_JSON(params, params_);
            DARABONBA_PTR_FROM_JSON(scene, scene_);
            DARABONBA_PTR_FROM_JSON(sceneTag, sceneTag_);
            DARABONBA_PTR_FROM_JSON(summary, summary_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          SceneResults() = default ;
          SceneResults(const SceneResults &) = default ;
          SceneResults(SceneResults &&) = default ;
          SceneResults(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SceneResults() = default ;
          SceneResults& operator=(const SceneResults &) = default ;
          SceneResults& operator=(SceneResults &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->params_ == nullptr && this->scene_ == nullptr && this->sceneTag_ == nullptr && this->summary_ == nullptr && this->type_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline SceneResults& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // params Field Functions 
          bool hasParams() const { return this->params_ != nullptr;};
          void deleteParams() { this->params_ = nullptr;};
          inline const map<string, string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, map<string, string>) };
          inline map<string, string> getParams() { DARABONBA_PTR_GET(params_, map<string, string>) };
          inline SceneResults& setParams(const map<string, string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
          inline SceneResults& setParams(map<string, string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


          // scene Field Functions 
          bool hasScene() const { return this->scene_ != nullptr;};
          void deleteScene() { this->scene_ = nullptr;};
          inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
          inline SceneResults& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


          // sceneTag Field Functions 
          bool hasSceneTag() const { return this->sceneTag_ != nullptr;};
          void deleteSceneTag() { this->sceneTag_ = nullptr;};
          inline string getSceneTag() const { DARABONBA_PTR_GET_DEFAULT(sceneTag_, "") };
          inline SceneResults& setSceneTag(string sceneTag) { DARABONBA_PTR_SET_VALUE(sceneTag_, sceneTag) };


          // summary Field Functions 
          bool hasSummary() const { return this->summary_ != nullptr;};
          void deleteSummary() { this->summary_ = nullptr;};
          inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
          inline SceneResults& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline SceneResults& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The details of the smart diagnosis result.
          shared_ptr<string> description_ {};
          // Information about the nodes that have data skew or data bloat. This parameter is returned only when the diagnosis scenario is data skew or data bloat.
          shared_ptr<map<string, string>> params_ {};
          // The scenario of the smart diagnosis result.
          shared_ptr<string> scene_ {};
          // The tag of the smart diagnosis result.
          shared_ptr<string> sceneTag_ {};
          // A summary of the smart diagnosis result.
          shared_ptr<string> summary_ {};
          // The type of the smart diagnosis result.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->cluster_ == nullptr
        && this->cuSnapshot_ == nullptr && this->cuUsage_ == nullptr && this->endAtTime_ == nullptr && this->extNodeId_ == nullptr && this->extNodeName_ == nullptr
        && this->extNodeOnDuty_ == nullptr && this->extPlantFrom_ == nullptr && this->extPlatformId_ == nullptr && this->inputBytes_ == nullptr && this->instanceId_ == nullptr
        && this->jobOwner_ == nullptr && this->jobType_ == nullptr && this->memorySnapshot_ == nullptr && this->memoryUsage_ == nullptr && this->priority_ == nullptr
        && this->project_ == nullptr && this->quotaNickname_ == nullptr && this->quotaType_ == nullptr && this->region_ == nullptr && this->runningAtTime_ == nullptr
        && this->runningTime_ == nullptr && this->sceneResults_ == nullptr && this->signature_ == nullptr && this->status_ == nullptr && this->statusSnapshot_ == nullptr
        && this->submittedAtTime_ == nullptr && this->tags_ == nullptr && this->taskName_ == nullptr && this->tenantId_ == nullptr && this->totalTime_ == nullptr
        && this->waitingTime_ == nullptr; };
        // cluster Field Functions 
        bool hasCluster() const { return this->cluster_ != nullptr;};
        void deleteCluster() { this->cluster_ = nullptr;};
        inline string getCluster() const { DARABONBA_PTR_GET_DEFAULT(cluster_, "") };
        inline JobInfoList& setCluster(string cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };


        // cuSnapshot Field Functions 
        bool hasCuSnapshot() const { return this->cuSnapshot_ != nullptr;};
        void deleteCuSnapshot() { this->cuSnapshot_ = nullptr;};
        inline double getCuSnapshot() const { DARABONBA_PTR_GET_DEFAULT(cuSnapshot_, 0.0) };
        inline JobInfoList& setCuSnapshot(double cuSnapshot) { DARABONBA_PTR_SET_VALUE(cuSnapshot_, cuSnapshot) };


        // cuUsage Field Functions 
        bool hasCuUsage() const { return this->cuUsage_ != nullptr;};
        void deleteCuUsage() { this->cuUsage_ = nullptr;};
        inline int64_t getCuUsage() const { DARABONBA_PTR_GET_DEFAULT(cuUsage_, 0L) };
        inline JobInfoList& setCuUsage(int64_t cuUsage) { DARABONBA_PTR_SET_VALUE(cuUsage_, cuUsage) };


        // endAtTime Field Functions 
        bool hasEndAtTime() const { return this->endAtTime_ != nullptr;};
        void deleteEndAtTime() { this->endAtTime_ = nullptr;};
        inline int64_t getEndAtTime() const { DARABONBA_PTR_GET_DEFAULT(endAtTime_, 0L) };
        inline JobInfoList& setEndAtTime(int64_t endAtTime) { DARABONBA_PTR_SET_VALUE(endAtTime_, endAtTime) };


        // extNodeId Field Functions 
        bool hasExtNodeId() const { return this->extNodeId_ != nullptr;};
        void deleteExtNodeId() { this->extNodeId_ = nullptr;};
        inline string getExtNodeId() const { DARABONBA_PTR_GET_DEFAULT(extNodeId_, "") };
        inline JobInfoList& setExtNodeId(string extNodeId) { DARABONBA_PTR_SET_VALUE(extNodeId_, extNodeId) };


        // extNodeName Field Functions 
        bool hasExtNodeName() const { return this->extNodeName_ != nullptr;};
        void deleteExtNodeName() { this->extNodeName_ = nullptr;};
        inline string getExtNodeName() const { DARABONBA_PTR_GET_DEFAULT(extNodeName_, "") };
        inline JobInfoList& setExtNodeName(string extNodeName) { DARABONBA_PTR_SET_VALUE(extNodeName_, extNodeName) };


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


        // inputBytes Field Functions 
        bool hasInputBytes() const { return this->inputBytes_ != nullptr;};
        void deleteInputBytes() { this->inputBytes_ = nullptr;};
        inline double getInputBytes() const { DARABONBA_PTR_GET_DEFAULT(inputBytes_, 0.0) };
        inline JobInfoList& setInputBytes(double inputBytes) { DARABONBA_PTR_SET_VALUE(inputBytes_, inputBytes) };


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


        // memorySnapshot Field Functions 
        bool hasMemorySnapshot() const { return this->memorySnapshot_ != nullptr;};
        void deleteMemorySnapshot() { this->memorySnapshot_ = nullptr;};
        inline double getMemorySnapshot() const { DARABONBA_PTR_GET_DEFAULT(memorySnapshot_, 0.0) };
        inline JobInfoList& setMemorySnapshot(double memorySnapshot) { DARABONBA_PTR_SET_VALUE(memorySnapshot_, memorySnapshot) };


        // memoryUsage Field Functions 
        bool hasMemoryUsage() const { return this->memoryUsage_ != nullptr;};
        void deleteMemoryUsage() { this->memoryUsage_ = nullptr;};
        inline int64_t getMemoryUsage() const { DARABONBA_PTR_GET_DEFAULT(memoryUsage_, 0L) };
        inline JobInfoList& setMemoryUsage(int64_t memoryUsage) { DARABONBA_PTR_SET_VALUE(memoryUsage_, memoryUsage) };


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


        // sceneResults Field Functions 
        bool hasSceneResults() const { return this->sceneResults_ != nullptr;};
        void deleteSceneResults() { this->sceneResults_ = nullptr;};
        inline const vector<JobInfoList::SceneResults> & getSceneResults() const { DARABONBA_PTR_GET_CONST(sceneResults_, vector<JobInfoList::SceneResults>) };
        inline vector<JobInfoList::SceneResults> getSceneResults() { DARABONBA_PTR_GET(sceneResults_, vector<JobInfoList::SceneResults>) };
        inline JobInfoList& setSceneResults(const vector<JobInfoList::SceneResults> & sceneResults) { DARABONBA_PTR_SET_VALUE(sceneResults_, sceneResults) };
        inline JobInfoList& setSceneResults(vector<JobInfoList::SceneResults> && sceneResults) { DARABONBA_PTR_SET_RVALUE(sceneResults_, sceneResults) };


        // signature Field Functions 
        bool hasSignature() const { return this->signature_ != nullptr;};
        void deleteSignature() { this->signature_ = nullptr;};
        inline string getSignature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
        inline JobInfoList& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline JobInfoList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // statusSnapshot Field Functions 
        bool hasStatusSnapshot() const { return this->statusSnapshot_ != nullptr;};
        void deleteStatusSnapshot() { this->statusSnapshot_ = nullptr;};
        inline string getStatusSnapshot() const { DARABONBA_PTR_GET_DEFAULT(statusSnapshot_, "") };
        inline JobInfoList& setStatusSnapshot(string statusSnapshot) { DARABONBA_PTR_SET_VALUE(statusSnapshot_, statusSnapshot) };


        // submittedAtTime Field Functions 
        bool hasSubmittedAtTime() const { return this->submittedAtTime_ != nullptr;};
        void deleteSubmittedAtTime() { this->submittedAtTime_ = nullptr;};
        inline int64_t getSubmittedAtTime() const { DARABONBA_PTR_GET_DEFAULT(submittedAtTime_, 0L) };
        inline JobInfoList& setSubmittedAtTime(int64_t submittedAtTime) { DARABONBA_PTR_SET_VALUE(submittedAtTime_, submittedAtTime) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
        inline JobInfoList& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


        // taskName Field Functions 
        bool hasTaskName() const { return this->taskName_ != nullptr;};
        void deleteTaskName() { this->taskName_ = nullptr;};
        inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
        inline JobInfoList& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


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
        // The cluster ID.
        shared_ptr<string> cluster_ {};
        // The proportion of CUs in the job snapshot.
        shared_ptr<double> cuSnapshot_ {};
        // The total CUs used.
        shared_ptr<int64_t> cuUsage_ {};
        // The time when the job finished.
        shared_ptr<int64_t> endAtTime_ {};
        // The ID of the DataWorks node.
        shared_ptr<string> extNodeId_ {};
        shared_ptr<string> extNodeName_ {};
        // The person in charge of the execution.
        shared_ptr<string> extNodeOnDuty_ {};
        // The upstream platform.
        shared_ptr<string> extPlantFrom_ {};
        shared_ptr<string> extPlatformId_ {};
        // The amount of data scanned by the job. Unit: bytes.
        shared_ptr<double> inputBytes_ {};
        // The instance ID.
        shared_ptr<string> instanceId_ {};
        // The account that submitted the job.
        shared_ptr<string> jobOwner_ {};
        // The job type.
        shared_ptr<string> jobType_ {};
        // The proportion of memory in the job snapshot.
        shared_ptr<double> memorySnapshot_ {};
        // The total memory used.
        shared_ptr<int64_t> memoryUsage_ {};
        // The priority.
        shared_ptr<int64_t> priority_ {};
        // The name of the MaxCompute project.
        shared_ptr<string> project_ {};
        // The nickname of the quota that the job uses.
        shared_ptr<string> quotaNickname_ {};
        // The quota type.
        shared_ptr<string> quotaType_ {};
        // The region ID.
        shared_ptr<string> region_ {};
        // The time when the job started to run.
        shared_ptr<int64_t> runningAtTime_ {};
        // The runtime.
        shared_ptr<int64_t> runningTime_ {};
        // The smart diagnosis results.
        shared_ptr<vector<JobInfoList::SceneResults>> sceneResults_ {};
        // The SQL signature.
        shared_ptr<string> signature_ {};
        // The status.
        shared_ptr<string> status_ {};
        // The status of the job snapshot.
        shared_ptr<string> statusSnapshot_ {};
        // The time when the job was submitted.
        shared_ptr<int64_t> submittedAtTime_ {};
        // The tags.
        shared_ptr<string> tags_ {};
        shared_ptr<string> taskName_ {};
        // The tenant ID.
        shared_ptr<string> tenantId_ {};
        // The total runtime.
        shared_ptr<int64_t> totalTime_ {};
        // The waiting time.
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
      // The list of job information.
      shared_ptr<vector<Data::JobInfoList>> jobInfoList_ {};
      // The page number.
      shared_ptr<int64_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int64_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->httpCode_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListJobInfosResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListJobInfosResponseBody::Data) };
    inline ListJobInfosResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListJobInfosResponseBody::Data) };
    inline ListJobInfosResponseBody& setData(const ListJobInfosResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListJobInfosResponseBody& setData(ListJobInfosResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline ListJobInfosResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListJobInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<ListJobInfosResponseBody::Data> data_ {};
    // Indicates whether the business logic was successful. A value other than 200 indicates a failure.
    shared_ptr<int32_t> httpCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
