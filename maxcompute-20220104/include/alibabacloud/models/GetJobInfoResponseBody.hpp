// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETJOBINFORESPONSEBODY_HPP_
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
  class GetJobInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetJobInfoResponseBody() = default ;
    GetJobInfoResponseBody(const GetJobInfoResponseBody &) = default ;
    GetJobInfoResponseBody(GetJobInfoResponseBody &&) = default ;
    GetJobInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobInfoResponseBody() = default ;
    GetJobInfoResponseBody& operator=(const GetJobInfoResponseBody &) = default ;
    GetJobInfoResponseBody& operator=(GetJobInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
        // The intelligent diagnostics result description.
        shared_ptr<string> description_ {};
        // Information about the nodes where data skew or data expansion is detected. This parameter is returned only when the diagnostics scenario is data skew or data expansion.
        shared_ptr<map<string, string>> params_ {};
        // The intelligent diagnostics result scenario.
        shared_ptr<string> scene_ {};
        // The intelligent diagnostics result tag.
        shared_ptr<string> sceneTag_ {};
        // The intelligent diagnostics result summary.
        shared_ptr<string> summary_ {};
        // The intelligent diagnostics result type.
        shared_ptr<string> type_ {};
      };

      class JobSubStatusList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const JobSubStatusList& obj) { 
          DARABONBA_PTR_TO_JSON(code, code_);
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(startTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, JobSubStatusList& obj) { 
          DARABONBA_PTR_FROM_JSON(code, code_);
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(startTime, startTime_);
        };
        JobSubStatusList() = default ;
        JobSubStatusList(const JobSubStatusList &) = default ;
        JobSubStatusList(JobSubStatusList &&) = default ;
        JobSubStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~JobSubStatusList() = default ;
        JobSubStatusList& operator=(const JobSubStatusList &) = default ;
        JobSubStatusList& operator=(JobSubStatusList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->description_ == nullptr && this->startTime_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
        inline JobSubStatusList& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline JobSubStatusList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline JobSubStatusList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        // The encoding of the substatus.
        shared_ptr<int32_t> code_ {};
        // The description of the substatus.
        shared_ptr<string> description_ {};
        // The start time of the substatus.
        shared_ptr<string> startTime_ {};
      };

      virtual bool empty() const override { return this->cuUsage_ == nullptr
        && this->endAtTime_ == nullptr && this->extNodeId_ == nullptr && this->extNodeOnDuty_ == nullptr && this->extPlantFrom_ == nullptr && this->inputBytes_ == nullptr
        && this->instanceId_ == nullptr && this->jobOwner_ == nullptr && this->jobSubStatusList_ == nullptr && this->jobType_ == nullptr && this->memoryUsage_ == nullptr
        && this->priority_ == nullptr && this->project_ == nullptr && this->quotaNickname_ == nullptr && this->quotaType_ == nullptr && this->region_ == nullptr
        && this->runningAtTime_ == nullptr && this->runningTime_ == nullptr && this->sceneResults_ == nullptr && this->signature_ == nullptr && this->status_ == nullptr
        && this->submittedAtTime_ == nullptr && this->tenantId_ == nullptr && this->totalTime_ == nullptr && this->waitingTime_ == nullptr; };
      // cuUsage Field Functions 
      bool hasCuUsage() const { return this->cuUsage_ != nullptr;};
      void deleteCuUsage() { this->cuUsage_ = nullptr;};
      inline int64_t getCuUsage() const { DARABONBA_PTR_GET_DEFAULT(cuUsage_, 0L) };
      inline Data& setCuUsage(int64_t cuUsage) { DARABONBA_PTR_SET_VALUE(cuUsage_, cuUsage) };


      // endAtTime Field Functions 
      bool hasEndAtTime() const { return this->endAtTime_ != nullptr;};
      void deleteEndAtTime() { this->endAtTime_ = nullptr;};
      inline int64_t getEndAtTime() const { DARABONBA_PTR_GET_DEFAULT(endAtTime_, 0L) };
      inline Data& setEndAtTime(int64_t endAtTime) { DARABONBA_PTR_SET_VALUE(endAtTime_, endAtTime) };


      // extNodeId Field Functions 
      bool hasExtNodeId() const { return this->extNodeId_ != nullptr;};
      void deleteExtNodeId() { this->extNodeId_ = nullptr;};
      inline string getExtNodeId() const { DARABONBA_PTR_GET_DEFAULT(extNodeId_, "") };
      inline Data& setExtNodeId(string extNodeId) { DARABONBA_PTR_SET_VALUE(extNodeId_, extNodeId) };


      // extNodeOnDuty Field Functions 
      bool hasExtNodeOnDuty() const { return this->extNodeOnDuty_ != nullptr;};
      void deleteExtNodeOnDuty() { this->extNodeOnDuty_ = nullptr;};
      inline string getExtNodeOnDuty() const { DARABONBA_PTR_GET_DEFAULT(extNodeOnDuty_, "") };
      inline Data& setExtNodeOnDuty(string extNodeOnDuty) { DARABONBA_PTR_SET_VALUE(extNodeOnDuty_, extNodeOnDuty) };


      // extPlantFrom Field Functions 
      bool hasExtPlantFrom() const { return this->extPlantFrom_ != nullptr;};
      void deleteExtPlantFrom() { this->extPlantFrom_ = nullptr;};
      inline string getExtPlantFrom() const { DARABONBA_PTR_GET_DEFAULT(extPlantFrom_, "") };
      inline Data& setExtPlantFrom(string extPlantFrom) { DARABONBA_PTR_SET_VALUE(extPlantFrom_, extPlantFrom) };


      // inputBytes Field Functions 
      bool hasInputBytes() const { return this->inputBytes_ != nullptr;};
      void deleteInputBytes() { this->inputBytes_ = nullptr;};
      inline double getInputBytes() const { DARABONBA_PTR_GET_DEFAULT(inputBytes_, 0.0) };
      inline Data& setInputBytes(double inputBytes) { DARABONBA_PTR_SET_VALUE(inputBytes_, inputBytes) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // jobOwner Field Functions 
      bool hasJobOwner() const { return this->jobOwner_ != nullptr;};
      void deleteJobOwner() { this->jobOwner_ = nullptr;};
      inline string getJobOwner() const { DARABONBA_PTR_GET_DEFAULT(jobOwner_, "") };
      inline Data& setJobOwner(string jobOwner) { DARABONBA_PTR_SET_VALUE(jobOwner_, jobOwner) };


      // jobSubStatusList Field Functions 
      bool hasJobSubStatusList() const { return this->jobSubStatusList_ != nullptr;};
      void deleteJobSubStatusList() { this->jobSubStatusList_ = nullptr;};
      inline const vector<Data::JobSubStatusList> & getJobSubStatusList() const { DARABONBA_PTR_GET_CONST(jobSubStatusList_, vector<Data::JobSubStatusList>) };
      inline vector<Data::JobSubStatusList> getJobSubStatusList() { DARABONBA_PTR_GET(jobSubStatusList_, vector<Data::JobSubStatusList>) };
      inline Data& setJobSubStatusList(const vector<Data::JobSubStatusList> & jobSubStatusList) { DARABONBA_PTR_SET_VALUE(jobSubStatusList_, jobSubStatusList) };
      inline Data& setJobSubStatusList(vector<Data::JobSubStatusList> && jobSubStatusList) { DARABONBA_PTR_SET_RVALUE(jobSubStatusList_, jobSubStatusList) };


      // jobType Field Functions 
      bool hasJobType() const { return this->jobType_ != nullptr;};
      void deleteJobType() { this->jobType_ = nullptr;};
      inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
      inline Data& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


      // memoryUsage Field Functions 
      bool hasMemoryUsage() const { return this->memoryUsage_ != nullptr;};
      void deleteMemoryUsage() { this->memoryUsage_ = nullptr;};
      inline int64_t getMemoryUsage() const { DARABONBA_PTR_GET_DEFAULT(memoryUsage_, 0L) };
      inline Data& setMemoryUsage(int64_t memoryUsage) { DARABONBA_PTR_SET_VALUE(memoryUsage_, memoryUsage) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int64_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
      inline Data& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // project Field Functions 
      bool hasProject() const { return this->project_ != nullptr;};
      void deleteProject() { this->project_ = nullptr;};
      inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
      inline Data& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


      // quotaNickname Field Functions 
      bool hasQuotaNickname() const { return this->quotaNickname_ != nullptr;};
      void deleteQuotaNickname() { this->quotaNickname_ = nullptr;};
      inline string getQuotaNickname() const { DARABONBA_PTR_GET_DEFAULT(quotaNickname_, "") };
      inline Data& setQuotaNickname(string quotaNickname) { DARABONBA_PTR_SET_VALUE(quotaNickname_, quotaNickname) };


      // quotaType Field Functions 
      bool hasQuotaType() const { return this->quotaType_ != nullptr;};
      void deleteQuotaType() { this->quotaType_ = nullptr;};
      inline string getQuotaType() const { DARABONBA_PTR_GET_DEFAULT(quotaType_, "") };
      inline Data& setQuotaType(string quotaType) { DARABONBA_PTR_SET_VALUE(quotaType_, quotaType) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Data& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // runningAtTime Field Functions 
      bool hasRunningAtTime() const { return this->runningAtTime_ != nullptr;};
      void deleteRunningAtTime() { this->runningAtTime_ = nullptr;};
      inline int64_t getRunningAtTime() const { DARABONBA_PTR_GET_DEFAULT(runningAtTime_, 0L) };
      inline Data& setRunningAtTime(int64_t runningAtTime) { DARABONBA_PTR_SET_VALUE(runningAtTime_, runningAtTime) };


      // runningTime Field Functions 
      bool hasRunningTime() const { return this->runningTime_ != nullptr;};
      void deleteRunningTime() { this->runningTime_ = nullptr;};
      inline int64_t getRunningTime() const { DARABONBA_PTR_GET_DEFAULT(runningTime_, 0L) };
      inline Data& setRunningTime(int64_t runningTime) { DARABONBA_PTR_SET_VALUE(runningTime_, runningTime) };


      // sceneResults Field Functions 
      bool hasSceneResults() const { return this->sceneResults_ != nullptr;};
      void deleteSceneResults() { this->sceneResults_ = nullptr;};
      inline const vector<Data::SceneResults> & getSceneResults() const { DARABONBA_PTR_GET_CONST(sceneResults_, vector<Data::SceneResults>) };
      inline vector<Data::SceneResults> getSceneResults() { DARABONBA_PTR_GET(sceneResults_, vector<Data::SceneResults>) };
      inline Data& setSceneResults(const vector<Data::SceneResults> & sceneResults) { DARABONBA_PTR_SET_VALUE(sceneResults_, sceneResults) };
      inline Data& setSceneResults(vector<Data::SceneResults> && sceneResults) { DARABONBA_PTR_SET_RVALUE(sceneResults_, sceneResults) };


      // signature Field Functions 
      bool hasSignature() const { return this->signature_ != nullptr;};
      void deleteSignature() { this->signature_ = nullptr;};
      inline string getSignature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
      inline Data& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // submittedAtTime Field Functions 
      bool hasSubmittedAtTime() const { return this->submittedAtTime_ != nullptr;};
      void deleteSubmittedAtTime() { this->submittedAtTime_ = nullptr;};
      inline int64_t getSubmittedAtTime() const { DARABONBA_PTR_GET_DEFAULT(submittedAtTime_, 0L) };
      inline Data& setSubmittedAtTime(int64_t submittedAtTime) { DARABONBA_PTR_SET_VALUE(submittedAtTime_, submittedAtTime) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline Data& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      // totalTime Field Functions 
      bool hasTotalTime() const { return this->totalTime_ != nullptr;};
      void deleteTotalTime() { this->totalTime_ = nullptr;};
      inline int64_t getTotalTime() const { DARABONBA_PTR_GET_DEFAULT(totalTime_, 0L) };
      inline Data& setTotalTime(int64_t totalTime) { DARABONBA_PTR_SET_VALUE(totalTime_, totalTime) };


      // waitingTime Field Functions 
      bool hasWaitingTime() const { return this->waitingTime_ != nullptr;};
      void deleteWaitingTime() { this->waitingTime_ = nullptr;};
      inline int64_t getWaitingTime() const { DARABONBA_PTR_GET_DEFAULT(waitingTime_, 0L) };
      inline Data& setWaitingTime(int64_t waitingTime) { DARABONBA_PTR_SET_VALUE(waitingTime_, waitingTime) };


    protected:
      // The amount of resources consumed by the job. This parameter is returned only for jobs that are complete.Unit: 100\\*Core\\*s.
      shared_ptr<int64_t> cuUsage_ {};
      // The end time of the job.
      shared_ptr<int64_t> endAtTime_ {};
      // The ID of the ancestor node.
      shared_ptr<string> extNodeId_ {};
      // The Alibaba Cloud account ID of the task owner.
      shared_ptr<string> extNodeOnDuty_ {};
      // The upstream platform.
      shared_ptr<string> extPlantFrom_ {};
      // The amount of data scanned by the job.
      shared_ptr<double> inputBytes_ {};
      // The job ID.
      shared_ptr<string> instanceId_ {};
      // The owner of the job.
      shared_ptr<string> jobOwner_ {};
      // The substatuses of the job lifecycle.
      shared_ptr<vector<Data::JobSubStatusList>> jobSubStatusList_ {};
      // The type of the job.
      shared_ptr<string> jobType_ {};
      // The number of memory consumed by the job. This parameter is returned only for jobs that are complete.Unit: MB\\*s.
      shared_ptr<int64_t> memoryUsage_ {};
      // The priority of the job.
      shared_ptr<int64_t> priority_ {};
      // The project name.
      shared_ptr<string> project_ {};
      // The nickname of the computing quota that is used by the job.
      shared_ptr<string> quotaNickname_ {};
      // The quota type.
      shared_ptr<string> quotaType_ {};
      // The region ID.
      shared_ptr<string> region_ {};
      // The start time, which is the time when the job received the first batch of computing resources. For jobs that run for a short period of time or do not consume computing resources, such as the jobs that involve DDL statements, the job submission time is used instead.
      shared_ptr<int64_t> runningAtTime_ {};
      // The execution duration, which is the duration from the start time to the end time of the job.
      shared_ptr<int64_t> runningTime_ {};
      // The intelligent diagnostics result.
      shared_ptr<vector<Data::SceneResults>> sceneResults_ {};
      // The signature of the SQL job. You can use the signature to find the instances on which each time an SQL statement is executed.
      shared_ptr<string> signature_ {};
      // The job status.
      shared_ptr<string> status_ {};
      // The time when the job was submitted.
      shared_ptr<int64_t> submittedAtTime_ {};
      // The tenant ID.
      shared_ptr<string> tenantId_ {};
      // The total duration from the time a job is submitted to the time the job is terminated.
      shared_ptr<int64_t> totalTime_ {};
      // The wait time, which is the duration from the time the job is submitted to the time the job starts to run.
      shared_ptr<int64_t> waitingTime_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->httpCode_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetJobInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetJobInfoResponseBody::Data) };
    inline GetJobInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetJobInfoResponseBody::Data) };
    inline GetJobInfoResponseBody& setData(const GetJobInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetJobInfoResponseBody& setData(GetJobInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetJobInfoResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GetJobInfoResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline GetJobInfoResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetJobInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned result.
    shared_ptr<GetJobInfoResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMsg_ {};
    // The HTTP status code.
    // 
    // *   1xx: informational response. The request is received and is being processed.
    // *   2xx: success. The request is successfully received, understood, and accepted by the server.
    // *   3xx: redirection. The request is redirected, and further actions are required to complete the request.
    // *   4xx: client error. The request contains invalid request parameters and syntaxes, or specific request conditions cannot be met.
    // *   5xx: server error. The server cannot meet requirements due to other reasons.
    shared_ptr<int32_t> httpCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
